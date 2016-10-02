#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@convertExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inConstantName,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 44)) ;
  GALGAS_lstring var_typeName_2042 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-convert.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 45)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-convert.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2042 COMMA_SOURCE_FILE ("expression-convert.galgas", 46)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                                             extensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@convertExpressionAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 54)) ;
  GALGAS_lstring var_typeName_2690 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-convert.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 55)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-convert.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2690 COMMA_SOURCE_FILE ("expression-convert.galgas", 56)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                                             extensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@convertExpressionAST analyzeExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                    const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                    const GALGAS_bool constinArgument_inGuard,
                                                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_mode constinArgument_inCurrentMode,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_objectIR & outArgument_outResult,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  GALGAS_objectIR var_expressionResult_4570 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4570, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 81)) ;
  const enumGalgasBool test_0 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 97)).operator_not (SOURCE_FILE ("expression-convert.galgas", 97)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 98)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 98)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 98)), fixItArray1  COMMA_SOURCE_FILE ("expression-convert.galgas", 98)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_4773 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 101)) ;
  const enumGalgasBool test_2 = var_resultType_4773.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 103)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 103)).operator_not (SOURCE_FILE ("expression-convert.galgas", 103)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 104)), GALGAS_string ("this type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-convert.galgas", 104)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = extensionGetter_kind (var_expressionResult_4570, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 105)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 105)).operator_not (SOURCE_FILE ("expression-convert.galgas", 105)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mAttribute_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-convert.galgas", 106)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      GALGAS_bigint var_minSource_5168 ;
      GALGAS_bigint var_maxSource_5187 ;
      GALGAS_bool joker_5189_2 ; // Joker input parameter
      GALGAS_uint joker_5189_1 ; // Joker input parameter
      extensionGetter_kind (var_expressionResult_4570, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 108)).method_integer (var_minSource_5168, var_maxSource_5187, joker_5189_2, joker_5189_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 108)) ;
      GALGAS_bigint var_minTarget_5242 ;
      GALGAS_bigint var_maxTarget_5261 ;
      GALGAS_bool joker_5263_2 ; // Joker input parameter
      GALGAS_uint joker_5263_1 ; // Joker input parameter
      var_resultType_4773.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 109)).method_integer (var_minTarget_5242, var_maxTarget_5261, joker_5263_2, joker_5263_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 109)) ;
      GALGAS_bool test_6 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5242.objectCompare (var_minSource_5168)) ;
      if (kBoolTrue == test_6.boolEnum ()) {
        test_6 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5261.objectCompare (var_maxSource_5187)) ;
      }
      GALGAS_bool var_alwaysPossible_5289 = test_6 ;
      const enumGalgasBool test_7 = var_alwaysPossible_5289.boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 112)), GALGAS_string ("useless explicit conversion"), fixItArray8  COMMA_SOURCE_FILE ("expression-convert.galgas", 112)) ;
      }
      {
      routine_getNewTempVariable (var_resultType_4773, object->mAttribute_mEndOfExpression, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 114)) ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4570  COMMA_SOURCE_FILE ("expression-convert.galgas", 116))  COMMA_SOURCE_FILE ("expression-convert.galgas", 116)) ;
      }else if (kBoolFalse == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_convertInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4570, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-convert.galgas", 121))  COMMA_SOURCE_FILE ("expression-convert.galgas", 121)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                          extensionMethod_convertExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertExpressionAST_analyzeExpression (defineExtensionMethod_convertExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@convertInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                          GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                                extensionMethod_convertInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertInstructionIR_enterAccessibleEntities (defineExtensionMethod_convertInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@convertInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                      GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertInstructionIR * object = (const cPtr_convertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_convertInstructionIR) ;
  GALGAS_uint var_staticStringIndex_7230 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 158)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 158)).getter_stringByDeletingPathExtension (SOURCE_FILE ("expression-convert.galgas", 158)), var_staticStringIndex_7230, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 157)) ;
  }
  GALGAS_string var_lbl_7244 = object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 161)).getter_string (SOURCE_FILE ("expression-convert.galgas", 161)) ;
  GALGAS_string var_convertMinOkLabel_7305 = GALGAS_string ("min.").add_operation (var_lbl_7244, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 162)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 162)) ;
  GALGAS_string var_convertMaxOkLabel_7352 = GALGAS_string ("max.").add_operation (var_lbl_7244, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 163)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 163)) ;
  GALGAS_string var_convertFailLabel_7398 = GALGAS_string ("fail.").add_operation (var_lbl_7244, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 164)) ;
  GALGAS_string var_compareMinVar_7435 = GALGAS_string ("cmp.").add_operation (var_lbl_7244, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)).add_operation (GALGAS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)) ;
  GALGAS_string var_compareMaxVar_7483 = GALGAS_string ("cmp.").add_operation (var_lbl_7244, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 166)).add_operation (GALGAS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 166)) ;
  GALGAS_bigint var_minTarget_7556 ;
  GALGAS_bigint var_maxTarget_7575 ;
  GALGAS_bool joker_7577_2 ; // Joker input parameter
  GALGAS_uint joker_7577_1 ; // Joker input parameter
  extensionGetter_kind (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 167)).method_integer (var_minTarget_7556, var_maxTarget_7575, joker_7577_2, joker_7577_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 167)) ;
  GALGAS_bigint var_minSource_7626 ;
  GALGAS_bool var_operandIsUnsigned_7665 ;
  GALGAS_bigint joker_7632 ; // Joker input parameter
  GALGAS_uint joker_7667_1 ; // Joker input parameter
  extensionGetter_kind (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168)).method_integer (var_minSource_7626, joker_7632, var_operandIsUnsigned_7665, joker_7667_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168)) ;
  GALGAS_string var_operandType_7688 = extensionGetter_llvmTypeName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_minTarget_7556.objectCompare (var_minSource_7626)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMinVar_7435, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 171)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_operandIsUnsigned_7665.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("uge") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string ("sge") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 172)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7688, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)).add_operation (extensionGetter_llvmName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)).add_operation (var_minTarget_7556.getter_string (SOURCE_FILE ("expression-convert.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 173)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMinVar_7435, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (var_convertMinOkLabel_7305, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (var_convertFailLabel_7398, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 174)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_convertMinOkLabel_7305.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 175)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMaxVar_7483, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 177)) ;
  GALGAS_string temp_3 ;
  const enumGalgasBool test_4 = var_operandIsUnsigned_7665.boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_string ("ule") ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_3, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 178)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7688, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (extensionGetter_llvmName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (var_maxTarget_7575.getter_string (SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 179)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMaxVar_7483, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 180)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 180)).add_operation (var_convertMaxOkLabel_7352, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 180)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 180)).add_operation (var_convertFailLabel_7398, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 180)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 180)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertFailLabel_7398.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 181)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_7230.getter_string (SOURCE_FILE ("expression-convert.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 182)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)).add_operation (object->mAttribute_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)).getter_string (SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 183)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).add_operation (function_panicCodeForConvertOverflow (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).getter_string (SOURCE_FILE ("expression-convert.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).add_operation (GALGAS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).add_operation (object->mAttribute_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 184)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 185)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertMaxOkLabel_7352.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 186)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (var_operandType_7688, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (extensionGetter_llvmName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (extensionGetter_llvmTypeName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 187)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_convertInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                            extensionMethod_convertInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_convertInstructionIR_llvmInstructionCode (defineExtensionMethod_convertInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@extendExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inConstantName,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 44)) ;
  GALGAS_lstring var_typeName_2038 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-extend.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 45)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-extend.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2038 COMMA_SOURCE_FILE ("expression-extend.galgas", 46)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                                             extensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@extendExpressionAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 54)) ;
  GALGAS_lstring var_typeName_2685 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-extend.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 55)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-extend.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2685 COMMA_SOURCE_FILE ("expression-extend.galgas", 56)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                                             extensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@extendExpressionAST analyzeExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                   const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                   const GALGAS_bool constinArgument_inGuard,
                                                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_mode constinArgument_inCurrentMode,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  GALGAS_objectIR var_expressionResult_4563 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4563, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 81)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_4602 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 97)) ;
  const enumGalgasBool test_0 = var_resultType_4602.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 99)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 99)).operator_not (SOURCE_FILE ("expression-extend.galgas", 99)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 100)), GALGAS_string ("this type is not an integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-extend.galgas", 100)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_kind (var_expressionResult_4563, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 101)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 101)).operator_not (SOURCE_FILE ("expression-extend.galgas", 101)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-extend.galgas", 102)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bool var_sourceIsUnsigned_5023 ;
      GALGAS_uint var_sourceSize_5048 ;
      GALGAS_bigint joker_4984 ; // Joker input parameter
      GALGAS_bigint joker_4991 ; // Joker input parameter
      extensionGetter_kind (var_expressionResult_4563, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 104)).method_integer (joker_4984, joker_4991, var_sourceIsUnsigned_5023, var_sourceSize_5048, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 104)) ;
      GALGAS_bool var_targetIsUnsigned_5125 ;
      GALGAS_uint var_targetSize_5150 ;
      GALGAS_bigint joker_5086 ; // Joker input parameter
      GALGAS_bigint joker_5093 ; // Joker input parameter
      var_resultType_4602.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 105)).method_integer (joker_5086, joker_5093, var_targetIsUnsigned_5125, var_targetSize_5150, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 105)) ;
      GALGAS_bool test_4 = var_sourceIsUnsigned_5023 ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_targetIsUnsigned_5125 ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_sourceSize_5048.objectCompare (var_targetSize_5150)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 108)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray7  COMMA_SOURCE_FILE ("expression-extend.galgas", 108)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_sourceSize_5048.objectCompare (var_targetSize_5150)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 110)), GALGAS_string ("same size: useless extend operation"), fixItArray9  COMMA_SOURCE_FILE ("expression-extend.galgas", 110)) ;
          }
        }
      }else if (kBoolFalse == test_5) {
        GALGAS_bool test_10 = var_sourceIsUnsigned_5023 ;
        if (kBoolTrue == test_10.boolEnum ()) {
          test_10 = var_targetIsUnsigned_5125.operator_not (SOURCE_FILE ("expression-extend.galgas", 112)) ;
        }
        const enumGalgasBool test_11 = test_10.boolEnum () ;
        if (kBoolTrue == test_11) {
          const enumGalgasBool test_12 = GALGAS_bool (kIsSupOrEqual, var_sourceSize_5048.objectCompare (var_targetSize_5150)).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 114)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray13  COMMA_SOURCE_FILE ("expression-extend.galgas", 114)) ;
          }
        }else if (kBoolFalse == test_11) {
          GALGAS_bool test_14 = var_sourceIsUnsigned_5023.operator_not (SOURCE_FILE ("expression-extend.galgas", 116)) ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = var_targetIsUnsigned_5125 ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 117)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray16  COMMA_SOURCE_FILE ("expression-extend.galgas", 117)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_sourceSize_5048.objectCompare (var_targetSize_5150)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 120)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray18  COMMA_SOURCE_FILE ("expression-extend.galgas", 120)) ;
            }else if (kBoolFalse == test_17) {
              const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, var_sourceSize_5048.objectCompare (var_targetSize_5150)).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <C_FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 122)), GALGAS_string ("same size: useless extend operation"), fixItArray20  COMMA_SOURCE_FILE ("expression-extend.galgas", 122)) ;
              }
            }
          }
        }
      }
      {
      routine_getNewTempVariable (var_resultType_4602, object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 125)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 125)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_4563, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 126)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                          extensionMethod_extendExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendExpressionAST_analyzeExpression (defineExtensionMethod_extendExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@truncateExpressionAST addDependenceEdgeForStaticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                        const GALGAS_lstring constinArgument_inConstantName,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 44)) ;
  GALGAS_lstring var_typeName_2046 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-truncate.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 45)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-truncate.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2046 COMMA_SOURCE_FILE ("expression-truncate.galgas", 46)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                                             extensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@truncateExpressionAST noteExpressionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 54)) ;
  GALGAS_lstring var_typeName_2695 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-truncate.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 55)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-truncate.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2695 COMMA_SOURCE_FILE ("expression-truncate.galgas", 56)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                                             extensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@truncateExpressionAST analyzeExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                     const GALGAS_bool constinArgument_inGuard,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     GALGAS_objectIR & outArgument_outResult,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  GALGAS_objectIR var_expressionResult_4569 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-truncate.galgas", 86)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4569, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 81)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_4608 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 97)) ;
  const enumGalgasBool test_0 = var_resultType_4608.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 99)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 99)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 99)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 100)), GALGAS_string ("this type is not an integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-truncate.galgas", 100)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_kind (var_expressionResult_4569, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 101)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 101)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 101)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-truncate.galgas", 102)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bigint var_minSource_5003 ;
      GALGAS_bigint var_maxSource_5022 ;
      GALGAS_uint var_expSize_5056 ;
      GALGAS_bool joker_5033 ; // Joker input parameter
      extensionGetter_kind (var_expressionResult_4569, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 104)).method_integer (var_minSource_5003, var_maxSource_5022, joker_5033, var_expSize_5056, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 104)) ;
      GALGAS_bigint var_minTarget_5107 ;
      GALGAS_bigint var_maxTarget_5126 ;
      GALGAS_uint var_resultSize_5163 ;
      GALGAS_bool joker_5137 ; // Joker input parameter
      var_resultType_4608.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 105)).method_integer (var_minTarget_5107, var_maxTarget_5126, joker_5137, var_resultSize_5163, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 105)) ;
      GALGAS_bool test_4 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5107.objectCompare (var_minSource_5003)) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5126.objectCompare (var_maxSource_5022)) ;
      }
      GALGAS_bool var_alwaysPossible_5187 = test_4 ;
      const enumGalgasBool test_5 = var_alwaysPossible_5187.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 108)), GALGAS_string ("useless explicit conversion"), fixItArray6  COMMA_SOURCE_FILE ("expression-truncate.galgas", 108)) ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (kIsStrictInf, var_resultSize_5163.objectCompare (var_expSize_5056)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        routine_getNewTempVariable (var_resultType_4608, object->mAttribute_mEndOfExpression, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 111)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4569  COMMA_SOURCE_FILE ("expression-truncate.galgas", 112))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)) ;
      }else if (kBoolFalse == test_7) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_4569, var_resultType_4608, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 117)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                          extensionMethod_truncateExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateExpressionAST_analyzeExpression (defineExtensionMethod_truncateExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@truncateInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                           GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                           GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_truncateInstructionIR.mSlotID,
                                                extensionMethod_truncateInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateInstructionIR_enterAccessibleEntities (defineExtensionMethod_truncateInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@truncateInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateInstructionIR * object = (const cPtr_truncateInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_truncateInstructionIR) ;
  GALGAS_string var_operandType_6869 = extensionGetter_llvmTypeName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 148)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)).add_operation (var_operandType_6869, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)).add_operation (extensionGetter_llvmName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)).add_operation (extensionGetter_llvmTypeName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 150)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncateInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_truncateInstructionIR.mSlotID,
                                            extensionMethod_truncateInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncateInstructionIR_llvmInstructionCode (defineExtensionMethod_truncateInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@constructorCall addDependenceEdgeForStaticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCall_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inConstantName,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_lstring var_typeName_2058 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, var_typeName_2058 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 50)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCall_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                                             extensionMethod_constructorCall_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_addDependenceEdgeForStaticExpression (defineExtensionMethod_constructorCall_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@constructorCall noteExpressionTypesInPrecedenceGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_lstring var_typeName_2653 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 58)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 58)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2653 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 59)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                                             extensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_constructorCall_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@constructorCall analyzeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCall_analyzeExpression (const cPtr_expressionAST * inObject,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                               const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                               const GALGAS_bool constinArgument_inGuard,
                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                               const GALGAS_mode constinArgument_inCurrentMode,
                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_objectIR & outArgument_outResult,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_3900 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_resultType_3900 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_resultType_3900 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 86)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType_3900.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-constructor-call.galgas", 88)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mAttribute_mErrorLocation, GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 89)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constructorValue var_initValue_4225 ;
    constinArgument_inContext.mAttribute_mConstructorMap.method_searchKey (var_resultType_3900.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)).getter_nowhere (SOURCE_FILE ("expression-constructor-call.galgas", 91)), var_initValue_4225, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)) ;
    switch (var_initValue_4225.enumValue ()) {
    case GALGAS_constructorValue::kNotBuilt:
      break ;
    case GALGAS_constructorValue::kEnum_zero:
      {
        outArgument_outResult = GALGAS_objectIR::constructor_zero (var_resultType_3900  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 94)) ;
      }
      break ;
    case GALGAS_constructorValue::kEnum_simple:
      {
        const cEnumAssociatedValues_constructorValue_simple * extractPtr_4574 = (const cEnumAssociatedValues_constructorValue_simple *) (var_initValue_4225.unsafePointer ()) ;
        const GALGAS_bigint extractedValue_value = extractPtr_4574->mAssociatedValue0 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mAttribute_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 96)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mAttribute_mErrorLocation, GALGAS_string ("$").add_operation (var_resultType_3900.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 97)).add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 97)), fixItArray4  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 97)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_3900, extractedValue_value  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 99)) ;
        }
      }
      break ;
    case GALGAS_constructorValue::kEnum_structure:
      {
        const cEnumAssociatedValues_constructorValue_structure * extractPtr_6513 = (const cEnumAssociatedValues_constructorValue_structure *) (var_initValue_4225.unsafePointer ()) ;
        const GALGAS_constructorSignature extractedValue_constructorSignature = extractPtr_6513->mAssociatedValue0 ;
        const GALGAS_sortedOperandIRList extractedValue_sortedOperandList = extractPtr_6513->mAssociatedValue1 ;
        GALGAS_sortedOperandIRList var_sortedOperandIRList_4666 = extractedValue_sortedOperandList ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mAttribute_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 103)).objectCompare (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 103)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 105)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mAttribute_mErrorLocation, GALGAS_string ("this constructor call should name ").add_operation (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 104)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 104)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 104)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 104)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)).add_operation (object->mAttribute_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 106)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 106)), fixItArray8  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 104)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          cEnumerator_constructorSignature enumerator_5073 (extractedValue_constructorSignature, kEnumeration_up) ;
          cEnumerator_functionCallEffectiveParameterList enumerator_5106 (object->mAttribute_mParameterList, kEnumeration_up) ;
          while (enumerator_5073.hasCurrentObject () && enumerator_5106.hasCurrentObject ()) {
            const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_5106.current_mSelector (HERE).mAttribute_string.objectCompare (enumerator_5073.current_mSelector (HERE))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_5106.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-constructor-call.galgas", 111)), GALGAS_string ("the selector should be '!").add_operation (enumerator_5073.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 111)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 111)), fixItArray10  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 111)) ;
            }
            GALGAS_objectIR var_expressionResult_5931 ;
            callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_5106.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, enumerator_5073.current_mType (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5931, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 113)) ;
            GALGAS_objectIR var_result_5964 = function_checkAssignmentCompatibility (var_expressionResult_5931, enumerator_5073.current_mType (HERE), enumerator_5106.current_mSelector (HERE).mAttribute_location, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 128)) ;
            var_sortedOperandIRList_4666.addAssign_operation (var_result_5964, enumerator_5073.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134)) ;
            enumerator_5073.gotoNextObject () ;
            enumerator_5106.gotoNextObject () ;
          }
          GALGAS_operandIRList var_initialValueList_6299 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 136)) ;
          cEnumerator_sortedOperandIRList enumerator_6356 (var_sortedOperandIRList_4666, kEnumeration_up) ;
          while (enumerator_6356.hasCurrentObject ()) {
            var_initialValueList_6299.addAssign_operation (enumerator_6356.current_mOperand (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 138)) ;
            enumerator_6356.gotoNextObject () ;
          }
          outArgument_outResult = GALGAS_objectIR::constructor_llvmStructureConstant (var_resultType_3900, var_initialValueList_6299  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 140)) ;
        }
      }
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCall_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                          extensionMethod_constructorCall_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_analyzeExpression (defineExtensionMethod_constructorCall_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@typedConstantCall addDependenceEdgeForStaticExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mOptionalTypeName.getter_string (SOURCE_FILE ("expression-typed-constant.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 42)), object->mAttribute_mOptionalTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 42)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 42)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                                             extensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_addDependenceEdgeForStaticExpression (defineExtensionMethod_typedConstantCall_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@typedConstantCall noteExpressionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mOptionalTypeName.getter_string (SOURCE_FILE ("expression-typed-constant.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 52)), object->mAttribute_mOptionalTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 52)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 52)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                                             extensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_typedConstantCall_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@typedConstantCall analyzeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCall_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                 const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                 const GALGAS_bool /* constinArgument_inGuard */,
                                                                 const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                 GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                 GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inferredResultType_3922 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_inferredResultType_3922 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_inferredResultType_3922 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 80)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_inferredResultType_3922.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-typed-constant.galgas", 82)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mAttribute_mConstructorName.getter_location (SOURCE_FILE ("expression-typed-constant.galgas", 83)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 83)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_classConstantMap var_classConstantMap_4230 = var_inferredResultType_3922.getter_classConstantMap (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 85)) ;
    var_classConstantMap_4230.method_searchKey (object->mAttribute_mConstructorName, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 86)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCall_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                          extensionMethod_typedConstantCall_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_analyzeExpression (defineExtensionMethod_typedConstantCall_analyzeExpression, NULL) ;

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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mIfExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 54)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mThenExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 55)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mElseExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 56)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mIfExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 64)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mThenExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 65)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mElseExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 66)) ;
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
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                               const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                               const GALGAS_bool constinArgument_inGuard,
                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                               const GALGAS_mode constinArgument_inCurrentMode,
                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_objectIR & outArgument_outResult,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_objectIR var_ifExpressionResult_4909 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mIfExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResult_4909, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 89)) ;
  const enumGalgasBool test_0 = extensionGetter_kind (var_ifExpressionResult_4909, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 105)).getter_isBoolean (SOURCE_FILE ("expression-if.galgas", 105)).operator_not (SOURCE_FILE ("expression-if.galgas", 105)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mIfExpressionEndLocation, GALGAS_string ("'if' expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-if.galgas", 106)) ;
  }
  GALGAS_objectIR var_thenExpressionTempResult_5664 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mThenExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionTempResult_5664, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 109)) ;
  GALGAS_objectIR var_thenExpressionResult_5695 = function_checkAssignmentCompatibility (var_thenExpressionTempResult_5664, constinArgument_inOptionalTargetType, object->mAttribute_mThenExpressionEndLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 124)) ;
  GALGAS_objectIR var_elseExpressionTempResult_6468 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mElseExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionTempResult_6468, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 131)) ;
  GALGAS_objectIR var_elseExpressionResult_6499 = function_checkAssignmentCompatibility (var_elseExpressionTempResult_6468, extensionGetter_type (var_thenExpressionResult_5695, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 148)), object->mAttribute_mElseExpressionEndLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 146)) ;
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_ifExpressionResult_4909, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 153)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bigint var_value_6866 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_6847_1 ; // Joker input parameter
    var_ifExpressionResult_4909.method_literalInteger (joker_6847_1, var_value_6866, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 154)) ;
    GALGAS_objectIR temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_6866.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 155)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = var_thenExpressionResult_5695 ;
    }else if (kBoolFalse == test_4) {
      temp_3 = var_elseExpressionResult_6499 ;
    }
    outArgument_outResult = temp_3 ;
  }else if (kBoolFalse == test_2) {
    {
    routine_getNewTempVariable (extensionGetter_type (var_elseExpressionResult_6499, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 157)), object->mAttribute_mIfExpressionEndLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 157)) ;
    }
    {
    extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_ifExpressionResult_4909, var_thenExpressionResult_5695, var_elseExpressionResult_6499, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 158)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 55)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 56)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 65)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 66)) ;
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
//           Overriding extension method '@infixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 74)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 75)) ;
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
//   Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 81)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 82)) ;
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
//                     Overriding extension method '@infixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                          const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                          const GALGAS_bool constinArgument_inGuard,
                                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_objectIR & outArgument_outResult,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_objectIR var_leftOperand_6136 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperand_6136, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 130)) ;
  GALGAS_objectIR var_rightOperand_6719 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_6136, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 151)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightOperand_6719, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 146)) ;
  GALGAS_infixOperatorMap var_operatorMap_6779 = function_getInfixOperatorMap (object->mAttribute_mOp, constinArgument_inContext, constinArgument_inCurrentMode, object->mAttribute_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 162)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_7086 ;
  GALGAS_infixOperatorDescription var_binaryOperator_7139 ;
  extensionMethod_checkBinaryOperationWith (var_operatorMap_6779, extensionGetter_type (var_leftOperand_6136, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 165)), extensionGetter_type (var_rightOperand_6719, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 166)), object->mAttribute_mOperatorLocation, var_resultType_7086, var_binaryOperator_7139, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 164)) ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_7139.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_leftOperand_6136, object->mAttribute_mOperatorLocation, var_rightOperand_6719, var_resultType_7086, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 172)) ;
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
      result_outOperatorMap = constinArgument_inContext.mAttribute_mEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_nonEqual:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mNonEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictInf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mStrictInfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_infEqual:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mInfEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictSup:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mStrictSupOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_supEqual:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mSupEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_xorOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_booleanXorOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mBooleanXorOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOp:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 215)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 216)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 216)), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 216)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
      }else if (kBoolFalse == test_2) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mAddOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOp:
    {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 226)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 227)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 227)), fixItArray4  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 227)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
      }else if (kBoolFalse == test_5) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mSubOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOp:
    {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 237)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 238)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 238)), fixItArray7  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 238)) ;
      }
      const enumGalgasBool test_8 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_8) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
      }else if (kBoolFalse == test_8) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mMulOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOp:
    {
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 248)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 249)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 249)), fixItArray10  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 249)) ;
      }
      const enumGalgasBool test_11 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_11) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
      }else if (kBoolFalse == test_11) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mDivOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOp:
    {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 259)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 260)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 260)), fixItArray13  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 260)) ;
      }
      const enumGalgasBool test_14 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_14) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
      }else if (kBoolFalse == test_14) {
        result_outOperatorMap = constinArgument_inContext.mAttribute_mModOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_leftShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mLeftShiftOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_rightShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.mAttribute_mRightShiftOperatorMap ;
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
//            Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST analyzeExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                                           const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                                           const GALGAS_bool constinArgument_inGuard,
                                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                           GALGAS_objectIR & outArgument_outResult,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  GALGAS_instructionListIR var_leftInstructionGenerationList_11668 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 294)) ;
  GALGAS_objectIR var_leftOperand_12208 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_11668, var_leftOperand_12208, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 295)) ;
  GALGAS_instructionListIR var_rightInstructionGenerationList_12294 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 311)) ;
  GALGAS_objectIR var_rightOperand_12835 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_12208, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 317)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_12294, var_rightOperand_12835, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 312)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_leftOperand_12208, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 328)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 328)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 329)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_rightOperand_12835, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 332)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 332)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray3  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 333)) ;
  }
  {
  routine_getNewTempVariable (constinArgument_inContext.mAttribute_mBooleanType, object->mAttribute_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 336)) ;
  }
  {
  extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_leftOperand_12208, var_leftInstructionGenerationList_11668, var_rightOperand_12835, var_rightInstructionGenerationList_12294, object->mAttribute_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 338)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 28)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 36)) ;
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
                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                           const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                           const GALGAS_bool constinArgument_inGuard,
                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           GALGAS_objectIR & outArgument_outResult,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  GALGAS_objectIR var_expressionResult_3534 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3534, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 59)) ;
  GALGAS_prefixOperatorMap var_prefixOperatorMap_3628 ;
  GALGAS_llvmBinaryOperation var_binaryOperator_3666 ;
  GALGAS_objectIR var_leftOperand_3690 ;
  switch (object->mAttribute_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_prefixOperatorMap_3628 = constinArgument_inContext.mAttribute_mUnsignedComplementOperatorMap ;
      var_binaryOperator_3666 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 81)) ;
      switch (extensionGetter_kind (var_expressionResult_3534, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 82)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_arrayType:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("internal error"), fixItArray0  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 83)) ;
          var_leftOperand_3690.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_opaque:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("internal error"), fixItArray1  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 84)) ;
          var_leftOperand_3690.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_boolean:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("internal error"), fixItArray2  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 85)) ;
          var_leftOperand_3690.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 86)) ;
          var_leftOperand_3690.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 87)) ;
          var_leftOperand_3690.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("internal error"), fixItArray5  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 88)) ;
          var_leftOperand_3690.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_staticInteger:
        {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-prefix-operators.galgas", 90)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to static int, without inferred type"), fixItArray7  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 91)) ;
            var_leftOperand_3690.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_8 = constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 92)).getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 92)).boolEnum () ;
            if (kBoolTrue == test_8) {
              GALGAS_bigint var_minTarget_4717 ;
              GALGAS_bigint var_maxTarget_4736 ;
              GALGAS_bool joker_4738_2 ; // Joker input parameter
              GALGAS_uint joker_4738_1 ; // Joker input parameter
              constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 93)).method_integer (var_minTarget_4717, var_maxTarget_4736, joker_4738_2, joker_4738_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 93)) ;
              const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_minTarget_4717.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 94)))).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 95)) ;
                var_leftOperand_3690.drop () ; // Release error dropped variable
              }else if (kBoolFalse == test_9) {
                var_leftOperand_3690 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mAttribute_mLiteralIntegerType, var_maxTarget_4736  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 97)) ;
              }
            }else if (kBoolFalse == test_8) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray11  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 100)) ;
              var_leftOperand_3690.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_5297 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_kind (var_expressionResult_3534, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 82)).unsafePointer ()) ;
          const GALGAS_uint extractedValue_bitCount = extractPtr_5297->mAssociatedValue3 ;
          var_leftOperand_3690 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 103)).left_shift_operation (extractedValue_bitCount COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 103)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 103))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 103)) ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_prefixOperatorMap_3628 = constinArgument_inContext.mAttribute_mNotOperatorMap ;
      var_binaryOperator_3666 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 107)) ;
      var_leftOperand_3690 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 108))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 108)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_prefixOperatorMap_3628 = constinArgument_inContext.mAttribute_mUnaryMinusOperatorMap ;
      var_binaryOperator_3666 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 111)) ;
      var_leftOperand_3690 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 112))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 112)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_prefixOperatorMap_3628 = constinArgument_inContext.mAttribute_mUnaryMinusOperatorMap ;
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-prefix-operators.galgas", 115)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)), fixItArray13  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 116)) ;
      }
      const enumGalgasBool test_14 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_14) {
        var_binaryOperator_3666 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 120)) ;
        var_leftOperand_3690 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)) ;
      }else if (kBoolFalse == test_14) {
        var_binaryOperator_3666 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 123)) ;
        var_leftOperand_3690 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 124))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 124)) ;
      }
    }
    break ;
  }
  var_prefixOperatorMap_3628.method_searchKey (GALGAS_lstring::constructor_new (extensionGetter_key (var_expressionResult_3534, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 128)), object->mAttribute_mOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 128)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_6358 = extensionGetter_type (var_expressionResult_3534, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 129)) ;
  const enumGalgasBool test_15 = var_expressionResult_3534.getter_isLiteralInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 131)).boolEnum () ;
  if (kBoolTrue == test_15) {
    GALGAS_bigint var_value_6501 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_6474_1 ; // Joker input parameter
    var_expressionResult_3534.method_literalInteger (joker_6474_1, var_value_6501, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 132)) ;
    GALGAS_bigint var_result_6521 ;
    switch (object->mAttribute_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result_6521 = var_value_6501.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 136)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-prefix-operators.galgas", 138)))).boolEnum () ;
        if (kBoolTrue == test_16) {
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to static int, without inferred type"), fixItArray17  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 139)) ;
          var_result_6521.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_16) {
          const enumGalgasBool test_18 = constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 140)).getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 140)).boolEnum () ;
          if (kBoolTrue == test_18) {
            GALGAS_bigint var_minTarget_6892 ;
            GALGAS_bigint var_maxTarget_6911 ;
            GALGAS_bool joker_6913_2 ; // Joker input parameter
            GALGAS_uint joker_6913_1 ; // Joker input parameter
            constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 141)).method_integer (var_minTarget_6892, var_maxTarget_6911, joker_6913_2, joker_6913_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 141)) ;
            const enumGalgasBool test_19 = GALGAS_bool (kIsStrictInf, var_minTarget_6892.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142)))).boolEnum () ;
            if (kBoolTrue == test_19) {
              TC_Array <C_FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray20  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 143)) ;
              var_result_6521.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_19) {
              var_result_6521 = var_value_6501.operator_xor (var_maxTarget_6911 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 145)) ;
            }
          }else if (kBoolFalse == test_18) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray21  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 148)) ;
            var_result_6521.drop () ; // Release error dropped variable
          }
        }
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result_6521 = var_value_6501.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 151)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result_6521 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 153)).operator_xor (var_value_6501 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 153)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_6358, var_result_6521  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 155)) ;
  }else if (kBoolFalse == test_15) {
    {
    routine_getNewTempVariable (var_resultType_6358, object->mAttribute_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 158)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 162)), object->mAttribute_mOperatorLocation, var_leftOperand_3690, var_binaryOperator_3666, var_expressionResult_3534, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 160)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GALGAS_string ("$").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) ;
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
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("$").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
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
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                             const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                             const GALGAS_bool /* constinArgument_inGuard */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mAttribute_mLiteralIntegerType, object->mAttribute_mLiteralInteger.mAttribute_bigint  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 64)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), constinArgument_inConstantName.mAttribute_location  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) ;
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
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("$").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
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
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                            const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                            const GALGAS_bool /* constinArgument_inGuard */,
                                                                            const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                            GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                            GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_3620 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)) ;
  GALGAS_uint var_staticStringIndex_3810 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGlobalLiteralStringMap, object->mAttribute_mLiteralString.mAttribute_string, var_staticStringIndex_3810, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 65)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalString (var_type_3620, object->mAttribute_mLiteralString.mAttribute_string.getter_length (SOURCE_FILE ("expression-literal-string.galgas", 66)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 66)), var_staticStringIndex_3810  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 66)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GALGAS_string ("$").add_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 41)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) ;
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
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("$").add_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 49)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)) ;
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
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                             const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                             const GALGAS_bool /* constinArgument_inGuard */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBooleanInExpressionAST * object = (const cPtr_literalBooleanInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBooleanInExpressionAST) ;
  GALGAS_bigint temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mValue.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mAttribute_mBooleanType, temp_0  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
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
  cEnumerator_registerIntegerFieldListAST enumerator_3082 (object->mAttribute_mFieldValues, kEnumeration_up) ;
  while (enumerator_3082.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_3082.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 70)) ;
    enumerator_3082.gotoNextObject () ;
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
                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                             const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                             const GALGAS_bool constinArgument_inGuard,
                                                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inCurrentMode,
                                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantExpressionAST * object = (const cPtr_registerConstantExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_registerType_4369 ;
  GALGAS_sliceMap var_registerBitSliceMap_4429 ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_4480 ;
  GALGAS_bigint var_registerAddress_4520 ;
  GALGAS_uint var_registerBitCount_4553 ;
  GALGAS_uint var_powerOfTwoForArraySize_4592 ;
  GALGAS_uint var_elementArraySize_4625 ;
  GALGAS_bool joker_4375 ; // Joker input parameter
  GALGAS_bool joker_4382 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_4526 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mControlRegisterMap.method_searchKey (object->mAttribute_mRegisterName, var_registerType_4369, joker_4375, joker_4382, var_registerBitSliceMap_4429, var_registerFieldMap_4480, var_registerAddress_4520, joker_4526, var_registerBitCount_4553, var_powerOfTwoForArraySize_4592, var_elementArraySize_4625, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 94)) ;
  GALGAS_bigint var_accumulatedFieldStaticValues_4737 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 108)) ;
  cEnumerator_lstringlist enumerator_4779 (object->mAttribute_mMaskFieldNames, kEnumeration_up) ;
  while (enumerator_4779.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_4862 ;
    GALGAS_uint var_fieldBitCount_4893 ;
    var_registerFieldMap_4480.method_searchKey (enumerator_4779.current_mValue (HERE), var_fieldBitIndex_4862, var_fieldBitCount_4893, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 110)) ;
    GALGAS_bigint var_mask_4912 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 115)).left_shift_operation (var_fieldBitCount_4893 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 115)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 115)) ;
    var_accumulatedFieldStaticValues_4737 = var_accumulatedFieldStaticValues_4737.operator_or (var_mask_4912.left_shift_operation (var_fieldBitIndex_4862 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 116)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 116)) ;
    enumerator_4779.gotoNextObject () ;
  }
  GALGAS_operandList var_operandList_5136 = GALGAS_operandList::constructor_emptyList (SOURCE_FILE ("expression-cst-registre.galgas", 119)) ;
  cEnumerator_registerIntegerFieldListAST enumerator_5205 (object->mAttribute_mFieldValues, kEnumeration_up) ;
  while (enumerator_5205.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_5288 ;
    GALGAS_uint var_fieldBitCount_5319 ;
    var_registerFieldMap_4480.method_searchKey (enumerator_5205.current_mFieldName (HERE), var_fieldBitIndex_5288, var_fieldBitCount_5319, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 121)) ;
    GALGAS_objectIR var_expressionResult_5897 ;
    callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_5205.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-cst-registre.galgas", 132)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5897, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 127)) ;
    switch (extensionGetter_kind (var_expressionResult_5897, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 143)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_arrayType:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (enumerator_5205.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray0  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 145)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_opaque:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_5205.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray1  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 147)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5205.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray2  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 149)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5205.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray3  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 151)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_5205.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray4  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 153)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5205.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 155)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_staticInteger:
      {
        GALGAS_bigint var_value_6699 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_6672_1 ; // Joker input parameter
        var_expressionResult_5897.method_literalInteger (joker_6672_1, var_value_6699, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 157)) ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsStrictInf, var_value_6699.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 158)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_5205.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray7  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 159)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsStrictInf, var_value_6699.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 160)).left_shift_operation (var_fieldBitCount_5319 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 160)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            var_accumulatedFieldStaticValues_4737 = var_accumulatedFieldStaticValues_4737.operator_or (var_value_6699.left_shift_operation (var_fieldBitIndex_5288 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 161)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 161)) ;
          }else if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_5205.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 163)).left_shift_operation (var_fieldBitCount_5319 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 163)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 163)), fixItArray9  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 163)) ;
          }
        }
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        const cEnumAssociatedValues_typeKind_integer * extractPtr_8915 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_kind (var_expressionResult_5897, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 143)).unsafePointer ()) ;
        const GALGAS_bigint extractedValue_min = extractPtr_8915->mAssociatedValue0 ;
        const GALGAS_bigint extractedValue_max = extractPtr_8915->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_unsigned = extractPtr_8915->mAssociatedValue2 ;
        const GALGAS_uint extractedValue_expressionBitCount = extractPtr_8915->mAssociatedValue3 ;
        const enumGalgasBool test_10 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 166)).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_5205.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray11  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 167)) ;
        }else if (kBoolFalse == test_10) {
          GALGAS_bool test_12 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_5319)) ;
          if (kBoolTrue == test_12.boolEnum ()) {
            test_12 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 169)) ;
          }
          const enumGalgasBool test_13 = test_12.boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_5205.current_mExpressionLocation (HERE), GALGAS_string ("operations that can generate panic are not allowed here: the expression should be an $uint").add_operation (var_fieldBitCount_5319.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 171)), fixItArray14  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 170)) ;
          }
          GALGAS_bool test_15 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_5319)) ;
          if (kBoolTrue == test_15.boolEnum ()) {
            test_15 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 174)) ;
          }
          GALGAS_bool test_16 = test_15 ;
          if (kBoolTrue == test_16.boolEnum ()) {
            test_16 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 174)) ;
          }
          const enumGalgasBool test_17 = test_16.boolEnum () ;
          if (kBoolTrue == test_17) {
            {
            extensionSetter_appendUpperBoundCheck (ioArgument_ioInstructionGenerationList, var_expressionResult_5897, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 177)).left_shift_operation (var_fieldBitCount_5319 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 177)), GALGAS_uint ((uint32_t) 8U), enumerator_5205.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 175)) ;
            }
          }
          GALGAS_objectIR var_partialResult_8014 = var_expressionResult_5897 ;
          const enumGalgasBool test_18 = GALGAS_bool (kIsStrictInf, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4553)).boolEnum () ;
          if (kBoolTrue == test_18) {
            GALGAS_objectIR var_extendedResult_8187 ;
            {
            routine_getNewTempVariable (var_registerType_4369, enumerator_5205.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_extendedResult_8187, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 185)) ;
            }
            {
            extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_8187, var_partialResult_8014, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 186)) ;
            }
            var_partialResult_8014 = var_extendedResult_8187 ;
          }else if (kBoolFalse == test_18) {
            const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4553)).boolEnum () ;
            if (kBoolTrue == test_19) {
              GALGAS_objectIR var_truncatedResult_8473 ;
              {
              routine_getNewTempVariable (var_registerType_4369, enumerator_5205.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_truncatedResult_8473, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 189)) ;
              }
              {
              extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_truncatedResult_8473, var_partialResult_8014, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 190)) ;
              }
              var_partialResult_8014 = var_truncatedResult_8473 ;
            }
          }
          GALGAS_objectIR var_shiftedResult_8741 ;
          {
          routine_getNewTempVariable (var_registerType_4369, enumerator_5205.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_shiftedResult_8741, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 194)) ;
          }
          {
          extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_8741, var_partialResult_8014, var_fieldBitIndex_5288, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 195)) ;
          }
          var_operandList_5136.addAssign_operation (var_shiftedResult_8741  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 197)) ;
        }
      }
      break ;
    }
    enumerator_5205.gotoNextObject () ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_registerType_4369, var_accumulatedFieldStaticValues_4737  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 202)) ;
  cEnumerator_operandList enumerator_9110 (var_operandList_5136, kEnumeration_up) ;
  while (enumerator_9110.hasCurrentObject ()) {
    GALGAS_objectIR var_newResult_9197 ;
    {
    routine_getNewTempVariable (var_registerType_4369, object->mAttribute_mRegisterName.getter_location (SOURCE_FILE ("expression-cst-registre.galgas", 204)), ioArgument_ioTemporaries, var_newResult_9197, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 204)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_9197, extensionGetter_type (var_newResult_9197, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 207)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 208)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-cst-registre.galgas", 210)), enumerator_9110.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 205)) ;
    }
    outArgument_outResult = var_newResult_9197 ;
    enumerator_9110.gotoNextObject () ;
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
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mAttribute_mObjectName COMMA_SOURCE_FILE ("expression-primary.galgas", 161)) ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_6079 (object->mAttribute_mAccessList, kEnumeration_up) ;
  while (enumerator_6079.hasCurrentObject ()) {
    switch (enumerator_6079.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_6143 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_6079.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_6143->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_6288 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_6079.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_6288->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 166)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_6834 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_6079.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveParameterListAST extractedValue_arguments = extractPtr_6834->mAssociatedValue0 ;
        cEnumerator_effectiveParameterListAST enumerator_6375 (extractedValue_arguments, kEnumeration_up) ;
        while (enumerator_6375.hasCurrentObject ()) {
          switch (enumerator_6375.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveParameterPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveParameterPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveParameterPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType * extractPtr_6624 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType *) (enumerator_6375.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_6624->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (extractedValue_typeName.getter_string (SOURCE_FILE ("expression-primary.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 173)), extractedValue_typeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-primary.galgas", 173)) COMMA_SOURCE_FILE ("expression-primary.galgas", 173)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveParameterPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveParameterPassingModeAST_output * extractPtr_6737 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_output *) (enumerator_6375.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_6737->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 175)) ;
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
          enumerator_6375.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_6079.gotoNextObject () ;
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
  cEnumerator_primaryInExpressionAccessListAST enumerator_7363 (object->mAttribute_mAccessList, kEnumeration_up) ;
  while (enumerator_7363.hasCurrentObject ()) {
    switch (enumerator_7363.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_7427 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_7363.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7427->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_7556 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_7363.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_7556->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 193)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_8086 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_7363.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveParameterListAST extractedValue_arguments = extractPtr_8086->mAssociatedValue0 ;
        cEnumerator_effectiveParameterListAST enumerator_7643 (extractedValue_arguments, kEnumeration_up) ;
        while (enumerator_7643.hasCurrentObject ()) {
          switch (enumerator_7643.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveParameterPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveParameterPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveParameterPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType * extractPtr_7892 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType *) (enumerator_7643.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_7892->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (extractedValue_typeName.getter_string (SOURCE_FILE ("expression-primary.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 200)), extractedValue_typeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-primary.galgas", 200)) COMMA_SOURCE_FILE ("expression-primary.galgas", 200)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveParameterPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveParameterPassingModeAST_output * extractPtr_7989 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_output *) (enumerator_7643.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_7989->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 202)) ;
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
          enumerator_7643.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_7363.gotoNextObject () ;
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
                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                      const GALGAS_bool constinArgument_inGuard,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      GALGAS_objectIR & outArgument_outResult,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  GALGAS_objectIR var_currentPointer_9270 ;
  GALGAS_string var_globalVariableReceiverName_9307 ;
  switch (object->mAttribute_mSelfAccess.enumValue ()) {
  case GALGAS_primaryInExpressionSelfAccessAST::kNotBuilt:
    break ;
  case GALGAS_primaryInExpressionSelfAccessAST::kEnum_noSelfAccess:
    {
      const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mAttribute_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 236)), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 236)) ;
        var_currentPointer_9270.drop () ; // Release error dropped variable
        var_globalVariableReceiverName_9307.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_2 = ioArgument_ioVariableMap.getter_hasKey (object->mAttribute_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 237)) COMMA_SOURCE_FILE ("expression-primary.galgas", 237)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          GALGAS_unifiedTypeMap_2D_proxy joker_9614_2 ; // Joker input parameter
          GALGAS_bool joker_9614_1 ; // Joker input parameter
          GALGAS_bool joker_9659_2 ; // Joker input parameter
          GALGAS_bool joker_9659_1 ; // Joker input parameter
          ioArgument_ioVariableMap.setter_searchForReadAccess (object->mAttribute_mObjectName, joker_9614_2, joker_9614_1, var_currentPointer_9270, joker_9659_2, joker_9659_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 238)) ;
          }
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = var_currentPointer_9270.getter_isGlobalVariableReference (SOURCE_FILE ("expression-primary.galgas", 243)).boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = object->mAttribute_mObjectName.mAttribute_string ;
          }else if (kBoolFalse == test_4) {
            temp_3 = GALGAS_string::makeEmptyString () ;
          }
          var_globalVariableReceiverName_9307 = temp_3 ;
        }else if (kBoolFalse == test_2) {
          var_currentPointer_9270 = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_null (SOURCE_FILE ("expression-primary.galgas", 245)), object->mAttribute_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 245)) ;
          var_globalVariableReceiverName_9307 = GALGAS_string::makeEmptyString () ;
        }
      }
    }
    break ;
  case GALGAS_primaryInExpressionSelfAccessAST::kEnum_selfAccess:
    {
      const cEnumAssociatedValues_primaryInExpressionSelfAccessAST_selfAccess * extractPtr_10885 = (const cEnumAssociatedValues_primaryInExpressionSelfAccessAST_selfAccess *) (object->mAttribute_mSelfAccess.unsafePointer ()) ;
      const GALGAS_location extractedValue_selfLocation = extractPtr_10885->mAssociatedValue0 ;
      var_globalVariableReceiverName_9307 = GALGAS_string::makeEmptyString () ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 250)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' is not available in this context"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 251)) ;
        var_currentPointer_9270.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_7 = constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 252)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 252)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_propertyMap var_structureObjectMap_10273 ;
          GALGAS_propertyList joker_10275_1 ; // Joker input parameter
          constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 253)).method_structure (var_structureObjectMap_10273, joker_10275_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 253)) ;
          const enumGalgasBool test_8 = var_structureObjectMap_10273.getter_hasKey (object->mAttribute_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 254)) COMMA_SOURCE_FILE ("expression-primary.galgas", 254)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_objectIR var_object_10429 ;
            GALGAS_bool joker_10406 ; // Joker input parameter
            GALGAS_uint joker_10441 ; // Joker input parameter
            var_structureObjectMap_10273.method_searchKey (object->mAttribute_mObjectName, joker_10406, var_object_10429, joker_10441, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 255)) ;
            {
            routine_handleSelfAccessInExpression (constinArgument_inSelfType, var_object_10429, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_currentPointer_9270, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 261)) ;
            }
          }else if (kBoolFalse == test_8) {
            var_currentPointer_9270 = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("expression-primary.galgas", 269)), object->mAttribute_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 269)) ;
          }
        }else if (kBoolFalse == test_7) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' should be a structure instance"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 272)) ;
          var_currentPointer_9270.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_10938 (object->mAttribute_mAccessList, kEnumeration_up) ;
  while (enumerator_10938.hasCurrentObject ()) {
    switch (enumerator_10938.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_11532 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_10938.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_11532->mAssociatedValue0 ;
        {
        routine_handlePropertyInExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, extractedValue_propertyName, ioArgument_ioInstructionGenerationList, var_currentPointer_9270, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 279)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_12175 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_10938.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_12175->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_12175->mAssociatedValue1 ;
        {
        routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, ioArgument_ioInstructionGenerationList, var_currentPointer_9270, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 295)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_13075 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_10938.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveParameterListAST extractedValue_arguments = extractPtr_13075->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_13075->mAssociatedValue1 ;
        GALGAS_unifiedTypeMap_2D_proxy var_returnedType_12928 ;
        {
        routine_handleFunctionCallInExpression (constinArgument_inSelfType, var_globalVariableReceiverName_9307, GALGAS_bool (false), constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, extractedValue_arguments, extractedValue_errorLocation, ioArgument_ioInstructionGenerationList, var_currentPointer_9270, var_returnedType_12928, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 312)) ;
        }
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_returnedType_12928.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 331)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("the function cannot be called in expression: no return value"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 332)) ;
        }
      }
      break ;
    }
    enumerator_10938.gotoNextObject () ;
  }
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_currentPointer_9270, object->mAttribute_mObjectName.mAttribute_location, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 338)) ;
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
  const enumGalgasBool test_0 = constinArgument_inObject.getter_isProperty (SOURCE_FILE ("expression-primary.galgas", 355)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_13685 ;
    GALGAS_lstring var_name_13703 ;
    GALGAS_uint var_index_13720 ;
    constinArgument_inObject.method_property (var_type_13685, var_name_13703, var_index_13720, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 356)) ;
    outArgument_outObjectPtr = GALGAS_objectIR::constructor_temporaryReference (var_type_13685, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 359)), var_name_13703.getter_location (SOURCE_FILE ("expression-primary.galgas", 359))  COMMA_SOURCE_FILE ("expression-primary.galgas", 359)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 360)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 357)) ;
    ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 363)) ;
    {
    extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, outArgument_outObjectPtr, constinArgument_inSelfType, var_name_13703.getter_string (SOURCE_FILE ("expression-primary.galgas", 367)), var_index_13720, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 364)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-primary.galgas", 371)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 371)) ;
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
  const enumGalgasBool test_0 = constinArgument_inProperty.getter_isProperty (SOURCE_FILE ("expression-primary.galgas", 384)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_14580 ;
    GALGAS_lstring var_name_14598 ;
    GALGAS_uint var_index_14615 ;
    constinArgument_inProperty.method_property (var_type_14580, var_name_14598, var_index_14615, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 385)) ;
    GALGAS_objectIR var_newObject_14634 = GALGAS_objectIR::constructor_temporaryReference (var_type_14580, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 388)), var_name_14598.getter_location (SOURCE_FILE ("expression-primary.galgas", 388))  COMMA_SOURCE_FILE ("expression-primary.galgas", 388)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 389)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 386)) ;
    ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 392)) ;
    {
    extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_14634, ioArgument_ioObject, var_name_14598.getter_string (SOURCE_FILE ("expression-primary.galgas", 396)), var_index_14615.getter_string (SOURCE_FILE ("expression-primary.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 393)) ;
    }
    ioArgument_ioObject = var_newObject_14634 ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 401)) ;
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
                                         GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                         GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                         const GALGAS_lstring constinArgument_inPropertyName,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_objectIR & ioArgument_ioObjectPtr,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 423)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 423)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 423)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_structureObjectMap_16049 ;
    GALGAS_propertyList joker_16051_1 ; // Joker input parameter
    extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 424)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 424)).method_structure (var_structureObjectMap_16049, joker_16051_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 424)) ;
    const enumGalgasBool test_1 = var_structureObjectMap_16049.getter_hasKey (constinArgument_inPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 425)) COMMA_SOURCE_FILE ("expression-primary.galgas", 425)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_property_16185 ;
      GALGAS_bool joker_16164 ; // Joker input parameter
      GALGAS_uint joker_16187 ; // Joker input parameter
      var_structureObjectMap_16049.method_searchKey (constinArgument_inPropertyName, joker_16164, var_property_16185, joker_16187, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 426)) ;
      {
      routine_handlePropertyAccessInExpression (ioArgument_ioObjectPtr, constinArgument_inPropertyName.mAttribute_location, var_property_16185, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 427)) ;
      }
    }else if (kBoolFalse == test_1) {
      ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_possibleFunction (ioArgument_ioObjectPtr, constinArgument_inPropertyName  COMMA_SOURCE_FILE ("expression-primary.galgas", 435)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 438)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 438)).getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 438)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_sliceMap var_sliceMap_16586 = extensionGetter_sliceMap (ioArgument_ioObjectPtr, constinArgument_inPropertyName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 439)) ;
      GALGAS_objectIR var_loadedRegisterValue_16805 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioObjectPtr, constinArgument_inPropertyName.mAttribute_location, var_loadedRegisterValue_16805, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 440)) ;
      }
      GALGAS_llvmBinaryOperation var_accessOperator_16904 ;
      GALGAS_bigint var_accessRightOperand_16942 ;
      GALGAS_sliceMap var_resultSliceMap_16978 ;
      GALGAS_unifiedTypeMap_2D_proxy var_resultType_17022 ;
      var_sliceMap_16586.method_searchKey (constinArgument_inPropertyName, var_accessOperator_16904, var_accessRightOperand_16942, var_resultSliceMap_16978, var_resultType_17022, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 446)) ;
      GALGAS_objectIR var_resultObject_17049 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_17022, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 455)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 455))  COMMA_SOURCE_FILE ("expression-primary.galgas", 455)), var_resultSliceMap_16978  COMMA_SOURCE_FILE ("expression-primary.galgas", 453)) ;
      ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 458)) ;
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_17049, extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 461)), constinArgument_inPropertyName.mAttribute_location, var_loadedRegisterValue_16805, var_accessOperator_16904, GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mAttribute_mLiteralIntegerType, var_accessRightOperand_16942  COMMA_SOURCE_FILE ("expression-primary.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 459)) ;
      }
      ioArgument_ioObjectPtr = var_resultObject_17049 ;
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 469)), GALGAS_string ("the current object has no property"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 469)) ;
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
                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             const GALGAS_effectiveParameterListAST constinArgument_inArguments,
                                             const GALGAS_location constinArgument_inErrorLocation,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             GALGAS_objectIR & ioArgument_ioObjectPtr,
                                             GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = ioArgument_ioObjectPtr.getter_isPossibleFunction (SOURCE_FILE ("expression-primary.galgas", 494)).operator_not (SOURCE_FILE ("expression-primary.galgas", 494)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object is not a function"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 495)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    outArgument_outReturnedType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inGuard.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_functionName_18870 ;
      GALGAS_objectIR joker_18837_1 ; // Joker input parameter
      ioArgument_ioObjectPtr.method_possibleFunction (joker_18837_1, var_functionName_18870, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 497)) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_functionName_18870.getter_location (SOURCE_FILE ("expression-primary.galgas", 498)), GALGAS_string ("a function cannot be called in guard expression"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 498)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
      outArgument_outReturnedType.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_receiver_19041 ;
      GALGAS_lstring var_functionName_19072 ;
      ioArgument_ioObjectPtr.method_possibleFunction (var_receiver_19041, var_functionName_19072, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 500)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_19744 ;
      GALGAS_calleeKindIR var_routineKind_19793 ;
      GALGAS_lstring var_functionMangledName_19852 ;
      GALGAS_lstring var_functionNameForGeneration_19923 ;
      GALGAS_bool var_appendFileAndLineArgumentForPanicLocation_20052 ;
      {
      routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, var_receiver_19041, var_functionName_19072, constinArgument_inArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_19744, var_routineKind_19793, var_functionMangledName_19852, var_functionNameForGeneration_19923, outArgument_outReturnedType, var_appendFileAndLineArgumentForPanicLocation_20052, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 501)) ;
      }
      GALGAS_objectIR var_functionResult_20206 ;
      {
      routine_getNewTempVariable (outArgument_outReturnedType, var_functionMangledName_19852.getter_location (SOURCE_FILE ("expression-primary.galgas", 524)), ioArgument_ioTemporaries, var_functionResult_20206, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 524)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (constinArgument_inGlobalVariableReceiverName, var_functionResult_20206, var_functionMangledName_19852, var_functionNameForGeneration_19923, var_routineKind_19793, var_effectiveParameterListIR_19744, var_appendFileAndLineArgumentForPanicLocation_20052  COMMA_SOURCE_FILE ("expression-primary.galgas", 526))  COMMA_SOURCE_FILE ("expression-primary.galgas", 526)) ;
      ioArgument_ioObjectPtr = var_functionResult_20206 ;
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
                                              const GALGAS_effectiveParameterListAST constinArgument_inEffectiveParameterList,
                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                              const GALGAS_semanticContext constinArgument_inContext,
                                              const GALGAS_mode constinArgument_inRequiredMode,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                              GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                                              GALGAS_calleeKindIR & outArgument_outRoutineKindIR,
                                              GALGAS_lstring & outArgument_outRoutineMangledName,
                                              GALGAS_lstring & outArgument_outRoutineNameForGeneration,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                              GALGAS_bool & outArgument_outAppendFileAndLineArgumentForPanicLocation,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outRoutineKindIR.drop () ; // Release 'out' argument
  outArgument_outRoutineMangledName.drop () ; // Release 'out' argument
  outArgument_outRoutineNameForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outAppendFileAndLineArgumentForPanicLocation.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 565)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_21961 = extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 567)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_receiverType_21961.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 568)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outRoutineMangledName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (var_receiverType_21961.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 569)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 569)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("expression-primary.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 569)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("expression-primary.galgas", 569)) ;
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 570)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("expression-primary.galgas", 570)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outRoutineMangledName = constinArgument_inRoutineName ;
  }
  outArgument_outRoutineMangledName.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 575)) ;
  cEnumerator_effectiveParameterListAST enumerator_22360 (constinArgument_inEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_22360.hasCurrentObject ()) {
    outArgument_outRoutineMangledName.mAttribute_string.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_22360.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 577)), inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 577)) ;
    outArgument_outRoutineMangledName.mAttribute_string.plusAssign_operation(enumerator_22360.current_mSelector (HERE).mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 578)) ;
    outArgument_outRoutineMangledName.mAttribute_string.plusAssign_operation(GALGAS_string (":"), inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 579)) ;
    enumerator_22360.gotoNextObject () ;
  }
  outArgument_outRoutineMangledName.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 581)) ;
  GALGAS_bool var_isPublic_22695 ;
  GALGAS_bool var_isGlobal_22720 ;
  GALGAS_mode var_calleeMode_22746 ;
  GALGAS_procedureSignature var_formalSignature_22791 ;
  GALGAS_routineKind var_routineKind_22825 ;
  GALGAS_bool var_canMutateProperties_22939 ;
  GALGAS_bool var_canAccessPropertiesInUserMode_22985 ;
  GALGAS_bool joker_22831 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mRoutineMapForContext.method_searchKey (outArgument_outRoutineMangledName, outArgument_outRoutineNameForGeneration, var_isPublic_22695, var_isGlobal_22720, var_calleeMode_22746, var_formalSignature_22791, var_routineKind_22825, joker_22831, outArgument_outReturnedType, outArgument_outAppendFileAndLineArgumentForPanicLocation, var_canMutateProperties_22939, var_canAccessPropertiesInUserMode_22985, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)) ;
  const enumGalgasBool test_1 = var_isPublic_22695.operator_not (SOURCE_FILE ("expression-primary.galgas", 597)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_receiverType_21961.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 598)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_declarationFile_23127 = constinArgument_inContext.mAttribute_mRoutineMapForContext.getter_locationForKey (outArgument_outRoutineMangledName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 599)).getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 599)) ;
      GALGAS_string var_invocationFile_23240 = constinArgument_inRoutineName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 600)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_invocationFile_23240.objectCompare (var_declarationFile_23127)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 602)), GALGAS_string ("this routine is not public"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 602)) ;
      }
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_receiverType_21961.objectCompare (constinArgument_inSelfType)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 605)), GALGAS_string ("this routine is not public"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 605)) ;
      }
    }
  }
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outRoutineMangledName COMMA_SOURCE_FILE ("expression-primary.galgas", 609)) ;
  }
  outArgument_outRoutineKindIR = function_checkMode (constinArgument_inRequiredMode, var_calleeMode_22746, var_routineKind_22825, constinArgument_inRoutineName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 611)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_formalSignature_22791, constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.mAttribute_location, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 618)) ;
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
                                         const GALGAS_procedureSignature constinArgument_inFormalSignature,
                                         const GALGAS_effectiveParameterListAST constinArgument_inEffectiveParameterList,
                                         const GALGAS_location constinArgument_inErrorLocation,
                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                         const GALGAS_semanticContext constinArgument_inContext,
                                         const GALGAS_mode constinArgument_inRequiredMode,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList var_parameterList_25580 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 657)) ;
  cEnumerator_procedureSignature enumerator_25623 (constinArgument_inFormalSignature, kEnumeration_up) ;
  cEnumerator_effectiveParameterListAST enumerator_25666 (constinArgument_inEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_25623.hasCurrentObject () && enumerator_25666.hasCurrentObject ()) {
    switch (enumerator_25666.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType * extractPtr_26997 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType *) (enumerator_25666.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_26997->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_26997->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_26997->mAssociatedValue2 ;
        GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_25623.current_mType (HERE) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 664)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_type_25804 = temp_0 ;
        GALGAS_lstring var_varLLVMName_25972 = GALGAS_lstring::constructor_new (extractedValue_name.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 666)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 666)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 666)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 666))  COMMA_SOURCE_FILE ("expression-primary.galgas", 666)) ;
        ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 667)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertConstant (extractedValue_name, var_type_25804, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_type_25804, var_varLLVMName_25972  COMMA_SOURCE_FILE ("expression-primary.galgas", 673)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 669)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertDefinedVariable (extractedValue_name, var_type_25804, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_type_25804, var_varLLVMName_25972  COMMA_SOURCE_FILE ("expression-primary.galgas", 682)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 678)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_25972.getter_string (SOURCE_FILE ("expression-primary.galgas", 687)), var_type_25804.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 687))  COMMA_SOURCE_FILE ("expression-primary.galgas", 687)) ;
        var_parameterList_25580.addAssign_operation (enumerator_25666.current_mEffectiveParameterKind (HERE), enumerator_25666.current_mSelector (HERE), var_type_25804  COMMA_SOURCE_FILE ("expression-primary.galgas", 688)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 690)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_25804, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (var_varLLVMName_25972.getter_string (SOURCE_FILE ("expression-primary.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 691)), var_varLLVMName_25972.getter_location (SOURCE_FILE ("expression-primary.galgas", 691))  COMMA_SOURCE_FILE ("expression-primary.galgas", 691)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 691))  COMMA_SOURCE_FILE ("expression-primary.galgas", 691))  COMMA_SOURCE_FILE ("expression-primary.galgas", 689)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_input * extractPtr_27975 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_input *) (enumerator_25666.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_27975->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type_27116 ;
        GALGAS_bool var_accessIsAllowed_27163 ;
        GALGAS_objectIR var_objectIR_27194 ;
        GALGAS_bool var_isCopyable_27227 ;
        GALGAS_bool var_canBeUsedAsInputParameter_27341 ;
        {
        ioArgument_ioVariableMap.setter_searchForWriteAccess (extractedValue_name, var_type_27116, var_accessIsAllowed_27163, var_objectIR_27194, var_isCopyable_27227, var_canBeUsedAsInputParameter_27341, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 693)) ;
        }
        const enumGalgasBool test_3 = var_accessIsAllowed_27163.operator_not (SOURCE_FILE ("expression-primary.galgas", 701)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 702)), GALGAS_string ("routine has no access right on the this variable"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 702)) ;
        }
        const enumGalgasBool test_5 = var_canBeUsedAsInputParameter_27341.operator_not (SOURCE_FILE ("expression-primary.galgas", 704)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 705)), GALGAS_string ("this variable cannot be used as input parameter"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 705)) ;
        }
        const enumGalgasBool test_7 = var_isCopyable_27227.operator_not (SOURCE_FILE ("expression-primary.galgas", 707)).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 708)), GALGAS_string ("an $").add_operation (var_type_27116.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 708)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 708)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 708)) ;
        }
        var_parameterList_25580.addAssign_operation (enumerator_25666.current_mEffectiveParameterKind (HERE), enumerator_25666.current_mSelector (HERE), var_type_27116  COMMA_SOURCE_FILE ("expression-primary.galgas", 710)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 712)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_27116, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_27194, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 713)), extensionGetter_location (var_objectIR_27194, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 713))  COMMA_SOURCE_FILE ("expression-primary.galgas", 713)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 713))  COMMA_SOURCE_FILE ("expression-primary.galgas", 713))  COMMA_SOURCE_FILE ("expression-primary.galgas", 711)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_output * extractPtr_28973 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_output *) (enumerator_25666.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_28973->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_28973->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_28620 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_25623.current_mType (HERE), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_28620, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 715)) ;
        GALGAS_objectIR var_result_28645 = function_checkAssignmentCompatibility (var_expressionResult_28620, enumerator_25623.current_mType (HERE), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 730)) ;
        var_parameterList_25580.addAssign_operation (enumerator_25666.current_mEffectiveParameterKind (HERE), enumerator_25666.current_mSelector (HERE), enumerator_25623.current_mType (HERE)  COMMA_SOURCE_FILE ("expression-primary.galgas", 736)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 737)), var_result_28645  COMMA_SOURCE_FILE ("expression-primary.galgas", 737)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput * extractPtr_29857 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInput *) (enumerator_25666.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_29857->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type_29102 ;
        GALGAS_bool var_accessIsAllowed_29149 ;
        GALGAS_objectIR var_objectIR_29180 ;
        GALGAS_bool var_canBeUsedAsInputParameter_29257 ;
        {
        GALGAS_bool joker_29190_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (extractedValue_name, var_type_29102, var_accessIsAllowed_29149, var_objectIR_29180, joker_29190_1, var_canBeUsedAsInputParameter_29257, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 739)) ;
        }
        const enumGalgasBool test_9 = var_canBeUsedAsInputParameter_29257.operator_not (SOURCE_FILE ("expression-primary.galgas", 747)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 748)), GALGAS_string ("this variable cannot be used as output/input parameter"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 748)) ;
        }
        const enumGalgasBool test_11 = var_accessIsAllowed_29149.operator_not (SOURCE_FILE ("expression-primary.galgas", 750)).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 751)), GALGAS_string ("routine has no access right on the this variable"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 751)) ;
        }
        var_parameterList_25580.addAssign_operation (enumerator_25666.current_mEffectiveParameterKind (HERE), enumerator_25666.current_mSelector (HERE), var_type_29102  COMMA_SOURCE_FILE ("expression-primary.galgas", 753)) ;
        GALGAS_objectIR var_argumentIR_29619 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_29102, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_29180, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 756)), extensionGetter_location (var_objectIR_29180, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 756))  COMMA_SOURCE_FILE ("expression-primary.galgas", 756)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 757))  COMMA_SOURCE_FILE ("expression-primary.galgas", 754)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 759)), var_argumentIR_29619  COMMA_SOURCE_FILE ("expression-primary.galgas", 759)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable * extractPtr_32018 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_outputInputSelfVariable *) (enumerator_25666.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_32018->mAssociatedValue0 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 761)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 762)), GALGAS_string ("'self' is not available in this context"), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 762)) ;
          var_parameterList_25580.drop () ; // Release error dropped variable
          ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_13) {
          const enumGalgasBool test_15 = constinArgument_inDirectAccessToPropertiesAllowed.operator_not (SOURCE_FILE ("expression-primary.galgas", 763)).boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 764)), GALGAS_string ("the current function should be declared @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 764)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 764)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 764)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = constinArgument_inRoutineCanMutateProperties.operator_not (SOURCE_FILE ("expression-primary.galgas", 765)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 766)), GALGAS_string ("the current routine should be declared @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 766)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 766)), fixItArray18  COMMA_SOURCE_FILE ("expression-primary.galgas", 766)) ;
            }else if (kBoolFalse == test_17) {
              switch (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 768)).enumValue ()) {
              case GALGAS_typeKind::kNotBuilt:
                break ;
              case GALGAS_typeKind::kEnum_opaque:
                {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 770)), GALGAS_string ("an opaque type does not handle field access"), fixItArray19  COMMA_SOURCE_FILE ("expression-primary.galgas", 770)) ;
                  var_parameterList_25580.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_arrayType:
                {
                  TC_Array <C_FixItDescription> fixItArray20 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 772)), GALGAS_string ("an array type does not handle field access"), fixItArray20  COMMA_SOURCE_FILE ("expression-primary.galgas", 772)) ;
                  var_parameterList_25580.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_boolean:
                {
                  TC_Array <C_FixItDescription> fixItArray21 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 774)), GALGAS_string ("a boolean does not handle field access"), fixItArray21  COMMA_SOURCE_FILE ("expression-primary.galgas", 774)) ;
                  var_parameterList_25580.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_staticInteger:
                {
                  TC_Array <C_FixItDescription> fixItArray22 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 776)), GALGAS_string ("an integer does not handle field access"), fixItArray22  COMMA_SOURCE_FILE ("expression-primary.galgas", 776)) ;
                  var_parameterList_25580.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_literalString:
                {
                  TC_Array <C_FixItDescription> fixItArray23 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 778)), GALGAS_string ("a literal string does not handle field access"), fixItArray23  COMMA_SOURCE_FILE ("expression-primary.galgas", 778)) ;
                  var_parameterList_25580.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_enumeration:
                {
                  TC_Array <C_FixItDescription> fixItArray24 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 780)), GALGAS_string ("an enumeration does not handle field access"), fixItArray24  COMMA_SOURCE_FILE ("expression-primary.galgas", 780)) ;
                  var_parameterList_25580.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_integer:
                {
                  TC_Array <C_FixItDescription> fixItArray25 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 782)), GALGAS_string ("an integer does not handle field access"), fixItArray25  COMMA_SOURCE_FILE ("expression-primary.galgas", 782)) ;
                  var_parameterList_25580.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_structure:
                {
                  const cEnumAssociatedValues_typeKind_structure * extractPtr_31992 = (const cEnumAssociatedValues_typeKind_structure *) (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 768)).unsafePointer ()) ;
                  const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_31992->mAssociatedValue0 ;
                  GALGAS_bool var_public_31468 ;
                  GALGAS_objectIR var_propertyObject_31488 ;
                  GALGAS_uint var_idx_31497 ;
                  extractedValue_propertyMap.method_searchKey (extractedValue_name, var_public_31468, var_propertyObject_31488, var_idx_31497, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 784)) ;
                  GALGAS_objectIR var_fieldObjectReference_31599 ;
                  {
                  routine_getNewTempVariable (extensionGetter_type (var_propertyObject_31488, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 785)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 785)), ioArgument_ioTemporaries, var_fieldObjectReference_31599, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 785)) ;
                  }
                  {
                  extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_31599, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 789)), var_idx_31497, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 786)) ;
                  }
                  var_parameterList_25580.addAssign_operation (enumerator_25666.current_mEffectiveParameterKind (HERE), enumerator_25666.current_mSelector (HERE), extensionGetter_type (var_propertyObject_31488, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 792))  COMMA_SOURCE_FILE ("expression-primary.galgas", 792)) ;
                  ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 794)), var_fieldObjectReference_31599  COMMA_SOURCE_FILE ("expression-primary.galgas", 793)) ;
                }
                break ;
              }
            }
          }
        }
      }
      break ;
    }
    enumerator_25623.gotoNextObject () ;
    enumerator_25666.gotoNextObject () ;
  }
  const enumGalgasBool test_26 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 801)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 801)))).boolEnum () ;
  if (kBoolTrue == test_26) {
    TC_Array <C_FixItDescription> fixItArray27 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 802)).getter_string (SOURCE_FILE ("expression-primary.galgas", 802)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 802)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 802)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 803)).getter_string (SOURCE_FILE ("expression-primary.galgas", 802)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 802)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 803)), fixItArray27  COMMA_SOURCE_FILE ("expression-primary.galgas", 802)) ;
  }else if (kBoolFalse == test_26) {
    cEnumerator_procedureSignature enumerator_32350 (constinArgument_inFormalSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_32379 (var_parameterList_25580, kEnumeration_up) ;
    while (enumerator_32350.hasCurrentObject () && enumerator_32379.hasCurrentObject ()) {
      const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, enumerator_32350.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 806)).objectCompare (enumerator_32379.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 806)))).boolEnum () ;
      if (kBoolTrue == test_28) {
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_32379.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 807)), GALGAS_string ("the actual parameter type is '").add_operation (enumerator_32379.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 807)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 807)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 807)).add_operation (enumerator_32350.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 808)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 808)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 808)), fixItArray29  COMMA_SOURCE_FILE ("expression-primary.galgas", 807)) ;
      }
      GALGAS_string var_requiredPassingMode_32670 = extensionGetter_requiredActualPassingModeForSelector (enumerator_32350.current_mFormalArgumentPassingMode (HERE), enumerator_32350.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 810)) ;
      GALGAS_string var_testedPassingMode_32791 = extensionGetter_passingModeForActualSelector (enumerator_32379.current_mEffectiveParameterPassingMode (HERE), enumerator_32379.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 811)) ;
      const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_32670.objectCompare (var_testedPassingMode_32791)).boolEnum () ;
      if (kBoolTrue == test_30) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_32379.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 813)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_32670, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 813)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 813)), fixItArray31  COMMA_SOURCE_FILE ("expression-primary.galgas", 813)) ;
      }
      enumerator_32350.gotoNextObject () ;
      enumerator_32379.gotoNextObject () ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 37)) ;
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
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList_3016 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 58)) ;
  GALGAS_objectIR var_expressionResult_3532 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("directive-check.galgas", 64)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList_3016, var_expressionResult_3532, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 59)) ;
  const enumGalgasBool test_0 = extensionGetter_kind (var_expressionResult_3532, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 75)).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 75)).operator_not (SOURCE_FILE ("directive-check.galgas", 75)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("directive-check.galgas", 76)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionResult_3532, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 79)).operator_not (SOURCE_FILE ("directive-check.galgas", 79)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("expression is not static: use assert instruction"), fixItArray3  COMMA_SOURCE_FILE ("directive-check.galgas", 80)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_bigint var_value_3925 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_3902_1 ; // Joker input parameter
    var_expressionResult_3532.method_literalInteger (joker_3902_1, var_value_3925, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 82)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_3925.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 83)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("check expression value is false"), fixItArray5  COMMA_SOURCE_FILE ("directive-check.galgas", 84)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 38)) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mAttribute_mAssignmentTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 39)) ;
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
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAssignmentInstructionAST * object = (const cPtr_varAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varAssignmentInstructionAST) ;
  GALGAS_objectIR var_currentObject_3735 ;
  GALGAS_string var_globalVariableReceiverName_3805 ;
  extensionMethod_analyzeAssignmentTarget (object->mAttribute_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_write (SOURCE_FILE ("instruction-assignment.galgas", 61)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_currentObject_3735, var_globalVariableReceiverName_3805, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 59)) ;
  const enumGalgasBool test_0 = var_currentObject_3735.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment.galgas", 75)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAssignmentTargetAST.mAttribute_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 76)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 76)) ;
    var_currentObject_3735.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourceOperand_4511 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_currentObject_3735, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 84)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperand_4511, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 79)) ;
  GALGAS_objectIR var_result_4528 = function_checkAssignmentCompatibility (var_sourceOperand_4511, extensionGetter_type (var_currentObject_3735, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 96)), object->mAttribute_mAssignmentTargetAST.mAttribute_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 97)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 94)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_currentObject_3735, object->mAttribute_mAssignmentTargetAST.mAttribute_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 100)), var_result_4528, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 100)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 91)) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mAttribute_mAssignmentTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 92)) ;
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
                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varOperatorAssignInstructionAST * object = (const cPtr_varOperatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varOperatorAssignInstructionAST) ;
  GALGAS_objectIR var_targetObject_4924 ;
  GALGAS_string var_globalVariableReceiverName_4994 ;
  extensionMethod_analyzeAssignmentTarget (object->mAttribute_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_write (SOURCE_FILE ("instruction-assignment-operator.galgas", 115)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_targetObject_4924, var_globalVariableReceiverName_4994, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 113)) ;
  const enumGalgasBool test_0 = var_targetObject_4924.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment-operator.galgas", 129)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAssignmentTargetAST.mAttribute_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 130)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 130)) ;
    var_targetObject_4924.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourceValue_5695 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_targetObject_4924, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 138)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceValue_5695, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 133)) ;
  GALGAS_bool var_noPanicGeneration_6167 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
  GALGAS_bool var_panicMode_6230 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assignment-operator.galgas", 162)))) ;
  GALGAS_infixOperatorMap var_operatorMap_6292 ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_operatorAssignmentKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap_6292 = constinArgument_inContext.mAttribute_mAndOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap_6292 = constinArgument_inContext.mAttribute_mOrOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap_6292 = constinArgument_inContext.mAttribute_mXorOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addAssign:
    {
      const enumGalgasBool test_2 = var_panicMode_6230.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mAttribute_mAssignmentTargetAST.mAttribute_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 173)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 174)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 174)), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 173)) ;
      }
      GALGAS_infixOperatorMap temp_4 ;
      const enumGalgasBool test_5 = var_noPanicGeneration_6167.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
      }else if (kBoolFalse == test_5) {
        temp_4 = constinArgument_inContext.mAttribute_mAddOperatorMap ;
      }
      var_operatorMap_6292 = temp_4 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addModuloAssign:
    {
      var_operatorMap_6292 = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subAssign:
    {
      const enumGalgasBool test_6 = var_panicMode_6230.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mAttribute_mAssignmentTargetAST.mAttribute_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 181)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 182)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 182)), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 181)) ;
      }
      GALGAS_infixOperatorMap temp_8 ;
      const enumGalgasBool test_9 = var_noPanicGeneration_6167.boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
      }else if (kBoolFalse == test_9) {
        temp_8 = constinArgument_inContext.mAttribute_mSubOperatorMap ;
      }
      var_operatorMap_6292 = temp_8 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subModuloAssign:
    {
      var_operatorMap_6292 = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulAssign:
    {
      const enumGalgasBool test_10 = var_panicMode_6230.boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mAttribute_mAssignmentTargetAST.mAttribute_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 189)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 190)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 190)), fixItArray11  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 189)) ;
      }
      GALGAS_infixOperatorMap temp_12 ;
      const enumGalgasBool test_13 = var_noPanicGeneration_6167.boolEnum () ;
      if (kBoolTrue == test_13) {
        temp_12 = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
      }else if (kBoolFalse == test_13) {
        temp_12 = constinArgument_inContext.mAttribute_mMulOperatorMap ;
      }
      var_operatorMap_6292 = temp_12 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulModuloAssign:
    {
      var_operatorMap_6292 = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divAssign:
    {
      const enumGalgasBool test_14 = var_panicMode_6230.boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mAttribute_mAssignmentTargetAST.mAttribute_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 197)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 198)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 198)), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 197)) ;
      }
      GALGAS_infixOperatorMap temp_16 ;
      const enumGalgasBool test_17 = var_noPanicGeneration_6167.boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
      }else if (kBoolFalse == test_17) {
        temp_16 = constinArgument_inContext.mAttribute_mDivOperatorMap ;
      }
      var_operatorMap_6292 = temp_16 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divZeroAssign:
    {
      var_operatorMap_6292 = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modAssign:
    {
      const enumGalgasBool test_18 = var_panicMode_6230.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (object->mAttribute_mAssignmentTargetAST.mAttribute_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 205)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 206)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 206)), fixItArray19  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 205)) ;
      }
      GALGAS_infixOperatorMap temp_20 ;
      const enumGalgasBool test_21 = var_noPanicGeneration_6167.boolEnum () ;
      if (kBoolTrue == test_21) {
        temp_20 = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
      }else if (kBoolFalse == test_21) {
        temp_20 = constinArgument_inContext.mAttribute_mModOperatorMap ;
      }
      var_operatorMap_6292 = temp_20 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modZeroAssign:
    {
      var_operatorMap_6292 = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
    }
    break ;
  }
  GALGAS_infixOperatorDescription var_binaryOperator_8625 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_8571 ; // Joker input parameter
  extensionMethod_checkBinaryOperationWith (var_operatorMap_6292, extensionGetter_type (var_targetObject_4924, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 213)), extensionGetter_type (var_sourceValue_5695, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 214)), object->mAttribute_mAssignmentTargetAST.mAttribute_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 215)), joker_8571, var_binaryOperator_8625, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 212)) ;
  GALGAS_objectIR var_variableValue_8923 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_targetObject_4924, object->mAttribute_mAssignmentTargetAST.mAttribute_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 226)), var_variableValue_8923, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 223)) ;
  }
  GALGAS_objectIR var_newResultingValue_9323 ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_8625.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue_8923, object->mAttribute_mAssignmentTargetAST.mAttribute_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 238)), var_sourceValue_5695, extensionGetter_type (var_targetObject_4924, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 240)), var_newResultingValue_9323, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 234)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_targetObject_4924, object->mAttribute_mAssignmentTargetAST.mAttribute_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 245)), var_newResultingValue_9323, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 243)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2711 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mOptionalTypeName.getter_string (SOURCE_FILE ("instruction-var.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 66)), object->mAttribute_mOptionalTypeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2711 COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 69)) ;
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
  GALGAS_lstring var_typeName_3145 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("instruction-var.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 75)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-var.galgas", 75)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3145 COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
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
                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 97)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 98)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_4303 = temp_0 ;
  GALGAS_objectIR var_expressionResult_4976 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_4303, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4976, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 101)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType_4303.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 117)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType_4303 = extensionGetter_type (var_expressionResult_4976, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 118)) ;
  }
  GALGAS_objectIR var_result_5100 = function_checkAssignmentCompatibility (var_expressionResult_4976, var_targetType_4303, object->mAttribute_mVarName.mAttribute_location, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 120)) ;
  GALGAS_lstring var_varName_5347 = GALGAS_lstring::constructor_new (object->mAttribute_mVarName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-var.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)), object->mAttribute_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 128))  COMMA_SOURCE_FILE ("instruction-var.galgas", 128)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 129)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedVariable (object->mAttribute_mVarName, extensionGetter_type (var_result_5100, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 132)), GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_5100, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 134)), var_varName_5347  COMMA_SOURCE_FILE ("instruction-var.galgas", 134)), extensionGetter_type (var_result_5100, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 135)).getter_copyable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 135)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 130)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varName_5347.getter_string (SOURCE_FILE ("instruction-var.galgas", 139)), extensionGetter_type (var_result_5100, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 139)).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 139))  COMMA_SOURCE_FILE ("instruction-var.galgas", 139)) ;
  {
  extensionSetter_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, var_varName_5347.getter_string (SOURCE_FILE ("instruction-var.galgas", 141)), extensionGetter_type (var_result_5100, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 142)), var_result_5100, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 140)) ;
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
                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_6777 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 162)) ;
  const enumGalgasBool test_0 = var_targetType_6777.getter_instantiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 164)).operator_not (SOURCE_FILE ("instruction-var.galgas", 164)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 165)), GALGAS_string ("$").add_operation (var_targetType_6777.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 165)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 165)), fixItArray1  COMMA_SOURCE_FILE ("instruction-var.galgas", 165)) ;
  }
  GALGAS_lstring var_varLLVMName_6994 = GALGAS_lstring::constructor_new (object->mAttribute_mVarName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 168)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-var.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 168)), object->mAttribute_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 168))  COMMA_SOURCE_FILE ("instruction-var.galgas", 168)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 169)) ;
  {
  ioArgument_ioVariableMap.setter_insertUndefinedVariable (object->mAttribute_mVarName, var_targetType_6777, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_targetType_6777, var_varLLVMName_6994  COMMA_SOURCE_FILE ("instruction-var.galgas", 174)), var_targetType_6777.getter_copyable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 175)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 170)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_6994.getter_string (SOURCE_FILE ("instruction-var.galgas", 179)), var_targetType_6777.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 179))  COMMA_SOURCE_FILE ("instruction-var.galgas", 179)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2137 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mOptionalTypeName.getter_string (SOURCE_FILE ("instruction-let.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 47)), object->mAttribute_mOptionalTypeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-let.galgas", 47)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2137 COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
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
                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 71)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 72)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_3392 = temp_0 ;
  GALGAS_objectIR var_expressionResult_4069 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_3392, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4069, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 75)) ;
  GALGAS_objectIR var_result_4114 = function_checkAssignmentCompatibility (var_expressionResult_4069, var_targetType_3392, object->mAttribute_mVarName.mAttribute_location, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 91)) ;
  const enumGalgasBool test_2 = extensionGetter_type (var_result_4114, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)).getter_instantiable (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)).operator_not (SOURCE_FILE ("instruction-let.galgas", 99)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 100)), GALGAS_string ("$").add_operation (extensionGetter_key (var_result_4114, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)), fixItArray3  COMMA_SOURCE_FILE ("instruction-let.galgas", 100)) ;
    var_result_4114.drop () ; // Release error dropped variable
  }
  GALGAS_lstring var_varPLMName_4478 = GALGAS_lstring::constructor_new (object->mAttribute_mVarName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-let.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)), object->mAttribute_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 103))  COMMA_SOURCE_FILE ("instruction-let.galgas", 103)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_4114, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioAllocaList.addAssign_operation (var_varPLMName_4478.getter_string (SOURCE_FILE ("instruction-let.galgas", 106)), extensionGetter_type (var_result_4114, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106))  COMMA_SOURCE_FILE ("instruction-let.galgas", 106)) ;
    GALGAS_objectIR var_localConstant_4730 = GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_4114, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)), var_varPLMName_4478  COMMA_SOURCE_FILE ("instruction-let.galgas", 107)) ;
    {
    extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_localConstant_4730, object->mAttribute_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 108)), var_result_4114, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_insertConstant (object->mAttribute_mVarName, extensionGetter_type (var_result_4114, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 112)), GALGAS_bool (true), var_expressionResult_4069, extensionGetter_type (var_result_4114, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 115)).getter_copyable (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 115)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 110)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 37)) ;
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
                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assert.galgas", 57)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 58)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 58)), fixItArray1  COMMA_SOURCE_FILE ("instruction-assert.galgas", 58)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_3185 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 61)) ;
  GALGAS_objectIR var_expressionValue_3700 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-assert.galgas", 67)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList_3185, var_expressionValue_3700, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 62)) ;
  const enumGalgasBool test_2 = extensionGetter_kind (var_expressionValue_3700, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 78)).getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 78)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 78)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assert.galgas", 79)) ;
  }
  const enumGalgasBool test_4 = extensionGetter_isStatic (var_expressionValue_3700, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 82)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is static: use check directive"), fixItArray5  COMMA_SOURCE_FILE ("instruction-assert.galgas", 83)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 86)).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mAttribute_mAssertInstructionLocation, var_instructionGenerationList_3185, var_expressionValue_3700  COMMA_SOURCE_FILE ("instruction-assert.galgas", 87))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 87)) ;
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
  GALGAS_uint var_assertErrorCode_5097 = GALGAS_uint ((uint32_t) 7U) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("if (!").add_operation (extensionGetter_llvmName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  raise_exception (").add_operation (var_assertErrorCode_5097.getter_string (SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (object->mAttribute_mAssertInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)).getter_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 116)).getter_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)).add_operation (object->mAttribute_mAssertInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 127)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mCodeExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 34)) ;
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
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionAST * object = (const cPtr_panicInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-panic.galgas", 55)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 56)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 56)), fixItArray1  COMMA_SOURCE_FILE ("instruction-panic.galgas", 56)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR_3173 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 59)) ;
  GALGAS_objectIR var_result_3700 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mCodeExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext.mAttribute_mPanicCodeType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_3173, var_result_3700, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 60)) ;
  GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR_3173.getter_length (SOURCE_FILE ("instruction-panic.galgas", 77)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = var_result_3700.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 78)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 78)) ;
  }
  GALGAS_bool test_3 = test_2 ;
  if (kBoolTrue != test_3.boolEnum ()) {
    test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_3700, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 79)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 79)))) ;
  }
  const enumGalgasBool test_4 = test_3.boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("throw expression should be a literal integer"), fixItArray5  COMMA_SOURCE_FILE ("instruction-panic.galgas", 80)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_min_4036 ;
    GALGAS_bigint var_max_4049 ;
    GALGAS_bool joker_4060 ; // Joker input parameter
    GALGAS_uint joker_4063_1 ; // Joker input parameter
    constinArgument_inContext.mAttribute_mPanicCodeType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 82)).method_integer (var_min_4036, var_max_4049, joker_4060, joker_4063_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 82)) ;
    GALGAS_bigint var_throwValue_4119 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_4095_1 ; // Joker input parameter
    var_result_3700.method_literalInteger (joker_4095_1, var_throwValue_4119, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)) ;
    GALGAS_bool test_6 = GALGAS_bool (kIsStrictInf, var_throwValue_4119.objectCompare (var_min_4036)) ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = GALGAS_bool (kIsStrictSup, var_throwValue_4119.objectCompare (var_max_4049)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.mAttribute_mPanicCodeType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 85)), fixItArray8  COMMA_SOURCE_FILE ("instruction-panic.galgas", 85)) ;
    }else if (kBoolFalse == test_7) {
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 86)).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::constructor_new (object->mAttribute_mThrowLocation, var_throwValue_4119  COMMA_SOURCE_FILE ("instruction-panic.galgas", 87))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 87)) ;
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
  GALGAS_uint var_staticStringIndex_5401 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mThrowLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 112)).getter_lastPathComponent (SOURCE_FILE ("instruction-panic.galgas", 112)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-panic.galgas", 112)), var_staticStringIndex_5401, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 111)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_5401.getter_string (SOURCE_FILE ("instruction-panic.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)).add_operation (object->mAttribute_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 117)).add_operation (object->mAttribute_mPanicCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 117)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 117)) ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mThenInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 74)) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mElseInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 75)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 76)) ;
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
                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_objectIR var_testResult_4793 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 102)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResult_4793, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 97)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_testResult_4793, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 113)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 113)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testResult_4793, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 114)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 114)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 114)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_testResult_4793, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 116)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-if.galgas", 117)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 119)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_5238 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 121)) ;
  extensionMethod_analyzeBranchInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_5238, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 122)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_5889 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 137)) ;
  extensionMethod_analyzeBranchInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_5889, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 138)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 152)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult_4793, object->mAttribute_mTestExpressionEndLocation, var_thenInstructionGenerationList_5238, var_elseInstructionGenerationList_5889  COMMA_SOURCE_FILE ("instruction-if.galgas", 154))  COMMA_SOURCE_FILE ("instruction-if.galgas", 154)) ;
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
  GALGAS_string var_labelTrue_7579 = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 180)).getter_string (SOURCE_FILE ("instruction-if.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 180)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 180)) ;
  GALGAS_string var_labelFalse_7642 = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 181)).getter_string (SOURCE_FILE ("instruction-if.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 181)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 181)) ;
  GALGAS_string var_labelEnd_7704 = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 182)).getter_string (SOURCE_FILE ("instruction-if.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 182)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 182)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 183)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 183)).add_operation (var_labelTrue_7579, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 183)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 183)).add_operation (var_labelFalse_7642, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 183)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 183)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_7579.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 185)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 186)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_7704, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 187)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 187)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_7642.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 189)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 190)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_7704, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 191)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 191)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_7704.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 193)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202)) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203)) ;
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
  cEnumerator_syncInstructionBranchList enumerator_5706 (object->mAttribute_mBranchList, kEnumeration_up) ;
  while (enumerator_5706.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5706.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 148)) ;
    enumerator_5706.gotoNextObject () ;
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
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_allocaList & ioArgument_ioAllocaList,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionAST * object = (const cPtr_syncInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionAST) ;
  GALGAS_syncInstructionBranchListIR var_onInstructionBranchListIR_6862 = GALGAS_syncInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 169)) ;
  cEnumerator_syncInstructionBranchList enumerator_6933 (object->mAttribute_mBranchList, kEnumeration_up) ;
  while (enumerator_6933.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 171)) ;
    }
    GALGAS_guardedCommandIR var_guardedCommandIR_7037 ;
    switch (enumerator_6933.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommand::kNotBuilt:
      break ;
    case GALGAS_guardedCommand::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommand_synchronization * extractPtr_8204 = (const cEnumAssociatedValues_guardedCommand_synchronization *) (enumerator_6933.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_8204->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_8204->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_8204->mAssociatedValue2 ;
        const GALGAS_effectiveParameterListAST extractedValue_effectiveParameterList = extractPtr_8204->mAssociatedValue3 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_7216 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 176)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_7813 ;
        GALGAS_lstring var_guardMangledName_7869 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_7216, var_guardEffectiveParameterListIR_7813, var_guardMangledName_7869, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 177)) ;
        }
        var_guardedCommandIR_7037 = GALGAS_guardedCommandIR::constructor_synchronization (extractedValue_isWhileCommand, var_guardMangledName_7869.mAttribute_string, extractedValue_optionalReceiverName.mAttribute_string, var_guardInstructionGenerationList_7216, var_guardEffectiveParameterListIR_7813  COMMA_SOURCE_FILE ("instruction-sync.galgas", 193)) ;
      }
      break ;
    case GALGAS_guardedCommand::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommand_boolean * extractPtr_9328 = (const cEnumAssociatedValues_guardedCommand_boolean *) (enumerator_6933.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_9328->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_9328->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_9328->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_8323 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 201)) ;
        GALGAS_objectIR var_sourceOperand_8895 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 207)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_8323, var_sourceOperand_8895, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 202)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_sourceOperand_8895, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 217)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 217)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("instruction-sync.galgas", 218)) ;
        }else if (kBoolFalse == test_0) {
          const enumGalgasBool test_2 = extensionGetter_isStatic (var_sourceOperand_8895, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 219)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-sync.galgas", 220)) ;
          }
        }
        var_guardedCommandIR_7037 = GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_isWhileCommand, var_guardInstructionGenerationList_8323, var_sourceOperand_8895  COMMA_SOURCE_FILE ("instruction-sync.galgas", 222)) ;
      }
      break ;
    case GALGAS_guardedCommand::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommand_boolAndSync * extractPtr_11513 = (const cEnumAssociatedValues_guardedCommand_boolAndSync *) (enumerator_6933.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_11513->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_11513->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_11513->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_11513->mAssociatedValue3 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_11513->mAssociatedValue4 ;
        const GALGAS_effectiveParameterListAST extractedValue_effectiveParameterList = extractPtr_11513->mAssociatedValue5 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_9507 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 228)) ;
        GALGAS_objectIR var_boolExpressionResult_10092 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 234)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_9507, var_boolExpressionResult_10092, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 229)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_boolExpressionResult_10092, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 244)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 244)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray5  COMMA_SOURCE_FILE ("instruction-sync.galgas", 245)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = extensionGetter_isStatic (var_boolExpressionResult_10092, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 246)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 247)) ;
          }
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_10410 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 249)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_11007 ;
        GALGAS_lstring var_guardMangledName_11063 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_10410, var_guardEffectiveParameterListIR_11007, var_guardMangledName_11063, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 250)) ;
        }
        var_guardedCommandIR_7037 = GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_isWhileCommand, var_boolExpInstructionGenerationList_9507, var_boolExpressionResult_10092, var_guardMangledName_11063.mAttribute_string, extractedValue_optionalReceiverName.mAttribute_string, var_guardInstructionGenerationList_10410, var_guardEffectiveParameterListIR_11007  COMMA_SOURCE_FILE ("instruction-sync.galgas", 266)) ;
      }
      break ;
    }
    GALGAS_instructionListIR var_branchInstructionGenerationList_11600 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 277)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_6933.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, enumerator_6933.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_11600, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 278)) ;
    {
    ioArgument_ioVariableMap.setter_closeOverride (enumerator_6933.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 292)) ;
    }
    var_onInstructionBranchListIR_6862.addAssign_operation (var_guardedCommandIR_7037, var_branchInstructionGenerationList_11600  COMMA_SOURCE_FILE ("instruction-sync.galgas", 294)) ;
    enumerator_6933.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (object->mAttribute_mStartOf_5F_on_5F_instruction, var_onInstructionBranchListIR_6862  COMMA_SOURCE_FILE ("instruction-sync.galgas", 299))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 299)) ;
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
                               const GALGAS_effectiveParameterListAST constinArgument_inEffectiveParameterList,
                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                               const GALGAS_semanticContext constinArgument_inContext,
                               const GALGAS_mode constinArgument_inRequiredMode,
                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                               GALGAS_variableMap & ioArgument_ioVariableMap,
                               GALGAS_allocaList & ioArgument_ioAllocaList,
                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                               GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                               GALGAS_lstring & outArgument_outGuardMangledName,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outGuardMangledName.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 320)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_13429 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_objectIR var_objectIR_13599 ;
    {
    GALGAS_bool joker_13568_1 ; // Joker input parameter
    GALGAS_bool joker_13607_2 ; // Joker input parameter
    GALGAS_bool joker_13607_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForMethodCall (constinArgument_inReceiverName, var_receiverType_13429, joker_13568_1, var_objectIR_13599, joker_13607_2, joker_13607_1, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 323)) ;
    }
    outArgument_outGuardMangledName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (var_receiverType_13429.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 330)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 330)).add_operation (constinArgument_inGuardName.getter_string (SOURCE_FILE ("instruction-sync.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 330)), constinArgument_inGuardName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-sync.galgas", 330)) ;
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-sync.galgas", 331)), var_objectIR_13599  COMMA_SOURCE_FILE ("instruction-sync.galgas", 331)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outGuardMangledName = constinArgument_inGuardName ;
    var_receiverType_13429 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 334)) ;
  }
  outArgument_outGuardMangledName.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 336)) ;
  cEnumerator_effectiveParameterListAST enumerator_13958 (constinArgument_inEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_13958.hasCurrentObject ()) {
    outArgument_outGuardMangledName.mAttribute_string.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_13958.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 338)).add_operation (enumerator_13958.current_mSelector (HERE).getter_string (SOURCE_FILE ("instruction-sync.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 338)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 338)) ;
    enumerator_13958.gotoNextObject () ;
  }
  outArgument_outGuardMangledName.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 340)) ;
  GALGAS_bool var_isPublic_14191 ;
  GALGAS_procedureSignature var_formalSignature_14236 ;
  constinArgument_inContext.mAttribute_mGuardMapForContext.method_searchKey (outArgument_outGuardMangledName, var_isPublic_14191, var_formalSignature_14236, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 341)) ;
  const enumGalgasBool test_1 = var_isPublic_14191.operator_not (SOURCE_FILE ("instruction-sync.galgas", 347)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_declarationFile_14384 = constinArgument_inContext.mAttribute_mGuardMapForContext.getter_locationForKey (outArgument_outGuardMangledName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 349)).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 349)) ;
      GALGAS_string var_invocationFile_14493 = constinArgument_inGuardName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 350)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_invocationFile_14493.objectCompare (var_declarationFile_14384)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 352)), GALGAS_string ("this guard is not public"), fixItArray4  COMMA_SOURCE_FILE ("instruction-sync.galgas", 352)) ;
      }
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 355)), GALGAS_string ("this guard is not public"), fixItArray5  COMMA_SOURCE_FILE ("instruction-sync.galgas", 355)) ;
    }
  }
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outGuardMangledName COMMA_SOURCE_FILE ("instruction-sync.galgas", 360)) ;
  }
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_formalSignature_14236, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.mAttribute_location, outArgument_outGuardMangledName, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 362)) ;
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
  ioArgument_ioGenerationAdds.mAttribute_mUsesGuards = GALGAS_bool (true) ;
  GALGAS_string var_startLabel_17813 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("instruction-sync.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 427)) ;
  ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 428)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_17813, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 430)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 430)) ;
  GALGAS_string var_startLabelName_17977 = var_startLabel_17813.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 431)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_17977.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 432)) ;
  GALGAS_string var_exitLabelName_18061 = var_startLabel_17813.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 433)) ;
  GALGAS_string var_selectLabelName_18106 = var_startLabel_17813.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 434)) ;
  GALGAS_string var_errorLabelName_18152 = var_startLabel_17813.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 435)) ;
  GALGAS_string var_currentStartBranchLabel_18206 = var_startLabelName_17977 ;
  cEnumerator_syncInstructionBranchListIR enumerator_18266 (object->mAttribute_mOnInstructionBranchListIR, kEnumeration_up) ;
  GALGAS_uint index_18229 ((uint32_t) 0) ;
  while (enumerator_18266.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_18301 = GALGAS_string ("%").add_operation (var_startLabel_17813, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 438)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 438)).add_operation (index_18229.getter_string (SOURCE_FILE ("instruction-sync.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 438)) ;
    GALGAS_bool var_isWhileGuardedCommand_18371 ;
    switch (enumerator_18266.current (HERE).mAttribute_mGuardedCommand.enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_19305 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_18266.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_19305->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_19305->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_19305->mAssociatedValue3 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterListIR = extractPtr_19305->mAssociatedValue4 ;
        var_isWhileGuardedCommand_18371 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 443)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18301, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 444)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 444)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 444)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 444)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 445)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_18856 (extractedValue_effectiveParameterListIR, kEnumeration_up) ;
        while (enumerator_18856.hasCurrentObject ()) {
          switch (enumerator_18856.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18856.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 449)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 449)).add_operation (extensionGetter_llvmName (enumerator_18856.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 449)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18856.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 451)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 451)).add_operation (extensionGetter_llvmName (enumerator_18856.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 451)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 451)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18856.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 453)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 453)).add_operation (extensionGetter_llvmName (enumerator_18856.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 453)) ;
            }
            break ;
          }
          if (enumerator_18856.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)) ;
          }
          enumerator_18856.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_20123 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_18266.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_20123->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_20123->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_result = extractPtr_20123->mAssociatedValue2 ;
        var_isWhileGuardedCommand_18371 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)) ;
        GALGAS_string var_acceptedLabelName_19573 = var_startLabel_17813.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 462)).add_operation (index_18229.getter_string (SOURCE_FILE ("instruction-sync.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 462)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 462)) ;
        GALGAS_string var_rejectedLabelName_19636 = var_startLabel_17813.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)).add_operation (index_18229.getter_string (SOURCE_FILE ("instruction-sync.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)).add_operation (var_acceptedLabelName_19573, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)).add_operation (var_rejectedLabelName_19636, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_19573.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @noteGuardHasBeenAccepted ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 466)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_19636, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_19636.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 468)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 468)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18301, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)).add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)).add_operation (GALGAS_string (", 0 ; assignment\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_21854 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_18266.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_21854->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_expInstructionList = extractPtr_21854->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_expResult = extractPtr_21854->mAssociatedValue2 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_21854->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_21854->mAssociatedValue5 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_21854->mAssociatedValue6 ;
        var_isWhileGuardedCommand_18371 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)) ;
        GALGAS_string var_testOkLabelName_20430 = var_startLabel_17813.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)).add_operation (index_18229.getter_string (SOURCE_FILE ("instruction-sync.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)) ;
        GALGAS_string var_testExitLabelName_20501 = var_startLabel_17813.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)).add_operation (index_18229.getter_string (SOURCE_FILE ("instruction-sync.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_expResult, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)).add_operation (var_testOkLabelName_20430, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)).add_operation (var_testExitLabelName_20501, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_20430.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 476)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 477)) ;
        GALGAS_string var_guardAcceptationLabelName_20856 = var_startLabel_17813.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)).add_operation (index_18229.getter_string (SOURCE_FILE ("instruction-sync.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_20856, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_21082 (extractedValue_effectiveParameterList, kEnumeration_up) ;
        while (enumerator_21082.hasCurrentObject ()) {
          switch (enumerator_21082.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21082.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)).add_operation (extensionGetter_llvmName (enumerator_21082.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21082.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)).add_operation (extensionGetter_llvmName (enumerator_21082.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21082.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)).add_operation (extensionGetter_llvmName (enumerator_21082.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)) ;
            }
            break ;
          }
          if (enumerator_21082.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)) ;
          }
          enumerator_21082.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_20501, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 494)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 494)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_20501.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18301, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_20856, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)).add_operation (var_testOkLabelName_20430, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_18206, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 498)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 498)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_21888 = var_startLabel_17813.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 500)).add_operation (index_18229.getter_string (SOURCE_FILE ("instruction-sync.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 500)) ;
    GALGAS_string var_rejectedLabelName_21948 = var_startLabel_17813.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)).add_operation (index_18229.getter_string (SOURCE_FILE ("instruction-sync.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_18301, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)).add_operation (var_acceptedLabelName_21888, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)).add_operation (var_rejectedLabelName_21948, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_21888.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 503)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 503)) ;
    extensionMethod_instructionListLLVMCode (enumerator_18266.current (HERE).mAttribute_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = var_isWhileGuardedCommand_18371.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = var_startLabelName_17977 ;
    }else if (kBoolFalse == test_1) {
      temp_0 = var_exitLabelName_18061 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_21948.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)) ;
    var_currentStartBranchLabel_18206 = var_rejectedLabelName_21948 ;
    enumerator_18266.gotoNextObject () ;
    index_18229.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 437)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_18106, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_18106, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (var_startLabelName_17977, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (var_errorLabelName_18152, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_18152.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 511)) ;
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_18061, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_staticStringIndex_23140 ;
    {
    extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mSelectInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)).getter_lastPathComponent (SOURCE_FILE ("instruction-sync.galgas", 516)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-sync.galgas", 516)), var_staticStringIndex_23140, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 515)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_23140.getter_string (SOURCE_FILE ("instruction-sync.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)).add_operation (object->mAttribute_mSelectInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 522)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_18061.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 524)) ;
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
  GALGAS_uint var_branchCount_23793 = object->mAttribute_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-sync.galgas", 533)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_23793)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_23793 ;
  }
  cEnumerator_syncInstructionBranchListIR enumerator_23978 (object->mAttribute_mOnInstructionBranchListIR, kEnumeration_up) ;
  while (enumerator_23978.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_23978.current (HERE).mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 538)) ;
    switch (enumerator_23978.current (HERE).mAttribute_mGuardedCommand.enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_24532 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_23978.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_24532->mAssociatedValue1 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_24532->mAssociatedValue2 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_24532->mAssociatedValue3 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 541)) ;
        ioArgument_ioAccessibleEntities.mAttribute_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 542)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)) ;
        }
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_24699 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_23978.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_24699->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 547)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_25234 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_23978.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_25234->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_25234->mAssociatedValue3 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_25234->mAssociatedValue4 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_25234->mAssociatedValue5 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 549)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 550)) ;
        ioArgument_ioAccessibleEntities.mAttribute_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 551)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 553)) ;
        }
      }
      break ;
    }
    enumerator_23978.gotoNextObject () ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mWhileInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 47)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 48)) ;
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
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList_3450 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 69)) ;
  GALGAS_objectIR var_testValue_3967 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 75)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_3450, var_testValue_3967, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 70)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_testValue_3967, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 86)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 86)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testValue_3967, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)), fixItArray1  COMMA_SOURCE_FILE ("instruction-while.galgas", 87)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_testValue_3967, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 89)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-while.galgas", 90)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_4343 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 93)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 94)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList_4343, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 95)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 109)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mAttribute_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 112)), var_testInstructionGenerationList_3450, var_testValue_3967, var_instructionGenerationList_4343  COMMA_SOURCE_FILE ("instruction-while.galgas", 111))  COMMA_SOURCE_FILE ("instruction-while.galgas", 111)) ;
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
  GALGAS_string var_labelTest_6091 = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 137)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 137)) ;
  GALGAS_string var_labelLoop_6142 = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 138)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 138)) ;
  GALGAS_string var_labelEnd_6192 = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 139)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 139)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6091, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 140)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6091.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 141)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 142)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mTestExpression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)).add_operation (var_labelLoop_6142, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)).add_operation (var_labelEnd_6192, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 143)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6142.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 144)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6091, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 146)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6192.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 147)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)) ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 61)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mIteratedExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 62)) ;
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
                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_objectIR var_iteratedExpressionResult_4338 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mIteratedExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 88)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_iteratedExpressionResult_4338, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 83)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_iteratedElementType_4421 = extensionGetter_type (var_iteratedExpressionResult_4338, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)).getter_enumerationType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_iteratedElementType_4421.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 100)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_iteratedExpression, GALGAS_string ("this object is not enumerable"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)) ;
  }
  GALGAS_lstring var_enumeratedVarLLVMName_4621 = GALGAS_lstring::constructor_new (object->mAttribute_mVarName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 104)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 104)), object->mAttribute_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 104))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 104)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 105)) ;
  ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName_4621.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 106)), var_iteratedElementType_4421.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertUsedConstant (object->mAttribute_mVarName, var_iteratedElementType_4421, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_iteratedElementType_4421, var_enumeratedVarLLVMName_4621  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 113)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 109)) ;
  }
  GALGAS_instructionListIR var_whileExpression_5F_GenerationList_5263 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 118)) ;
  GALGAS_objectIR var_whileExpressionResult_5794 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mWhileExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 124)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_5263, var_whileExpressionResult_5794, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 119)) ;
  const enumGalgasBool test_2 = extensionGetter_kind (var_whileExpressionResult_5794, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 135)).getter_isBoolean (SOURCE_FILE ("instruction-for-in-do.galgas", 135)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 135)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression should be boolean"), fixItArray3  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 136)) ;
  }
  GALGAS_instructionListIR var_doInstructionList_5F_GenerationList_6033 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 138)) ;
  extensionMethod_analyzeBranchInstructionList (object->mAttribute_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_6033, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)) ;
  }
  GALGAS_typeKind var_iteratedTypeKind_6688 = extensionGetter_type (var_iteratedExpressionResult_4338, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_6688.objectCompare (GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 157)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnStringIR::constructor_new (var_enumeratedVarLLVMName_4621.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 159)), object->mAttribute_mEndOf_5F_iteratedExpression, var_iteratedExpressionResult_4338, var_whileExpression_5F_GenerationList_5263, var_whileExpressionResult_5794, var_doInstructionList_5F_GenerationList_6033  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)) ;
  }else if (kBoolFalse == test_4) {
    const enumGalgasBool test_5 = var_iteratedTypeKind_6688.getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 166)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_unifiedTypeMap_2D_proxy var_elementType_7175 ;
      GALGAS_bigint var_size_7190 ;
      var_iteratedTypeKind_6688.method_arrayType (var_elementType_7175, var_size_7190, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)) ;
      GALGAS_string var_varStaticListInMemory_7221 = GALGAS_string ("for.").add_operation (object->mAttribute_mEndOf_5F_iteratedExpression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)).add_operation (GALGAS_string (".list.in.memory"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)) ;
      ioArgument_ioAllocaList.addAssign_operation (var_varStaticListInMemory_7221, extensionGetter_type (var_iteratedExpressionResult_4338, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)) ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnArrayIR::constructor_new (var_enumeratedVarLLVMName_4621.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 171)), object->mAttribute_mEndOf_5F_iteratedExpression, var_iteratedExpressionResult_4338, var_whileExpression_5F_GenerationList_5263, var_whileExpressionResult_5794, var_doInstructionList_5F_GenerationList_6033, var_elementType_7175, var_size_7190.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 178)), var_varStaticListInMemory_7221  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)) ;
    }else if (kBoolFalse == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_iteratedExpression, GALGAS_string ("this object is not enumerable"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 182)) ;
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
  GALGAS_string var_elementTypeLLVMName_9923 = object->mAttribute_mElementType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 239)) ;
  GALGAS_string var_listTypeLLVMName_9976 = GALGAS_string ("[").add_operation (object->mAttribute_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 240)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 240)).add_operation (var_elementTypeLLVMName_9923, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 240)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 240)) ;
  GALGAS_string var_startLabel_10049 = GALGAS_string ("for.label.start.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 242)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 242)) ;
  GALGAS_string var_testLabel_10114 = GALGAS_string ("for.label.test.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 243)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 243)) ;
  GALGAS_string var_whileLabel_10179 = GALGAS_string ("for.label.while.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 244)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 244)) ;
  GALGAS_string var_nextLabel_10244 = GALGAS_string ("for.label.next.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 245)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 245)) ;
  GALGAS_string var_loopVar_10306 = GALGAS_string ("for.loop.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 246)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 246)) ;
  GALGAS_string var_loopLabel_10364 = GALGAS_string ("for.label.loop.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 247)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 247)) ;
  GALGAS_string var_endLabel_10427 = GALGAS_string ("for.label.end.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 248)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 248)) ;
  GALGAS_string var_indexVar_10492 = GALGAS_string ("for.index.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 250)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 250)) ;
  GALGAS_string var_ptrVar_10549 = GALGAS_string ("for.ptr.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 251)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 251)) ;
  GALGAS_string var_currentValue_10610 = GALGAS_string ("for.currentValue.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 252)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_10049, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 255)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 255)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_10049.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_listTypeLLVMName_9976, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)).add_operation (extensionGetter_llvmName (object->mAttribute_mExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_9976, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)).add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarStaticListInMemory, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10549, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)).add_operation (GALGAS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)).add_operation (var_listTypeLLVMName_9976, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_9976, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)).add_operation (GALGAS_string ("%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)).add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarStaticListInMemory, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10114, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 266)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 266)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_10114.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 269)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10549, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (var_elementTypeLLVMName_9923, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (GALGAS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (var_ptrVar_10549, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (var_startLabel_10049, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (var_ptrVar_10549, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (var_nextLabel_10244, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_10492, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (GALGAS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (object->mAttribute_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (var_startLabel_10049, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (var_indexVar_10492, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (var_nextLabel_10244, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_loopVar_10306, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (GALGAS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (var_indexVar_10492, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_loopVar_10306, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 278)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 278)).add_operation (var_whileLabel_10179, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 278)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 278)).add_operation (var_endLabel_10427, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 278)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 278)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_10179.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 281)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 283)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_loopLabel_10364, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_endLabel_10427, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_10364.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentValue_10610, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (var_elementTypeLLVMName_9923, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_9923.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)).add_operation (var_ptrVar_10549, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeLLVMName_9923, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_currentValue_10610, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_elementTypeLLVMName_9923, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (function_llvmNameForLocalVariable (object->mAttribute_mEnumeratedValueName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_10244, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_10244.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10549, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)).add_operation (var_elementTypeLLVMName_9923, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_9923.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)).add_operation (var_ptrVar_10549, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_10492, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (GALGAS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (var_indexVar_10492, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (GALGAS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10114, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_10427.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 306)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)) ;
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
  GALGAS_string var_startLabel_14518 = GALGAS_string ("for.label.start.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)) ;
  GALGAS_string var_testLabel_14583 = GALGAS_string ("for.label.test.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 340)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 340)) ;
  GALGAS_string var_loopLabel_14647 = GALGAS_string ("for.label.loop.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)) ;
  GALGAS_string var_whileLabel_14712 = GALGAS_string ("for.label.while.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)) ;
  GALGAS_string var_nextLabel_14777 = GALGAS_string ("for.label.next.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)) ;
  GALGAS_string var_endLabel_14840 = GALGAS_string ("for.label.end.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 344)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 344)) ;
  GALGAS_string var_ptrVar_14901 = GALGAS_string ("for.ptr.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)) ;
  GALGAS_string var_currentVar_14962 = GALGAS_string ("for.current.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 346)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 346)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_14518, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14518.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_14583, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_14583.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14901, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string (" = phi i8* ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (extensionGetter_llvmName (object->mAttribute_mExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14518.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (var_ptrVar_14901, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (var_nextLabel_14777, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_14962, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (GALGAS_string (" = load i8, i8* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (var_ptrVar_14901, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_14962, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (var_currentVar_14962, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_14962, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (var_endLabel_14840, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (var_whileLabel_14712, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_14712.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (var_loopLabel_14647, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (var_endLabel_14840, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_14647.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8 %").add_operation (var_currentVar_14962, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_14777, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_14777.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14901, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)).add_operation (GALGAS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (var_ptrVar_14901, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_14583, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_14840.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 392)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2725 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 60)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 60)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2725 COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 61)) ;
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
                                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_4113 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 86)) ;
  switch (var_type_4113.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 87)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 89)), GALGAS_string ("an integer type is required here"), fixItArray0  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 89)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 91)), GALGAS_string ("an integer type is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 91)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 94)), GALGAS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 94)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 96)), GALGAS_string ("an integer type is required here"), fixItArray3  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 96)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 98)), GALGAS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 98)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 100)), GALGAS_string ("an integer type is required here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 100)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_7956 = (const cEnumAssociatedValues_typeKind_integer *) (var_type_4113.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 87)).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_7956->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_7956->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_7956->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_7956->mAssociatedValue3 ;
      GALGAS_objectIR var_lowerBoundExpressionResult_5382 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mLowerBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4113, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResult_5382, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 103)) ;
      GALGAS_objectIR var_upperBoundExpressionResult_5948 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mUpperBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4113, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResult_5948, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 118)) ;
      GALGAS_objectIR var_lowerBound_6003 = function_checkAssignmentCompatibility (var_lowerBoundExpressionResult_5382, var_type_4113, object->mAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 134)) ;
      GALGAS_objectIR var_upperBound_6227 = function_checkAssignmentCompatibility (var_upperBoundExpressionResult_5948, var_type_4113, object->mAttribute_mEndOf_5F_upperBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 140)) ;
      GALGAS_lstring var_enumeratedVarLLVMName_6469 = GALGAS_lstring::constructor_new (object->mAttribute_mVarName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 147)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 147)), object->mAttribute_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 147))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 147)) ;
      ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 148)) ;
      ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName_6469.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 149)), var_type_4113.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 149))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 149)) ;
      {
      ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 151)) ;
      }
      {
      ioArgument_ioVariableMap.setter_insertUsedConstant (object->mAttribute_mVarName, var_type_4113, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_type_4113, var_enumeratedVarLLVMName_6469  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 156)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 152)) ;
      }
      GALGAS_instructionListIR var_instructionGenerationList_7057 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 160)) ;
      extensionMethod_analyzeBranchInstructionList (object->mAttribute_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList_7057, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 161)) ;
      {
      ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 175)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarLLVMName_6469.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 178)), var_type_4113, extractedValue_unsigned, object->mAttribute_mEndOf_5F_do_5F_instruction, var_lowerBound_6003, var_upperBound_6227, var_instructionGenerationList_7057  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 177))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 177)) ;
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
  GALGAS_string var_llvmType_9033 = object->mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 213)) ;
  GALGAS_string var_llvmVarName_9074 = function_llvmNameForLocalVariable (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 214)) ;
  GALGAS_string var_testLabel_9129 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 215)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 215)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 215)) ;
  GALGAS_string var_loopLabel_9192 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 216)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 216)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 216)) ;
  GALGAS_string var_endLabel_9254 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 217)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 217)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 217)) ;
  GALGAS_string var_testResult_9318 = GALGAS_string ("%for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 218)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 218)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 218)) ;
  GALGAS_string var_loadedVarName_9393 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 219)) ;
  GALGAS_string var_currentVarName_9471 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName.add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 220)) ;
  GALGAS_string var_nextVarName_9547 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName.add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 221)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9033, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (extensionGetter_llvmName (object->mAttribute_mLowerExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (var_llvmType_9033, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (var_llvmVarName_9074, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9129, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_9129.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 226)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_9393, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (var_llvmType_9033, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (var_llvmType_9033, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (var_llvmVarName_9074, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_9318, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 228)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 228)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_9033, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)).add_operation (var_loadedVarName_9393, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)).add_operation (extensionGetter_llvmName (object->mAttribute_mUpperExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_9318, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (var_loopLabel_9192, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (var_endLabel_9254, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_9192.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_9471, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (var_llvmType_9033, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (var_llvmType_9033, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (var_llvmVarName_9074, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_9547, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (var_llvmType_9033, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (var_currentVarName_9471, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9033, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (var_nextVarName_9547, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (var_llvmType_9033, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (var_llvmVarName_9074, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9129, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_9254.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)) ;
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
  cEnumerator_effectiveParameterListAST enumerator_2343 (object->mAttribute_mArguments, kEnumeration_up) ;
  while (enumerator_2343.hasCurrentObject ()) {
    switch (enumerator_2343.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType * extractPtr_2568 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType *) (enumerator_2343.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_2568->mAssociatedValue1 ;
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
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_output * extractPtr_2661 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_output *) (enumerator_2343.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_2661->mAssociatedValue0 ;
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
    enumerator_2343.gotoNextObject () ;
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
                                                        const GALGAS_mode constinArgument_inCurrentMode,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_allocaList & ioArgument_ioAllocaList,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_callInstructionAST * object = (const cPtr_callInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_callInstructionAST) ;
  GALGAS_objectIR var_currentObject_5173 ;
  GALGAS_string var_globalVariableReceiverName_5236 ;
  extensionMethod_analyzeAssignmentTarget (object->mAttribute_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_readWrite (SOURCE_FILE ("instruction-procedure-call.galgas", 98)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_currentObject_5173, var_globalVariableReceiverName_5236, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 96)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_5899 ;
  {
  routine_handleFunctionCallInExpression (constinArgument_inSelfType, var_globalVariableReceiverName_5236, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, object->mAttribute_mArguments, object->mAttribute_mEndOfArguments, ioArgument_ioInstructionGenerationList, var_currentObject_5173, var_returnedType_5899, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 113)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_returnedType_5899.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 132)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfArguments, GALGAS_string ("the function cannot be called in instruction: lost return value"), fixItArray1  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 133)) ;
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
//              Overriding extension method '@switchInstructionAST noteInstructionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 67)) ;
  cEnumerator_switchCaseList enumerator_2846 (object->mAttribute_mSwitchCaseList, kEnumeration_up) ;
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
                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_instructionListIR var_switchExpressionGenerationList_4028 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 91)) ;
  GALGAS_objectIR var_switchValueIR_4552 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSwitchExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 97)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_switchExpressionGenerationList_4028, var_switchValueIR_4552, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 92)) ;
  GALGAS_enumConstantMap var_enumConstantMap_4616 ;
  const enumGalgasBool test_0 = extensionGetter_kind (var_switchValueIR_4552, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)).getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 109)).boolEnum () ;
  if (kBoolTrue == test_0) {
    extensionGetter_kind (var_switchValueIR_4552, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 110)).method_enumeration (var_enumConstantMap_4616, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 110)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_switchValueIR_4552, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 113)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 113)), fixItArray1  COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)) ;
    var_enumConstantMap_4616.drop () ; // Release error dropped variable
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_switchValueIR_4552, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 116)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 120)) ;
  }
  GALGAS_stringset var_usedEnumerationValues_5112 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 121)) ;
  GALGAS_switchCaseListIR var_switchCaseListIR_5154 = GALGAS_switchCaseListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 122)) ;
  cEnumerator_switchCaseList enumerator_5218 (object->mAttribute_mSwitchCaseList, kEnumeration_up) ;
  while (enumerator_5218.hasCurrentObject ()) {
    GALGAS_uintlist var_caseIdentifierIndexList_5259 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 124)) ;
    cEnumerator_lstringlist enumerator_5301 (enumerator_5218.current_mCaseIdentifiers (HERE), kEnumeration_up) ;
    while (enumerator_5301.hasCurrentObject ()) {
      GALGAS_uint var_constantIdx_5369 ;
      var_enumConstantMap_4616.method_searchKey (enumerator_5301.current_mValue (HERE), var_constantIdx_5369, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 126)) ;
      var_caseIdentifierIndexList_5259.addAssign_operation (var_constantIdx_5369  COMMA_SOURCE_FILE ("instruction-switch.galgas", 127)) ;
      const enumGalgasBool test_4 = var_usedEnumerationValues_5112.getter_hasKey (enumerator_5301.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 128)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 128)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        fixItArray5.addObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_5301.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 129)), GALGAS_string ("duplicated enumeration constant"), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 129)) ;
      }
      var_usedEnumerationValues_5112.addAssign_operation (enumerator_5301.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 131))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 131)) ;
      enumerator_5301.gotoNextObject () ;
    }
    GALGAS_instructionListIR var_instructionGenerationList_5652 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 133)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_5218.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList_5652, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
    var_switchCaseListIR_5154.addAssign_operation (var_caseIdentifierIndexList_5259, var_instructionGenerationList_5652  COMMA_SOURCE_FILE ("instruction-switch.galgas", 148)) ;
    enumerator_5218.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 150)) ;
  }
  cEnumerator_enumConstantMap enumerator_6478 (var_enumConstantMap_4616, kEnumeration_up) ;
  while (enumerator_6478.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_usedEnumerationValues_5112.getter_hasKey (enumerator_6478.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 153)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 153)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 153)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("missing '").add_operation (enumerator_6478.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 154)).add_operation (GALGAS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 154)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 154)) ;
    }
    enumerator_6478.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_switchInstructionIR::constructor_new (object->mAttribute_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)), var_switchExpressionGenerationList_4028, var_switchValueIR_4552, var_switchCaseListIR_5154  COMMA_SOURCE_FILE ("instruction-switch.galgas", 158))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 158)) ;
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
  extensionMethod_instructionListLLVMCode (object->mAttribute_mSwitchExpressionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)) ;
  GALGAS_string var_labelOtherwise_8147 = GALGAS_string ("switch.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)).add_operation (GALGAS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (object->mAttribute_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)).add_operation (extensionGetter_llvmName (object->mAttribute_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %").add_operation (var_labelOtherwise_8147, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)).add_operation (GALGAS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)) ;
  cEnumerator_switchCaseListIR enumerator_8397 (object->mAttribute_mCaseGenerationList, kEnumeration_up) ;
  GALGAS_uint index_8348 ((uint32_t) 0) ;
  while (enumerator_8397.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_8460 (enumerator_8397.current_mCaseIdentifierIndexes (HERE), kEnumeration_up) ;
    while (enumerator_8460.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_llvmTypeName (object->mAttribute_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)).add_operation (enumerator_8460.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %switch.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)).add_operation (index_8348.getter_string (SOURCE_FILE ("instruction-switch.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)) ;
      enumerator_8460.gotoNextObject () ;
    }
    enumerator_8397.gotoNextObject () ;
    index_8348.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ]\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 203)) ;
  cEnumerator_switchCaseListIR enumerator_8743 (object->mAttribute_mCaseGenerationList, kEnumeration_up) ;
  GALGAS_uint index_8700 ((uint32_t) 0) ;
  while (enumerator_8743.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("switch.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)).add_operation (index_8700.getter_string (SOURCE_FILE ("instruction-switch.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
    extensionMethod_instructionListLLVMCode (enumerator_8743.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 207)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelOtherwise_8147, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)) ;
    enumerator_8743.gotoNextObject () ;
    index_8700.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_8147.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mSwitchExpressionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)) ;
  cEnumerator_switchCaseListIR enumerator_9490 (object->mAttribute_mCaseGenerationList, kEnumeration_up) ;
  while (enumerator_9490.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_9490.current_mCaseInstructionList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 222)) ;
    enumerator_9490.gotoNextObject () ;
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
                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                       const GALGAS_location constinArgument_inErrorLocation,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 20)).getter_kind (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 20)).getter_isArrayType (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 20)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_handleSubscriptArrayInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inErrorLocation, ioArgument_ioInstructionGenerationList, ioArgument_ioObjectPtr, inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = ioArgument_ioObjectPtr.getter_isRegisterReference (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 37)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_handleSubscriptRegisterArrayInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inErrorLocation, ioArgument_ioInstructionGenerationList, ioArgument_ioObjectPtr, inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 38)) ;
      }
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the receiver is not an array and does not accept subscripting"), fixItArray2  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 55)) ;
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
                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                                            const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                            const GALGAS_location constinArgument_inErrorLocation,
                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                            GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_type_3072 ;
  GALGAS_bigint var_arraySize_3100 ;
  extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 78)).getter_kind (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 78)).method_arrayType (var_type_3072, var_arraySize_3100, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 78)) ;
  GALGAS_objectIR var_indexResult_3651 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 85)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResult_3651, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 80)) ;
  const enumGalgasBool test_0 = var_indexResult_3651.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 95)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_3782 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_3750_1 ; // Joker input parameter
    var_indexResult_3651.method_literalInteger (joker_3750_1, var_indexValue_3782, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 96)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_3782.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 97)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_3782.objectCompare (var_arraySize_3100)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_3100.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 98)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 98)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_result_3965 = GALGAS_objectIR::constructor_temporaryReference (var_type_3072, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 102)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 102)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 103)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 100)) ;
      ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 106)) ;
      {
      extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_result_3965, ioArgument_ioObjectPtr, GALGAS_string ("[").add_operation (var_indexValue_3782.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 110)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 110)), var_indexValue_3782.getter_uint (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)) ;
      }
      ioArgument_ioObjectPtr = var_result_3965 ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_kind (var_indexResult_3651, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 115)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 115)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 116)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_4667 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_3651, constinArgument_inErrorLocation, var_arraySize_3100, var_generatePanicInstruction_4667, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 117)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_4667 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 123)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 123)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 124)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
      GALGAS_objectIR var_result_4870 = GALGAS_objectIR::constructor_temporaryReference (var_type_3072, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 129)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 129)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 130)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 127)) ;
      ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 133)) ;
      {
      extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_result_4870, ioArgument_ioObjectPtr, GALGAS_string ("[").add_operation (extensionGetter_name (var_indexResult_3651, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 137)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 137)), extensionGetter_llvmName (var_indexResult_3651, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 134)) ;
      }
      ioArgument_ioObjectPtr = var_result_4870 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 142)) ;
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
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                    const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                                    const GALGAS_location constinArgument_inErrorLocation,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_registerType_6308 ;
  GALGAS_lstring var_registerName_6338 ;
  GALGAS_bool var_readable_6365 ;
  GALGAS_bool var_writable_6392 ;
  GALGAS_bigint var_registerAddress_6433 ;
  GALGAS_sliceMap var_registerBitSliceMap_6477 ;
  GALGAS_uint var_arraySize_6512 ;
  GALGAS_uint var_elementArraySize_6576 ;
  ioArgument_ioObjectPtr.method_registerReference (var_registerType_6308, var_registerName_6338, var_readable_6365, var_writable_6392, var_registerAddress_6433, var_registerBitSliceMap_6477, var_arraySize_6512, var_elementArraySize_6576, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 164)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_arraySize_6512.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register is not an array and does not support subscripting"), fixItArray1  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 175)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_readable_6365.operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 176)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register cannot be read in this context"), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 177)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_indexResult_7393 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 184)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResult_7393, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 179)) ;
      const enumGalgasBool test_4 = var_indexResult_7393.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 195)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_bigint var_indexValue_7557 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_7525_1 ; // Joker input parameter
        var_indexResult_7393.method_literalInteger (joker_7525_1, var_indexValue_7557, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 196)) ;
        GALGAS_bool test_5 = GALGAS_bool (kIsStrictInf, var_indexValue_7557.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 197)))) ;
        if (kBoolTrue != test_5.boolEnum ()) {
          test_5 = GALGAS_bool (kIsSupOrEqual, var_indexValue_7557.objectCompare (var_arraySize_6512.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 197)))) ;
        }
        const enumGalgasBool test_6 = test_5.boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_6512.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 198)), fixItArray7  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 198)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_6) {
          ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_registerReference (var_registerType_6308, var_registerName_6338, var_readable_6365, var_writable_6392, var_registerAddress_6433.add_operation (var_indexValue_7557.multiply_operation (var_elementArraySize_6576.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 205)), var_registerBitSliceMap_6477, GALGAS_uint ((uint32_t) 0U), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 200)) ;
        }
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_8 = extensionGetter_kind (var_indexResult_7393, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 212)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 212)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 213)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_bool var_generatePanicInstruction_8374 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_7393, constinArgument_inErrorLocation, var_arraySize_6512.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 217)), var_generatePanicInstruction_8374, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 214)) ;
            }
            GALGAS_bool test_10 = var_generatePanicInstruction_8374 ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 220)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 220)) ;
            }
            const enumGalgasBool test_11 = test_10.boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generated panic"), fixItArray12  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 221)) ;
            }
          }
          GALGAS_objectIR var_registerAddressObject_8589 = GALGAS_objectIR::constructor_temporaryReference (var_registerType_6308, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 226)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 226)), var_registerBitSliceMap_6477, GALGAS_bool (true)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 224)) ;
          ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 230)) ;
          {
          extensionSetter_appendComputeVolatileRegisterAddressWithSubscript (ioArgument_ioInstructionGenerationList, var_registerAddressObject_8589, var_indexResult_7393, var_registerAddress_6433, var_elementArraySize_6576.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 231)) ;
          }
          ioArgument_ioObjectPtr = var_registerAddressObject_8589 ;
        }else if (kBoolFalse == test_8) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray13  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 239)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


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
  const enumGalgasBool test_0 = constinArgument_inObject.getter_isProperty (SOURCE_FILE ("assignment-target.galgas", 199)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_7870 ;
    GALGAS_lstring var_name_7888 ;
    GALGAS_uint var_index_7905 ;
    constinArgument_inObject.method_property (var_type_7870, var_name_7888, var_index_7905, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 200)) ;
    outArgument_outObjectPtr = GALGAS_objectIR::constructor_temporaryReference (var_type_7870, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("assignment-target.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 203)), var_name_7888.getter_location (SOURCE_FILE ("assignment-target.galgas", 203))  COMMA_SOURCE_FILE ("assignment-target.galgas", 203)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("assignment-target.galgas", 204)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("assignment-target.galgas", 201)) ;
    ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 207)) ;
    {
    extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, outArgument_outObjectPtr, constinArgument_inSelfType, var_name_7888.getter_string (SOURCE_FILE ("assignment-target.galgas", 211)), var_index_7905, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 208)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("assignment-target.galgas", 215)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("assignment-target.galgas", 215)) ;
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
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObject, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 227)).getter_kind (inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 227)).getter_isStructure (SOURCE_FILE ("assignment-target.galgas", 227)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_structureObjectMap_8782 ;
    GALGAS_propertyList joker_8784_1 ; // Joker input parameter
    extensionGetter_type (ioArgument_ioObject, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 228)).getter_kind (inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 228)).method_structure (var_structureObjectMap_8782, joker_8784_1, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 228)) ;
    const enumGalgasBool test_1 = var_structureObjectMap_8782.getter_hasKey (constinArgument_inPropertyName.getter_string (SOURCE_FILE ("assignment-target.galgas", 229)) COMMA_SOURCE_FILE ("assignment-target.galgas", 229)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_property_8918 ;
      GALGAS_bool joker_8897 ; // Joker input parameter
      GALGAS_uint joker_8920 ; // Joker input parameter
      var_structureObjectMap_8782.method_searchKey (constinArgument_inPropertyName, joker_8897, var_property_8918, joker_8920, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 230)) ;
      const enumGalgasBool test_2 = var_property_8918.getter_isProperty (SOURCE_FILE ("assignment-target.galgas", 231)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_proxy var_type_9000 ;
        GALGAS_lstring var_name_9018 ;
        GALGAS_uint var_index_9035 ;
        var_property_8918.method_property (var_type_9000, var_name_9018, var_index_9035, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 232)) ;
        GALGAS_objectIR var_newObject_9058 = GALGAS_objectIR::constructor_temporaryReference (var_type_9000, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("assignment-target.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 235)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("assignment-target.galgas", 235))  COMMA_SOURCE_FILE ("assignment-target.galgas", 235)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("assignment-target.galgas", 236)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("assignment-target.galgas", 233)) ;
        ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 239)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_9058, ioArgument_ioObject, var_name_9018.getter_string (SOURCE_FILE ("assignment-target.galgas", 243)), var_index_9035.getter_string (SOURCE_FILE ("assignment-target.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 240)) ;
        }
        ioArgument_ioObject = var_newObject_9058 ;
      }else if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("assignment-target.galgas", 248)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray3  COMMA_SOURCE_FILE ("assignment-target.galgas", 248)) ;
        ioArgument_ioObject.drop () ; // Release error dropped variable
      }
    }else if (kBoolFalse == test_1) {
      ioArgument_ioObject = GALGAS_objectIR::constructor_possibleFunction (ioArgument_ioObject, constinArgument_inPropertyName  COMMA_SOURCE_FILE ("assignment-target.galgas", 251)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("assignment-target.galgas", 254)), GALGAS_string ("the current object has no property"), fixItArray4  COMMA_SOURCE_FILE ("assignment-target.galgas", 254)) ;
    ioArgument_ioObject.drop () ; // Release error dropped variable
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
                                 GALGAS_variableMap & outArgument_outVariableMap,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outVariableMap.drop () ; // Release 'out' argument
  outArgument_outVariableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 14)) ;
  cEnumerator_moduleMap enumerator_974 (constinArgument_inContext.mAttribute_mModuleMap, kEnumeration_up) ;
  while (enumerator_974.hasCurrentObject ()) {
    GALGAS_lstring var_moduleTypeName_1000 = GALGAS_lstring::constructor_new (enumerator_974.current_lkey (HERE).mAttribute_string.add_operation (GALGAS_string ("$"), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 17)), enumerator_974.current_lkey (HERE).mAttribute_location  COMMA_SOURCE_FILE ("variable-map.galgas", 17)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_moduleType_1082 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, var_moduleTypeName_1000, inCompiler  COMMA_SOURCE_FILE ("variable-map.galgas", 18)) ;
    {
    outArgument_outVariableMap.setter_insertModule (enumerator_974.current_lkey (HERE), var_moduleType_1082, GALGAS_bool (false), GALGAS_objectIR::constructor_globalVariableReference (var_moduleType_1082, enumerator_974.current_lkey (HERE)  COMMA_SOURCE_FILE ("variable-map.galgas", 23)), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 19)) ;
    }
    enumerator_974.gotoNextObject () ;
  }
  cEnumerator_controlRegisterMap enumerator_1574 (constinArgument_inContext.mAttribute_mControlRegisterMap, kEnumeration_up) ;
  while (enumerator_1574.hasCurrentObject ()) {
    const enumGalgasBool test_0 = extensionGetter_controlRegisterAccess (constinArgument_inRequiredMode, enumerator_1574.current (HERE).mAttribute_mIsAccessibleInUserMode, inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 30)).operator_not (SOURCE_FILE ("variable-map.galgas", 30)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_objectIR var_objectReference_1692 = GALGAS_objectIR::constructor_registerReference (enumerator_1574.current (HERE).mAttribute_mType, enumerator_1574.current (HERE).mAttribute_lkey, GALGAS_bool (false), GALGAS_bool (false), enumerator_1574.current (HERE).mAttribute_mAddress, enumerator_1574.current (HERE).mAttribute_mRegisterFieldAccessMap, enumerator_1574.current (HERE).mAttribute_mArraySize, enumerator_1574.current (HERE).mAttribute_mElementArraySize  COMMA_SOURCE_FILE ("variable-map.galgas", 31)) ;
      {
      outArgument_outVariableMap.setter_insertInaccessibleControlRegister (enumerator_1574.current (HERE).mAttribute_lkey, enumerator_1574.current (HERE).mAttribute_mType, GALGAS_bool (false), var_objectReference_1692, GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 41)) ;
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_bool test_1 = enumerator_1574.current (HERE).mAttribute_mIsReadOnly ;
      if (kBoolTrue != test_1.boolEnum ()) {
        test_1 = inArgument_inGlobalsAreConstant ;
      }
      const enumGalgasBool test_2 = test_1.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_objectIR var_objectReference_2433 = GALGAS_objectIR::constructor_registerReference (enumerator_1574.current (HERE).mAttribute_mType, enumerator_1574.current (HERE).mAttribute_lkey, GALGAS_bool (true), GALGAS_bool (false), enumerator_1574.current (HERE).mAttribute_mAddress, enumerator_1574.current (HERE).mAttribute_mRegisterFieldAccessMap, enumerator_1574.current (HERE).mAttribute_mArraySize, enumerator_1574.current (HERE).mAttribute_mElementArraySize  COMMA_SOURCE_FILE ("variable-map.galgas", 50)) ;
        {
        outArgument_outVariableMap.setter_insertUsedConstant (enumerator_1574.current (HERE).mAttribute_lkey, enumerator_1574.current (HERE).mAttribute_mType, GALGAS_bool (true), var_objectReference_2433, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 60)) ;
        }
      }else if (kBoolFalse == test_2) {
        GALGAS_objectIR var_objectReference_3105 = GALGAS_objectIR::constructor_registerReference (enumerator_1574.current (HERE).mAttribute_mType, enumerator_1574.current (HERE).mAttribute_lkey, GALGAS_bool (true), GALGAS_bool (true), enumerator_1574.current (HERE).mAttribute_mAddress, enumerator_1574.current (HERE).mAttribute_mRegisterFieldAccessMap, enumerator_1574.current (HERE).mAttribute_mArraySize, enumerator_1574.current (HERE).mAttribute_mElementArraySize  COMMA_SOURCE_FILE ("variable-map.galgas", 69)) ;
        {
        outArgument_outVariableMap.setter_insertDefinedVariable (enumerator_1574.current (HERE).mAttribute_lkey, enumerator_1574.current (HERE).mAttribute_mType, GALGAS_bool (true), var_objectReference_3105, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 79)) ;
        }
      }
    }
    enumerator_1574.gotoNextObject () ;
  }
  cEnumerator_globalConstantMap enumerator_7636 (constinArgument_inContext.mAttribute_mGlobalConstantMap, kEnumeration_up) ;
  while (enumerator_7636.hasCurrentObject ()) {
    {
    outArgument_outVariableMap.setter_insertUsedConstant (enumerator_7636.current_lkey (HERE), extensionGetter_type (enumerator_7636.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 201)), GALGAS_bool (true), enumerator_7636.current_mValue (HERE), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 199)) ;
    }
    enumerator_7636.gotoNextObject () ;
  }
  cEnumerator_globalVariableMap enumerator_8031 (constinArgument_inContext.mAttribute_mGlobalVariableMap, kEnumeration_up) ;
  while (enumerator_8031.hasCurrentObject ()) {
    GALGAS_bool var_writeAccess_8054 = enumerator_8031.current (HERE).mAttribute_allowedAccessToAll ;
    GALGAS_bool var_allowedAccess_8106 = var_writeAccess_8054 ;
    GALGAS_bool test_3 = inArgument_inGlobalsAreConstant ;
    if (kBoolTrue != test_3.boolEnum ()) {
      test_3 = enumerator_8031.current (HERE).mAttribute_isConstant ;
    }
    GALGAS_bool test_4 = test_3 ;
    if (kBoolTrue != test_4.boolEnum ()) {
      test_4 = var_writeAccess_8054.operator_not (SOURCE_FILE ("variable-map.galgas", 212)) ;
    }
    const enumGalgasBool test_5 = test_4.boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      outArgument_outVariableMap.setter_insertUsedConstant (enumerator_8031.current (HERE).mAttribute_lkey, enumerator_8031.current (HERE).mAttribute_type, var_allowedAccess_8106, GALGAS_objectIR::constructor_globalVariableReference (enumerator_8031.current (HERE).mAttribute_type, enumerator_8031.current (HERE).mAttribute_lkey  COMMA_SOURCE_FILE ("variable-map.galgas", 217)), enumerator_8031.current (HERE).mAttribute_type.getter_copyable (inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 218)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 213)) ;
      }
    }else if (kBoolFalse == test_5) {
      {
      outArgument_outVariableMap.setter_insertDefinedVariable (enumerator_8031.current (HERE).mAttribute_lkey, enumerator_8031.current (HERE).mAttribute_type, var_allowedAccess_8106, GALGAS_objectIR::constructor_globalVariableReference (enumerator_8031.current (HERE).mAttribute_type, enumerator_8031.current (HERE).mAttribute_lkey  COMMA_SOURCE_FILE ("variable-map.galgas", 226)), enumerator_8031.current (HERE).mAttribute_type.getter_copyable (inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 227)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 222)) ;
      }
    }
    enumerator_8031.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_lstring var_resultVarName_9002 = GALGAS_lstring::constructor_new (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 234)), constinArgument_inReturnTypeName.mAttribute_location  COMMA_SOURCE_FILE ("variable-map.galgas", 234)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_resultType_9096 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("variable-map.galgas", 235)) ;
    {
    outArgument_outVariableMap.setter_insertOutputFormalArgument (var_resultVarName_9002, var_resultType_9096, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_resultType_9096, var_resultVarName_9002  COMMA_SOURCE_FILE ("variable-map.galgas", 240)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 236)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'variableMapWithConstants'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_variableMapWithConstants (const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_variableMap & outArgument_outVariableMap,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outVariableMap.drop () ; // Release 'out' argument
  outArgument_outVariableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 253)) ;
  cEnumerator_globalConstantMap enumerator_9803 (constinArgument_inContext.mAttribute_mGlobalConstantMap, kEnumeration_up) ;
  while (enumerator_9803.hasCurrentObject ()) {
    {
    outArgument_outVariableMap.setter_insertUsedConstant (enumerator_9803.current_lkey (HERE), extensionGetter_type (enumerator_9803.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 258)), GALGAS_bool (true), enumerator_9803.current_mValue (HERE), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 256)) ;
    }
    enumerator_9803.gotoNextObject () ;
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
  outArgument_outTempVariable = GALGAS_objectIR::constructor_llvmTemporaryValue (constinArgument_inType, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("variable-map.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("variable-map.galgas", 277)), inArgument_inErrorLocation  COMMA_SOURCE_FILE ("variable-map.galgas", 277)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("variable-map.galgas", 278))  COMMA_SOURCE_FILE ("variable-map.galgas", 275)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("variable-map.galgas", 280)) ;
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
  cEnumerator_declarationListAST enumerator_1668 (constinArgument_inAST.mAttribute_mDeclarationListAST, kEnumeration_up) ;
  while (enumerator_1668.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclaration *) enumerator_1668.current_mDeclaration (HERE).ptr (), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 30)) ;
    enumerator_1668.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mBootListAST, var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 32)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mInitListAST, var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 33)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mPanicClauseListAST, var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 34)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mProcedureListAST, var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 35)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mExternProcListAST, var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 36)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mStandAloneSVCListAST, var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 37)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mGuardListAST, var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mControlRegisterDeclarationListAST, var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 39)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mGlobalVarDeclarationListAST, var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 40)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.mAttribute_mTaskListAST, var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 41)) ;
  cEnumerator_stringlist enumerator_2611 (var_precedenceGraph_1616.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 43)), kEnumeration_up) ;
  while (enumerator_2611.hasCurrentObject ()) {
    GALGAS_stringlist var_split_2628 = enumerator_2611.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("int") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 44)) ;
    GALGAS_bool test_0 = GALGAS_bool (kIsEqual, var_split_2628.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 45)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = var_split_2628.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 45)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 45)) ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_split_2628.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 46)).objectCompare (GALGAS_string ("$u"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_n_2823 = var_split_2628.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)) ;
        GALGAS_integerDeclaration var_declaration_2898 = GALGAS_integerDeclaration::constructor_new (GALGAS_bool (false), var_n_2823  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)) ;
        callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclaration *) var_declaration_2898.ptr (), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_split_2628.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 50)).objectCompare (GALGAS_string ("$"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_uint var_n_3062 = var_split_2628.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)) ;
          GALGAS_integerDeclaration var_declaration_3137 = GALGAS_integerDeclaration::constructor_new (GALGAS_bool (true), var_n_3062  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)) ;
          callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclaration *) var_declaration_3137.ptr (), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 53)) ;
        }
      }
    }
    enumerator_2611.gotoNextObject () ;
  }
  GALGAS_bool test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 58)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = GALGAS_bool (gOption_plm_5F_options_writeDeclarationDependencyGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_s_3446 = var_precedenceGraph_1616.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 59)) ;
    GALGAS_string var_filePath_3492 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 60)) ;
    GALGAS_bool joker_3590 ; // Joker input parameter
    var_s_3446.method_writeToFileWhenDifferentContents (var_filePath_3492, joker_3590, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 61)) ;
  }
  outArgument_outDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 64)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_precedenceGraph_1616.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 65)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    cEnumerator_lstringlist enumerator_3812 (var_precedenceGraph_1616.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 66)), kEnumeration_up) ;
    while (enumerator_3812.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (enumerator_3812.current_mValue (HERE).getter_location (SOURCE_FILE ("ordered-declaration-list.galgas", 67)), enumerator_3812.current_mValue (HERE).mAttribute_string.add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 67)), fixItArray7  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 67)) ;
      enumerator_3812.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_6) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_4026 ;
    GALGAS_lstringlist joker_3959 ; // Joker input parameter
    GALGAS_lstringlist joker_4034 ; // Joker input parameter
    var_precedenceGraph_1616.method_topologicalSort (outArgument_outDeclarationListAST, joker_3959, var_unsortedSemanticDeclarationListAST_4026, joker_4034, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 70)) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_4026.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 76)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_s_4113 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_4026.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 78)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 77)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 78)) ;
      cEnumerator_declarationListAST enumerator_4328 (var_unsortedSemanticDeclarationListAST_4026, kEnumeration_up) ;
      while (enumerator_4328.hasCurrentObject ()) {
        var_s_4113.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclaration *) enumerator_4328.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)) ;
        enumerator_4328.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_4113, fixItArray9  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)) ;
      cEnumerator_declarationListAST enumerator_4500 (var_unsortedSemanticDeclarationListAST_4026, kEnumeration_up) ;
      while (enumerator_4500.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_abstractDeclaration *) enumerator_4500.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)), GALGAS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclaration *) enumerator_4500.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)), fixItArray10  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)) ;
        enumerator_4500.gotoNextObject () ;
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
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 236)) ;
  cEnumerator_initList enumerator_9692 (constinArgument_inAST.mAttribute_mInitListAST, kEnumeration_up) ;
  while (enumerator_9692.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_9692.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 239)) ;
    enumerator_9692.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_9837 (constinArgument_inAST.mAttribute_mPanicClauseListAST, kEnumeration_up) ;
  while (enumerator_9837.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_9837.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 243)) ;
    enumerator_9837.gotoNextObject () ;
  }
  cEnumerator_declarationListAST enumerator_9958 (constinArgument_inDeclarationListAST, kEnumeration_up) ;
  while (enumerator_9958.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((const cPtr_abstractDeclaration *) enumerator_9958.current_mDeclaration (HERE).ptr (), constinArgument_inAST.mAttribute_mProcedureListAST, outArgument_outSemanticContext, ioArgument_ioStaticListValueMap, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 247)) ;
    enumerator_9958.gotoNextObject () ;
  }
  cEnumerator_staticlistValues_5F_listMap enumerator_10283 (ioArgument_ioStaticListValueMap, kEnumeration_up) ;
  while (enumerator_10283.hasCurrentObject ()) {
    GALGAS_lstring var_lkey_10299 = GALGAS_lstring::constructor_new (enumerator_10283.current_key (HERE), GALGAS_location::constructor_nowhere (SOURCE_FILE ("context.galgas", 256))  COMMA_SOURCE_FILE ("context.galgas", 256)) ;
    GALGAS_lstring var_elementTypePLMName_10358 = function_plmNameForStaticListElementType (var_lkey_10299, inCompiler COMMA_SOURCE_FILE ("context.galgas", 257)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_elementType_10420 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (outArgument_outSemanticContext.mAttribute_mTypeMap, var_elementTypePLMName_10358, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 258)) ;
    {
    outArgument_outSemanticContext.mAttribute_mTypeMap.setter_insertType (function_plmNameForStaticListType (var_lkey_10299, inCompiler COMMA_SOURCE_FILE ("context.galgas", 260)), function_llvmNameForStaticListType (enumerator_10283.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 261)), GALGAS_typeKind::constructor_arrayType (var_elementType_10420, enumerator_10283.current_mList (HERE).getter_length (SOURCE_FILE ("context.galgas", 262)).getter_bigint (SOURCE_FILE ("context.galgas", 262))  COMMA_SOURCE_FILE ("context.galgas", 262)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("context.galgas", 263)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), var_elementType_10420, inCompiler COMMA_SOURCE_FILE ("context.galgas", 259)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_staticListType_10916 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (outArgument_outSemanticContext.mAttribute_mTypeMap, function_plmNameForStaticListType (var_lkey_10299, inCompiler COMMA_SOURCE_FILE ("context.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 270)) ;
    {
    outArgument_outSemanticContext.mAttribute_mGlobalConstantMap.setter_insertKey (var_lkey_10299, GALGAS_objectIR::constructor_globalVariableReference (var_staticListType_10916, var_lkey_10299  COMMA_SOURCE_FILE ("context.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 271)) ;
    }
    enumerator_10283.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.mAttribute_mGlobalConstantMap, constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 277)) ;
  }
  {
  routine_enterControlRegistersInContext (constinArgument_inAST.mAttribute_mControlRegisterDeclarationListAST, outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 282)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.mAttribute_mControlRegisterMap, constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 287)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mISRDeclarationListAST, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 292)) ;
  extensionMethod_enterFunctionInContext (constinArgument_inAST.mAttribute_mProcedureListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 293)) ;
  extensionMethod_enterExternProcInContext (constinArgument_inAST.mAttribute_mExternProcListAST, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 294)) ;
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mStandAloneSVCListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 295)) ;
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mGuardListAST, GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 296)) ;
  extensionMethod_enterInContext (constinArgument_inAST.mAttribute_mTaskListAST, outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 298)) ;
  cEnumerator_declarationListAST enumerator_12323 (constinArgument_inDeclarationListAST, kEnumeration_up) ;
  while (enumerator_12323.hasCurrentObject ()) {
    callExtensionMethod_enterRoutinesInContext ((const cPtr_abstractDeclaration *) enumerator_12323.current_mDeclaration (HERE).ptr (), constinArgument_inAST.mAttribute_mProcedureListAST, outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 301)) ;
    enumerator_12323.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("context.galgas", 308)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    cEnumerator_globalVarDeclarationList enumerator_12640 (constinArgument_inAST.mAttribute_mGlobalVarDeclarationListAST, kEnumeration_up) ;
    while (enumerator_12640.hasCurrentObject ()) {
      extensionMethod_enterInContext (enumerator_12640.current (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 310)) ;
      enumerator_12640.gotoNextObject () ;
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
  result_outResult = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 321)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("context.galgas", 321)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 321)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 321)).getter_nowhere (SOURCE_FILE ("context.galgas", 321)) ;
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
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 67)) ;
  outArgument_outIntermediateCodeStruct.mAttribute_mTargetParameters = constinArgument_inSemanticContext.mAttribute_mTargetParameters ;
  outArgument_outIntermediateCodeStruct.mAttribute_mStaticStringMap = constinArgument_inGlobalLiteralStringMap ;
  outArgument_outIntermediateCodeStruct.mAttribute_mGlobalTaskVariableList = constinArgument_inSemanticContext.mAttribute_mGlobalTaskVariableList ;
  cEnumerator_requiredProcedureDeclarationListAST enumerator_3486 (constinArgument_inAST.mAttribute_mRequiredProcListAST, kEnumeration_up) ;
  while (enumerator_3486.hasCurrentObject ()) {
    outArgument_outIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.addAssign_operation (enumerator_3486.current (HERE).mAttribute_mRequiredProcedureName.mAttribute_string  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 72)) ;
    enumerator_3486.gotoNextObject () ;
  }
  cEnumerator_globalVarDeclarationList enumerator_3671 (constinArgument_inAST.mAttribute_mGlobalVarDeclarationListAST, kEnumeration_up) ;
  while (enumerator_3671.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_3671.current (HERE), constinArgument_inSemanticContext, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 76)) ;
    enumerator_3671.gotoNextObject () ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_3849 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 82)) ;
  cEnumerator_declarationListAST enumerator_3909 (constinArgument_inAST.mAttribute_mDeclarationListAST, kEnumeration_up) ;
  while (enumerator_3909.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((const cPtr_abstractDeclaration *) enumerator_3909.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_3849, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 84)) ;
    enumerator_3909.gotoNextObject () ;
  }
  extensionMethod_procedureSemanticAnalysis (constinArgument_inAST.mAttribute_mProcedureListAST, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 91)), constinArgument_inSemanticContext, var_temporaries_3849, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 90)) ;
  extensionMethod_semanticAnalysis (constinArgument_inAST.mAttribute_mTaskListAST, constinArgument_inSemanticContext, var_temporaries_3849, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 96)) ;
  extensionMethod_svcSemanticAnalysis (constinArgument_inAST.mAttribute_mStandAloneSVCListAST, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 102)), constinArgument_inSemanticContext, var_temporaries_3849, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 101)) ;
  extensionMethod_guardSemanticAnalysis (constinArgument_inAST.mAttribute_mGuardListAST, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 108)), constinArgument_inSemanticContext, var_temporaries_3849, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 107)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.mAttribute_mExternProcListAST, constinArgument_inSemanticContext, var_temporaries_3849, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 113)) ;
  extensionMethod_isrSemanticAnalysis (constinArgument_inAST.mAttribute_mISRDeclarationListAST, constinArgument_inSemanticContext, var_temporaries_3849, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 118)) ;
  cEnumerator_bootList enumerator_5150 (constinArgument_inAST.mAttribute_mBootListAST, kEnumeration_up) ;
  while (enumerator_5150.hasCurrentObject ()) {
    extensionMethod_bootSemanticAnalysis (enumerator_5150.current (HERE), constinArgument_inSemanticContext, var_temporaries_3849, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 124)) ;
    enumerator_5150.gotoNextObject () ;
  }
  cEnumerator_initList enumerator_5343 (constinArgument_inAST.mAttribute_mInitListAST, kEnumeration_up) ;
  while (enumerator_5343.hasCurrentObject ()) {
    extensionMethod_initSemanticAnalysis (enumerator_5343.current (HERE), constinArgument_inSemanticContext, var_temporaries_3849, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 131)) ;
    enumerator_5343.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_5572 (constinArgument_inAST.mAttribute_mPanicClauseListAST, kEnumeration_up) ;
  while (enumerator_5572.hasCurrentObject ()) {
    extensionMethod_panicSemanticAnalysis (enumerator_5572.current (HERE), constinArgument_inSemanticContext, var_temporaries_3849, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 139)) ;
    enumerator_5572.gotoNextObject () ;
  }
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 146)) ;
  }
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 152)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_writeRoutineInvocationGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_s_6037 = var_temporaries_3849.mAttribute_mSubprogramInvocationGraph.getter_graphviz (SOURCE_FILE ("semantic-analysis.galgas", 153)) ;
    GALGAS_string var_filePath_6106 = constinArgument_inSourceFile.getter_stringByDeletingPathExtension (SOURCE_FILE ("semantic-analysis.galgas", 154)).add_operation (GALGAS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 154)) ;
    GALGAS_bool joker_6232 ; // Joker input parameter
    var_s_6037.method_writeToFileWhenDifferentContents (var_filePath_6106, joker_6232, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 155)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 158)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = GALGAS_bool (gOption_plm_5F_options_doNotDetectRecursiveCalls.getter_value ()).operator_not (SOURCE_FILE ("semantic-analysis.galgas", 158)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_stringlist var_undefinedNodeKeyList_6401 = var_temporaries_3849.mAttribute_mSubprogramInvocationGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("semantic-analysis.galgas", 159)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_undefinedNodeKeyList_6401.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 160)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_s_6525 = GALGAS_string ("subprogram invocation graph error, undefined nodes:") ;
      cEnumerator_stringlist enumerator_6623 (var_undefinedNodeKeyList_6401, kEnumeration_up) ;
      while (enumerator_6623.hasCurrentObject ()) {
        var_s_6525.plusAssign_operation(GALGAS_string ("\n"
          " - ").add_operation (enumerator_6623.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 163)) ;
        enumerator_6623.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_6525, fixItArray5  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 165)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_lstringlist var_unsortedInformationList_6830 ;
      GALGAS_lstringlist var_unsortedLKeyList_6874 ;
      var_temporaries_3849.mAttribute_mSubprogramInvocationGraph.method_circularities (var_unsortedInformationList_6830, var_unsortedLKeyList_6874 COMMA_SOURCE_FILE ("semantic-analysis.galgas", 167)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_unsortedLKeyList_6874.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 171)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_s_6940 = GALGAS_string ("the following routines are recursive:") ;
        cEnumerator_lstringlist enumerator_7020 (var_unsortedLKeyList_6874, kEnumeration_up) ;
        while (enumerator_7020.hasCurrentObject ()) {
          var_s_6940.plusAssign_operation(GALGAS_string ("\n"
            " - ").add_operation (enumerator_7020.current_mValue (HERE).getter_string (SOURCE_FILE ("semantic-analysis.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 174)) ;
          enumerator_7020.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_6940, fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 176)) ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 201)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, extensionGetter_type (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 202)).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 202)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("call void"), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 203)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 205)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 205)).add_operation (extensionGetter_llvmTypeName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 205)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @"), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 207)) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_calleeKindIR::kNotBuilt:
    break ;
  case GALGAS_calleeKindIR::kEnum_function:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForFunction (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 210)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_serviceFromProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForServiceCall (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 212)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_serviceFromProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForServiceImplementation (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 214)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_sectionFromProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSectionCall (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 216)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_sectionFromProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSectionImplementation (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 218)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_primitiveFromProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForPrimitiveCall (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 220)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_primitiveFromProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForPrimitiveImplementation (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 222)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_safeFromProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSafeCall (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 224)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_safeFromProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSafeImplementation (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 226)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 228)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_9184 (object->mAttribute_mArgumentList, kEnumeration_up) ;
  while (enumerator_9184.hasCurrentObject ()) {
    switch (enumerator_9184.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9184.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 232)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 232)).add_operation (extensionGetter_llvmName (enumerator_9184.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 232)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9184.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 234)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 234)).add_operation (extensionGetter_llvmName (enumerator_9184.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 234)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9184.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 236)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 236)).add_operation (extensionGetter_llvmName (enumerator_9184.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 236)) ;
      }
      break ;
    }
    if (enumerator_9184.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 239)) ;
    }
    enumerator_9184.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 241)) ;
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
    ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mGlobalVariableName  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 251)) ;
  }
  ioArgument_ioAccessibleEntities.mAttribute_mRoutineSet.addAssign_operation (object->mAttribute_mFunctionMangledName.mAttribute_string  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 253)) ;
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
                                   const GALGAS_procFormalArgumentList constinArgument_inFormalArgumentPassingMode,
                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                   GALGAS_procFormalArgumentListForGeneration & ioArgument_ioFormalArguments,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_procFormalArgumentList enumerator_1234 (constinArgument_inFormalArgumentPassingMode, kEnumeration_up) ;
  while (enumerator_1234.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_1255 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, enumerator_1234.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 26)) ;
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_1234.current_mFormalArgumentPassingMode (HERE), var_typeProxy_1255, enumerator_1234.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semantic-routines.galgas", 27)) ;
    switch (enumerator_1234.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        {
        ioArgument_ioVariableMap.setter_insertConstantInputFormalArgument (enumerator_1234.current_mFormalArgumentName (HERE), var_typeProxy_1255, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_typeProxy_1255, enumerator_1234.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 34)), var_typeProxy_1255.getter_copyable (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 35)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 30)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        {
        ioArgument_ioVariableMap.setter_insertInputOutputFormalArgument (enumerator_1234.current_mFormalArgumentName (HERE), var_typeProxy_1255, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_typeProxy_1255, enumerator_1234.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 43)), var_typeProxy_1255.getter_copyable (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 44)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 39)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        ioArgument_ioVariableMap.setter_insertOutputFormalArgument (enumerator_1234.current_mFormalArgumentName (HERE), var_typeProxy_1255, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_typeProxy_1255, enumerator_1234.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 52)), var_typeProxy_1255.getter_copyable (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 53)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 48)) ;
        }
      }
      break ;
    }
    enumerator_1234.gotoNextObject () ;
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
                                      const GALGAS_procFormalArgumentList constinArgument_inRoutineFormalArgumentList,
                                      const GALGAS_lstring constinArgument_inReturnTypeName,
                                      const GALGAS_instructionListAST constinArgument_inRoutineInstructionList,
                                      const GALGAS_location constinArgument_inEndOfRoutineDeclaration,
                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                      const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                      const GALGAS_bool constinArgument_inWarnIfUnused,
                                      const GALGAS_bool constinArgument_inGlobalFunction,
                                      const GALGAS_bool constinArgument_inWeakFunction,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-routines.galgas", 82)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inRoutineName ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (constinArgument_inSelfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 85)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 85)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("semantic-routines.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 85)), constinArgument_inRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("semantic-routines.galgas", 85)) ;
  }
  GALGAS_lstring var_routineMangledName_3507 = temp_0 ;
  var_routineMangledName_3507.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 87)) ;
  cEnumerator_procFormalArgumentList enumerator_3770 (constinArgument_inRoutineFormalArgumentList, kEnumeration_up) ;
  while (enumerator_3770.hasCurrentObject ()) {
    var_routineMangledName_3507.mAttribute_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3770.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 89)).add_operation (enumerator_3770.current_mSelector (HERE).getter_string (SOURCE_FILE ("semantic-routines.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 89)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 89)) ;
    enumerator_3770.gotoNextObject () ;
  }
  var_routineMangledName_3507.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 91)) ;
  GALGAS_variableMap var_variableMap_4185 ;
  {
  routine_initialVariableMap (constinArgument_inContext, constinArgument_inRoutineMode, GALGAS_bool (false), constinArgument_inReturnTypeName, var_variableMap_4185, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 93)) ;
  }
  GALGAS_procFormalArgumentListForGeneration var_formalArguments_4274 = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 103)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_4185, var_formalArguments_4274, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 104)) ;
  }
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineMangledName_3507.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 111)).operator_not (SOURCE_FILE ("semantic-routines.galgas", 111)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_3507, var_routineMangledName_3507, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 112)) ;
    }
  }
  GALGAS_allocaList var_allocaList_4716 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 118)) ;
  GALGAS_instructionListIR var_instructionGenerationList_4768 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 119)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_routineMangledName_3507, constinArgument_inContext, constinArgument_inRoutineMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mAttribute_mStaticStringMap, var_variableMap_4185, var_allocaList_4716, var_instructionGenerationList_4768, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 120)) ;
  var_variableMap_4185.method_checkAutomatonStates (constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 135)) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_3 ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-routines.galgas", 139)) ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 141)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_5463 = temp_3 ;
  const enumGalgasBool test_5 = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_hasKey (var_routineMangledName_3507.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 143)).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_bool var_weak_5721 = ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.getter_mWeakForKey (var_routineMangledName_3507.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 144)) ;
    GALGAS_bool test_6 = constinArgument_inWeakFunction ;
    if (kBoolTrue == test_6.boolEnum ()) {
      test_6 = var_weak_5721.operator_not (SOURCE_FILE ("semantic-routines.galgas", 145)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
    }else if (kBoolFalse == test_7) {
      GALGAS_bool test_8 = constinArgument_inWeakFunction ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = var_weak_5721 ;
      }
      const enumGalgasBool test_9 = test_8.boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (var_routineMangledName_3507.getter_location (SOURCE_FILE ("semantic-routines.galgas", 148)), GALGAS_string ("this weak procedure overrides a weak procedure"), fixItArray10  COMMA_SOURCE_FILE ("semantic-routines.galgas", 148)) ;
      }else if (kBoolFalse == test_9) {
        GALGAS_bool test_11 = constinArgument_inWeakFunction.operator_not (SOURCE_FILE ("semantic-routines.galgas", 149)) ;
        if (kBoolTrue == test_11.boolEnum ()) {
          test_11 = var_weak_5721 ;
        }
        const enumGalgasBool test_12 = test_11.boolEnum () ;
        if (kBoolTrue == test_12) {
          {
          GALGAS_unifiedTypeMap_2D_proxy joker_6130_12 ; // Joker input parameter
          GALGAS_lstring joker_6130_11 ; // Joker input parameter
          GALGAS_procFormalArgumentListForGeneration joker_6130_10 ; // Joker input parameter
          GALGAS_allocaList joker_6130_9 ; // Joker input parameter
          GALGAS_instructionListIR joker_6130_8 ; // Joker input parameter
          GALGAS_bool joker_6130_7 ; // Joker input parameter
          GALGAS_bool joker_6130_6 ; // Joker input parameter
          GALGAS_bool joker_6130_5 ; // Joker input parameter
          GALGAS_bool joker_6130_4 ; // Joker input parameter
          GALGAS_routineKind joker_6130_3 ; // Joker input parameter
          GALGAS_unifiedTypeMap_2D_proxy joker_6130_2 ; // Joker input parameter
          GALGAS_bool joker_6130_1 ; // Joker input parameter
          ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_removeKey (var_routineMangledName_3507, joker_6130_12, joker_6130_11, joker_6130_10, joker_6130_9, joker_6130_8, joker_6130_7, joker_6130_6, joker_6130_5, joker_6130_4, joker_6130_3, joker_6130_2, joker_6130_1, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 150)) ;
          }
          {
          ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_insertKey (var_routineMangledName_3507, constinArgument_inSelfType, var_routineMangledName_3507, var_formalArguments_4274, var_allocaList_4716, var_instructionGenerationList_4768, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.getter_hasKey (var_routineMangledName_3507.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 158)), constinArgument_inWarnIfUnused, constinArgument_inWeakFunction, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType_5463, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 151)) ;
          }
        }else if (kBoolFalse == test_12) {
          {
          ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_insertKey (var_routineMangledName_3507, constinArgument_inSelfType, var_routineMangledName_3507, var_formalArguments_4274, var_allocaList_4716, var_instructionGenerationList_4768, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.getter_hasKey (var_routineMangledName_3507.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 174)), constinArgument_inWarnIfUnused, constinArgument_inWeakFunction, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType_5463, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 167)) ;
          }
        }
      }
    }
  }else if (kBoolFalse == test_5) {
    {
    ioArgument_ioIntermediateCodeStruct.mAttribute_mRoutineMapIR.setter_insertKey (var_routineMangledName_3507, constinArgument_inSelfType, var_routineMangledName_3507, var_formalArguments_4274, var_allocaList_4716, var_instructionGenerationList_4768, ioArgument_ioIntermediateCodeStruct.mAttribute_mRequiredProcedureSet.getter_hasKey (var_routineMangledName_3507.mAttribute_string COMMA_SOURCE_FILE ("semantic-routines.galgas", 191)), constinArgument_inWarnIfUnused, constinArgument_inWeakFunction, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType_5463, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 184)) ;
    }
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

