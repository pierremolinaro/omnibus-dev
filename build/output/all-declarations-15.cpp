#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                        GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 67)) ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 68)) ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 69)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 77)) ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mThenExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 78)) ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_2.readProperty_mElseExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 79)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                     const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                     const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                     const GGS_semanticContext constinArgument_inContext,
                                                     const GGS_mode constinArgument_inMode,
                                                     GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                     GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                     GGS_allocaList & ioArgument_ioAllocaList,
                                                     GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                     GGS_objectIR & outArgument_outResult,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_ifExpressionResult_5046 ;
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResult_5046, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 100)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_ifExpressionResult_5046, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 113)) ;
  }
  GGS_implicitBooleanConversionResult var_ifExpressionConvertedToBoolean_5434 ;
  const GGS_ifExpressionAST temp_1 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_ifExpressionResult_5046, temp_1.readProperty_mIfExpressionEndLocation (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, var_ifExpressionConvertedToBoolean_5434, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 115)) ;
  GGS_objectIR var_thenExpressionTempResult_6038 ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_2.readProperty_mThenExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionTempResult_6038, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 128)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_thenExpressionTempResult_6038, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 141)) ;
  }
  const GGS_ifExpressionAST temp_3 = this ;
  GGS_objectIR var_thenExpressionResult_6187 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_thenExpressionTempResult_6038, constinArgument_inOptionalTargetType, temp_3.readProperty_mThenExpressionEndLocation (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)) ;
  GGS_objectIR var_elseExpressionTempResult_6872 ;
  const GGS_ifExpressionAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mElseExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionTempResult_6872, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 153)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_elseExpressionTempResult_6872, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 166)) ;
  }
  const GGS_ifExpressionAST temp_5 = this ;
  GGS_objectIR var_elseExpressionResult_7021 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_elseExpressionTempResult_6872, extensionGetter_type (var_thenExpressionResult_6187, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 173)), temp_5.readProperty_mElseExpressionEndLocation (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 170)) ;
  switch (var_ifExpressionConvertedToBoolean_5434.enumValue ()) {
  case GGS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GGS_bool extractedValue_7381_boolValue_0 ;
      var_ifExpressionConvertedToBoolean_5434.getAssociatedValuesFor_compileTime (extractedValue_7381_boolValue_0) ;
      GGS_objectIR temp_6 ;
      const GalgasBool test_7 = extractedValue_7381_boolValue_0.boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        temp_6 = var_thenExpressionResult_6187 ;
      }else if (GalgasBool::boolFalse == test_7) {
        temp_6 = var_elseExpressionResult_7021 ;
      }
      outArgument_outResult = temp_6 ;
    }
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    {
      GGS_string extractedValue_7500_testResultVariableName_0 ;
      var_ifExpressionConvertedToBoolean_5434.getAssociatedValuesFor_llvmVariable (extractedValue_7500_testResultVariableName_0) ;
      {
      routine_getNewTempValue_3F__26__21_ (extensionGetter_type (var_elseExpressionResult_7021, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 182)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 182)) ;
      }
      {
      extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extractedValue_7500_testResultVariableName_0, var_thenExpressionResult_6187, var_elseExpressionResult_7021, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 183)) ;
      }
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifInstructionAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mThenInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  const GGS_ifInstructionAST temp_1 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 90)) ;
  const GGS_ifInstructionAST temp_2 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_2.readProperty_mTestExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                const GGS_semanticContext constinArgument_inContext,
                                                                const GGS_mode constinArgument_inMode,
                                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                GGS_allocaList & ioArgument_ioAllocaList,
                                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_testResult_4946 ;
  const GGS_ifInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_0.readProperty_mTestExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 113)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResult_4946, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 110)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResult_4946, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 123)) ;
  }
  GGS_implicitBooleanConversionResult var_booleanResult_5322 ;
  const GGS_ifInstructionAST temp_1 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_testResult_4946, temp_1.readProperty_mTestExpressionEndLocation (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, var_booleanResult_5322, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 128)) ;
  switch (var_booleanResult_5322.enumValue ()) {
  case GGS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GGS_bool extractedValue_5393__0 ;
      var_booleanResult_5322.getAssociatedValuesFor_compileTime (extractedValue_5393__0) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_ifInstructionAST temp_3 = this ;
        test_2 = temp_3.readProperty_mStaticIfExpression ().operator_not (SOURCE_FILE ("instruction-if.galgas", 139)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_ifInstructionAST temp_4 = this ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (temp_4.readProperty_mTestExpressionEndLocation (), GGS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)).add_operation (GGS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
        }
      }
    }
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    {
      GGS_string extractedValue_5591__0 ;
      var_booleanResult_5322.getAssociatedValuesFor_llvmVariable (extractedValue_5591__0) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_ifInstructionAST temp_7 = this ;
        test_6 = temp_7.readProperty_mStaticIfExpression ().boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_ifInstructionAST temp_8 = this ;
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (temp_8.readProperty_mTestExpressionEndLocation (), GGS_string ("'if' expression is not static"), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 144)) ;
        }
      }
    }
    break ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
  }
  GGS_instructionListIR temp_10 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 149)) ;
  GGS_instructionListIR var_thenInstructionGenerationList_5837 = temp_10 ;
  const GGS_ifInstructionAST temp_11 = this ;
  const GGS_ifInstructionAST temp_12 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_11.readProperty_mThenInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_12.readProperty_mEndOfThenInstructionList (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_5837, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 150)) ;
  GGS_instructionListIR temp_13 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 163)) ;
  GGS_instructionListIR var_elseInstructionGenerationList_6342 = temp_13 ;
  const GGS_ifInstructionAST temp_14 = this ;
  const GGS_ifInstructionAST temp_15 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_14.readProperty_mElseInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_15.readProperty_mEndOfElseInstructionList (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_6342, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 164)) ;
  {
  const GGS_ifInstructionAST temp_16 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_16.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 176)) ;
  }
  const GGS_ifInstructionAST temp_17 = this ;
  ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_ifInstructionIR::init_21__21__21__21_ (extensionGetter_llvmName (var_booleanResult_5322, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 179)), temp_17.readProperty_mTestExpressionEndLocation (), var_thenInstructionGenerationList_5837, var_elseInstructionGenerationList_6342, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                       const GGS_generationContext constinArgument_inGenerationContext,
                                                       GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_labelTrue_7916 = GGS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)).add_operation (GGS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)) ;
  GGS_string var_labelFalse_7982 = GGS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).add_operation (GGS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  GGS_string var_labelEnd_8050 = GGS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (GGS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
  const GGS_ifInstructionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (temp_0.readProperty_mLLVMTestName (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelTrue_7916, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelFalse_7982, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelTrue_7916.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  const GGS_ifInstructionIR temp_1 = this ;
  extensionMethod_instructionListLLVMCode (temp_1.readProperty_mThenInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_labelEnd_8050, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 213)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelFalse_7982.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  const GGS_ifInstructionIR temp_2 = this ;
  extensionMethod_instructionListLLVMCode (temp_2.readProperty_mElseInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_labelEnd_8050, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelEnd_8050.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifInstructionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                           GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mThenInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 228)) ;
  const GGS_ifInstructionIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mElseInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 229)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@whileInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_whileInstructionAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 48)) ;
  const GGS_whileInstructionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_m_5F_while_5F_Expression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 49)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@whileInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                   const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                   const GGS_semanticContext constinArgument_inContext,
                                                                   const GGS_mode constinArgument_inMode,
                                                                   GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GGS_allocaList & ioArgument_ioAllocaList,
                                                                   GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListIR temp_0 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 68)) ;
  GGS_instructionListIR var_testInstructionGenerationList_3216 = temp_0 ;
  GGS_objectIR var_testValue_3642 ;
  const GGS_whileInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_m_5F_while_5F_Expression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 72)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_3216, var_testValue_3642, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 69)) ;
  {
  extensionSetter_appendLoadWhenReference (var_testInstructionGenerationList_3216, ioArgument_ioTemporaries, var_testValue_3642, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 82)) ;
  }
  GGS_implicitBooleanConversionResult var_booleanResult_4015 ;
  const GGS_whileInstructionAST temp_2 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_testValue_3642, temp_2.readProperty_mEndOf_5F_test_5F_expression (), ioArgument_ioTemporaries, var_testInstructionGenerationList_3216, ioArgument_ioAllocaList, var_booleanResult_4015, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)) ;
  switch (var_booleanResult_4015.enumValue ()) {
  case GGS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GGS_bool extractedValue_4077__0 ;
      var_booleanResult_4015.getAssociatedValuesFor_compileTime (extractedValue_4077__0) ;
      const GGS_whileInstructionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOf_5F_test_5F_expression (), GGS_string ("test expression type should not be a compile time expression"), fixItArray4  COMMA_SOURCE_FILE ("instruction-while.galgas", 97)) ;
    }
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    break ;
  }
  GGS_instructionListIR temp_5 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 108)) ;
  GGS_instructionListIR var_instructionGenerationList_4605 = temp_5 ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 109)) ;
  }
  const GGS_whileInstructionAST temp_6 = this ;
  const GGS_whileInstructionAST temp_7 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_6.readProperty_mWhileInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_7.readProperty_mEndOf_5F_while_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4605, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 110)) ;
  {
  const GGS_whileInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_8.readProperty_mEndOf_5F_while_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 122)) ;
  }
  const GGS_whileInstructionAST temp_9 = this ;
  ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_whileInstructionIR::init_21__21__21__21_ (temp_9.readProperty_mEndOf_5F_test_5F_expression ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 125)), var_testInstructionGenerationList_3216, extensionGetter_llvmName (var_booleanResult_4015, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 127)), var_instructionGenerationList_4605, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-while.galgas", 124)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@whileInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                          const GGS_generationContext constinArgument_inGenerationContext,
                                                          GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_whileInstructionIR temp_0 = this ;
  GGS_string var_labelTest_6226 = GGS_string ("while.").add_operation (temp_0.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)).add_operation (GGS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)) ;
  const GGS_whileInstructionIR temp_1 = this ;
  GGS_string var_labelLoop_6282 = GGS_string ("while.").add_operation (temp_1.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GGS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  const GGS_whileInstructionIR temp_2 = this ;
  GGS_string var_labelEnd_6338 = GGS_string ("while.").add_operation (temp_2.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)).add_operation (GGS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_labelTest_6226, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelTest_6226.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
  const GGS_whileInstructionIR temp_3 = this ;
  extensionMethod_instructionListLLVMCode (temp_3.readProperty_mTestInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 155)) ;
  const GGS_whileInstructionIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (temp_4.readProperty_m_5F_while_5F_llvmName (), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (var_labelLoop_6282, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (var_labelEnd_6338, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 156)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelLoop_6282.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 157)) ;
  const GGS_whileInstructionIR temp_5 = this ;
  extensionMethod_instructionListLLVMCode (temp_5.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 158)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_labelTest_6226, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelEnd_6338.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 160)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@whileInstructionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_whileInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                              GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_whileInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mTestInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 169)) ;
  const GGS_whileInstructionIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 170)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@panicInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_panicInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mCodeExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 33)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@panicInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                   const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                   const GGS_semanticContext constinArgument_inContext,
                                                                   const GGS_mode constinArgument_inMode,
                                                                   GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GGS_allocaList & ioArgument_ioAllocaList,
                                                                   GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inMode.objectCompare (GGS_mode::class_func_panicMode (SOURCE_FILE ("instruction-panic.galgas", 52)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_panicInstructionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)).add_operation (GGS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)), fixItArray2  COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)) ;
    }
  }
  GGS_instructionListIR temp_3 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 56)) ;
  GGS_instructionListIR var_unusedInstructionListIR_2859 = temp_3 ;
  GGS_objectIR var_result_3272 ;
  const GGS_panicInstructionAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mCodeExpression ().ptr (), constinArgument_inSelfType, GGS_routineAttributes::init (inCompiler COMMA_HERE), constinArgument_inContext.readProperty_mPanicCodeType (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_2859, var_result_3272, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 57)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    GGS_bool test_6 = GGS_bool (ComparisonKind::greaterThan, var_unusedInstructionListIR_2859.getter_count (SOURCE_FILE ("instruction-panic.galgas", 72)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue != test_6.boolEnum ()) {
      test_6 = var_result_3272.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 73)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 73)) ;
    }
    GGS_bool test_7 = test_6 ;
    if (GalgasBool::boolTrue != test_7.boolEnum ()) {
      test_7 = GGS_bool (ComparisonKind::notEqual, extensionGetter_omnibusTypeDescriptionName (var_result_3272, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 74)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 74)))) ;
    }
    test_5 = test_7.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_panicInstructionAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GGS_string ("throw expression should be a literal integer"), fixItArray9  COMMA_SOURCE_FILE ("instruction-panic.galgas", 75)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GGS_bigint var_min_3647 ;
    GGS_bigint var_max_3660 ;
    GGS_bool joker_3664_2 ; // Joker input parameter
    GGS_uint joker_3664_1 ; // Joker input parameter
    constinArgument_inContext.readProperty_mPanicCodeType ().readProperty_kind ().method_extractInteger (var_min_3647, var_max_3660, joker_3664_2, joker_3664_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 77)) ;
    GGS_bigint var_throwValue_3718 ;
    GGS_omnibusType joker_3703_1 ; // Joker input parameter
    var_result_3272.method_extractLiteralInteger (joker_3703_1, var_throwValue_3718, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 78)) ;
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      GGS_bool test_11 = GGS_bool (ComparisonKind::lowerThan, var_throwValue_3718.objectCompare (var_min_3647)) ;
      if (GalgasBool::boolTrue != test_11.boolEnum ()) {
        test_11 = GGS_bool (ComparisonKind::greaterThan, var_throwValue_3718.objectCompare (var_max_3660)) ;
      }
      test_10 = test_11.boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_panicInstructionAST temp_12 = this ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.readProperty_mPanicCodeType ().readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)), fixItArray13  COMMA_SOURCE_FILE ("instruction-panic.galgas", 80)) ;
      }
    }
    if (GalgasBool::boolFalse == test_10) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 82)).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          const GGS_panicInstructionAST temp_15 = this ;
          ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_panicInstructionIR::init_21__21_ (temp_15.readProperty_mInstructionLocation (), var_throwValue_3718, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@panicInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                          const GGS_generationContext constinArgument_inGenerationContext,
                                                          GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_panicInstructionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_0.readProperty_mThrowLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-panic.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)) ;
  const GGS_panicInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (temp_1.readProperty_mThrowLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)) ;
  const GGS_panicInstructionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (temp_2.readProperty_mPanicCode ().getter_string (SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@panicInstructionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                              GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_panicInstructionIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (function_panicRoutineNameForLocationFile (temp_0.readProperty_mThrowLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 118))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@controlRegisterAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterAssignmentInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_controlRegisterAssignmentInstructionAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 59)) ;
  const GGS_controlRegisterAssignmentInstructionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 60)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@controlRegisterAssignmentInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterAssignmentInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                                       const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                       const GGS_semanticContext constinArgument_inContext,
                                                                                       const GGS_mode constinArgument_inMode,
                                                                                       GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                       GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                       GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                       GGS_allocaList & ioArgument_ioAllocaList,
                                                                                       GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_registerType_4197 ;
  GGS_string var_llvmRegAddressName_4283 ;
  const GGS_controlRegisterAssignmentInstructionAST temp_0 = this ;
  GGS_uint joker_4214 ; // Joker input parameter
  GGS_sliceMap joker_4238 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GGS_bool (true), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_registerType_4197, joker_4214, joker_4238, var_llvmRegAddressName_4283, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 79)) ;
  GGS_objectIR var_sourceIR_4743 ;
  const GGS_controlRegisterAssignmentInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_registerType_4197, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceIR_4743, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 96)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceIR_4743, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 110)) ;
  }
  GGS_omnibusType var_t_4946 = extensionGetter_type (var_sourceIR_4743, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 115)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_t_4946.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 116)).operator_not (SOURCE_FILE ("instruction-assignment-control-register.galgas", 116)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_controlRegisterAssignmentInstructionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mControlRegisterLValue ().readProperty_mRegisterGroupName ().readProperty_location (), GGS_string ("source expression is not copyable"), fixItArray4  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 117)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_controlRegisterAssignmentInstructionAST temp_5 = this ;
    switch (temp_5.readProperty_mAssignmentKind ().enumValue ()) {
    case GGS_controlRegisterAssignmentOperatorKind::Enumeration::invalid:
      break ;
    case GGS_controlRegisterAssignmentOperatorKind::Enumeration::enum_assignment:
      {
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_4197, var_llvmRegAddressName_4283, var_sourceIR_4743, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 121)) ;
        }
      }
      break ;
    case GGS_controlRegisterAssignmentOperatorKind::Enumeration::enum_assignmentWithOperator:
      {
        GGS_omnibusInfixOperator extractedValue_5300_infixOperator_0 ;
        GGS_location extractedValue_5314_operatorLocation_1 ;
        temp_5.readProperty_mAssignmentKind ().getAssociatedValuesFor_assignmentWithOperator (extractedValue_5300_infixOperator_0, extractedValue_5314_operatorLocation_1) ;
        GGS_objectIR var_registerValueIR_5416 ;
        {
        routine_getNewTempValue_3F__26__21_ (var_registerType_4197, ioArgument_ioTemporaries, var_registerValueIR_5416, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 124)) ;
        }
        {
        extensionSetter_appendLoadIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerValueIR_5416, var_llvmRegAddressName_4283, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 125)) ;
        }
        GGS_lstring var_key_5581 = function_infixOperatorMapKey (var_registerType_4197, extractedValue_5300_infixOperator_0, extractedValue_5314_operatorLocation_1, extensionGetter_type (var_sourceIR_4743, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 127)) ;
        GGS_omnibusType var_resultType_5728 ;
        GGS_omnibusInfixOperatorUsage var_operatorUsage_5744 ;
        constinArgument_inContext.readProperty_mInfixOperatorMap ().method_searchKey (var_key_5581, var_resultType_5728, var_operatorUsage_5744, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 128)) ;
        GGS_objectIR var_operationResult_5988 ;
        callExtensionMethod_generateCode ((cPtr_omnibusInfixOperatorUsage *) var_operatorUsage_5744.ptr (), var_registerValueIR_5416, extractedValue_5314_operatorLocation_1, var_sourceIR_4743, var_resultType_5728, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_operationResult_5988, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 129)) ;
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_4197, var_llvmRegAddressName_4283, var_operationResult_5988, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 158)) ;
        }
      }
      break ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmGenericType locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_llvmGenericType::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_llvmGenericType temp_0 = this ;
  result_outLocation = temp_0.readProperty_mTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmGenericType enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmGenericType::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmGenericType temp_0 = this ;
  GGS_lstring var_nodeName_5029 = temp_0.readProperty_mTypeName () ;
  {
  const GGS_llvmGenericType temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_5029, temp_1, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 146)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmGenericType keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_llvmGenericType::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_llvmGenericType temp_0 = this ;
  result_outRepresentation = GGS_string ("Generic type ").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 152)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmGenericType enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmGenericType::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                  GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                  GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                  GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                  GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                  GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                  GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                  GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ctCheckMap var_formalGenericConstantParameterMap_7074 = GGS_ctCheckMap::init (inCompiler COMMA_HERE) ;
  const GGS_llvmGenericType temp_0 = this ;
  extensionMethod_buildFormalGenericConstantMap (temp_0.readProperty_mGenericFormalParameterList (), var_formalGenericConstantParameterMap_7074, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 195)) ;
  const GGS_llvmGenericType temp_1 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_1.readProperty_mWhereClause ().ptr (), var_formalGenericConstantParameterMap_7074, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 197)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_llvmGenericType temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mGenericFormalParameterList ().getter_count (SOURCE_FILE ("llvm-generic-type.galgas", 201)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_llvmGenericType temp_4 = this ;
      const GGS_llvmGenericType temp_5 = this ;
      const GGS_llvmGenericType temp_6 = this ;
      GGS_omnibusType var_llvmType_7530 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("llvm-generic-type.galgas", 203)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("llvm-generic-type.galgas", 204)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("llvm-generic-type.galgas", 204)) COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 204)), temp_4.readProperty_mTypeName ().readProperty_string (), GGS_typeKind::class_func_llvmType (temp_5.readProperty_mBitSize ()  COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 206)), GGS_string ("i").add_operation (temp_6.readProperty_mBitSize ().getter_string (SOURCE_FILE ("llvm-generic-type.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 207)), inCompiler COMMA_HERE) ;
      {
      const GGS_llvmGenericType temp_7 = this ;
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_7.readProperty_mTypeName (), var_llvmType_7530, inCompiler COMMA_SOURCE_FILE ("llvm-generic-type.galgas", 209)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enterRegisterAddressIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_enterRegisterAddressIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                              const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                              GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enterRegisterAddressIR temp_0 = this ;
  const GGS_enterRegisterAddressIR temp_1 = this ;
  const GGS_enterRegisterAddressIR temp_2 = this ;
  const GGS_enterRegisterAddressIR temp_3 = this ;
  const GGS_enterRegisterAddressIR temp_4 = this ;
  const GGS_enterRegisterAddressIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (temp_0.readProperty_mLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 29)).add_operation (GGS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 29)).add_operation (temp_1.readProperty_mBaseAddress ().getter_string (SOURCE_FILE ("intermediate-enter-register-address.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 29)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 29)).add_operation (temp_2.readProperty_mAddressOffset ().getter_string (SOURCE_FILE ("intermediate-enter-register-address.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 30)).add_operation (GGS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 30)).add_operation (temp_3.readProperty_mRegisterName (), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 30)).add_operation (GGS_string (" at "), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 30)).add_operation (temp_4.readProperty_mBaseAddress ().getter_hexString (SOURCE_FILE ("intermediate-enter-register-address.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 31)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 31)).add_operation (temp_5.readProperty_mAddressOffset ().getter_hexString (SOURCE_FILE ("intermediate-enter-register-address.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 31)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 29)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@assignmentInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assignmentInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 40)) ;
  const GGS_assignmentInstructionAST temp_1 = this ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (temp_1.readProperty_mTargetAST (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 41)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@assignmentInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                        const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                        const GGS_semanticContext constinArgument_inContext,
                                                                        const GGS_mode constinArgument_inMode,
                                                                        GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                        GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                        GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                        GGS_allocaList & ioArgument_ioAllocaList,
                                                                        GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_targetType_2996 ;
  const GGS_assignmentInstructionAST temp_0 = this ;
  extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inContext, constinArgument_inSelfType, temp_0.readProperty_mTargetAST (), var_targetType_2996, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 59)) ;
  GGS_objectIR var_sourceOperandPossibleReference_3431 ;
  const GGS_assignmentInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_2996, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_3431, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  GGS_instructionListListIR temp_2 = GGS_instructionListListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 75)) ;
  GGS_instructionListListIR var_pendingStoreComputedPropertyInstructionGenerationList_3516 = temp_2 ;
  GGS_LValueRepresentation var_lvalueIR_4037 ;
  const GGS_assignmentInstructionAST temp_3 = this ;
  extensionMethod_analyzeLValueInAssignment (temp_3.readProperty_mTargetAST (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_pendingStoreComputedPropertyInstructionGenerationList_3516, var_lvalueIR_4037, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 76)) ;
  {
  const GGS_assignmentInstructionAST temp_4 = this ;
  extensionSetter_appendAssignmentIR (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioAllocaList, var_lvalueIR_4037.readProperty_type (), var_lvalueIR_4037.readProperty_llvmName (), var_sourceOperandPossibleReference_3431, temp_4.readProperty_mInstructionLocation (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 90)) ;
  }
  DownEnumerator_instructionListListIR enumerator_4420 (var_pendingStoreComputedPropertyInstructionGenerationList_3516) ;
  while (enumerator_4420.hasCurrentObject ()) {
    ioArgument_ioInstructionGenerationList.plusAssignOperation(enumerator_4420.current_mInstructionList (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)) ;
    enumerator_4420.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValueInAssignment?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList?variableName?llvmName?type?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F_variableName_3F_llvmName_3F_type_3F__21_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                                                const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                                                const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                                                const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                                                GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                                                GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                                                GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                                                GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                                                                const GGS_lstring constinArgument_inVariableName,
                                                                                                                                                                                                                                                                const GGS_string constinArgument_inLLVMName,
                                                                                                                                                                                                                                                                const GGS_omnibusType constinArgument_inVariableType,
                                                                                                                                                                                                                                                                const GGS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                                                                                                                GGS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                                                                                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GGS_omnibusType var_currentType_8490 = constinArgument_inVariableType ;
  GGS_string var_currentLLVMName_8525 = constinArgument_inLLVMName ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    {
      {
      GGS_objectIR joker_8663 ; // Joker input parameter
      extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8663, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 198)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_8693_name_0 ;
      GGS_LValueOperandAST extractedValue_8716_nextOperand_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_8693_name_0, extractedValue_8716_nextOperand_1) ;
      {
      GGS_objectIR joker_8806 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8806, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 200)) ;
      }
      {
      routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (constinArgument_inSelfType, var_currentType_8490, var_currentLLVMName_8525, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_8693_name_0, extractedValue_8716_nextOperand_1, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 201)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_9364_indexExpression_0 ;
      GGS_location extractedValue_9380_endOfIndex_1 ;
      GGS_bool extractedValue_9391_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_9412_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_9364_indexExpression_0, extractedValue_9380_endOfIndex_1, extractedValue_9391_checkIndexExpression_2, extractedValue_9412_nextOperand_3) ;
      {
      GGS_objectIR joker_9502 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9502, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 218)) ;
      }
      {
      routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (constinArgument_inSelfType, var_currentType_8490, var_currentLLVMName_8525, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_9364_indexExpression_0, extractedValue_9380_endOfIndex_1, extractedValue_9391_checkIndexExpression_2, extractedValue_9412_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 219)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GGS_LValueRepresentation::init_21__21_ (var_currentType_8490, var_currentLLVMName_8525, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInAssignment?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList??'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                 GGS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                                                                 GGS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                                                                 const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                 const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                 const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                 GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                 GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                 GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                 GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                                 const GGS_lstring constinArgument_inPropertyName,
                                                                                                                                                                                                                                 const GGS_LValueOperandAST constinArgument_inNextOperand,
                                                                                                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterMap var_propertySetterMap_11116 = extensionGetter_propertySetterMap (constinArgument_inContext, ioArgument_ioCurrentType, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 260)) ;
  GGS_propertySetterKind var_propertyAccess_11418 ;
  GGS_propertyVisibility joker_11390 ; // Joker input parameter
  var_propertySetterMap_11116.method_searchKey (constinArgument_inPropertyName, joker_11390, var_propertyAccess_11418, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 263)) ;
  switch (var_propertyAccess_11418.enumValue ()) {
  case GGS_propertySetterKind::Enumeration::invalid:
    break ;
  case GGS_propertySetterKind::Enumeration::enum_computedProperty:
    {
      GGS_unifiedTypeMapEntry extractedValue_11504_computedPropertyType_0 ;
      GGS_routineLLVMNameDict extractedValue_11525_getterModeDictionary_1 ;
      GGS_routineLLVMNameDict extractedValue_11546_setterModeDictionary_2 ;
      var_propertyAccess_11418.getAssociatedValuesFor_computedProperty (extractedValue_11504_computedPropertyType_0, extractedValue_11525_getterModeDictionary_1, extractedValue_11546_setterModeDictionary_2) ;
      GGS_string var_getterRoutineLLVMName_11605 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_11525_getterModeDictionary_1, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 267)) ;
      GGS_objectIR var_resultValueIR_11951 ;
      {
      extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, GGS_objectIR::class_func_reference (ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 270)), var_getterRoutineLLVMName_11605, extensionGetter_type (extractedValue_11504_computedPropertyType_0, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 272)), var_resultValueIR_11951, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 268)) ;
      }
      {
      extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, var_resultValueIR_11951, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 276)) ;
      }
      GGS_string var_setterRoutineLLVMName_12167 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_11546_setterModeDictionary_2, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 278)) ;
      GGS_instructionListIR temp_0 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 279)) ;
      GGS_instructionListIR var_pendingStoreComputedPropertyInstructionGenerationList_12301 = temp_0 ;
      GGS_objectIR var_tempValueIR_12369 = var_resultValueIR_11951 ;
      {
      extensionSetter_appendLoadWhenReference (var_pendingStoreComputedPropertyInstructionGenerationList_12301, ioArgument_ioTemporaries, var_tempValueIR_12369, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 281)) ;
      }
      {
      extensionSetter_appendStoreComputedPropertyValue (var_pendingStoreComputedPropertyInstructionGenerationList_12301, GGS_objectIR::class_func_reference (ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 283)), var_setterRoutineLLVMName_12167, var_tempValueIR_12369, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 282)) ;
      }
      ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList.addAssignOperation (var_pendingStoreComputedPropertyInstructionGenerationList_12301  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 287)) ;
      ioArgument_ioCurrentType = extensionGetter_type (var_resultValueIR_11951, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 289)) ;
      ioArgument_ioCurrentLLVMName = extensionGetter_llvmName (var_resultValueIR_11951, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 290)) ;
      {
      routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 291)) ;
      }
    }
    break ;
  case GGS_propertySetterKind::Enumeration::enum_storedProperty:
    {
      GGS_omnibusType extractedValue_13512_propertyType_0 ;
      GGS_uint extractedValue_13531_index_1 ;
      var_propertyAccess_11418.getAssociatedValuesFor_storedProperty (extractedValue_13512_propertyType_0, extractedValue_13531_index_1) ;
      GGS_string var_newLLVMvariable_13581 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_13581, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 307)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, var_newLLVMvariable_13581, extractedValue_13531_index_1, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 308)) ;
      }
      ioArgument_ioCurrentType = extractedValue_13512_propertyType_0 ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_13581 ;
      {
      routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 317)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInAssignment?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList????'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                      GGS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                                                                      GGS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                                                                      const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                      const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                      const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                      GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                      GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                      GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                      GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                                      const GGS_expressionAST constinArgument_inIndexExpression,
                                                                                                                                                                                                                                      const GGS_location constinArgument_inEndOfIndex,
                                                                                                                                                                                                                                      const GGS_bool constinArgument_inCheckIndexExpression,
                                                                                                                                                                                                                                      const GGS_LValueOperandAST constinArgument_inNextOperand,
                                                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  switch (ioArgument_ioCurrentType.readProperty_subscript ().enumValue ()) {
  case GGS_subscript::Enumeration::invalid:
    break ;
  case GGS_subscript::Enumeration::enum_noSubscript:
    {
      GenericArray <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is ").add_operation (ioArgument_ioCurrentType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 358)).add_operation (GGS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 358)), fixItArray0  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 357)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_literalString:
    {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is literal string and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 360)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_subscript::Enumeration::enum_staticSubscript:
    {
      GGS_omnibusType extractedValue_15706_elementType_0 ;
      GGS_bigint extractedValue_15726_arraySize_1 ;
      ioArgument_ioCurrentType.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_15706_elementType_0, extractedValue_15726_arraySize_1) ;
      GGS_objectIR var_indexIR_16214 ;
      {
      routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_15726_arraySize_1, extractedValue_15706_elementType_0, ioArgument_ioInstructionGenerationList, var_indexIR_16214, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 364)) ;
      }
      GGS_string var_newLLVMvariable_16269 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_16269, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 381)) ;
      }
      {
      extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, extractedValue_15706_elementType_0, var_newLLVMvariable_16269, var_indexIR_16214, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 382)) ;
      }
      ioArgument_ioCurrentType = extractedValue_15706_elementType_0 ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_16269 ;
      {
      routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 391)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValueInAssignment?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__21_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                      const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                      const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                      const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                      GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                      GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                      GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                      GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                      const GGS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                                                                      GGS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GGS_omnibusType var_currentType_17895 = constinArgument_inSelfType ;
  GGS_string var_currentLLVMName_17926 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 426)) ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_18027_name_0 ;
      GGS_LValueOperandAST extractedValue_18050_next_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_18027_name_0, extractedValue_18050_next_1) ;
      {
      routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (constinArgument_inSelfType, var_currentType_17895, var_currentLLVMName_17926, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_18027_name_0, extractedValue_18050_next_1, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 430)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_18605_indexExpression_0 ;
      GGS_location extractedValue_18621_endOfIndex_1 ;
      GGS_bool extractedValue_18632_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_18653_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_18605_indexExpression_0, extractedValue_18621_endOfIndex_1, extractedValue_18632_checkIndexExpression_2, extractedValue_18653_nextOperand_3) ;
      {
      routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (constinArgument_inSelfType, var_currentType_17895, var_currentLLVMName_17926, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_18605_indexExpression_0, extractedValue_18621_endOfIndex_1, extractedValue_18632_checkIndexExpression_2, extractedValue_18653_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 447)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GGS_LValueRepresentation::init_21__21_ (var_currentType_17895, var_currentLLVMName_17926, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperandInAssignment?self&&??routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&pendingStoreComputedPropertyList'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNextOperandInAssignment_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                          GGS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                                                          GGS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                                                          const GGS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                                                                          const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                          const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                          const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                          GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                          GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                          GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                          GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                          GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inOperand.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_20215_name_0 ;
      GGS_LValueOperandAST extractedValue_20238_next_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_20215_name_0, extractedValue_20238_next_1) ;
      {
      routine_handlePropertyAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F_ (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_20215_name_0, extractedValue_20238_next_1, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 489)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_20797_indexExpression_0 ;
      GGS_location extractedValue_20813_endOfIndex_1 ;
      GGS_bool extractedValue_20824_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_20845_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_20797_indexExpression_0, extractedValue_20813_endOfIndex_1, extractedValue_20824_checkIndexExpression_2, extractedValue_20845_nextOperand_3) ;
      {
      routine_handleArrayAccessInAssignment_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__3F__3F__3F_ (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_20797_indexExpression_0, extractedValue_20813_endOfIndex_1, extractedValue_20824_checkIndexExpression_2, extractedValue_20845_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 506)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@regularRoutineIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                            GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_regularRoutineIR temp_0 = this ;
  UpEnumerator_instructionListIR enumerator_6099 (temp_0.readProperty_mInstructionGenerationList ()) ;
  while (enumerator_6099.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((cPtr_abstractInstructionIR *) enumerator_6099.current (HERE).readProperty_mInstructionGeneration ().ptr (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 154)) ;
    enumerator_6099.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@regularRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                       const GGS_generationContext constinArgument_inGenerationContext,
                                                       GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 168)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_regularRoutineIR temp_1 = this ;
    test_0 = temp_1.readProperty_mExportedFunction ().operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 169)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" internal"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 170)) ;
    }
  }
  const GGS_regularRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)) ;
  const GGS_regularRoutineIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)) ;
  const GGS_regularRoutineIR temp_4 = this ;
  GGS_string temp_5 ;
  const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mReceiverType ().readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("regular-routine-analysis.galgas", 174)))).boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_6) {
    const GGS_regularRoutineIR temp_7 = this ;
    temp_5 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_7.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 176)) ;
  }
  GGS_string var_receiverLLVMTypeName_6796 = temp_5 ;
  GGS_bool var_first_6922 = GGS_bool (true) ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::notEqual, var_receiverLLVMTypeName_6796.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      ioArgument_ioLLVMcode.plusAssignOperation(var_receiverLLVMTypeName_6796.add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)) ;
      var_first_6922 = GGS_bool (false) ;
    }
  }
  const GGS_regularRoutineIR temp_9 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_7110 (temp_9.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_7110.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_first_6922.boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        var_first_6922 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_10) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 187)) ;
    }
    switch (enumerator_7110.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7110.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (enumerator_7110.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7110.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (function_llvmNameForLocalVariable (enumerator_7110.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7110.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (function_llvmNameForLocalVariable (enumerator_7110.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)) ;
      }
      break ;
    }
    enumerator_7110.gotoNextObject () ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    GGS_bool test_12 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 198)) ;
    if (GalgasBool::boolTrue == test_12.boolEnum ()) {
      const GGS_regularRoutineIR temp_13 = this ;
      test_12 = temp_13.readProperty_mAppendFileAndLineArgumentForPanicLocation () ;
    }
    test_11 = test_12.boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = var_first_6922.operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 199)).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 200)) ;
        }
      }
      ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)).add_operation (GGS_string (" %LINE, i8* %FILE"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)) ;
  const GGS_regularRoutineIR temp_15 = this ;
  GGS_allocaList var_allocaList_8028 = temp_15.readProperty_mAllocaList () ;
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    const GGS_regularRoutineIR temp_17 = this ;
    test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mReturnType ().readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("regular-routine-analysis.galgas", 207)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_regularRoutineIR temp_18 = this ;
      var_allocaList_8028.addAssignOperation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), temp_18.readProperty_mReturnType (), GGS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)) ;
    }
  }
  const GGS_regularRoutineIR temp_19 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_8292 (temp_19.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_8292.hasCurrentObject ()) {
    switch (enumerator_8292.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        var_allocaList_8028.addAssignOperation (function_llvmNameForLocalVariable (enumerator_8292.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)), enumerator_8292.current_mFormalArgumentType (HERE), GGS_bool (true)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      break ;
    }
    enumerator_8292.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_8028, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 218)) ;
  const GGS_regularRoutineIR temp_20 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_8768 (temp_20.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_8768.hasCurrentObject ()) {
    switch (enumerator_8768.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Input argument '").add_operation (enumerator_8768.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)) ;
        GGS_string var_llvmType_8971 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8768.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 225)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_8971, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GGS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (enumerator_8768.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (var_llvmType_8971, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (function_llvmNameForLocalVariable (enumerator_8768.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)) ;
        callExtensionMethod_generateRetain ((cPtr_omnibusType *) enumerator_8768.current_mFormalArgumentType (HERE).ptr (), enumerator_8768.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 228)) ;
        GalgasBool test_21 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_21) {
          const GGS_regularRoutineIR temp_22 = this ;
          test_21 = GGS_bool (ComparisonKind::equal, temp_22.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 229)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_21) {
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_8768.current_mFormalArgumentType (HERE).ptr (), enumerator_8768.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 230)) ;
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        GalgasBool test_23 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_23) {
          const GGS_regularRoutineIR temp_24 = this ;
          test_23 = GGS_bool (ComparisonKind::equal, temp_24.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 233)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_23) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Insulate input/output argument '").add_operation (enumerator_8768.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_8768.current_mFormalArgumentType (HERE).ptr (), enumerator_8768.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 235)) ;
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      break ;
    }
    enumerator_8768.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Function instruction list\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 241)) ;
  const GGS_regularRoutineIR temp_25 = this ;
  extensionMethod_instructionListLLVMCode (temp_25.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 242)) ;
  const GGS_regularRoutineIR temp_26 = this ;
  UpEnumerator_routineFormalArgumentListIR enumerator_10077 (temp_26.readProperty_mFormalArgumentListForGeneration ()) ;
  while (enumerator_10077.hasCurrentObject ()) {
    switch (enumerator_10077.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Release input argument '").add_operation (enumerator_10077.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)) ;
        callExtensionMethod_generateRelease ((cPtr_omnibusType *) enumerator_10077.current_mFormalArgumentType (HERE).ptr (), enumerator_10077.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 249)) ;
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        GalgasBool test_27 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_27) {
          const GGS_regularRoutineIR temp_28 = this ;
          test_27 = GGS_bool (ComparisonKind::equal, temp_28.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 251)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_27) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Insulate input/output argument '").add_operation (enumerator_10077.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_10077.current_mFormalArgumentType (HERE).ptr (), enumerator_10077.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 253)) ;
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        GalgasBool test_29 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_29) {
          const GGS_regularRoutineIR temp_30 = this ;
          test_29 = GGS_bool (ComparisonKind::equal, temp_30.readProperty_mKind ().objectCompare (GGS_routineKind::class_func_section (SOURCE_FILE ("regular-routine-analysis.galgas", 256)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_29) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Insulate output argument '").add_operation (enumerator_10077.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)) ;
            callExtensionMethod_generateInsulate ((cPtr_omnibusType *) enumerator_10077.current_mFormalArgumentType (HERE).ptr (), enumerator_10077.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 258)) ;
          }
        }
      }
      break ;
    }
    enumerator_10077.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- Return\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 263)) ;
  GalgasBool test_31 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_31) {
    const GGS_regularRoutineIR temp_32 = this ;
    test_31 = GGS_bool (ComparisonKind::equal, temp_32.readProperty_mReturnType ().readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("regular-routine-analysis.galgas", 264)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_31) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 265)) ;
    }
  }
  if (GalgasBool::boolFalse == test_31) {
    GGS_string var_resultVarLLVMName_11049 = function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)) ;
    const GGS_regularRoutineIR temp_33 = this ;
    const GGS_regularRoutineIR temp_34 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %result = load ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_33.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_34.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (var_resultVarLLVMName_11049, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)) ;
    const GGS_regularRoutineIR temp_35 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_35.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)).add_operation (GGS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 271)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@switchInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 68)) ;
  const GGS_switchInstructionAST temp_1 = this ;
  UpEnumerator_switchCaseListAST enumerator_2818 (temp_1.readProperty_mSwitchCaseList ()) ;
  while (enumerator_2818.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2818.current_mCaseInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 70)) ;
    enumerator_2818.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@switchInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                    const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                    const GGS_semanticContext constinArgument_inContext,
                                                                    const GGS_mode constinArgument_inMode,
                                                                    GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                    GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                    GGS_allocaList & ioArgument_ioAllocaList,
                                                                    GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListIR temp_0 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
  GGS_instructionListIR var_switchExpressionGenerationList_3830 = temp_0 ;
  GGS_objectIR var_switchValueIR_4242 ;
  const GGS_switchInstructionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mSwitchExpression ().ptr (), constinArgument_inSelfType, GGS_routineAttributes::init (inCompiler COMMA_HERE), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 94)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_switchExpressionGenerationList_3830, var_switchValueIR_4242, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 91)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_switchValueIR_4242, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 104)) ;
  }
  const GGS_switchInstructionAST temp_2 = this ;
  GGS_lstring var_switchTypeName_4395 = GGS_lstring::init_21__21_ (extensionGetter_type (var_switchValueIR_4242, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)).readProperty_omnibusTypeDescriptionName (), temp_2.readProperty_mEndOf_5F_test_5F_expression (), inCompiler COMMA_HERE) ;
  GGS_constantMap var_enumConstantMap_4562 ;
  constinArgument_inContext.readProperty_mTypeConstantMap ().method_searchKey (var_switchTypeName_4395, var_enumConstantMap_4562, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 110)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = extensionGetter_type (var_switchValueIR_4242, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)).readProperty_kind ().getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 112)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 112)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_switchInstructionAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOf_5F_test_5F_expression (), GGS_string ("test expression type is '").add_operation (extensionGetter_omnibusTypeDescriptionName (var_switchValueIR_4242, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)).add_operation (GGS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 113)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = extensionGetter_isStatic (var_switchValueIR_4242, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 116)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_switchInstructionAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOf_5F_test_5F_expression (), GGS_string ("test expression type should not be static"), fixItArray8  COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 120)) ;
  }
  GGS_stringset temp_9 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 121)) ;
  GGS_stringset var_usedEnumerationValues_5066 = temp_9 ;
  GGS_switchCaseListIR temp_10 = GGS_switchCaseListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 122)) ;
  GGS_switchCaseListIR var_switchCaseListIR_5118 = temp_10 ;
  const GGS_switchInstructionAST temp_11 = this ;
  UpEnumerator_switchCaseListAST enumerator_5164 (temp_11.readProperty_mSwitchCaseList ()) ;
  while (enumerator_5164.hasCurrentObject ()) {
    GGS_uintlist temp_12 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 124)) ;
    GGS_uintlist var_caseIdentifierIndexList_5226 = temp_12 ;
    UpEnumerator_lstringlist enumerator_5265 (enumerator_5164.current_mCaseIdentifiers (HERE)) ;
    while (enumerator_5265.hasCurrentObject ()) {
      GGS_bigint var_constantIdx_5351 ;
      GGS_lstring joker_5363_1 ; // Joker input parameter
      var_enumConstantMap_4562.method_searchKey (enumerator_5265.current_mValue (HERE), var_constantIdx_5351, joker_5363_1, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 126)) ;
      var_caseIdentifierIndexList_5226.addAssignOperation (var_constantIdx_5351.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 127))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 127)) ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = var_usedEnumerationValues_5066.getter_hasKey (enumerator_5265.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 128)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          fixItArray14.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (enumerator_5265.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated enumeration constant"), fixItArray14  COMMA_SOURCE_FILE ("instruction-switch.galgas", 129)) ;
        }
      }
      var_usedEnumerationValues_5066.plusPlusAssignOperation (enumerator_5265.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 131)) ;
      enumerator_5265.gotoNextObject () ;
    }
    GGS_instructionListIR temp_15 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 133)) ;
    GGS_instructionListIR var_instructionGenerationList_5628 = temp_15 ;
    const GGS_switchInstructionAST temp_16 = this ;
    extensionMethod_analyzeBranchInstructionList (enumerator_5164.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_16.readProperty_mEndOf_5F_switch_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_5628, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
    var_switchCaseListIR_5118.addAssignOperation (var_caseIdentifierIndexList_5226, var_instructionGenerationList_5628  COMMA_SOURCE_FILE ("instruction-switch.galgas", 146)) ;
    enumerator_5164.gotoNextObject () ;
  }
  {
  const GGS_switchInstructionAST temp_17 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_17.readProperty_mEndOf_5F_switch_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 148)) ;
  }
  UpEnumerator_constantMap enumerator_6308 (var_enumConstantMap_4562) ;
  while (enumerator_6308.hasCurrentObject ()) {
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = var_usedEnumerationValues_5066.getter_hasKey (enumerator_6308.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 151)).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        const GGS_switchInstructionAST temp_19 = this ;
        GenericArray <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (temp_19.readProperty_mEndOf_5F_test_5F_expression (), GGS_string ("missing '").add_operation (enumerator_6308.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)).add_operation (GGS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)), fixItArray20  COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)) ;
      }
    }
    enumerator_6308.gotoNextObject () ;
  }
  const GGS_switchInstructionAST temp_21 = this ;
  ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_switchInstructionIR::init_21__21__21__21_ (temp_21.readProperty_mEndOf_5F_test_5F_expression ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 157)), var_switchExpressionGenerationList_3830, var_switchValueIR_4242, var_switchCaseListIR_5118, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@switchInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                           const GGS_generationContext constinArgument_inGenerationContext,
                                                           GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_switchInstructionIR temp_0 = this ;
  extensionMethod_instructionListLLVMCode (temp_0.readProperty_mSwitchExpressionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)) ;
  const GGS_switchInstructionIR temp_1 = this ;
  GGS_string var_labelOtherwise_7984 = GGS_string ("switch.").add_operation (temp_1.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-switch.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)).add_operation (GGS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)) ;
  const GGS_switchInstructionIR temp_2 = this ;
  const GGS_switchInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (temp_2.readProperty_mSwitchExpression (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mSwitchExpression (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", label %").add_operation (var_labelOtherwise_7984, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)).add_operation (GGS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)) ;
  const GGS_switchInstructionIR temp_4 = this ;
  UpEnumerator_switchCaseListIR enumerator_8238 (temp_4.readProperty_mCaseGenerationList ()) ;
  GGS_uint index_8211 (uint32_t (0)) ;
  while (enumerator_8238.hasCurrentObject ()) {
    UpEnumerator_uintlist enumerator_8293 (enumerator_8238.current_mCaseIdentifierIndexes (HERE)) ;
    while (enumerator_8293.hasCurrentObject ()) {
      const GGS_switchInstructionIR temp_5 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("    ").add_operation (extensionGetter_llvmTypeName (temp_5.readProperty_mSwitchExpression (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (enumerator_8293.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)) ;
      const GGS_switchInstructionIR temp_6 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", label %switch.").add_operation (temp_6.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (GGS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (index_8211.getter_string (SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)) ;
      enumerator_8293.gotoNextObject () ;
    }
    enumerator_8238.gotoNextObject () ;
    index_8211.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ]\n\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
  const GGS_switchInstructionIR temp_7 = this ;
  UpEnumerator_switchCaseListIR enumerator_8586 (temp_7.readProperty_mCaseGenerationList ()) ;
  GGS_uint index_8579 (uint32_t (0)) ;
  while (enumerator_8586.hasCurrentObject ()) {
    const GGS_switchInstructionIR temp_8 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("switch.").add_operation (temp_8.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (GGS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (index_8579.getter_string (SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
    extensionMethod_instructionListLLVMCode (enumerator_8586.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_labelOtherwise_7984, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
    enumerator_8586.gotoNextObject () ;
    index_8579.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 203)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(var_labelOtherwise_7984.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@switchInstructionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                               GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_switchInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mSwitchExpressionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 218)) ;
  const GGS_switchInstructionIR temp_1 = this ;
  UpEnumerator_switchCaseListIR enumerator_9317 (temp_1.readProperty_mCaseGenerationList ()) ;
  while (enumerator_9317.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_9317.current_mCaseInstructionList (HERE), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)) ;
    enumerator_9317.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicRoutineName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_panicRoutineName (Compiler *
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("handle.panic") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicRoutineName = false ;
static GGS_string gOnceFunctionResult_panicRoutineName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_panicRoutineName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicRoutineName) {
    gOnceFunctionResult_panicRoutineName = onceFunction_panicRoutineName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicRoutineName = true ;
  }
  return gOnceFunctionResult_panicRoutineName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicRoutineName (void) {
  gOnceFunctionResult_panicRoutineName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicRoutineName (nullptr,
                                                            releaseOnceFunctionResult_panicRoutineName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicRoutineName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicRoutineName (Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GGS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_panicRoutineName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicRoutineName ("panicRoutineName",
                                                                  functionWithGenericHeader_panicRoutineName,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  0,
                                                                  functionArgs_panicRoutineName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForAssertViolation'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForAssertViolation (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 7)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForAssertViolation = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForAssertViolation ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForAssertViolation (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForAssertViolation) {
    gOnceFunctionResult_panicCodeForAssertViolation = onceFunction_panicCodeForAssertViolation (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForAssertViolation = true ;
  }
  return gOnceFunctionResult_panicCodeForAssertViolation ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForAssertViolation (void) {
  gOnceFunctionResult_panicCodeForAssertViolation.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForAssertViolation (nullptr,
                                                                       releaseOnceFunctionResult_panicCodeForAssertViolation) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForAssertViolation [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForAssertViolation (Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_panicCodeForAssertViolation (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForAssertViolation ("panicCodeForAssertViolation",
                                                                             functionWithGenericHeader_panicCodeForAssertViolation,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForAssertViolation) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedAdditionOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForUnsignedAdditionOverflow (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 9)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForUnsignedAdditionOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow = onceFunction_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedAdditionOverflow (nullptr,
                                                                                releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForUnsignedAdditionOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow (Compiler * inCompiler,
                                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                                  const GGS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedAdditionOverflow ("panicCodeForUnsignedAdditionOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedAdditionOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForSignedAdditionOverflow (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("3", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 11)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForSignedAdditionOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForSignedAdditionOverflow = onceFunction_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedAdditionOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedAdditionOverflow (nullptr,
                                                                              releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForSignedAdditionOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForSignedAdditionOverflow (Compiler * inCompiler,
                                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedAdditionOverflow ("panicCodeForSignedAdditionOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedAdditionOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedAdditionOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedSubtractOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForUnsignedSubtractOverflow (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 13)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForUnsignedSubtractOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow = onceFunction_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedSubtractOverflow (nullptr,
                                                                                releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForUnsignedSubtractOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow (Compiler * inCompiler,
                                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                                  const GGS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedSubtractOverflow ("panicCodeForUnsignedSubtractOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedSubtractOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForSignedSubtractOverflow (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 15)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForSignedSubtractOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForSignedSubtractOverflow = onceFunction_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedSubtractOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedSubtractOverflow (nullptr,
                                                                              releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForSignedSubtractOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForSignedSubtractOverflow (Compiler * inCompiler,
                                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedSubtractOverflow ("panicCodeForSignedSubtractOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedSubtractOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedSubtractOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedMultiplicationOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForUnsignedMultiplicationOverflow (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 17)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForUnsignedMultiplicationOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow = onceFunction_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedMultiplicationOverflow (nullptr,
                                                                                      releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForUnsignedMultiplicationOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow (Compiler * inCompiler,
                                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                                        const GGS_location & /* inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedMultiplicationOverflow ("panicCodeForUnsignedMultiplicationOverflow",
                                                                                            functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow,
                                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                                            0,
                                                                                            functionArgs_panicCodeForUnsignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedMultiplicationOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForSignedMultiplicationOverflow (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 19)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForSignedMultiplicationOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow = onceFunction_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedMultiplicationOverflow (nullptr,
                                                                                    releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForSignedMultiplicationOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow (Compiler * inCompiler,
                                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                                      const GGS_location & /* inErrorLocation */
                                                                                      COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedMultiplicationOverflow ("panicCodeForSignedMultiplicationOverflow",
                                                                                          functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow,
                                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                                          0,
                                                                                          functionArgs_panicCodeForSignedMultiplicationOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedDivisionByZero'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForUnsignedDivisionByZero (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 21)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForUnsignedDivisionByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForUnsignedDivisionByZero = onceFunction_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedDivisionByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedDivisionByZero (nullptr,
                                                                              releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForUnsignedDivisionByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForUnsignedDivisionByZero (Compiler * inCompiler,
                                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedDivisionByZero ("panicCodeForUnsignedDivisionByZero",
                                                                                    functionWithGenericHeader_panicCodeForUnsignedDivisionByZero,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForUnsignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedDivisionByZero'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForSignedDivisionByZero (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 23)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForSignedDivisionByZero ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForSignedDivisionByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForSignedDivisionByZero = onceFunction_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedDivisionByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForSignedDivisionByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedDivisionByZero (nullptr,
                                                                            releaseOnceFunctionResult_panicCodeForSignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForSignedDivisionByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForSignedDivisionByZero (Compiler * inCompiler,
                                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedDivisionByZero ("panicCodeForSignedDivisionByZero",
                                                                                  functionWithGenericHeader_panicCodeForSignedDivisionByZero,
                                                                                  & kTypeDescriptor_GALGAS_bigint,
                                                                                  0,
                                                                                  functionArgs_panicCodeForSignedDivisionByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedRemainderByZero'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForUnsignedRemainderByZero (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("10", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 25)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForUnsignedRemainderByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForUnsignedRemainderByZero = onceFunction_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedRemainderByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedRemainderByZero (nullptr,
                                                                               releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForUnsignedRemainderByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForUnsignedRemainderByZero (Compiler * inCompiler,
                                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                                 const GGS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedRemainderByZero ("panicCodeForUnsignedRemainderByZero",
                                                                                     functionWithGenericHeader_panicCodeForUnsignedRemainderByZero,
                                                                                     & kTypeDescriptor_GALGAS_bigint,
                                                                                     0,
                                                                                     functionArgs_panicCodeForUnsignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedRemainderByZero'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForSignedRemainderByZero (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("11", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 27)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForSignedRemainderByZero ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForSignedRemainderByZero (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForSignedRemainderByZero = onceFunction_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedRemainderByZero ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForSignedRemainderByZero.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedRemainderByZero (nullptr,
                                                                             releaseOnceFunctionResult_panicCodeForSignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForSignedRemainderByZero [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForSignedRemainderByZero (Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GGS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedRemainderByZero ("panicCodeForSignedRemainderByZero",
                                                                                   functionWithGenericHeader_panicCodeForSignedRemainderByZero,
                                                                                   & kTypeDescriptor_GALGAS_bigint,
                                                                                   0,
                                                                                   functionArgs_panicCodeForSignedRemainderByZero) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForConvertOverflow'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForConvertOverflow (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("12", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 31)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForConvertOverflow = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForConvertOverflow ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForConvertOverflow (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForConvertOverflow) {
    gOnceFunctionResult_panicCodeForConvertOverflow = onceFunction_panicCodeForConvertOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForConvertOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForConvertOverflow ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForConvertOverflow (void) {
  gOnceFunctionResult_panicCodeForConvertOverflow.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForConvertOverflow (nullptr,
                                                                       releaseOnceFunctionResult_panicCodeForConvertOverflow) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForConvertOverflow [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForConvertOverflow (Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_panicCodeForConvertOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForConvertOverflow ("panicCodeForConvertOverflow",
                                                                             functionWithGenericHeader_panicCodeForConvertOverflow,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForConvertOverflow) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForNegativeArrayIndex'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForNegativeArrayIndex (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("14", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 35)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForNegativeArrayIndex ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForNegativeArrayIndex (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex) {
    gOnceFunctionResult_panicCodeForNegativeArrayIndex = onceFunction_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForNegativeArrayIndex ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForNegativeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForNegativeArrayIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForNegativeArrayIndex (nullptr,
                                                                          releaseOnceFunctionResult_panicCodeForNegativeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForNegativeArrayIndex [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForNegativeArrayIndex (Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GGS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForNegativeArrayIndex ("panicCodeForNegativeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForNegativeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForNegativeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForTooLargeArrayIndex'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForTooLargeArrayIndex (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 37)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForTooLargeArrayIndex (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex) {
    gOnceFunctionResult_panicCodeForTooLargeArrayIndex = onceFunction_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForTooLargeArrayIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForTooLargeArrayIndex (nullptr,
                                                                          releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForTooLargeArrayIndex [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForTooLargeArrayIndex (Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GGS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForTooLargeArrayIndex ("panicCodeForTooLargeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForTooLargeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForTooLargeArrayIndex) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForClosedSync'
//
//--------------------------------------------------------------------------------------------------

static GGS_bigint onceFunction_panicCodeForClosedSync (Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  result_result = GGS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 41)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForClosedSync = false ;
static GGS_bigint gOnceFunctionResult_panicCodeForClosedSync ;

//--------------------------------------------------------------------------------------------------

GGS_bigint function_panicCodeForClosedSync (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForClosedSync) {
    gOnceFunctionResult_panicCodeForClosedSync = onceFunction_panicCodeForClosedSync (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForClosedSync = true ;
  }
  return gOnceFunctionResult_panicCodeForClosedSync ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForClosedSync (void) {
  gOnceFunctionResult_panicCodeForClosedSync.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_panicCodeForClosedSync (nullptr,
                                                                  releaseOnceFunctionResult_panicCodeForClosedSync) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_panicCodeForClosedSync [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_panicCodeForClosedSync (Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_panicCodeForClosedSync (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForClosedSync ("panicCodeForClosedSync",
                                                                        functionWithGenericHeader_panicCodeForClosedSync,
                                                                        & kTypeDescriptor_GALGAS_bigint,
                                                                        0,
                                                                        functionArgs_panicCodeForClosedSync) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_enumerationDeclarationAST temp_0 = this ;
  const GGS_enumerationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mEnumerationName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 53)) ;
  }
  GGS_bigint var_maxValue_2277 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 55)) ;
  const GGS_enumerationDeclarationAST temp_2 = this ;
  UpEnumerator_enumerationConstantList enumerator_2299 (temp_2.readProperty_mCaseNameList ()) ;
  while (enumerator_2299.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::lowerThan, var_maxValue_2277.objectCompare (enumerator_2299.current_mConstantValue (HERE))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_maxValue_2277 = enumerator_2299.current_mConstantValue (HERE) ;
      }
    }
    enumerator_2299.gotoNextObject () ;
  }
  GGS_uint var_representationBitCount_2409 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)).isValid ()) {
    uint32_t variant_2438 = GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)).uintValue () ;
    bool loop_2438 = true ;
    while (loop_2438) {
      loop_2438 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_2277.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 62)))).isValid () ;
      if (loop_2438) {
        loop_2438 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_2277.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 62)))).boolValue () ;
      }
      if (loop_2438 && (0 == variant_2438)) {
        loop_2438 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)) ;
      }
      if (loop_2438) {
        variant_2438 -= 1 ;
        var_representationBitCount_2409.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 63)) ;
        var_maxValue_2277 = var_maxValue_2277.divide_operation (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)) ;
      }
    }
  }
  {
  const GGS_enumerationDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mEnumerationName (), GGS_string ("u").add_operation (var_representationBitCount_2409.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_enumerationDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_enumerationDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mEnumerationName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_enumerationDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_enumerationDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("enum ").add_operation (temp_0.readProperty_mEnumerationName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 78)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumerationDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                            GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                            GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                            GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                            GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                            GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                            GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                            GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantMap var_enumConstantMap_4169 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  GGS_bigint var_maxValue_4205 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 97)) ;
  const GGS_enumerationDeclarationAST temp_0 = this ;
  UpEnumerator_enumerationConstantList enumerator_4230 (temp_0.readProperty_mCaseNameList ()) ;
  while (enumerator_4230.hasCurrentObject ()) {
    {
    const GGS_enumerationDeclarationAST temp_1 = this ;
    var_enumConstantMap_4169.setter_insertKey (enumerator_4230.current_mConstantName (HERE), enumerator_4230.current_mConstantValue (HERE), temp_1.readProperty_mEnumerationName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 99)) ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::lowerThan, var_maxValue_4205.objectCompare (enumerator_4230.current_mConstantValue (HERE))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        var_maxValue_4205 = enumerator_4230.current_mConstantValue (HERE) ;
      }
    }
    enumerator_4230.gotoNextObject () ;
  }
  {
  const GGS_enumerationDeclarationAST temp_3 = this ;
  ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (temp_3.readProperty_mEnumerationName (), var_enumConstantMap_4169, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 104)) ;
  }
  GGS_uint var_representationBitCount_4556 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)).isValid ()) {
    uint32_t variant_4585 = GGS_uint::class_func_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)).uintValue () ;
    bool loop_4585 = true ;
    while (loop_4585) {
      loop_4585 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_4205.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)))).isValid () ;
      if (loop_4585) {
        loop_4585 = GGS_bool (ComparisonKind::greaterThan, var_maxValue_4205.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)))).boolValue () ;
      }
      if (loop_4585 && (0 == variant_4585)) {
        loop_4585 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)) ;
      }
      if (loop_4585) {
        variant_4585 -= 1 ;
        var_representationBitCount_4556.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 111)) ;
        var_maxValue_4205 = var_maxValue_4205.divide_operation (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 112)) ;
      }
    }
  }
  const GGS_enumerationDeclarationAST temp_4 = this ;
  GGS_unifiedTypeMapEntry var_integerTypeProxy_4752 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_representationBitCount_4556.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 116)), temp_4.readProperty_mEnumerationName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 115)) ;
  GGS_lstring var_conversionToUIntN_5185 ;
  {
  const GGS_enumerationDeclarationAST temp_5 = this ;
  const GGS_enumerationDeclarationAST temp_6 = this ;
  const GGS_enumerationDeclarationAST temp_7 = this ;
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, temp_5.readProperty_mEnumerationName (), temp_6.readProperty_mEnumerationName ().readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_representationBitCount_4556.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 121)), temp_7.readProperty_mEnumerationName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-enumeration-declaration.galgas", 122)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-enumeration-declaration.galgas", 123)), var_integerTypeProxy_4752, var_conversionToUIntN_5185, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 118)) ;
  }
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_enumToUintRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_conversionToUIntN_5185, GGS_bool (false), GGS_bool (false), GGS_string ("i").add_operation (var_representationBitCount_4556.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 131)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 127)) ;
  const GGS_enumerationDeclarationAST temp_8 = this ;
  const GGS_enumerationDeclarationAST temp_9 = this ;
  GGS_omnibusType var_enumerationType_5449 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-enumeration-declaration.galgas", 135)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-enumeration-declaration.galgas", 136)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-enumeration-declaration.galgas", 136)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136)), temp_8.readProperty_mEnumerationName ().readProperty_string (), GGS_typeKind::class_func_enumeration (var_representationBitCount_4556  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 138)), temp_9.readProperty_mEnumerationName ().readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GGS_enumerationDeclarationAST temp_10 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_10.readProperty_mEnumerationName (), var_enumerationType_5449, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 141)) ;
  }
  const GGS_enumerationDeclarationAST temp_11 = this ;
  GGS_lstring var_key_5833 = function_assignmentOperatorKey (var_enumerationType_5449, temp_11.readProperty_mEnumerationName ().readProperty_location (), var_enumerationType_5449, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 143)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_5833, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 144)) ;
  }
  GGS_omnibusType var_boolType_6152 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 147)) ;
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-enumeration-declaration.galgas", 149)), var_enumerationType_5449, GGS_string ("icmp eq"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6152, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 149)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("type-enumeration-declaration.galgas", 152)), var_enumerationType_5449, GGS_string ("icmp ule"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6152, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 151)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("type-enumeration-declaration.galgas", 160)), var_enumerationType_5449, GGS_string ("icmp ult"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6152, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 159)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumToUintRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_enumToUintRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                          const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                          GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumToUintRoutineIR temp_0 = this ;
  GGS_string var_routineLLVMName_8191 = function_llvmNameForFunction (temp_0.readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 208)) ;
  const GGS_enumToUintRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal ").add_operation (temp_1.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)).add_operation (var_routineLLVMName_8191, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 209)) ;
  const GGS_enumToUintRoutineIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (temp_2.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)).add_operation (GGS_string ("* %inValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)) ;
  const GGS_enumToUintRoutineIR temp_3 = this ;
  const GGS_enumToUintRoutineIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %r = load ").add_operation (temp_3.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (temp_4.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (GGS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)) ;
  const GGS_enumToUintRoutineIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret ").add_operation (temp_5.readProperty_mEnumerationLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)).add_operation (GGS_string (" %r\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 213)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimePrefixOperatorAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compiletimePrefixOperatorAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_compiletimePrefixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mPrefixOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compiletimePrefixOperatorAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_compiletimePrefixOperatorAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_compiletimePrefixOperatorAST temp_0 = this ;
  const GGS_compiletimePrefixOperatorAST temp_1 = this ;
  const GGS_compiletimePrefixOperatorAST temp_2 = this ;
  GGS_lstring var_nodeName_3651 = GGS_lstring::init_21__21_ (extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)), temp_2.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GGS_compiletimePrefixOperatorAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3651, temp_3, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 101)) ;
  }
  {
  const GGS_compiletimePrefixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3651, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 102)) ;
  }
  {
  const GGS_compiletimePrefixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3651, temp_5.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 103)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 104)), var_nodeName_3651 COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 104)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimePrefixOperatorAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compiletimePrefixOperatorAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_compiletimePrefixOperatorAST temp_0 = this ;
  const GGS_compiletimePrefixOperatorAST temp_1 = this ;
  result_outRepresentation = extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compiletimePrefixOperatorAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_compiletimePrefixOperatorAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                               GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                               GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                               GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                               GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                               GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                               GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                               GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_receiverTypeProxy_5339 ;
  {
  const GGS_compiletimePrefixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_receiverTypeProxy_5339, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 128)) ;
  }
  GGS_omnibusType var_receiverType_5364 = extensionGetter_type (var_receiverTypeProxy_5339, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 129)) ;
  const GGS_compiletimePrefixOperatorAST temp_1 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_receiverType_5364.ptr (), temp_1.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 130)) ;
  GGS_unifiedTypeMapEntry var_resultTypeProxy_5538 ;
  {
  const GGS_compiletimePrefixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_5538, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 131)) ;
  }
  GGS_omnibusType var_resultType_5561 = extensionGetter_type (var_resultTypeProxy_5538, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 132)) ;
  const GGS_compiletimePrefixOperatorAST temp_3 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_resultType_5561.ptr (), temp_3.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 133)) ;
  GGS_ctCheckMap var_ctCheckMap_5723 = GGS_ctCheckMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_compiletimePrefixOperatorAST temp_4 = this ;
  var_ctCheckMap_5723.setter_insertKey (temp_4.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 136)) ;
  }
  const GGS_compiletimePrefixOperatorAST temp_5 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_5.readProperty_mExpression ().ptr (), var_ctCheckMap_5723, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 137)) ;
  const GGS_compiletimePrefixOperatorAST temp_6 = this ;
  const GGS_compiletimePrefixOperatorAST temp_7 = this ;
  GGS_lstring var_key_5889 = function_prefixOperatorMapKey (var_receiverType_5364, extensionGetter_prefixOperator (temp_6.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 139)), temp_7.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 139)) ;
  const GGS_compiletimePrefixOperatorAST temp_8 = this ;
  const GGS_compiletimePrefixOperatorAST temp_9 = this ;
  const GGS_compiletimePrefixOperatorAST temp_10 = this ;
  GGS_compileTimePrefixOperatorUsage var_definition_5990 = GGS_compileTimePrefixOperatorUsage::init_21__21__21_ (temp_8.readProperty_mPrefixOperatorLocation (), temp_9.readProperty_mReceiverName (), temp_10.readProperty_mExpression (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_5889, var_receiverType_5364, var_resultType_5561, var_definition_5990, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 145)) ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_compiletimePrefixOperatorAST temp_12 = this ;
    test_11 = GGS_bool (ComparisonKind::equal, temp_12.readProperty_mPrefixOperator ().objectCompare (GGS_compileTimePrefixOperatorEnumeration::class_func_minusOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 147)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_compiletimePrefixOperatorAST temp_13 = this ;
      GGS_lstring var_minusNoOvf_5F_key_6292 = function_prefixOperatorMapKey (var_receiverType_5364, GGS_prefixOperator::class_func_minusNoOvf (SOURCE_FILE ("prefix-operator-compile-time.galgas", 148)), temp_13.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 148)) ;
      {
      ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_minusNoOvf_5F_key_6292, var_receiverType_5364, var_resultType_5561, var_definition_5990, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 149)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimePrefixOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimePrefixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                               const GGS_location /* constinArgument_inOperatorLocation */,
                                                               const GGS_omnibusType constinArgument_inResultType,
                                                               const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                               const GGS_bool /* constinArgument_inSafeMode */,
                                                               GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GGS_objectIR & outArgument_outResultValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_7518 ;
  GGS_omnibusType joker_7502_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_7502_1, var_receiverValue_7518, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 175)) ;
  GGS_ctMap var_varMap_7546 = GGS_ctMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimePrefixOperatorUsage temp_0 = this ;
  var_varMap_7546.setter_insertKey (temp_0.readProperty_mReceiverOperandName (), var_receiverValue_7518, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 177)) ;
  }
  GGS_bigint var_result_7702 ;
  const GGS_compileTimePrefixOperatorUsage temp_1 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_1.readProperty_mExpression ().ptr (), var_varMap_7546, var_result_7702, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 178)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_result_7702  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 179)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mDoInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 73)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                 const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                 const GGS_semanticContext constinArgument_inContext,
                                                                 const GGS_mode constinArgument_inMode,
                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                 GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                 GGS_allocaList & ioArgument_ioAllocaList,
                                                                 GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_iteratedObjectPointer_3941 ;
  {
  const GGS_forInstructionAST temp_0 = this ;
  extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, temp_0.readProperty_mIteratedObject (), var_iteratedObjectPointer_3941, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 92)) ;
  }
  GGS_omnibusType var_iteratedType_3986 = extensionGetter_type (var_iteratedObjectPointer_3941, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 94)) ;
  GGS_omnibusType var_iteratedElementType_4081 ;
  switch (var_iteratedType_3986.readProperty_subscript ().enumValue ()) {
  case GGS_subscript::Enumeration::invalid:
    break ;
  case GGS_subscript::Enumeration::enum_noSubscript:
    {
      const GGS_forInstructionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mIteratedObject ().readProperty_location (), GGS_string ("this object is not enumerable"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)) ;
      var_iteratedElementType_4081.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_subscript::Enumeration::enum_literalString:
    {
      var_iteratedElementType_4081 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_staticSubscript:
    {
      GGS_omnibusType extractedValue_4368_elementType_0 ;
      GGS_bigint extractedValue_4380__1 ;
      var_iteratedType_3986.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_4368_elementType_0, extractedValue_4380__1) ;
      var_iteratedElementType_4081 = extractedValue_4368_elementType_0 ;
    }
    break ;
  }
  const GGS_forInstructionAST temp_3 = this ;
  const GGS_forInstructionAST temp_4 = this ;
  GGS_lstring var_omnibusName_4441 = GGS_lstring::init_21__21_ (temp_3.readProperty_mVarName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)), temp_4.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 107)) ;
  ioArgument_ioAllocaList.addAssignOperation (function_llvmNameForLocalVariable (var_omnibusName_4441.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)), var_iteratedElementType_4081, GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 110)) ;
  }
  {
  const GGS_forInstructionAST temp_5 = this ;
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_5.readProperty_mVarName (), GGS_bool (false), var_iteratedElementType_4081, var_omnibusName_4441, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 111)) ;
  }
  GGS_instructionListIR temp_6 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 113)) ;
  GGS_instructionListIR var_whileExpression_5F_GenerationList_4930 = temp_6 ;
  GGS_objectIR var_whileExpressionResult_5360 ;
  const GGS_forInstructionAST temp_7 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_7.readProperty_mWhileExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 117)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_4930, var_whileExpressionResult_5360, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 114)) ;
  GGS_implicitBooleanConversionResult var_whileExpressionBooleanResult_5660 ;
  const GGS_forInstructionAST temp_8 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_whileExpressionResult_5360, temp_8.readProperty_mEndOf_5F_whileExpression (), ioArgument_ioTemporaries, var_whileExpression_5F_GenerationList_4930, ioArgument_ioAllocaList, var_whileExpressionBooleanResult_5660, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 128)) ;
  switch (var_whileExpressionBooleanResult_5660.enumValue ()) {
  case GGS_implicitBooleanConversionResult::Enumeration::invalid:
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
    {
      GGS_bool extractedValue_5752_boolValue_0 ;
      var_whileExpressionBooleanResult_5660.getAssociatedValuesFor_compileTime (extractedValue_5752_boolValue_0) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = extractedValue_5752_boolValue_0.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 138)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_forInstructionAST temp_10 = this ;
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mEndOf_5F_whileExpression (), GGS_string ("test expression is always false"), fixItArray11  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)) ;
        }
      }
    }
    break ;
  case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
    break ;
  }
  GGS_instructionListIR temp_12 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)) ;
  GGS_instructionListIR var_doInstructionList_5F_GenerationList_6486 = temp_12 ;
  const GGS_forInstructionAST temp_13 = this ;
  const GGS_forInstructionAST temp_14 = this ;
  extensionMethod_analyzeBranchInstructionList (temp_13.readProperty_mDoInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_14.readProperty_mEndOf_5F_for_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_6486, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)) ;
  {
  const GGS_forInstructionAST temp_15 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_15.readProperty_mEndOf_5F_for_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)) ;
  }
  switch (var_iteratedType_3986.readProperty_subscript ().enumValue ()) {
  case GGS_subscript::Enumeration::invalid:
    break ;
  case GGS_subscript::Enumeration::enum_noSubscript:
    break ;
  case GGS_subscript::Enumeration::enum_literalString:
    {
      const GGS_forInstructionAST temp_16 = this ;
      ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_forInstructionOnLiteralStringIR::init_21__21__21__21__21__21__21_ (var_omnibusName_4441.readProperty_string (), temp_16.readProperty_mIteratedObject ().readProperty_location (), var_iteratedObjectPointer_3941, var_iteratedType_3986, var_whileExpression_5F_GenerationList_4930, var_whileExpressionResult_5360, var_doInstructionList_5F_GenerationList_6486, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_staticSubscript:
    {
      GGS_omnibusType extractedValue_7437_elementType_0 ;
      GGS_bigint extractedValue_7449_size_1 ;
      var_iteratedType_3986.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_7437_elementType_0, extractedValue_7449_size_1) ;
      GGS_stringset temp_17 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 182)) ;
      GGS_stringset var_invokedFunctionSet_7538 = temp_17 ;
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        const GGS_forInstructionAST temp_19 = this ;
        test_18 = ioArgument_ioTemporaries.readProperty_mStaticArrayMapForTemporaries ().getter_hasKey (temp_19.readProperty_mIteratedObject ().readProperty_string () COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 183)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          const GGS_forInstructionAST temp_20 = this ;
          ioArgument_ioTemporaries.readProperty_mStaticArrayMapForTemporaries ().method_searchKey (temp_20.readProperty_mIteratedObject (), var_invokedFunctionSet_7538, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 184)) ;
        }
      }
      const GGS_forInstructionAST temp_21 = this ;
      ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_forInstructionOnArrayIR::init_21__21__21__21__21__21__21__21__21_ (var_omnibusName_4441.readProperty_string (), temp_21.readProperty_mIteratedObject (), var_iteratedObjectPointer_3941, var_whileExpression_5F_GenerationList_4930, extensionGetter_llvmName (var_whileExpressionBooleanResult_5660, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 191)), var_doInstructionList_5F_GenerationList_6486, extractedValue_7437_elementType_0, extractedValue_7449_size_1.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 194)), var_invokedFunctionSet_7538, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 186)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionOnArrayIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnArrayIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext constinArgument_inGenerationContext,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionOnArrayIR temp_0 = this ;
  GGS_string var_elementTypeLLVMName_10271 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)) ;
  const GGS_forInstructionOnArrayIR temp_1 = this ;
  GGS_string var_listTypeLLVMName_10332 = GGS_string ("[").add_operation (temp_1.readProperty_mArraySize ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (GGS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (var_elementTypeLLVMName_10271, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)) ;
  const GGS_forInstructionOnArrayIR temp_2 = this ;
  GGS_string var_locationIndex_10415 = temp_2.readProperty_mIteratedObjectName ().readProperty_location ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 255)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 255)) ;
  GGS_string var_startLabel_10502 = GGS_string ("for.label.start.").add_operation (var_locationIndex_10415, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 257)) ;
  GGS_string var_testLabel_10556 = GGS_string ("for.label.test.").add_operation (var_locationIndex_10415, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)) ;
  GGS_string var_whileLabel_10608 = GGS_string ("for.label.while.").add_operation (var_locationIndex_10415, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)) ;
  GGS_string var_nextLabel_10662 = GGS_string ("for.label.next.").add_operation (var_locationIndex_10415, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)) ;
  GGS_string var_loopVar_10714 = GGS_string ("for.loop.").add_operation (var_locationIndex_10415, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)) ;
  GGS_string var_loopLabel_10758 = GGS_string ("for.label.loop.").add_operation (var_locationIndex_10415, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)) ;
  GGS_string var_endLabel_10810 = GGS_string ("for.label.end.").add_operation (var_locationIndex_10415, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)) ;
  GGS_string var_indexVar_10863 = GGS_string ("for.index.").add_operation (var_locationIndex_10415, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 265)) ;
  GGS_string var_ptrVar_10910 = GGS_string ("for.ptr.").add_operation (var_locationIndex_10415, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 266)) ;
  GGS_string var_currentValue_10953 = GGS_string ("for.currentValue.").add_operation (var_locationIndex_10415, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_startLabel_10502, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_startLabel_10502.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_ptrVar_10910, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (GGS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (var_listTypeLLVMName_10332, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)) ;
  const GGS_forInstructionOnArrayIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", ").add_operation (var_listTypeLLVMName_10332, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mIteratedObject (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_testLabel_10556, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_testLabel_10556.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_ptrVar_10910, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GGS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_elementTypeLLVMName_10271, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GGS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_ptrVar_10910, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GGS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_startLabel_10502, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GGS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_ptrVar_10910, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GGS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (var_nextLabel_10662, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)) ;
  const GGS_forInstructionOnArrayIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_indexVar_10863, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GGS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (temp_4.readProperty_mArraySize ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GGS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_startLabel_10502, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GGS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_indexVar_10863, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GGS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (var_nextLabel_10662, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_loopVar_10714, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GGS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (var_indexVar_10863, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GGS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %").add_operation (var_loopVar_10714, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_whileLabel_10608, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_endLabel_10810, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_whileLabel_10608.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)) ;
  const GGS_forInstructionOnArrayIR temp_5 = this ;
  extensionMethod_instructionListLLVMCode (temp_5.readProperty_mWhileInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)) ;
  const GGS_forInstructionOnArrayIR temp_6 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (temp_6.readProperty_mWhileExpressionBooleanResult_5F_llvmName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (var_loopLabel_10758, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (var_endLabel_10810, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_loopLabel_10758.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_currentValue_10953, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (var_elementTypeLLVMName_10271, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_elementTypeLLVMName_10271.add_operation (GGS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (var_ptrVar_10910, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)) ;
  const GGS_forInstructionOnArrayIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_elementTypeLLVMName_10271, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GGS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (var_currentValue_10953, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (var_elementTypeLLVMName_10271, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (function_llvmNameForLocalVariable (temp_7.readProperty_mEnumeratedValueName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)) ;
  const GGS_forInstructionOnArrayIR temp_8 = this ;
  extensionMethod_instructionListLLVMCode (temp_8.readProperty_mDoInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_nextLabel_10662, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_nextLabel_10662.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_ptrVar_10910, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (GGS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (var_elementTypeLLVMName_10271, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_elementTypeLLVMName_10271.add_operation (GGS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (var_ptrVar_10910, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (GGS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_indexVar_10863, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (GGS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (var_indexVar_10863, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (GGS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_testLabel_10556, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_endLabel_10810.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionOnArrayIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnArrayIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                   GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionOnArrayIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 328)) ;
  const GGS_forInstructionOnArrayIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mDoInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 329)) ;
  const GGS_forInstructionOnArrayIR temp_2 = this ;
  ioArgument_ioInvokedRoutineSet.plusAssignOperation(temp_2.readProperty_mInvokedFunctionSet (), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionOnLiteralStringIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnLiteralStringIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                       const GGS_generationContext constinArgument_inGenerationContext,
                                                                       GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionOnLiteralStringIR temp_0 = this ;
  GGS_string var_startLabel_14781 = GGS_string ("for.label.start.").add_operation (temp_0.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)) ;
  const GGS_forInstructionOnLiteralStringIR temp_1 = this ;
  GGS_string var_testLabel_14855 = GGS_string ("for.label.test.").add_operation (temp_1.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)) ;
  const GGS_forInstructionOnLiteralStringIR temp_2 = this ;
  GGS_string var_loopLabel_14927 = GGS_string ("for.label.loop.").add_operation (temp_2.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)) ;
  const GGS_forInstructionOnLiteralStringIR temp_3 = this ;
  GGS_string var_whileLabel_14999 = GGS_string ("for.label.while.").add_operation (temp_3.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)) ;
  const GGS_forInstructionOnLiteralStringIR temp_4 = this ;
  GGS_string var_nextLabel_15073 = GGS_string ("for.label.next.").add_operation (temp_4.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)) ;
  const GGS_forInstructionOnLiteralStringIR temp_5 = this ;
  GGS_string var_endLabel_15145 = GGS_string ("for.label.end.").add_operation (temp_5.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)) ;
  const GGS_forInstructionOnLiteralStringIR temp_6 = this ;
  GGS_string var_ptrVar_15216 = GGS_string ("for.ptr.").add_operation (temp_6.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)) ;
  const GGS_forInstructionOnLiteralStringIR temp_7 = this ;
  GGS_string var_currentVar_15281 = GGS_string ("for.current.").add_operation (temp_7.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)) ;
  const GGS_forInstructionOnLiteralStringIR temp_8 = this ;
  GGS_string var_stringLLVMTypeName_15351 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_8.readProperty_mLiteralStringType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_startLabel_14781, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_startLabel_14781.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)) ;
  const GGS_forInstructionOnLiteralStringIR temp_9 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_ptrVar_15216, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GGS_string (".start = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (var_stringLLVMTypeName_15351, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (var_stringLLVMTypeName_15351, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (extensionGetter_llvmName (temp_9.readProperty_mStringElementIteratedObject (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_testLabel_14855, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_testLabel_14855.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_ptrVar_15216, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GGS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (var_stringLLVMTypeName_15351, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GGS_string (" [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (var_ptrVar_15216, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GGS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_startLabel_14781.add_operation (GGS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (var_ptrVar_15216, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (GGS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (var_nextLabel_15073, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_currentVar_15281, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GGS_string (" = load i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (var_stringLLVMTypeName_15351, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GGS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (var_ptrVar_15216, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_currentVar_15281, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (GGS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (var_currentVar_15281, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (GGS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %").add_operation (var_currentVar_15281, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GGS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (var_endLabel_15145, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (var_whileLabel_14999, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_whileLabel_14999.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)) ;
  const GGS_forInstructionOnLiteralStringIR temp_10 = this ;
  extensionMethod_instructionListLLVMCode (temp_10.readProperty_mWhileInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)) ;
  const GGS_forInstructionOnLiteralStringIR temp_11 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_11.readProperty_mWhileExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (var_loopLabel_14927, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (var_endLabel_15145, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_loopLabel_14927.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 385)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store i8 %").add_operation (var_currentVar_15281, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)) ;
  const GGS_forInstructionOnLiteralStringIR temp_12 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("i8 * ").add_operation (function_llvmNameForLocalVariable (temp_12.readProperty_mVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)) ;
  const GGS_forInstructionOnLiteralStringIR temp_13 = this ;
  extensionMethod_instructionListLLVMCode (temp_13.readProperty_mDoInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_nextLabel_15073, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_nextLabel_15073.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_ptrVar_15216, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)).add_operation (GGS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("i8 * %").add_operation (var_ptrVar_15216, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)).add_operation (GGS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_testLabel_14855, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_endLabel_15145.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionOnLiteralStringIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionOnLiteralStringIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                           GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionOnLiteralStringIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 408)) ;
  const GGS_forInstructionOnLiteralStringIR temp_1 = this ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mDoInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 409)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@storeToUniversalReferenceIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_storeToUniversalReferenceIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                       GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_storeToUniversalReferenceIR temp_0 = this ;
  switch (temp_0.readProperty_mSourceValue ().enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_1123__0 ;
      GGS_uint extractedValue_1125__1 ;
      GGS_objectIR extractedValue_1127_value_2 ;
      temp_0.readProperty_mSourceValue ().getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_1123__0, extractedValue_1125__1, extractedValue_1127_value_2) ;
      GGS_string var_llvmAssignRoutineName_1144 = function_assignmentOperatorFuncName (extensionGetter_type (extractedValue_1127_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 33)), extensionGetter_type (extractedValue_1127_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 33)) ;
      ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (var_llvmAssignRoutineName_1144  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_1385__0 ;
      GGS_operandIRList extractedValue_1402_operands_1 ;
      temp_0.readProperty_mSourceValue ().getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_1385__0, extractedValue_1402_operands_1) ;
      UpEnumerator_operandIRList enumerator_1423 (extractedValue_1402_operands_1) ;
      while (enumerator_1423.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = extensionGetter_isStatic (enumerator_1423.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 39)).operator_not (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 39)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_string var_llvmAssignRoutineName_1492 = function_assignmentOperatorFuncName (extensionGetter_type (enumerator_1423.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 40)), extensionGetter_type (enumerator_1423.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 40)) ;
            ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (var_llvmAssignRoutineName_1492  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)) ;
          }
        }
        enumerator_1423.gotoNextObject () ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@storeToUniversalReferenceIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_storeToUniversalReferenceIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                   const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                   GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_storeToUniversalReferenceIR temp_0 = this ;
  GGS_string var_llvmType_2011 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mTargetVarType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 56)) ;
  const GGS_storeToUniversalReferenceIR temp_1 = this ;
  switch (temp_1.readProperty_mSourceValue ().enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("<< ERROR @storeToUniversalReferenceIR llvmInstructionCode void >>\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 59)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_2199__0 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_null (extractedValue_2199__0) ;
      const GGS_storeToUniversalReferenceIR temp_2 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_2011, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 61)).add_operation (GGS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 61)).add_operation (var_llvmType_2011, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 61)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 61)).add_operation (temp_2.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 61)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 61)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_2326__0 ;
      GGS_string extractedValue_2328__1 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_reference (extractedValue_2326__0, extractedValue_2328__1) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("<< ERROR @storeToUniversalReferenceIR llvmInstructionCode reference >>\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 63)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_2449__0 ;
      GGS_string extractedValue_2459_llvmName_1 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_llvmNamedValue (extractedValue_2449__0, extractedValue_2459_llvmName_1) ;
      const GGS_storeToUniversalReferenceIR temp_3 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_2011, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)).add_operation (extractedValue_2459_llvmName_1, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)).add_operation (var_llvmType_2011, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)).add_operation (temp_3.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_2611__0 ;
      GGS_bigint extractedValue_2621_value_1 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_literalInteger (extractedValue_2611__0, extractedValue_2621_value_1) ;
      const GGS_storeToUniversalReferenceIR temp_4 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_2011, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 67)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 67)).add_operation (extractedValue_2621_value_1.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 67)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 67)).add_operation (var_llvmType_2011, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 67)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 67)).add_operation (temp_4.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 67)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 67)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_2770__0 ;
      GGS_sortedOperandIRList extractedValue_2793_operands_1 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_llvmStructureValue (extractedValue_2770__0, extractedValue_2793_operands_1) ;
      UpEnumerator_sortedOperandIRList enumerator_2820 (extractedValue_2793_operands_1) ;
      while (enumerator_2820.hasCurrentObject ()) {
        GGS_string var_tempVar_2852 = GGS_string ("%temp.addr.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 70)) ;
        ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 71)) ;
        const GGS_storeToUniversalReferenceIR temp_5 = this ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_tempVar_2852, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 72)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 72)).add_operation (var_llvmType_2011, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 72)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 72)).add_operation (var_llvmType_2011, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 72)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)).add_operation (temp_5.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)).add_operation (enumerator_2820.current_mIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 72)) ;
        GGS_string var_valueType_3138 = extensionGetter_llvmTypeName (enumerator_2820.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 74)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_valueType_3138, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 75)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 75)).add_operation (extensionGetter_llvmName (enumerator_2820.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 75)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 75)).add_operation (var_valueType_3138, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 75)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 75)).add_operation (var_tempVar_2852, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 75)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 75)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 75)) ;
        enumerator_2820.gotoNextObject () ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_3329_type_0 ;
      GGS_uint extractedValue_3334_size_1 ;
      GGS_objectIR extractedValue_3339_value_2 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_3329_type_0, extractedValue_3334_size_1, extractedValue_3339_value_2) ;
      GGS_string var_indexVarName_3356 = GGS_string ("%index.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 78)) ;
      GGS_string var_nextIndexVarName_3421 = GGS_string ("%index.next.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 79)) ;
      GGS_string var_ptrVarName_3495 = GGS_string ("%element.ptr.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 80)) ;
      GGS_string var_loopTestName_3564 = GGS_string ("%continue.loop.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 81)) ;
      GGS_string var_startLabel_3637 = GGS_string ("assign.start.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 82)) ;
      GGS_string var_loopLabel_3706 = GGS_string ("assign.loop.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 83)) ;
      GGS_string var_exitLabel_3773 = GGS_string ("assign.exit.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 85)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_startLabel_3637, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 86)).add_operation (GGS_string (" ;--- Assign static array from repeated dynamic value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 86)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_startLabel_3637.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 87)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_loopLabel_3706, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 88)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 88)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_loopLabel_3706.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 89)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_indexVarName_3356, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 90)).add_operation (GGS_string (" = phi i32 [0, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 90)).add_operation (var_startLabel_3637, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 90)).add_operation (GGS_string ("], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 90)).add_operation (var_nextIndexVarName_3421, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 90)).add_operation (GGS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 90)).add_operation (var_loopLabel_3706, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 90)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 90)) ;
      const GGS_storeToUniversalReferenceIR temp_6 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_ptrVarName_3495, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_3329_type_0.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_3329_type_0.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)).add_operation (temp_6.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)).add_operation (var_indexVarName_3356, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)) ;
      GGS_string var_llvmAssignRoutineName_4445 = function_assignmentOperatorFuncName (extensionGetter_type (extractedValue_3339_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)), extensionGetter_type (extractedValue_3339_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_llvmAssignRoutineName_4445.getter_assemblerRepresentation (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (extensionGetter_llvmTypeName (extractedValue_3339_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)).add_operation (var_ptrVarName_3495, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)).add_operation (extensionGetter_llvmTypeName (extractedValue_3339_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)).add_operation (extensionGetter_llvmName (extractedValue_3339_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_nextIndexVarName_3421, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (GGS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (var_indexVarName_3356, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (GGS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_loopTestName_3564, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (GGS_string (" = icmp ult i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (var_nextIndexVarName_3421, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (extractedValue_3334_size_1.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (var_loopTestName_3564, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)).add_operation (var_loopLabel_3706, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)).add_operation (var_exitLabel_3773, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_exitLabel_3773.add_operation (GGS_string (":\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_5099_type_0 ;
      GGS_uint extractedValue_5104_size_1 ;
      GGS_objectIR extractedValue_5109_value_2 ;
      GGS_uint extractedValue_5115__3 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_5099_type_0, extractedValue_5104_size_1, extractedValue_5109_value_2, extractedValue_5115__3) ;
      GGS_string var_indexVarName_5128 = GGS_string ("%index.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 101)) ;
      GGS_string var_nextIndexVarName_5193 = GGS_string ("%index.next.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 102)) ;
      GGS_string var_ptrVarName_5267 = GGS_string ("%element.ptr.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 103)) ;
      GGS_string var_loopTestName_5336 = GGS_string ("%continue.loop.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 104)) ;
      GGS_string var_startLabel_5409 = GGS_string ("assign.start.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 105)) ;
      GGS_string var_loopLabel_5478 = GGS_string ("assign.loop.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 106)) ;
      GGS_string var_exitLabel_5545 = GGS_string ("assign.exit.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 107)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 108)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_startLabel_5409, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 109)).add_operation (GGS_string (" ;--- Assign static array from repeated static value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 109)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_startLabel_5409.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 110)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_loopLabel_5478, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 111)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 111)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_loopLabel_5478.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 112)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_indexVarName_5128, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 113)).add_operation (GGS_string (" = phi i32 [0, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 113)).add_operation (var_startLabel_5409, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 113)).add_operation (GGS_string ("], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 113)).add_operation (var_nextIndexVarName_5193, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 113)).add_operation (GGS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 113)).add_operation (var_loopLabel_5478, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 113)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 113)) ;
      const GGS_storeToUniversalReferenceIR temp_7 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_ptrVarName_5267, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_5099_type_0.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_5099_type_0.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)).add_operation (temp_7.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)).add_operation (var_indexVarName_5128, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (extensionGetter_llvmTypeName (extractedValue_5109_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (extensionGetter_llvmName (extractedValue_5109_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (extensionGetter_llvmTypeName (extractedValue_5109_value_2, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (var_ptrVarName_5267, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_nextIndexVarName_5193, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (GGS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (var_indexVarName_5128, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (GGS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_loopTestName_5336, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)).add_operation (GGS_string (" = icmp ult i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)).add_operation (var_nextIndexVarName_5193, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)).add_operation (extractedValue_5104_size_1.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (var_loopTestName_5336, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)).add_operation (var_loopLabel_5478, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)).add_operation (var_exitLabel_5545, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(var_exitLabel_5545.add_operation (GGS_string (":\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_6695__0 ;
      GGS_operandIRList extractedValue_6712_operands_1 ;
      GGS_uint extractedValue_6721__2 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_6695__0, extractedValue_6712_operands_1, extractedValue_6721__2) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Assign static array from static value\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 122)) ;
      UpEnumerator_operandIRList enumerator_6800 (extractedValue_6712_operands_1) ;
      GGS_uint index_6795 (uint32_t (0)) ;
      while (enumerator_6800.hasCurrentObject ()) {
        GGS_string var_tempVar_6840 = GGS_string ("%temp.addr.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 124)) ;
        ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 125)) ;
        const GGS_storeToUniversalReferenceIR temp_8 = this ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_tempVar_6840, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 126)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 126)).add_operation (var_llvmType_2011, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 126)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 126)).add_operation (var_llvmType_2011, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 126)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)).add_operation (temp_8.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)).add_operation (index_6795.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 126)) ;
        GGS_string var_valueType_7126 = extensionGetter_llvmTypeName (enumerator_6800.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 128)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_valueType_7126, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 129)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 129)).add_operation (extensionGetter_llvmName (enumerator_6800.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 129)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 129)).add_operation (var_valueType_7126, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 129)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 129)).add_operation (var_tempVar_6840, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 129)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 129)) ;
        enumerator_6800.gotoNextObject () ;
        index_6795.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 123)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_7310__0 ;
      GGS_operandIRList extractedValue_7327_operands_1 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_7310__0, extractedValue_7327_operands_1) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Assign static array from dynamic values\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 132)) ;
      UpEnumerator_operandIRList enumerator_7415 (extractedValue_7327_operands_1) ;
      GGS_uint index_7410 (uint32_t (0)) ;
      while (enumerator_7415.hasCurrentObject ()) {
        GGS_string var_tempVar_7455 = GGS_string ("%temp.addr.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 134)) ;
        ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 135)) ;
        const GGS_storeToUniversalReferenceIR temp_9 = this ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_tempVar_7455, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 136)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 136)).add_operation (var_llvmType_2011, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 136)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 136)).add_operation (var_llvmType_2011, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 136)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)).add_operation (temp_9.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)).add_operation (index_7410.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 136)) ;
        GGS_string var_valueType_7741 = extensionGetter_llvmTypeName (enumerator_7415.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 138)) ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = extensionGetter_isStatic (enumerator_7415.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 139)).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_valueType_7741, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 140)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 140)).add_operation (extensionGetter_llvmName (enumerator_7415.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 140)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 140)).add_operation (var_valueType_7741, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 140)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 140)).add_operation (var_tempVar_7455, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 140)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 140)) ;
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          GGS_string var_llvmAssignRoutineName_7942 = function_assignmentOperatorFuncName (extensionGetter_type (enumerator_7415.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 142)), extensionGetter_type (enumerator_7415.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 142)) ;
          ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_llvmAssignRoutineName_7942.getter_assemblerRepresentation (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 143)) ;
          ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_valueType_7741, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)).add_operation (var_tempVar_7455, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)).add_operation (var_valueType_7741, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)).add_operation (extensionGetter_llvmName (enumerator_7415.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)) ;
        }
        enumerator_7415.gotoNextObject () ;
        index_7410.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 133)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_8281__0 ;
      temp_1.readProperty_mSourceValue ().getAssociatedValuesFor_zero (extractedValue_8281__0) ;
      const GGS_storeToUniversalReferenceIR temp_11 = this ;
      const GGS_storeToUniversalReferenceIR temp_12 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_2011, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 149)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 149)).add_operation (extensionGetter_llvmName (temp_11.readProperty_mSourceValue (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 149)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 149)).add_operation (var_llvmType_2011, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 149)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 149)).add_operation (temp_12.readProperty_mLLVMTargetVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 149)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 149)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@constructorCallAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                           GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_constructorCallAST temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
  }
  const GGS_constructorCallAST temp_1 = this ;
  UpEnumerator_functionCallEffectiveParameterListAST enumerator_2124 (temp_1.readProperty_mParameterList ()) ;
  while (enumerator_2124.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) enumerator_2124.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 52)) ;
    enumerator_2124.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@constructorCallAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_constructorCallAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 61)) ;
  }
  const GGS_constructorCallAST temp_1 = this ;
  UpEnumerator_functionCallEffectiveParameterListAST enumerator_2738 (temp_1.readProperty_mParameterList ()) ;
  while (enumerator_2738.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) enumerator_2738.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 63)) ;
    enumerator_2738.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@constructorCallAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                        const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                        const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                        const GGS_semanticContext constinArgument_inContext,
                                                        const GGS_mode constinArgument_inMode,
                                                        GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                        GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                        GGS_allocaList & ioArgument_ioAllocaList,
                                                        GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        GGS_objectIR & outArgument_outResult,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_constructorKey_3810 = GGS_string ("(") ;
  const GGS_constructorCallAST temp_0 = this ;
  UpEnumerator_functionCallEffectiveParameterListAST enumerator_3847 (temp_0.readProperty_mParameterList ()) ;
  while (enumerator_3847.hasCurrentObject ()) {
    var_constructorKey_3810.plusAssignOperation(GGS_string ("!").add_operation (enumerator_3847.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)) ;
    enumerator_3847.gotoNextObject () ;
  }
  var_constructorKey_3810.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 89)) ;
  const GGS_constructorCallAST temp_1 = this ;
  GGS_omnibusType var_resultType_4000 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)) ;
  const GGS_constructorCallAST temp_2 = this ;
  GGS_lstring var_typeName_4073 = GGS_lstring::init_21__21_ (var_resultType_4000.readProperty_omnibusTypeDescriptionName (), temp_2.readProperty_mErrorLocation (), inCompiler COMMA_HERE) ;
  GGS_constructorMap var_constructorMap_4213 ;
  constinArgument_inContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_4073, var_constructorMap_4213, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 93)) ;
  GGS_constructorSignature var_constructorSignature_4356 ;
  GGS_constructorValue var_initValue_4382 ;
  const GGS_constructorCallAST temp_3 = this ;
  var_constructorMap_4213.method_searchKey (GGS_lstring::init_21__21_ (var_constructorKey_3810, temp_3.readProperty_mErrorLocation (), inCompiler COMMA_HERE), var_constructorSignature_4356, var_initValue_4382, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)) ;
  switch (var_initValue_4382.enumValue ()) {
  case GGS_constructorValue::Enumeration::invalid:
    break ;
  case GGS_constructorValue::Enumeration::enum_arrayValue:
    {
      GGS_omnibusType extractedValue_4456_elementType_0 ;
      GGS_uint extractedValue_4468_size_1 ;
      var_initValue_4382.getAssociatedValuesFor_arrayValue (extractedValue_4456_elementType_0, extractedValue_4468_size_1) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_constructorKey_3810.objectCompare (GGS_string ("(!repeated)"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_constructorCallAST temp_5 = this ;
          GGS_expressionAST var_expression_4530 = temp_5.readProperty_mParameterList ().getter_mExpressionAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 100)) ;
          GGS_objectIR var_expressionResult_5014 ;
          callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) var_expression_4530.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_4456_elementType_0, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5014, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 101)) ;
          const GGS_constructorCallAST temp_6 = this ;
          GGS_objectIR var_result_5049 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_5014, extractedValue_4456_elementType_0, temp_6.readProperty_mParameterList ().getter_mSelectorAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 118)).readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 114)) ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = extensionGetter_isStatic (var_result_5049, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 121)).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GGS_uint var_idx_5365 = ioArgument_ioStaticEntityMap.readProperty_mGlobalStructuredConstantList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 122)) ;
              outArgument_outResult = GGS_objectIR::class_func_llvmArrayRepeatedStaticValue (var_resultType_4000, extractedValue_4468_size_1, var_result_5049, var_idx_5365  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 123)) ;
              GGS_operandIRList temp_8 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 124)) ;
              GGS_operandIRList var_operandIRList_5565 = temp_8 ;
              UpEnumerator_range enumerator_5608 (GGS_range (GGS_uint (uint32_t (0U)), extractedValue_4468_size_1.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 125)))) ;
              while (enumerator_5608.hasCurrentObject ()) {
                var_operandIRList_5565.addAssignOperation (var_result_5049  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 126)) ;
                enumerator_5608.gotoNextObject () ;
              }
              ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssignOperation (var_resultType_4000, var_operandIRList_5565  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 128)) ;
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            outArgument_outResult = GGS_objectIR::class_func_llvmArrayRepeatedDynamicValue (var_resultType_4000, extractedValue_4468_size_1, var_result_5049  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 130)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GGS_string var_individualConstructor_5889 = GGS_string ("(") ;
        UpEnumerator_range enumerator_5938 (GGS_range (GGS_uint (uint32_t (0U)), extractedValue_4468_size_1.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134)))) ;
        while (enumerator_5938.hasCurrentObject ()) {
          var_individualConstructor_5889.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 135)) ;
          enumerator_5938.gotoNextObject () ;
        }
        var_individualConstructor_5889.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 137)) ;
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, var_constructorKey_3810.objectCompare (var_individualConstructor_5889)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GGS_operandIRList temp_10 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 139)) ;
            GGS_operandIRList var_operandIRList_6109 = temp_10 ;
            GGS_bool var_resultIsStatic_6141 = GGS_bool (true) ;
            const GGS_constructorCallAST temp_11 = this ;
            UpEnumerator_functionCallEffectiveParameterListAST enumerator_6186 (temp_11.readProperty_mParameterList ()) ;
            while (enumerator_6186.hasCurrentObject ()) {
              GGS_objectIR var_expressionResult_6701 ;
              callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_6186.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_4456_elementType_0, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6701, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 142)) ;
              GGS_objectIR var_result_6744 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_6701, extractedValue_4456_elementType_0, enumerator_6186.current_mSelector (HERE).readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 155)) ;
              var_operandIRList_6109.addAssignOperation (var_result_6744  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 162)) ;
              GGS_bool test_12 = var_resultIsStatic_6141 ;
              if (GalgasBool::boolTrue == test_12.boolEnum ()) {
                test_12 = extensionGetter_isStatic (var_result_6744, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 163)) ;
              }
              var_resultIsStatic_6141 = test_12 ;
              enumerator_6186.gotoNextObject () ;
            }
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = var_resultIsStatic_6141.boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                GGS_uint var_idx_7163 = ioArgument_ioStaticEntityMap.readProperty_mGlobalStructuredConstantList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 166)) ;
                outArgument_outResult = GGS_objectIR::class_func_llvmArrayStaticValues (var_resultType_4000, var_operandIRList_6109, var_idx_7163  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 167)) ;
                ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssignOperation (var_resultType_4000, var_operandIRList_6109  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 168)) ;
              }
            }
            if (GalgasBool::boolFalse == test_13) {
              outArgument_outResult = GGS_objectIR::class_func_llvmArrayDynamicValues (var_resultType_4000, var_operandIRList_6109  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 170)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_9) {
          const GGS_constructorCallAST temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mErrorLocation (), GGS_string ("invalid constructor"), fixItArray15  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 173)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GGS_constructorValue::Enumeration::enum_null:
    {
      outArgument_outResult = GGS_objectIR::class_func_null (var_resultType_4000  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 177)) ;
    }
    break ;
  case GGS_constructorValue::Enumeration::enum_simple:
    {
      GGS_bigint extractedValue_7693_value_0 ;
      var_initValue_4382.getAssociatedValuesFor_simple (extractedValue_7693_value_0) ;
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        const GGS_constructorCallAST temp_17 = this ;
        test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 179)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_constructorCallAST temp_18 = this ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mErrorLocation (), var_resultType_4000.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 180)), fixItArray19  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 180)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_16) {
        outArgument_outResult = GGS_objectIR::class_func_literalInteger (var_resultType_4000, extractedValue_7693_value_0  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 182)) ;
      }
    }
    break ;
  case GGS_constructorValue::Enumeration::enum_structure:
    {
      GGS_sortedOperandIRList extractedValue_7975_sortedOperandList_0 ;
      var_initValue_4382.getAssociatedValuesFor_structure (extractedValue_7975_sortedOperandList_0) ;
      GGS_sortedOperandIRList var_sortedOperandIRList_8004 = extractedValue_7975_sortedOperandList_0 ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_constructorCallAST temp_21 = this ;
        test_20 = GGS_bool (ComparisonKind::notEqual, temp_21.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 186)).objectCompare (var_constructorSignature_4356.getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 186)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          const GGS_constructorCallAST temp_22 = this ;
          GGS_string temp_23 ;
          const GalgasBool test_24 = GGS_bool (ComparisonKind::greaterThan, var_constructorSignature_4356.getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 188)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_24) {
            temp_23 = GGS_string ("s") ;
          }else if (GalgasBool::boolFalse == test_24) {
            temp_23 = GGS_string::makeEmptyString () ;
          }
          const GGS_constructorCallAST temp_25 = this ;
          GenericArray <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_22.readProperty_mErrorLocation (), GGS_string ("this constructor call should name ").add_operation (var_constructorSignature_4356.getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 187)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (GGS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (GGS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 188)).add_operation (temp_25.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression-constructor-call.galgas", 189)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 189)), fixItArray26  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_20) {
        const GGS_constructorCallAST temp_27 = this ;
        UpEnumerator_constructorSignature enumerator_8423 (var_constructorSignature_4356) ;
        UpEnumerator_functionCallEffectiveParameterListAST enumerator_8489 (temp_27.readProperty_mParameterList ()) ;
        while (enumerator_8423.hasCurrentObject () && enumerator_8489.hasCurrentObject ()) {
          GalgasBool test_28 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_28) {
            test_28 = GGS_bool (ComparisonKind::notEqual, enumerator_8489.current_mSelector (HERE).readProperty_string ().objectCompare (enumerator_8423.current_mSelector (HERE))).boolEnum () ;
            if (GalgasBool::boolTrue == test_28) {
              GenericArray <FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (enumerator_8489.current_mSelector (HERE).readProperty_location (), GGS_string ("the selector should be '!").add_operation (enumerator_8423.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)).add_operation (GGS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)), fixItArray29  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)) ;
            }
          }
          GGS_objectIR var_expressionResult_9169 ;
          callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_8489.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_8423.current_mType (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_9169, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 196)) ;
          GGS_objectIR var_result_9208 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_9169, enumerator_8423.current_mType (HERE), enumerator_8489.current_mSelector (HERE).readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 209)) ;
          {
          extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_result_9208, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 216)) ;
          }
          var_sortedOperandIRList_8004.addAssignOperation (var_result_9208, enumerator_8423.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 217)) ;
          enumerator_8423.gotoNextObject () ;
          enumerator_8489.gotoNextObject () ;
        }
        outArgument_outResult = GGS_objectIR::class_func_llvmStructureValue (var_resultType_4000, var_sortedOperandIRList_8004  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 219)) ;
      }
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'embeddedSampleCode'
//
//--------------------------------------------------------------------------------------------------

//--- File 'LPC-L2294/01-blinkleds.omnibus'

const char * gWrapperFileContent_0_embeddedSampleCode = 
  "target \"LPC-L2294\"\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "section ledOn () {\n"
  "  ©IO1.CLR  = 1 << 23 // Led On\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "section ledOff () {\n"
  "  ©IO1.SET  = 1 << 23 // Led Off\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    ledOn ()\n"
  "    self.compteur +%= 500\n"
  "    time.wait (!until:self.compteur)\n"
  "    ledOff ()\n"
  "    self.compteur +%= 500\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
   ;

const cRegularFileWrapper gWrapperFile_0_embeddedSampleCode (
  "01-blinkleds.omnibus",
  "omnibus",
  true, // Text file
 574, // Text length
  gWrapperFileContent_0_embeddedSampleCode
) ;

//--- All files of 'LPC-L2294' directory

static const cRegularFileWrapper * gWrapperAllFiles_embeddedSampleCode_1 [2] = {
  & gWrapperFile_0_embeddedSampleCode,
  nullptr
} ;

//--- All sub-directories of 'LPC-L2294' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_1 [1] = {
  nullptr
} ;

//--- Directory 'LPC-L2294'

const cDirectoryWrapper gWrapperDirectory_1_embeddedSampleCode (
  "LPC-L2294",
  1,
  gWrapperAllFiles_embeddedSampleCode_1,
  0,
  gWrapperAllDirectories_embeddedSampleCode_1
) ;

//--- File 'teensy-3-1/00-structure-example.omnibus'

const char * gWrapperFileContent_4_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "struct $B {\n"
  "  var a $u32 = 0\n"
  "  var b $u32 = 0\n"
  "}\n"
  "\n"
  "struct $C {\n"
  "  var c = $B ()\n"
  "}\n"
  "\n"
  "struct $Toto {\n"
  "  var a $u16 = 0\n"
  "  var c = no\n"
  "  var b = no\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "  var deadline $u32 = 0\n"
  "  var acc = $C ()\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode: $DigitalMode.output !toPort:.D13)\n"
  "    digital.set (!mode: $DigitalMode.output !toPort: LED_L1)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.deadline) {\n"
  "    self.deadline +%= 1000\n"
  "    digital.toggle (!port:LED_L1)\n"
  "    let n = self.acc.c.a +% self.deadline\n"
  "    self.acc.c.a = n\n"
  "    let x $u32 = 0x1234_5678\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!hex8:x.byteSwapped)\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    let y $u15 = 0x1234\n"
  "    lcd.print (!hex4:extend (y.bitReversed))\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
   ;

const cRegularFileWrapper gWrapperFile_4_embeddedSampleCode (
  "00-structure-example.omnibus",
  "omnibus",
  true, // Text file
 1043, // Text length
  gWrapperFileContent_4_embeddedSampleCode
) ;

//--- File 'teensy-3-1/01-blink-led.omnibus'

const char * gWrapperFileContent_12_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "  var continue = yes\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  while self.continue event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    time.wait (!until: self.compteur)\n"
  "    digital.write (!no !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:time.now ())\n"
  "    self.continue = time.now () < 10_000\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_12_embeddedSampleCode (
  "01-blink-led.omnibus",
  "omnibus",
  true, // Text file
 809, // Text length
  gWrapperFileContent_12_embeddedSampleCode
) ;

//--- File 'teensy-3-1/02-blink-leds.omnibus'

const char * gWrapperFileContent_11_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:time.now ())\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T2 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L1)\n"
  "    self.compteur +%= 499\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L1)\n"
  "    self.compteur +%= 499\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T3 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L2)\n"
  "    self.compteur +%= 498\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L2)\n"
  "    self.compteur +%= 498\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T4 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L3)\n"
  "    self.compteur +%= 497\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L3)\n"
  "    self.compteur +%= 497\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T5 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L4)\n"
  "    self.compteur +%= 496\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L4)\n"
  "    self.compteur +%= 496\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_11_embeddedSampleCode (
  "02-blink-leds.omnibus",
  "omnibus",
  true, // Text file
 2371, // Text length
  gWrapperFileContent_11_embeddedSampleCode
) ;

//--- File 'teensy-3-1/03-push-buttons.omnibus'

const char * gWrapperFileContent_2_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    digital.set (!mode:.inputPullUp !toPort:BUTTON_P0)\n"
  "    digital.set (!mode:.inputPullUp !toPort:BUTTON_P1)\n"
  "    digital.set (!mode:.inputPullUp !toPort:BUTTON_P2)\n"
  "    digital.set (!mode:.inputPullUp !toPort:BUTTON_P3)\n"
  "    digital.set (!mode:.inputPullUp !toPort:BUTTON_P4)\n"
  "  }\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    self.compteur +%= 50\n"
  "    digital.write (!not digital.read (!port:BUTTON_P0) !toPort:LED_L0)\n"
  "    digital.write (!not digital.read (!port:BUTTON_P1) !toPort:LED_L1)\n"
  "    digital.write (!not digital.read (!port:BUTTON_P2) !toPort:LED_L2)\n"
  "    digital.write (!not digital.read (!port:BUTTON_P3) !toPort:LED_L3)\n"
  "    digital.write (!not digital.read (!port:BUTTON_P4) !toPort:LED_L4)\n"
  "  }\n"
  "\n"
  "\n"
  "  //············································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_2_embeddedSampleCode (
  "03-push-buttons.omnibus",
  "omnibus",
  true, // Text file
 1489, // Text length
  gWrapperFileContent_2_embeddedSampleCode
) ;

//--- File 'teensy-3-1/04-section-service-duration.omnibus'

const char * gWrapperFileContent_13_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "section emptySection () {\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "service emptyService () {\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "section getSysTick () -> $u32 {\n"
  "  result = ©SYST.CVR\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let ITERATIONS = 7\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    var cumul $u32 = 0\n"
  "  //--- Compute getSysTick duration\n"
  "    for _ $u32 in 0 ..< ITERATIONS {\n"
  "      time.wait (!during:1)\n"
  "      let t0 = getSysTick ()\n"
  "      let t1 = getSysTick ()\n"
  "      cumul += t0 - t1\n"
  "      lcd.print (!u32:t0 - t1)\n"
  "      lcd.print (!spaces:1)\n"
  "    }\n"
  "    let systickDuration = cumul / ITERATIONS\n"
  "  //--- Compute emptySection duration\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    for _ $u32 in 0 ..< ITERATIONS {\n"
  "      time.wait (!during:1)\n"
  "      let t0 = getSysTick ()\n"
  "      emptySection ()\n"
  "      let t1 = getSysTick ()\n"
  "      lcd.print (!u32:t0 - t1 - systickDuration)\n"
  "      lcd.print (!spaces:1)\n"
  "    }\n"
  "  //--- Compute emptyService duration\n"
  "    lcd.goto (!line:2 !column:0)\n"
  "    for _ $u32 in 0 ..< 4 {\n"
  "      time.wait (!during:1)\n"
  "      let t0 = getSysTick ()\n"
  "      emptyService ()\n"
  "      let t1 = getSysTick ()\n"
  "      lcd.print (!u32:t0 - t1 - systickDuration)\n"
  "      lcd.print (!spaces:1)\n"
  "    }\n"
  "  }\n"
  "\n"
  "\n"
  "  //············································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_13_embeddedSampleCode (
  "04-section-service-duration.omnibus",
  "omnibus",
  true, // Text file
 1887, // Text length
  gWrapperFileContent_13_embeddedSampleCode
) ;

//--- File 'teensy-3-1/05-semaphore.omnibus'

const char * gWrapperFileContent_3_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "typealias $Sémaphore = $Semaphore\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync sémaphore = $Sémaphore (!value:0)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  var top $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode: .output !toPort: .D13)\n"
  "    digital.set (!mode: .output !toPort: LED_L1)\n"
  "    digital.set (!mode: .output !toPort: LED_L2)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until: self.top) {\n"
  "    sémaphore.signal ()\n"
  "    self.top += 250\n"
  "    digital.write (!yes !toPort: LED_L1)\n"
  "    let constanteAccentuée = self.top\n"
  "    time.wait (!until: constanteAccentuée)\n"
  "    sémaphore.signal ()\n"
  "    self.top += 250\n"
  "    digital.write (!no !toPort: LED_L1)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T2 @stacksize 512 @autostart {\n"
  "\n"
  "  while event sémaphore.wait () {\n"
  "    digital.write (!yes !toPort: LED_L2)\n"
  "    sémaphore.wait ()\n"
  "    digital.write (!no !toPort: LED_L2)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_3_embeddedSampleCode (
  "05-semaphore.omnibus",
  "omnibus",
  true, // Text file
 1195, // Text length
  gWrapperFileContent_3_embeddedSampleCode
) ;

//--- File 'teensy-3-1/06-integer-slices.omnibus'

const char * gWrapperFileContent_8_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let N = 12\n"
  "let slice = N [1 ... 3]\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche1 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "  var test = yes\n"
  "\n"
  "  event @onSetup first {\n"
  "    var toto = yes\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "    let b = {$u8 !b:self.test !1:0 !6:12}\n"
  "    lcd.print (!hex2:extend (b))\n"
  "    lcd.print (!spaces:1)\n"
  "    {$u8 \?b:var b7 \?2:var b2 \?5:var b3} = 0xAC\n"
  "    let bb = {$u8 !b:b7 !2:b2 !5:b3}\n"
  "    lcd.print (!hex2:extend (bb))\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    self.compteur +%= 500\n"
  "    digital.toggle (!port:LED_L3)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_8_embeddedSampleCode (
  "06-integer-slices.omnibus",
  "omnibus",
  true, // Text file
 1005, // Text length
  gWrapperFileContent_8_embeddedSampleCode
) ;

//--- File 'teensy-3-1/07-static-list-example.omnibus'

const char * gWrapperFileContent_15_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "staticArray maListeStatique {\n"
  "  let a $u32\n"
  "  let b $u32\n"
  "  let p func user (\?!par: y $u32)\n"
  "  let f func user (\?arg: x $u32) -> $u32\n"
  "}\n"
  "\n"
  "func toggleL2 user (\?!par: y $u32) {\n"
  "  digital.toggle (!port:LED_L2)\n"
  "  y += 1\n"
  "}\n"
  "\n"
  "func p2 user (\?arg: x $u32) -> $u32 {\n"
  "  result = 10 + x\n"
  "}\n"
  "\n"
  "func toggleL3 user (\?!par: y $u32) {\n"
  "  digital.toggle (!port:LED_L3)\n"
  "  y += 1\n"
  "}\n"
  "\n"
  "func p3 user (\?arg: x $u32) -> $u32 {\n"
  "  result = 15 + x\n"
  "}\n"
  "\n"
  "extend staticArray maListeStatique (\n"
  "  !5 !9 !func toggleL2 (\?!par: y $u32) !func p2 (\?arg: x $u32),\n"
  "  !15 !29 !func toggleL3 (\?!par: y $u32) !func p3 (\?arg: x $u32)\n"
  ")\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "  var deadline $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.deadline) {\n"
  "    self.deadline +%= 250\n"
  "    digital.toggle (!port:LED_L1)\n"
  "    var total $u32 = 0\n"
  "    for élément in maListeStatique {\n"
  "      total = total + élément.a\n"
  "      total += élément.a\n"
  "      total += élément.b\n"
  "      total += élément.f (!arg: 1)\n"
  "      élément.p (!\?par: total)\n"
  "    }\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:total)\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
   ;

const cRegularFileWrapper gWrapperFile_15_embeddedSampleCode (
  "07-static-list-example.omnibus",
  "omnibus",
  true, // Text file
 1544, // Text length
  gWrapperFileContent_15_embeddedSampleCode
) ;

//--- File 'teensy-3-1/08-guarded-semaphore2.omnibus'

const char * gWrapperFileContent_9_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "sync s0 = $Semaphore (!value:0)\n"
  "sync s1 = $Semaphore (!value:0)\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T0 @stacksize 512 @autostart {\n"
  "  var top $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.top) {\n"
  "    s0.signal ()\n"
  "    self.top += 250\n"
  "    digital.write (!yes !toPort:LED_L0)\n"
  "    time.wait (!until:self.top)\n"
  "    s0.signal ()\n"
  "    self.top += 250\n"
  "    digital.write (!no !toPort:LED_L0)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  var top $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.top) {\n"
  "    s1.signal ()\n"
  "    self.top += 249\n"
  "    digital.write (!yes !toPort:LED_L4)\n"
  "    time.wait (!until:self.top)\n"
  "    s1.signal ()\n"
  "    self.top += 249\n"
  "    digital.write (!no !toPort:LED_L4)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T2 @stacksize 512 @autostart {\n"
  "  var deadline $u32 = 0\n"
  "  var toggleD3 = no\n"
  "\n"
  "  while event s0.wait () {\n"
  "    self.toggleD3 = yes // Just for having a boolean guard\n"
  "  }\n"
  "\n"
  "  while self.toggleD3 {\n"
  "    digital.toggle (!port:LED_L1)\n"
  "    self.toggleD3 = no\n"
  "  }\n"
  "\n"
  "  while event s1.wait () {\n"
  "    digital.toggle (!port:LED_L3)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.deadline) {\n"
  "    self.deadline += 200\n"
  "    digital.toggle (!port:LED_L2)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
   ;

const cRegularFileWrapper gWrapperFile_9_embeddedSampleCode (
  "08-guarded-semaphore2.omnibus",
  "omnibus",
  true, // Text file
 1886, // Text length
  gWrapperFileContent_9_embeddedSampleCode
) ;

//--- File 'teensy-3-1/09-rendez-vous.omnibus'

const char * gWrapperFileContent_14_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "sync $RendezVous {\n"
  "  var inputWaitList = $TaskList ()\n"
  "  var outputWaitList = $TaskList ()\n"
  "  var inputGuardList = $GuardList ()\n"
  "  var outputGuardList = $GuardList ()\n"
  "\n"
  "  public primitive input @mutating () {\n"
  "    makeTaskReady (!\?fromList:self.outputWaitList \?found:let found)\n"
  "    if not found {\n"
  "      notifyChange (!\?forGuard:self.outputGuardList)\n"
  "      block (!\?inList:self.inputWaitList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public primitive output @mutating () {\n"
  "    makeTaskReady (!\?fromList:self.inputWaitList \?found:let found)\n"
  "    if not found {\n"
  "      notifyChange (!\?forGuard:self.inputGuardList)\n"
  "      block (!\?inList:self.outputWaitList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public guard input @noUnusedWarning () {\n"
  "    makeTaskReady (!\?fromList:self.outputWaitList \?found:accept)\n"
  "    if not accept {\n"
  "      handle (!\?guard:self.inputGuardList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  guard output @noUnusedWarning () {\n"
  "    makeTaskReady (!\?fromList:self.inputWaitList \?found:accept)\n"
  "    if not accept {\n"
  "      handle (!\?guard:self.outputGuardList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "sync rdvs = $RendezVous ()\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T0 @stacksize 512 @autostart {\n"
  "  var top $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "  }\n"
  "\n"
  "\n"
  "  while event time.wait (!until:self.top) {\n"
  "    rdvs.output ()\n"
  "    self.top += 250\n"
  "    digital.write (!yes !toPort:LED_L0)\n"
  "    time.wait (!until:self.top)\n"
  "    rdvs.output ()\n"
  "    self.top += 250\n"
  "    digital.write (!no !toPort:LED_L0)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "\n"
  "  while event rdvs.input () {\n"
  "    digital.write (!yes !toPort:LED_L1)\n"
  "    rdvs.input ()\n"
  "    digital.write (!no !toPort:LED_L1)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
   ;

const cRegularFileWrapper gWrapperFile_14_embeddedSampleCode (
  "09-rendez-vous.omnibus",
  "omnibus",
  true, // Text file
 2287, // Text length
  gWrapperFileContent_14_embeddedSampleCode
) ;

//--- File 'teensy-3-1/10-rendez-vous-data.omnibus'

const char * gWrapperFileContent_10_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "sync $RendezVousData {\n"
  "  var readBarrier  = $Semaphore (!value:0)\n"
  "  var writeBarrier = $Semaphore (!value:1)\n"
  "  var data $u32 = 0\n"
  "\n"
  "  public func output user @mutating @noUnusedWarning (\?data:inData $u32) {\n"
  "    self.writeBarrier.wait ()\n"
  "    self.data = inData\n"
  "    self.readBarrier.signal ()\n"
  "  }\n"
  "\n"
  "  public guard output @noUnusedWarning (\?data:inData $u32) : self.writeBarrier.wait () {\n"
  "    self.data = inData\n"
  "    self.readBarrier.signal ()\n"
  "  }\n"
  "\n"
  "  public func input user @mutating @noUnusedWarning (!data:outData $u32) {\n"
  "    self.readBarrier.wait ()\n"
  "    outData = self.data\n"
  "    self.writeBarrier.signal ()\n"
  "  }\n"
  "\n"
  "  public guard input @noUnusedWarning (!data:outData $u32) : self.readBarrier.wait () {\n"
  "    outData = self.data\n"
  "    self.writeBarrier.signal ()\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "sync s = $Semaphore (!value:1)\n"
  "sync rdvs = $RendezVousData ()\n"
  "sync rdvs2 = $RendezVousData ()\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T0 @stacksize 512 @autostart {\n"
  "  var top $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.top) {\n"
  "    rdvs2.input (\?data:let n)\n"
  "    rdvs.output (!data:n)\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    self.top += 500\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T1 @stacksize 1024 @autostart {\n"
  "  while event rdvs.input (\?data:let x) {\n"
  "    digital.toggle (!port:LED_L1)\n"
  "    s.wait ()\n"
  "      lcd.goto (!line:0 !column:0)\n"
  "      lcd.print (!u32:x)\n"
  "    s.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "task T2 @stacksize 1024 @autostart {\n"
  "  var deadline $u32 = 0\n"
  "  var n $u32 = 0\n"
  "\n"
  "  while event rdvs2.output (!data:self.n) {\n"
  "    digital.toggle (!port:LED_L2)\n"
  "    s.wait ()\n"
  "      lcd.goto (!line:1 !column:0)\n"
  "      lcd.print (!u32:self.n)\n"
  "    s.signal ()\n"
  "    self.n += 1\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.deadline) {\n"
  "    self.deadline += 200\n"
  "    digital.toggle (!port:LED_L4)\n"
  "  }\n"
  "}\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
   ;

const cRegularFileWrapper gWrapperFile_10_embeddedSampleCode (
  "10-rendez-vous-data.omnibus",
  "omnibus",
  true, // Text file
 2501, // Text length
  gWrapperFileContent_10_embeddedSampleCode
) ;

//--- File 'teensy-3-1/11-pit-unprivileged-mode-it.omnibus'

const char * gWrapperFileContent_6_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "section setupPIT () {\n"
  "  ©PIT.MCR = 0\n"
  "  ©PIT.LDVAL [0] = 200000\n"
  "  ©PIT.TCTRL [0] = {©PIT.TCTRL !TIE:1 !TEN:1} // $interrupt, enabled\n"
  "  enable (!interrupt: .PITChannel0)\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "driver pit > digital {\n"
  "  var gPITValue $u32 = 0\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    ©SIM.SCGC6 |= {©SIM.SCGC6 !PIT:1}\n"
  "  }\n"
  "\n"
  "  section getPITValue (!outValue $u32) {\n"
  "    outValue = self.gPITValue\n"
  "  }\n"
  "\n"
  "  interrupt section PITChannel0 {\n"
  "  //--- Acquitter l'interruption\n"
  "    ©PIT.TFLG [0] = {©PIT.TFLG !TIF:1}\n"
  "  //--- Incrémenter le compteur\n"
  "    self.gPITValue += 1\n"
  "  }\n"
  "}\n"
  "\n"
  "driver pit ()\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "  var deadline $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    setupPIT ()\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.deadline) {\n"
  "    self.deadline +%= 250\n"
  "    digital.write (!yes !toPort:LED_L1) // Allumer la led\n"
  "    time.wait (!until:self.deadline)\n"
  "    self.deadline +%= 250\n"
  "    digital.write (!no !toPort:LED_L1)  // Éteindre la led\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!spaces:10)\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    var value $u32\n"
  "    pit.getPITValue (\?value)\n"
  "    lcd.print (!u32:value)\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
   ;

const cRegularFileWrapper gWrapperFile_6_embeddedSampleCode (
  "11-pit-unprivileged-mode-it.omnibus",
  "omnibus",
  true, // Text file
 1482, // Text length
  gWrapperFileContent_6_embeddedSampleCode
) ;

//--- File 'teensy-3-1/12-array-example.omnibus'

const char * gWrapperFileContent_7_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//-----------------------------------------------------------------------------*\n"
  "\n"
  "let SIZE = 3\n"
  "\n"
  "typealias $A = [SIZE : $u32]\n"
  "\n"
  "struct $B {\n"
  "  var a $u32 = 0\n"
  "  var b $u32 = 0\n"
  "}\n"
  "\n"
  "struct $C {\n"
  "  var c = $B ()\n"
  "}\n"
  "\n"
  "let array = $A (!1 !2 !3)\n"
  "\n"
  "//------------------------------------------------*\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "  var deadline $u32 = 0\n"
  "  var array = $A (!repeated:0)\n"
  "  var array2 = $A (!repeated:1)\n"
  "  var index $i32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.deadline) {\n"
  "    self.deadline +%= 1000\n"
  "//    digital.toggle (!port:LED_L1)\n"
  "    self.array [self.index] = 0\n"
  "    self.index +%= 1\n"
  "    if self.index == SIZE {\n"
  "      self.index = 0\n"
  "    }\n"
  "    for i $u32 in 0 ..< $A.count {\n"
  "      self.array [i] +%= 1\n"
  "    }\n"
  "    self.array2 = self.array\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    for i $u32 in 0 ..< $A.count {\n"
  "      lcd.print (!u32:self.array2 [i])\n"
  "      lcd.print (!spaces:1)\n"
  "    }\n"
  "\n"
  "  //--- Init from a repeated static value\n"
  "    var a = $A (!repeated:5)\n"
  "  //--- Init from a repeated dynamic value\n"
  "    var e $u32 = 5\n"
  "    var b = $A (!repeated:e)\n"
  "  //--- Init from a static values\n"
  "    var c = $A (!0 !1 !2)\n"
  "  //--- Init from a dynamic values\n"
  "    var d = $A (!0 !e !2)\n"
  "  //---\n"
  "    var x $u32 = 0\n"
  "    for i $u32 in 0 ..< $A.count {\n"
  "      a [i] = 9\n"
  "      a [i] += 9\n"
  "      x += a [i]\n"
  "    }\n"
  "\n"
  "    var s = $B ()\n"
  "    var aa = s.a\n"
  "    var bb = s.b\n"
  "    s.a = aa\n"
  "    var s2 = $C ()\n"
  "    s2.c.a = aa\n"
  "  }\n"
  "}\n"
  "\n"
  "//------------------------------------------------*\n"
   ;

const cRegularFileWrapper gWrapperFile_7_embeddedSampleCode (
  "12-array-example.omnibus",
  "omnibus",
  true, // Text file
 1651, // Text length
  gWrapperFileContent_7_embeddedSampleCode
) ;

//--- File 'teensy-3-1/13-usb-device.omnibus'

const char * gWrapperFileContent_5_embeddedSampleCode = 
  "target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "import \"carte-tp-teensy-3-1.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// USB DEVICE DRIVER\n"
  "// Kevin Cuzner wrote a simpler version, and a great blog article:\n"
  "//   http://kevincuzner.com/2014/12/12/teensy-3-1-bare-metal-writing-a-usb-driver/\n"
  "//   https://github.com/kcuzner/teensy-oscilloscope/blob/master/scope-teensy/src/usb.c\n"
  "//---\n"
  "//   https://github.com/prof7bit/frdm-kl25z-minimal-usb-hid\n"
  "//   http://www.beyondlogic.org/usbnutshell/usb1.shtml\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let NUM_ENDPOINTS = 4\n"
  "\n"
  "//······················································································································\n"
  "\n"
  "struct $BDT @copyable {\n"
  " var desc $u32 = 0\n"
  " var addr $u32 = 0\n"
  "}\n"
  "\n"
  "\n"
  "let BDT_OWN   = 0x80\n"
  "let BDT_DATA1 = 0x40\n"
  "let BDT_DATA0 = 0x00\n"
  "let BDT_DTS   = 0x08\n"
  "let BDT_STALL = 0x04\n"
  "//let BDT_PID(n) (((n) >> 2) & 15)\n"
  "\n"
  "let EP0_SIZE = 64\n"
  "\n"
  "func BDT_DESC section (\?count $u32 \?data $u1) -> $u32 {\n"
  "  result = BDT_OWN | BDT_DTS | (count << 16) | if data ≠ 0 {BDT_DATA1} else {BDT_DATA0}\n"
  "}\n"
  "\n"
  "let TX   = 1\n"
  "let RX   = 0\n"
  "let ODD  = 1\n"
  "let EVEN = 0\n"
  "let DATA0 = 0\n"
  "let DATA1 = 1\n"
  "\n"
  "func index section (\? endpoint $u32 \?tx $u32 \?odd $u32) -> $u32 {\n"
  "  result = (endpoint << 2) | (tx << 1) | odd\n"
  "}\n"
  "\n"
  "let TRACE_SIZE = 10\n"
  "\n"
  "//······················································································································\n"
  "\n"
  "driver usb_device > digital {\n"
  "// Descriptor table should be aligned on a 512 byte-boudary\n"
  "  var descriptorTable @align 512 =  [(NUM_ENDPOINTS+1)*4 : $BDT] (!repeated: $BDT ())\n"
  "\n"
  "  var ep0_rx0_buf @align 4 = [EP0_SIZE : $u8] (!repeated:0)\n"
  "  var ep0_rx1_buf @align 4 = [EP0_SIZE : $u8] (!repeated:0)\n"
  "  var ep0_tx_bdt_bank $u32 = 0\n"
  "\n"
  "  var état = [TRACE_SIZE : $u4] (!repeated:0)\n"
  "  var indexÉtat $u32 = 0\n"
  "\n"
  "  public section lireÉtat (\?index $u32) -> $u32 {\n"
  "    result = extend (self.état [index])\n"
  "  }\n"
  "\n"
  "  var trace $u32 = 0\n"
  "\n"
  "  public section lireAddresseUSB () -> $u32 {\n"
  "    result = extend (©USB0.ADDR)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "  // This basically follows the flowchart in the Kinetis Quick Reference User Guide, Rev. 3, 05/2014, page 134\n"
  "  //-- Assume 48 MHz clock already running\n"
  "    ©SIM.SCGC4 |= {©SIM.SCGC4 !USBOTG:1} // SIM - enable clock\n"
  "//    MPU:RGDAAC [0] |= {MPU:RGDAAC !M4RE:1 !M4WE:1)\n"
  "  //--- If using IRC48M, turn on the USB clock recovery hardware\n"
  "//    if @static (F_CPU_MHZ == 180) || (F_CPU_MHZ == 216) {\n"
  "//      USB0:CLK_RECOVER_IRC_EN = {USB0:CLK_RECOVER_IRC_EN !IRC_EN:1 !REG_EN:1)\n"
  "//      USB0:CLK_RECOVER_CTRL = {USB0:CLK_RECOVER_CTRL !CLOCK_RECOVER_EN:1 !RESTART_IFRTRIM_EN:1)\n"
  "//    }\n"
  "  //--- Reset USB module (SB0:USBTRC0:USBRESET is always read as 0. Wait 2 USB clock cycles after setting this bit)\n"
  "    ©USB0.USBTRC0 |= {©USB0.USBTRC0 !USBRESET:1} // Page 1516\n"
  "    while ©USB0.USBTRC0.USBRESET ≠ 0 {} // wait for reset to end\n"
  "  //-- Set descriptor table base address\n"
  "    let descriptorTableBaseAddress = addressof (self.descriptorTable)\n"
  "    ©USB0.BDTPAGE1 = descriptorTableBaseAddress [08...15]\n"
  "    ©USB0.BDTPAGE2 = descriptorTableBaseAddress [16...23]\n"
  "    ©USB0.BDTPAGE3 = descriptorTableBaseAddress [24...31]\n"
  "  //--- Clear all ISR flags\n"
  "    ©USB0.ISTAT = 0xFF\n"
  "    ©USB0.ERRSTAT = 0xFF\n"
  "    ©USB0.OTGISTAT = 0xFF\n"
  "    ©USB0.INTEN = {©USB0.INTEN !USBRSTEN:1} // | 0x40\n"
  "  //-- Enable USB\n"
  "    ©USB0.CTL = {©USB0.CTL !USBENSOFEN:1}\n"
  "    ©USB0.USBCTRL = 0\n"
  "  //-- Enable reset interrupt\n"
  "    ©USB0.INTEN = {©USB0.INTEN !USBRSTEN:1}\n"
  "  //-- Enable interrupt in NVIC\n"
  "    enable (!interrupt: .USBOTG)\n"
  "  //--- Enable d+ pullup\n"
  "    ©USB0.CONTROL = {©USB0.CONTROL !DPPULLUPNONOTG:1} // Page 1515\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section USBOTG {\n"
  "    let status = ©USB0.ISTAT\n"
  "\n"
  "  //-------------------- RESET: configure Endpoint 0\n"
  "    if (status & {©USB0.ISTAT !USBRST:1}) ≠ 0 {\n"
  "//      self.état [self.indexÉtat] = 1\n"
  "//      self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "      self.configureEndPoint0OnReset ()\n"
  "  //    USB0:ISTAT = {USB0:ISTAT !USBRST:1) // Ack\n"
  "    }else{\n"
  "    //-------------------- START OF FRAME\n"
  "      if (status & {©USB0.ISTAT !SOFTOK:1}) ≠ 0 {\n"
  "  //        self.état [self.indexÉtat] = 2\n"
  "  //        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !SOFTOK:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- TOKEN COMPLETED\n"
  "      if (status & {©USB0.ISTAT !TOKDNE:1}) ≠ 0 { // Page 1502\n"
  "  //        digital.write (!yes !toPort:LED_L2)\n"
  "  //        self.état [self.indexÉtat] = 3\n"
  "  //        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        self.tokenCompleted ()\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !TOKDNE:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- STALL\n"
  "      if (status & {©USB0.ISTAT !STALL:1}) ≠ 0 {\n"
  "        self.état [self.indexÉtat] = 4\n"
  "        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !STALL:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- ERROR\n"
  "      if (status & {©USB0.ISTAT !ERROR:1}) ≠ 0 {\n"
  "        self.état [self.indexÉtat] = 5\n"
  "        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        let err = ©USB0.ERRSTAT\n"
  "        ©USB0.ERRSTAT = err\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !ERROR:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- SLEEP\n"
  "      if (status & {©USB0.ISTAT !SLEEP:1}) ≠ 0 {\n"
  "        self.état [self.indexÉtat] = 6\n"
  "        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !SLEEP:1} // Ack\n"
  "      }\n"
  "    }\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  func  configureEndPoint0OnReset section @mutating () {\n"
  "//      self.état [self.indexÉtat] = 1\n"
  "//      self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "      ©USB0.CTL |= {©USB0.CTL !ODDRST:1}\n"
  "      self.ep0_tx_bdt_bank = 0\n"
  "   //--- Set up buffers to receive Setup and OUT packets\n"
  "      self.descriptorTable [index(!0 !RX !EVEN)].desc = BDT_DESC (!EP0_SIZE  !0)\n"
  "      self.descriptorTable [index(!0 !RX !EVEN)].addr = addressof (self.ep0_rx0_buf)\n"
  "      self.descriptorTable [index(!0 !RX !ODD) ].desc = BDT_DESC (!EP0_SIZE !0)\n"
  "      self.descriptorTable [index(!0 !RX !ODD) ].addr = addressof (self.ep0_rx1_buf)\n"
  "      self.descriptorTable [index(!0 !TX !EVEN)].desc = 0\n"
  "      self.descriptorTable [index(!0 !TX !ODD) ].desc = 0\n"
  "    //--- Activate endpoint 0\n"
  "      ©USB0.ENDPT [0] = {©USB0.ENDPT !EPRXEN:1 !EPTXEN:1 !EPHSHK:1}\n"
  "    //--- Clear all ending interrupts\n"
  "      ©USB0.ERRSTAT = 0xFF\n"
  "      ©USB0.ISTAT = 0xFF\n"
  "    //--- Set the address to zero during enumeration\n"
  "      ©USB0.ADDR = 0\n"
  "    //--- Enable other interrupts\n"
  "      ©USB0.ERREN = 0xFF\n"
  "      ©USB0.INTEN = {©USB0.INTEN !STALLEN:1 !SLEEPEN:1 !TOKDNEEN:1 !SOFTOKEN:1 !ERROREN:1 !USBRSTEN:1}\n"
  "    //--- is this necessary\?\n"
  "   //   USB0.CTL = {USB0.CTL !USBENSOFEN:1) // Page 1507\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "  // This means a transaction has completed, we receive this interrupt\n"
  "  // after data was transferred and the handshake has been completed:\n"
  "  //\n"
  "  //   host:TOK_IN    -> device:DATA ->   host:ACK/NAK -> $interrupt\n"
  "  //   host:TOK_OUT   ->   host:DATA -> device:ACK/NAK -> $interrupt\n"
  "  //   host:TOK_SETUP ->   host:DATA -> device:ACK/NAK -> $interrupt\n"
  "  //\n"
  "  // The handler can then process the received data or queue more\n"
  "  // data to be sent during the next transaction. When there is a\n"
  "  // TOK_IN transaction and no data has been placed in the TX buffer\n"
  "  // then the hardware will automatically send a NAK:\n"
  "  //\n"
  "  //   host:TOK_IN -> device:NAK -> NO $interrupt!\n"
  "  //\n"
  "  // There will be no interrupt in this case! This means as long\n"
  "  // as there is no data to be sent there will also be no TOK_IN\n"
  "  // calls to the handler anymore. Something else has to prepare\n"
  "  // a new TX buffer for that endpoint when data becomes available\n"
  "  // again, the handler will only be called AFTER the transmission!\n"
  "\n"
  "  func tokenCompleted section @mutating () {\n"
  "    let transactionStatus = ©USB0.STAT\n"
  "    let endPoint $u4 = transactionStatus [4...7]\n"
  "//    let TX_transitionStatus = transactionStatus [3...3]\n"
  "//    let ODD_transitionStatus = transactionStatus [2...2]\n"
  "//    let index = index (!extend (endPoint) !extend (TX_transitionStatus) !extend (ODD_transitionStatus))\n"
  "    if endPoint == 0 {\n"
  "      self.endpoint_0_handler (!transactionStatus: transactionStatus)\n"
  "    }else{\n"
  "\n"
  "    }\n"
  "//    let index = transactionStatus >> 2\n"
  "//    let pid = (self.descriptorTable [index].desc >> 2) & 15\n"
  "//    if pid == 0x0D { // Setup received from host\n"
  "//      self.usb_setup ()\n"
  "//    //--- Unfreeze the USB, now that we're ready\n"
  "//      USB0:CTL = {USB0:CTL !USBENSOFEN:1)// clear TXSUSPENDTOKENBUSY bit\n"
  "//    }else if pid == 0x09 { // IN transaction completed to host\n"
  "//    }else if (pid == 0x01) || (pid == 0x02) { // OUT transaction received from host\n"
  "//\n"
  "//    }\n"
  "\n"
  "//    if endPoint == 0 {\n"
  "//      self.configure\n"
  "//    }else{\n"
  "//\n"
  "//    }\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  func endpoint_0_handler section @mutating (\?transactionStatus: _ $u8) {\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "//  func section usb_setup @mutating () {\n"
  "//  //---\n"
  "//    let index $u32 = 0\n"
  "//    self.descriptorTable [index].desc = BDT_DESC (!EP0_SIZE !DATA1)\n"
  "//    self.descriptorTable [index(!0 !TX !EVEN)].desc = 0\n"
  "//    self.descriptorTable [index(!0 !TX !ODD) ].desc = 0\n"
  "//  //--- Grab the 8 byte setup info\n"
  "//    let bmRequestType = self.ep0_rx0_buf [0] & 0x1F\n"
  "//    let bRequest = self.ep0_rx0_buf [1]\n"
  "//    if bmRequestType == 0 { // Setup device\n"
  "//      digital.write (!yes !toPort:LED_L2)\n"
  "//      self.usb_setup_device (!bRequest)\n"
  "//    }else if bmRequestType == 1 { // Setup interface\n"
  "//      digital.write (!yes !toPort:LED_L3)\n"
  "//\n"
  "//    }else if bmRequestType == 2 { // Setup endpoint\n"
  "//      digital.write (!yes !toPort:LED_L4)\n"
  "//\n"
  "//    }\n"
  "//////    let wValue  = {UInt16 !8:self.ep0_rx0_buf [3] !8:self.ep0_rx0_buf [2]}\n"
  "//////    let wIndex  = {UInt16 !8:self.ep0_rx0_buf [5] !8:self.ep0_rx0_buf [4]}\n"
  "//////    let wLength = {UInt16 !8:self.ep0_rx0_buf [7] !8:self.ep0_rx0_buf [6]}\n"
  "////  //--- Build uint16 requestAndType\n"
  "////    let requestAndType = {UInt16 !8:bRequest !8:bmRequestType}\n"
  "////  //---\n"
  "////    if requestAndType == 0x0500 { // Set address, nothing to do\n"
  "////        digital.write (!yes !toPort:LED_L2)\n"
  "////    }else if requestAndType == 0x0900 { // Set configuration\n"
  "////        digital.write (!yes !toPort:LED_L1)\n"
  "////\n"
  "////\n"
  "////    }else if requestAndType == 0x0880 { // Get configuration\n"
  "////    }else if requestAndType == 0x0080 { // Get status (device)\n"
  "////    }else if requestAndType == 0x0082 { // Get status (endpoint)\n"
  "////    }else if requestAndType == 0x0102 { // Clear feature (device)\n"
  "////    }else if requestAndType == 0x0302 { // Clear feature (endpoint)\n"
  "////    }else if (requestAndType == 0x0680) || (requestAndType == 0x0681) { // Get descriptor\n"
  "////        digital.write (!yes !toPort:LED_L3)\n"
  "////    }\n"
  "//  }\n"
  "//\n"
  "////#define mGET_STATUS           0\n"
  "////#define mCLR_FEATURE          1\n"
  "////#define mSET_FEATURE          3\n"
  "////#define mSET_ADDRESS          5\n"
  "////#define mGET_DESC             6\n"
  "////#define mSET_DESC             7\n"
  "////#define mGET_CONFIG           8\n"
  "////#define mSET_CONFIG           9\n"
  "////#define mGET_INTF             10\n"
  "////#define mSET_INTF             11\n"
  "////#define mSYNC_FRAME           12\n"
  "//\n"
  "//  func section usb_setup_device @mutating (\?bRequest $u8) {\n"
  "//    self.trace = extend (bRequest)\n"
  "////    const usb_descriptor_list_t *p;\n"
  "////    int len;\n"
  "////\n"
  "////    switch (setup->bRequest) {\n"
  "////        case mGET_DESC:\n"
  "////            p = usb_descriptor_list;                    // Find entry in table\n"
  "////            while(p->wValue) {\n"
  "////                if(p->wValue == setup->wValue) {\n"
  "////                    if(p->length == 0)\n"
  "////                        len = p->addr[0];               // Use structure length\n"
  "////                    else\n"
  "////                        len = p->length;\n"
  "////\n"
  "////                    iprintf(\"sending 0x%04x %d\\r\\n\",setup->wValue, len);\n"
  "////                    usb_queue_tx(ep, p->addr, min(len, setup->wLength));\n"
  "////                    return;\n"
  "////                }\n"
  "////                p++;\n"
  "////            }\n"
  "////            iprintf(\"NOT IMPLEMENTED! 0x%04x\\r\\n\", setup->wValue);\n"
  "////            break;\n"
  "////\n"
  "////        case mSET_ADDRESS:\n"
  "////            device_state = ADDRESS;\n"
  "////            device_address = setup->wValue & 0x7f;\n"
  "////            usb_tx(ep,0,0);                         // Send handshake\n"
  "////            break;\n"
  "////\n"
  "////        case mSET_CONFIG:\n"
  "////            iprintf(\"setconfig: %d\\r\\n\", setup->wValue);\n"
  "////            device_state = ENUMERATED;\n"
  "////            usb_set_config(setup->wValue);\n"
  "////            usb_tx(ep,0,0);                         // Send handshake\n"
  "////            break;\n"
  "////\n"
  "////        default:\n"
  "////            iprintf(\"NOT IMPLEMENTED! %d\\r\\n\", setup->bRequest);\n"
  "////            break;\n"
  "////      }\n"
  "//  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver usb_device ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// TASK\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "  var tick $u32 = 0\n"
  "  var état $u32 = 0\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  while event time.wait (!until:self.tick) {\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    self.tick +%= 500\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    for i $u32 in 0 ..< TRACE_SIZE {\n"
  "      let e = usb_device.lireÉtat (!i)\n"
  "      lcd.print (!hex2:e)\n"
  "    }\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!hex8:usb_device.lireAddresseUSB ())\n"
  "\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_5_embeddedSampleCode (
  "13-usb-device.omnibus",
  "omnibus",
  true, // Text file
 15177, // Text length
  gWrapperFileContent_5_embeddedSampleCode
) ;

//--- File 'teensy-3-1/carte-tp-teensy-3-1.omnibus-import'

const char * gWrapperFileContent_1_embeddedSampleCode = 
  "ctAssert target \"teensy-3-1/unprivileged\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver lcd (!DB4:.D16 !DB5:.D15 !DB6:.D14 !DB7:.D19 !RS:.D18 !ENABLE:.D17)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "//   ACTIVITY LED\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver ActivityLed > digital {\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "  }\n"
  "}\n"
  "\n"
  "driver ActivityLed ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "public func activityLedOn safe section @exported () {\n"
  "  digital.write (!yes !toPort:.D13)\n"
  "}\n"
  "\n"
  "public func activityLedOff safe section @exported () {\n"
  "  digital.write (!no !toPort:.D13)\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let LED_L0 = $DigitalPort.D3\n"
  "let LED_L1 = $DigitalPort.D4\n"
  "let LED_L2 = $DigitalPort.D5\n"
  "let LED_L3 = $DigitalPort.D6\n"
  "let LED_L4 = $DigitalPort.D7\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let BUTTON_P0 = $DigitalPort.D8\n"
  "let BUTTON_P1 = $DigitalPort.D9\n"
  "let BUTTON_P2 = $DigitalPort.D10\n"
  "let BUTTON_P3 = $DigitalPort.D11\n"
  "let BUTTON_P4 = $DigitalPort.D12\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "panic @setup 0 {\n"
  "  digital.set (!mode:.output !toPort:LED_L0)\n"
  "  digital.set (!mode:.output !toPort:LED_L1)\n"
  "  digital.set (!mode:.output !toPort:LED_L2)\n"
  "  digital.set (!mode:.output !toPort:LED_L3)\n"
  "  digital.set (!mode:.output !toPort:LED_L4)\n"
  "  lcd.clearScreenInPanicMode ()\n"
  "  lcd.gotoInPanicMode (!line:0 !column:0)\n"
  "  if LINE == 0 { // ISR Panic\n"
  "    lcd.printStringInPanicMode (!\"ISR PANIC\")\n"
  "  }else{\n"
  "    lcd.printStringInPanicMode (!FILE)\n"
  "    lcd.gotoInPanicMode (!line:2 !column:0)\n"
  "    lcd.printStringInPanicMode (!\"Line:\")\n"
  "    lcd.printUnsignedInPanicMode (!LINE)\n"
  "  }\n"
  "  lcd.gotoInPanicMode (!line:3 !column:0)\n"
  "  lcd.printStringInPanicMode (!\"Code:\")\n"
  "  lcd.printUnsignedInPanicMode (!CODE)\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "panic @loop 0 {\n"
  "  time.panicBusyWaitingDuringMS (!50)\n"
  "  digital.toggle (!port:LED_L0)\n"
  "  digital.toggle (!port:LED_L1)\n"
  "  digital.toggle (!port:LED_L2)\n"
  "  digital.toggle (!port:LED_L3)\n"
  "  digital.toggle (!port:LED_L4)\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_1_embeddedSampleCode (
  "carte-tp-teensy-3-1.omnibus-import",
  "omnibus-import",
  true, // Text file
 2773, // Text length
  gWrapperFileContent_1_embeddedSampleCode
) ;

//--- All files of 'teensy-3-1' directory

static const cRegularFileWrapper * gWrapperAllFiles_embeddedSampleCode_2 [16] = {
  & gWrapperFile_4_embeddedSampleCode,
  & gWrapperFile_12_embeddedSampleCode,
  & gWrapperFile_11_embeddedSampleCode,
  & gWrapperFile_2_embeddedSampleCode,
  & gWrapperFile_13_embeddedSampleCode,
  & gWrapperFile_3_embeddedSampleCode,
  & gWrapperFile_8_embeddedSampleCode,
  & gWrapperFile_15_embeddedSampleCode,
  & gWrapperFile_9_embeddedSampleCode,
  & gWrapperFile_14_embeddedSampleCode,
  & gWrapperFile_10_embeddedSampleCode,
  & gWrapperFile_6_embeddedSampleCode,
  & gWrapperFile_7_embeddedSampleCode,
  & gWrapperFile_5_embeddedSampleCode,
  & gWrapperFile_1_embeddedSampleCode,
  nullptr
} ;

//--- All sub-directories of 'teensy-3-1' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_2 [1] = {
  nullptr
} ;

//--- Directory 'teensy-3-1'

const cDirectoryWrapper gWrapperDirectory_2_embeddedSampleCode (
  "teensy-3-1",
  15,
  gWrapperAllFiles_embeddedSampleCode_2,
  0,
  gWrapperAllDirectories_embeddedSampleCode_2
) ;

//--- File 'teensy-3-6/01-blink-led.omnibus'

const char * gWrapperFileContent_27_embeddedSampleCode = 
  "target \"teensy-3-6/xtr64\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver RegisterRead > root {\n"
  "\n"
  "  public section SIM_CLKDIV1 () -> $u32 {\n"
  "    result = ©SIM.CLKDIV1\n"
  "  }\n"
  "\n"
  "  public section MCG_C5 () -> $u8 {\n"
  "    result = ©MCG.C5\n"
  "  }\n"
  "\n"
  "  public section MCG_C6 () -> $u8 {\n"
  "    result = ©MCG.C6\n"
  "  }\n"
  "}\n"
  "\n"
  "driver RegisterRead ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!string:\"OUTDIV: \")\n"
  "    lcd.print (!hex4: RegisterRead.SIM_CLKDIV1 ()>> 16)\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!string:\"PRDIV: \")\n"
  "    lcd.print (!u32:extend (RegisterRead.MCG_C5 () & 7))\n"
  "    lcd.goto (!line:2 !column:0)\n"
  "    lcd.print (!string:\"VDIV: \")\n"
  "    lcd.print (!u32:extend (RegisterRead.MCG_C6 () & 0x1F))\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    time.wait (!until: self.compteur)\n"
  "    digital.write (!no !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_27_embeddedSampleCode (
  "01-blink-led.omnibus",
  "omnibus",
  true, // Text file
 1450, // Text length
  gWrapperFileContent_27_embeddedSampleCode
) ;

//--- File 'teensy-3-6/02-blink-leds.omnibus'

const char * gWrapperFileContent_26_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode: .output !toPort: LED_L0)\n"
  "    digital.set (!mode: .output !toPort: LED_L1)\n"
  "    digital.set (!mode: .output !toPort: LED_L2)\n"
  "    digital.set (!mode: .output !toPort: LED_L3)\n"
  "    digital.set (!mode: .output !toPort: LED_L4)\n"
  "    lcd.print (!string: \"Hello\")\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort: LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    time.wait (!until: self.compteur)\n"
  "    digital.write (!no !toPort: LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    lcd.goto (!line: 1 !column: 0)\n"
  "    lcd.print (!u32: time.now ())\n"
  "    lcd.goto (!line:2 !column: 0)\n"
  "    lcd.print (!u32: freeStackSize ())\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T2 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L1)\n"
  "    self.compteur +%= 499\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L1)\n"
  "    self.compteur +%= 499\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T3 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L2)\n"
  "    self.compteur +%= 498\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L2)\n"
  "    self.compteur +%= 498\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T4 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L3)\n"
  "    self.compteur +%= 497\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L3)\n"
  "    self.compteur +%= 497\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T5 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L4)\n"
  "    self.compteur +%= 496\n"
  "    time.wait (!until:self.compteur)\n"
  "    digital.write (!no !toPort:LED_L4)\n"
  "    self.compteur +%= 496\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_26_embeddedSampleCode (
  "02-blink-leds.omnibus",
  "omnibus",
  true, // Text file
 2461, // Text length
  gWrapperFileContent_26_embeddedSampleCode
) ;

//--- File 'teensy-3-6/03-pit-dma.omnibus'

const char * gWrapperFileContent_33_embeddedSampleCode = 
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "//  This eDMA demo shows how using DMA for outputing periodic signal\n"
  "//  The output port is D13 (LED_BUILTIN), i.e. PTC5\n"
  "//  Port D3 is toggled at #PIT0 frequency\n"
  "//  Port D4 is toggled at the end of PATTERN_LENGTH (major loop count) transfers\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// This code works on Teensy 3.6\n"
  "// It has not been tested on Teensy 3.5\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// IT DOES NOT WORK ON TEENSY 3.1, THE MICRO-CONTROLLER IS BUGGY\n"
  "//    The symptom is D4 blinks at 150 kHz, independantly from PATTERN_FREQUENCY\n"
  "//    See Mask Set Errata for Mask 1N36B: https://www.nxp.com/docs/en/errata/KINETIS_K_1N36B.pdf\n"
  "//    Erratum ID e4588: Instead of sending a single DMA request every time the PIT expires, the first\n"
  "//    time the PIT triggers a DMA transfer the “always enabled” source will not negate its request.\n"
  "//    This results in the DMA request remaining asserted continuously after the first trigger.\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let PATTERN_FREQUENCY = 5 // In Hertz\n"
  "// So LED_L3 frequency is PATTERN_FREQUENCY / 2\n"
  "// So D4 frequency is PATTERN_FREQUENCY / 2 / PATTERN_LENGTH\n"
  "\n"
  "staticArray kPATTERN { let x $bool }\n"
  "\n"
  "extend staticArray kPATTERN ( // Morse code example: output \"S S S ...\"\n"
  "  !yes, !no, !yes, !no, !yes, // 3 dots : letter S\n"
  "  !no, !no, !no, !no, !no, !no, !no // Medium gap betwween words\n"
  ")\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// eDMA module cannot access GPIO from aliased bit-band regions.\n"
  "// eDMA module can access:\n"
  "//    - GPIOx_PDOR (but it changes all bits of the given GPIO x)\n"
  "//    - GPIOx_PSOR (it sets selected bits of the given GPIO x, but cannot reset them)\n"
  "//    - GPIOx_PCOR (it resets selected bits of the given GPIO x, but cannot set them)\n"
  "//    - GPIOx_PTOR (it toggles selected bits of the given GPIO x)\n"
  "// So we use GPIOx_PTOR\n"
  "\n"
  "// The output port is D7: PTD2\n"
  "// For toggling D7, without any change on other GPIOC bits: \"GPIOD_PTOR = (1 << 2)\"\n"
  "// \"GPIOD_PTOR = 0  ::\" is a nop\n"
  "// So we need to transform the kPATTERN boolean array to the gOutputPattern uint32_t array, that will\n"
  "// contains (1 << 2) for toggling PTD2 port, and 0 for not changing it: the values\n"
  "// are not the kPATTERN values, but the toggles we need to output the given pattern.\n"
  "// Building the gOutputPattern array is done at the beginning of the setup function.\n"
  "\n"
  "let PATTERN_LENGTH = kPATTERN.count\n"
  "\n"
  "typealias $PatternArray = [PATTERN_LENGTH : $u32]\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver pit > root {\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  section initializeDMA (\?!pattern $PatternArray) {\n"
  "  //--- Transform pattern for encoding level changes\n"
  "    var current = no\n"
  "    var index $u32 = 0\n"
  "    for élément in kPATTERN {\n"
  "      let b = élément.x\n"
  "      pattern [index] = if current ≠ b { 0 } else { 1 << 2 }\n"
  "      index += 1\n"
  "      current = b\n"
  "    }\n"
  "  //--- Set up LED_BUILTIN digital output at LOW level\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "    digital.write (!no !toPort:LED_L4)\n"
  "\n"
  "  //--- Power on DMA:MUX, PIT, DMA\n"
  "    ©SIM.SCGC6 |= {©SIM.SCGC6 !DMAMUX:1 !PIT:1}\n"
  "    ©SIM.SCGC7 |= {©SIM.SCGC7 !DMA:1}\n"
  "\n"
  "  //--- Unmask PIT0 interrupt\n"
  "    enable (!interrupt:.PITChannel3)\n"
  "\n"
  "  //--- Unmask DMAChannel0TransferComplete interrupt\n"
  "    enable (!interrupt:.DMAChannel0TransferComplete)\n"
  "\n"
  "  //--- Enable PIT module\n"
  "    ©PIT.MCR = 0\n"
  "\n"
  "  //--- Disable #PIT3\n"
  "    ©PIT.TCTRL [3] = 0\n"
  "\n"
  "  //--- #PIT0 clock frequency is BUS (in Hertz): #PIT:LDVAL3 sets the request period of DMA 0\n"
  "    ©PIT.LDVAL [3] = ((BUS_MHZ * 1_000_000) / PATTERN_FREQUENCY) - 1\n"
  "\n"
  "  //--- Clear #PIT3 interrupt flag\n"
  "    ©PIT.TFLG [3] = 1\n"
  "\n"
  "  //--- Disable DMA Channel 0: it is required for configuring it\n"
  "    ©DMAMUX.CHCFG [3] = 0\n"
  "\n"
  "  //--- Initial source address: the pattern array address\n"
  "    ©DMA.TCD_SADDR [3] = addressof (pattern)\n"
  "\n"
  "  //--- After every request, source address is incremented by 4\n"
  "    ©DMA.TCD_SOFF [3] = 4\n"
  "\n"
  "  //--- At the end of a major loop, source address is decremented to pattern array address\n"
  "    ©DMA.TCD_SLAST [3] = - 4 * PATTERN_LENGTH // - transfert_size * major_loop_count\n"
  "\n"
  "  //--- Destination address: the address of the GPIOC_PTOR control register\n"
  "    ©DMA.TCD_DADDR [3] = addressof ©GPIOD.PTOR\n"
  "\n"
  "  //--- After every request, destination address is not modified\n"
  "    ©DMA.TCD_DOFF [3] = 0\n"
  "\n"
  "  //--- At the end of a major loop, destination address is not modified\n"
  "    ©DMA.TCD_DLASTSGA [3] = 0\n"
  "\n"
  "  //--- Set major loop count\n"
  "    ©DMA.TCD_CITER_ELINKNO [3] = PATTERN_LENGTH\n"
  "    ©DMA.TCD_BITER_ELINKNO [3] = PATTERN_LENGTH\n"
  "\n"
  "  //--- Source and destination are 32-bit\n"
  "    ©DMA.TCD_ATTR [3] = {©DMA.TCD_ATTR\n"
  "      !SSIZE: DMA_TCD_ATTR_SIZE_32BIT // Transfer source size is 32-bit\n"
  "      !DSIZE: DMA_TCD_ATTR_SIZE_32BIT // Transfer destination size is 32-bit\n"
  "    }\n"
  "\n"
  "  //--- Number of bytes to transfer per request: 4\n"
  "    ©DMA.TCD_NBYTES_MLNO [3] = 4\n"
  "\n"
  "  //--- Set repetition and DMA interrupt\n"
  "  // if DREQ bit is set, the DMA performs PATTERN_LENGTH transfers and stops)\n"
  "  // Otherwise, the DMA performs PATTERN_LENGTH transfers repetitively\n"
  "    ©DMA.TCD_CSR [3] = {©DMA.TCD_CSR\n"
  "      !INTMAJOR:1 // Generate an interrupt at the end of major loop count transfert (for toggling D4)\n"
  "    }\n"
  "\n"
  "  //--- Configure DMA Channel\n"
  "    ©DMAMUX.CHCFG [3] = {©DMAMUX.CHCFG\n"
  "      !ENBL: 1 // DMA Channel 0 is enabled\n"
  "      !TRIG: 1 // DMA Channel 0 is triggered by #PIT 0\n"
  "      !SOURCE: DMAMUX_SOURCE_ALWAYS0 // Trigger is always active\n"
  "    }\n"
  "\n"
  "  //--- Start DMA Channel 0\n"
  "    ©DMA.SERQ = 3\n"
  "\n"
  "  //--- Enable #PIT 0 : it starts counting, enable interrupt\n"
  "    ©PIT.TCTRL [3] = {©PIT.TCTRL !TEN:1 !TIE:1}\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section PITChannel3 {\n"
  "  //--- Acquitter l'interruption\n"
  "    ©PIT.TFLG [3] = {©PIT.TFLG !TIF:1}\n"
  "  //--- Toggle LED_L3\n"
  "    digital.toggle (!port:LED_L3)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section DMAChannel0TransferComplete {\n"
  "  //--- Acquitter l'interruption\n"
  "    ©DMA.CINT = 0\n"
  "  //--- Toggle LED_L2\n"
  "    digital.toggle (!port:LED_L2)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver pit ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "  var pattern = $PatternArray (!repeated:0)\n"
  "\n"
  "  event @onSetup first {\n"
  "    pit.initializeDMA (!\?self.pattern)\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.write (!yes !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    time.wait (!until: self.compteur)\n"
  "    digital.write (!no !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32: self.pattern.count)\n"
  "    lcd.print (!string:\" \")\n"
  "    let cc = $ISRSlot.PITChannel3.u7\n"
  "    lcd.print (!u32: extend (cc))\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_33_embeddedSampleCode (
  "03-pit-dma.omnibus",
  "omnibus",
  true, // Text file
 8138, // Text length
  gWrapperFileContent_33_embeddedSampleCode
) ;

//--- File 'teensy-3-6/04-large-structure.omnibus'

const char * gWrapperFileContent_21_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let PATTERN_LENGTH = 1000\n"
  "\n"
  "typealias $PatternArray = [PATTERN_LENGTH : $u32]\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche @stacksize 5512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "  var x = $PatternArray (!repeated:0)\n"
  "  var y = $PatternArray (!repeated:0)\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    self.y = self.x\n"
  "    for i $u32 in 0 ..< self.x.count {\n"
  "      self.y [i] += self.compteur\n"
  "    }\n"
  "    digital.write (!yes !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    time.wait (!until: self.compteur)\n"
  "    digital.write (!no !toPort:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32: $PatternArray.count)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_21_embeddedSampleCode (
  "04-large-structure.omnibus",
  "omnibus",
  true, // Text file
 1152, // Text length
  gWrapperFileContent_21_embeddedSampleCode
) ;

//--- File 'teensy-3-6/05-periodic-timer.omnibus'

const char * gWrapperFileContent_30_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync $PeriodicTimer {\n"
  "  var deadline $u32 = 0\n"
  "  let period $u32\n"
  "  var guardList = $GuardList ()\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public primitive wait @noUnusedWarning @mutating () {\n"
  "    if self.deadline ≤ time.now () {\n"
  "      block (!onDeadline:self.deadline)\n"
  "    }\n"
  "    self.deadline += self.period\n"
  "  }\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public guard wait @noUnusedWarning () {\n"
  "    accept = self.deadline ≤ time.now ()\n"
  "    if accept {\n"
  "      self.deadline += self.period\n"
  "    }else{\n"
  "      handle (!\?guard:self.guardList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  public section deadline @noUnusedWarning () -> $u32 {\n"
  "    result = self.deadline\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "  var deadline = $PeriodicTimer (!period:500)\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "  }\n"
  "\n"
  "  while event self.deadline.wait () {\n"
  "    digital.toggle (!port: LED_L1)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_30_embeddedSampleCode (
  "05-periodic-timer.omnibus",
  "omnibus",
  true, // Text file
 1487, // Text length
  gWrapperFileContent_30_embeddedSampleCode
) ;

//--- File 'teensy-3-6/06-chained-pit-0-1.omnibus'

const char * gWrapperFileContent_19_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 192\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "driver chronomètre ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver chronomètre > root {\n"
  "\n"
  "  startup {\n"
  "  //--- Power on DMA_MUX, #PIT, DMA\n"
  "    ©SIM.SCGC6 |= {©SIM.SCGC6 !PIT:1}\n"
  "   //--- Enable #PIT module\n"
  "    ©PIT.MCR = 0\n"
  "  //--- Disable #PIT0 and #PIT1\n"
  "    ©PIT.TCTRL [0] = 0\n"
  "    ©PIT.TCTRL [1] = 0\n"
  "  //--- #PIT0 clock frequency is F_BUS (in Hertz)\n"
  "    ©PIT.LDVAL [0] = $u32.max\n"
  "    ©PIT.LDVAL [1] = $u32.max\n"
  "  //--- Enable #PIT0 and #PIT1 : start counting, no interrupt\n"
  "    ©PIT.TCTRL [1] = {©PIT.TCTRL !CHN:1 !TEN:1}\n"
  "    ©PIT.TCTRL [0] = {©PIT.TCTRL !TEN:1}\n"
  "  }\n"
  "\n"
  "  public section now @noUnusedWarning () -> $Uptime {\n"
  "    var r $u64 = extend (©PIT.LTMR64H)\n"
  "    r <<= 32\n"
  "    r |= extend (©PIT.LTMR64L)\n"
  "    r = ~ r\n"
  "    r +%= 1\n"
  "    result = $Uptime (!rawValue: r)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "struct $Uptime @copyable {\n"
  "  let rawValue $u64\n"
  "\n"
  "  public func raw @noUnusedWarning () -> $u64 {\n"
  "    result = self.rawValue\n"
  "  }\n"
  "\n"
  "  public func µs @noUnusedWarning () -> $u32 {\n"
  "    let r = (self.rawValue / BUS_MHZ) % 1_000\n"
  "    result = truncate (r)\n"
  "  }\n"
  "\n"
  "  public func ms @noUnusedWarning () -> $u32 {\n"
  "    let r = (self.rawValue / (BUS_MHZ * 1_000)) % 1_000\n"
  "    result = truncate (r)\n"
  "  }\n"
  "\n"
  "  public func s @noUnusedWarning () -> $u32 {\n"
  "    let r = self.rawValue / (BUS_MHZ * 1_000_000)\n"
  "    result = truncate (r)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    let tick = chronomètre.now ()\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:self.compteur)\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!u64:tick.raw () / BUS_MHZ)\n"
  "    lcd.goto (!line:2 !column:0)\n"
  "    lcd.print (!u32:tick.s ())\n"
  "    lcd.print (!string:\" \")\n"
  "    lcd.print (!u32:tick.ms ())\n"
  "    lcd.print (!string:\" \")\n"
  "    lcd.print (!u32:tick.µs ())\n"
  "    self.compteur +%= 1_001\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_19_embeddedSampleCode (
  "06-chained-pit-0-1.omnibus",
  "omnibus",
  true, // Text file
 2445, // Text length
  gWrapperFileContent_19_embeddedSampleCode
) ;

//--- File 'teensy-3-6/07-synchronization-gate.omnibus'

const char * gWrapperFileContent_37_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync $SynchronizationGate {\n"
  "  var isOpen $bool\n"
  "  var taskList = $TaskList ()\n"
  "  var guardList = $GuardList ()\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public service close @noUnusedWarning @mutating () {\n"
  "    self.isOpen = no\n"
  "  }\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public service open @noUnusedWarning @mutating () {\n"
  "    if not self.isOpen {\n"
  "      self.isOpen = yes\n"
  "      var continue = yes\n"
  "      while continue {\n"
  "        makeTaskReady (!\?fromList:self.taskList \?found:continue)\n"
  "      }\n"
  "      notifyChange (!\?forGuard: self.guardList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public primitive wait @noUnusedWarning @mutating () {\n"
  "    if not self.isOpen {\n"
  "      block (!\?inList:self.taskList)\n"
  "    }\n"
  "  }\n"
  "\n"
  "   //············································································\n"
  "\n"
  "  public guard wait @noUnusedWarning () {\n"
  "    accept = self.isOpen\n"
  "    if not accept {\n"
  "      handle (!\?guard:self.guardList)\n"
  "    }\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync s1 = $Semaphore (!value:0)\n"
  "sync s2 = $Semaphore (!value:0)\n"
  "sync gate = $SynchronizationGate (!isOpen:no)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche1 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    gate.open ()\n"
  "    s1.wait ()\n"
  "    s1.wait ()\n"
  "    gate.close ()\n"
  "    s2.signal ()\n"
  "    s2.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche2 @stacksize 512 @autostart {\n"
  "\n"
  "  while event gate.wait () {\n"
  "    digital.toggle (!port:LED_L1)\n"
  "    s1.signal ()\n"
  "    s2.wait ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche3 @stacksize 512 @autostart {\n"
  "\n"
  "  while event gate.wait () {\n"
  "    digital.toggle (!port:LED_L2)\n"
  "    s1.signal ()\n"
  "    s2.wait ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_37_embeddedSampleCode (
  "07-synchronization-gate.omnibus",
  "omnibus",
  true, // Text file
 2800, // Text length
  gWrapperFileContent_37_embeddedSampleCode
) ;

//--- File 'teensy-3-6/08-synchronization-buffer.omnibus'

const char * gWrapperFileContent_36_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let SIZE = 10\n"
  "\n"
  "sync $SynchronizationBuffer {\n"
  "  var data = [SIZE : $u32] (!repeated:$u32 ())\n"
  "  var readIndex $u32 = 0\n"
  "  var writeIndex $u32 = 0\n"
  "  var readSemaphore = $Semaphore (!value:0)\n"
  "  var writeSemaphore = $Semaphore (!value:SIZE)\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public func write user @mutating @noUnusedWarning (\? value $u32) {\n"
  "    self.writeSemaphore.wait ()\n"
  "    self.data [self.writeIndex] = value\n"
  "    self.writeIndex += 1\n"
  "    if self.writeIndex == SIZE {\n"
  "      self.writeIndex = 0\n"
  "    }\n"
  "    self.readSemaphore.signal ()\n"
  "  }\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public func read user @mutating @noUnusedWarning (! value $u32) {\n"
  "    self.readSemaphore.wait ()\n"
  "    value = self.data [self.readIndex]\n"
  "    self.readIndex += 1\n"
  "    if self.readIndex == SIZE {\n"
  "      self.readIndex = 0\n"
  "    }\n"
  "    self.writeSemaphore.signal ()\n"
  "  }\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  public guard read @noUnusedWarning (! value $u32) : self.readSemaphore.wait () {\n"
  "    value = self.data [self.readIndex]\n"
  "    self.readIndex += 1\n"
  "    if self.readIndex == SIZE {\n"
  "      self.readIndex = 0\n"
  "    }\n"
  "    self.writeSemaphore.signal ()\n"
  "  }\n"
  "\n"
  "  //············································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync buffer = $SynchronizationBuffer ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche1 @stacksize 512 {\n"
  "  var compteur $u32 = 0\n"
  "  var index $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    self.compteur +%= 500\n"
  "    self.index += 1\n"
  "    buffer.write (!self.index)\n"
  "  }\n"
  "}\n"
  "\n"
  "task Tâche2 @stacksize 512 @autostart {\n"
  "\n"
  "  while event buffer.read (\?var value $u32) {\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:value)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_36_embeddedSampleCode (
  "08-synchronization-buffer.omnibus",
  "omnibus",
  true, // Text file
 2535, // Text length
  gWrapperFileContent_36_embeddedSampleCode
) ;

//--- File 'teensy-3-6/09-PWM-with-PTM-module.omnibus'

const char * gWrapperFileContent_38_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver PWMOutput > root {\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  startup {\n"
  "  //--- Activate #TPM1 and #TPM2 modules\n"
  "    ©SIM.SCGC2 |= {©SIM.SCGC2 !TPM1:1 !TPM2:1}\n"
  "  //--- Use the OSCERCLK 16 MHz clock for TPM Module OSC_DIV.ERPS = 0 (--> divide by 1)\n"
  "  // TPMSRC --> 0:disabled, 1:see PLLFLLSEL, 2:OSCERCLK, 3:MCGIRCCLK\n"
  "  // PLLFLLSEL --> 0:MCGFLLCLK, 1:MCGPLLCLK, 2:USB1 PFD clock, 3:IRC48 clock (48 MHz)\n"
  "    ©SIM.SOPT2 |= {©SIM.SOPT2 !TPMSRC:2}\n"
  "  //------------------- #TPM1:channel 0 is 32 kHz square wave\n"
  "  //--- Set counter value to 0\n"
  "    ©TPM1.CNT = {©TPM1.CNT !COUNT:0}\n"
  "  //--- Set counter period --> 32 kHz\n"
  "    ©TPM1.MOD = {©TPM1.MOD !MOD:125 - 1}\n"
  "  //--- Configure channel 0 as single PWM output\n"
  "    ©TPM1.C0SC = {©TPM1.C0SC !MSB:1 !ELSB:1}\n"
  "  //--- Channel 0 match value --> Square wave\n"
  "    ©TPM1.C0V = {©TPM1.C0V !VAL: 125 / 2}\n"
  "  //--- Use PTA12 (#3) as #TPM1_CH0 output (ALT7)\n"
  "    ©PORTA.PCR [12] = {©PORTA.PCR !MUX:7}\n"
  "  //--- Configure #TPM1 (COMD=1 --> comptage, PS=2 --> prescaler = 4)\n"
  "    ©TPM1.SC = {©TPM1.SC !CMOD:1 !PS:2}\n"
  "  //------------------- #TPM2:channel 0 is 100 Hz wave\n"
  "  //--- Set counter value to 0\n"
  "    ©TPM2.CNT = {©TPM2.CNT !COUNT:0}\n"
  "  //--- Set counter period --> 100 Hz\n"
  "    ©TPM2.MOD = {©TPM2.MOD !MOD:40_000 - 1}\n"
  "  //--- Configure channel 0 as single PWM output\n"
  "    ©TPM2.C0SC = {©TPM2.C0SC !MSB:1 !ELSB:1}\n"
  "  //--- Channel 0 match value\n"
  "    ©TPM2.C0V = {©TPM2.C0V !VAL: 125 - 1}\n"
  "  //--- Channel 0 polarity\n"
  "    ©TPM2.POL = {©TPM2.POL !POL0:1}\n"
  "  //--- Use PTB18 (#29) as #TPM2_CH0 output (ALT6)\n"
  "    ©PORTB.PCR [18] = {©PORTB.PCR !MUX:6}\n"
  "  //--- Configure #TPM1 (COMD=1 --> comptage, PS=2 --> prescaler = 4)\n"
  "    ©TPM2.SC = {©TPM2.SC !CMOD:1 !PS:2}\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver PWMOutput ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche1 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    digital.toggle (!port:LED_L4)\n"
  "    self.compteur +%= 500\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_38_embeddedSampleCode (
  "09-PWM-with-PTM-module.omnibus",
  "omnibus",
  true, // Text file
 2750, // Text length
  gWrapperFileContent_38_embeddedSampleCode
) ;

//--- File 'teensy-3-6/10-integer-slices.omnibus'

const char * gWrapperFileContent_29_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche1 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "  var test = yes\n"
  "\n"
  "  event @onSetup first {\n"
  "    let b = {$u8 !b:self.test !1:0 !6:12}\n"
  "    lcd.print (!hex2:extend (b))\n"
  "    lcd.print (!spaces:1)\n"
  "    var b7 $bool\n"
  "    {$u8 \?b:b7 \?2:let b2 \?5:let b3} = 0xAC\n"
  "    let bb = {$u8 !b:b7 !2:b2 !5:b3}\n"
  "    lcd.print (!hex2:extend (bb))\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.compteur) {\n"
  "    self.compteur +%= 500\n"
  "    digital.toggle (!port:LED_L3)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_29_embeddedSampleCode (
  "10-integer-slices.omnibus",
  "omnibus",
  true, // Text file
 795, // Text length
  gWrapperFileContent_29_embeddedSampleCode
) ;

//--- File 'teensy-3-6/11-heap.omnibus'

const char * gWrapperFileContent_40_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "option \"task-strict-priority-order\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver project > digital {\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.inputPullUp !toPort:BUTTON_P0)\n"
  "  }\n"
  "}\n"
  "\n"
  "driver project ()\n"
  "\n"
  "typealias $Array8 = [$u8]\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "struct $StructWithARC {\n"
  "  public var unEntierQuelconque $u32 = 0\n"
  "  public var donnée = $Array8 ()\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "struct $AutreStructWithARC {\n"
  "  public var autreEntierQuelconque $u32 = 0\n"
  "  public var structure = $StructWithARC ()\n"
  "  public var autreDonnée = $Array8 ()\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 > T2 @stacksize 512 @autostart {\n"
  "  var échéance $u32 = 0\n"
  "  var freeRam $u32 = 0\n"
  "  var start $u32 = 0\n"
  "  var maxAllocationParSeconde $u32 = 0\n"
  "  var alloc $u32 = 0\n"
  "  var current $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    lcd.print (!string:\"Free:\")\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!string:\"Start:\")\n"
  "    lcd.goto (!line:2 !column:0)\n"
  "    lcd.print (!string:\"Max:\")\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.échéance) {\n"
  "    self.échéance +%= 1_000\n"
  "    digital.toggle (!port:LED_L3)\n"
  "    let freeRam = freeByteCount ()\n"
  "    if self.freeRam ≠ freeRam {\n"
  "      self.freeRam = freeRam\n"
  "      lcd.goto (!line:0 !column:6)\n"
  "      lcd.print (!u32:freeRam !width:6)\n"
  "    }\n"
  "    let start = heapStartAddress ()\n"
  "    if self.start ≠ start {\n"
  "      self.start = start\n"
  "      lcd.goto (!line:1 !column:6)\n"
  "      lcd.print (!hex8:start)\n"
  "    }\n"
  "    let alloc = totalAllocationObjectCount ()\n"
  "    let allocationParSecondes = alloc - self.alloc\n"
  "    if allocationParSecondes > self.maxAllocationParSeconde {\n"
  "      self.maxAllocationParSeconde = allocationParSecondes\n"
  "      lcd.goto (!line:2 !column:6)\n"
  "      lcd.print (!u32:allocationParSecondes !width:7)\n"
  "    }\n"
  "    if self.alloc ≠ alloc {\n"
  "      self.alloc = alloc\n"
  "      lcd.goto (!line:3 !column:0)\n"
  "      lcd.print (!u32:alloc !width:10)\n"
  "    }\n"
  "    let current = currentlyAllocatedObjectCount ()\n"
  "    if self.current ≠ current {\n"
  "      self.current = current\n"
  "      lcd.goto (!line:3 !column:17)\n"
  "      lcd.print (!u32:current !width:3)\n"
  "    }\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T2 > backgroundTask @stacksize 512 @autostart {\n"
  "  var échéance1 $u32 = 2001\n"
  "  var échéance2 $u32 = 2001\n"
  "  var échéance3 $u32 = 2001\n"
  "  var data1 = $Array8 ()\n"
  "  var data2 = $Array8 ()\n"
  "  var structure = $AutreStructWithARC ()\n"
  "  var b $u8 = 0\n"
  "\n"
  "  while event time.wait (!until:self.échéance1) {\n"
  "    self.échéance1 +%= 71\n"
  "    digital.toggle (!port:LED_L4)\n"
  "    if digital.read (!port:BUTTON_P0) {\n"
  "      if self.data1.length () < 500 {\n"
  "        self.data1.append (!self.b)\n"
  "        self.b +%= 1\n"
  "        // assert (self.b < 25) // For checking assert instruction\n"
  "      }else{\n"
  "        self.data1.removeAll ()\n"
  "      }\n"
  "    }else{\n"
  "      self.data1.removeAll ()\n"
  "    }\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.échéance2) {\n"
  "    self.échéance2 +%= 97\n"
  "    self.data2 = self.data1\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.échéance3) {\n"
  "    self.échéance3 +%= 511\n"
  "    self.structure.structure.donnée = self.data2\n"
  "    self.testReleaseLocalVar (!in:self.structure.structure.donnée)\n"
  "  }\n"
  "\n"
  "  func testReleaseLocalVar (\?in: inData $Array8) {\n"
  "    var d = $StructWithARC ()\n"
  "    d.donnée = inData\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task backgroundTask @stacksize 512 @autostart {\n"
  "  var data = $Array8 ()\n"
  "\n"
  "  while event time.wait (!until:0) {\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    if digital.read (!port:BUTTON_P0) {\n"
  "      if self.data.length () == 0 {\n"
  "        self.data.append (!0)\n"
  "        self.testReleaseLocalVar (!in:self.data)\n"
  "      }else{\n"
  "        self.data.removeAll ()\n"
  "      }\n"
  "    }else{\n"
  "      self.data.removeAll ()\n"
  "    }\n"
  "  }\n"
  "\n"
  "  func testReleaseLocalVar (\?in: inData $Array8) {\n"
  "    externalSection (!in:inData)\n"
  "    var d $u32 = 143\n"
  "    var x $u3 = d [3 ... 5]\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "section externalSection (\?in: inData $Array8) {\n"
  "  var d = inData\n"
  "  d.append (!0)\n"
  "  var xxxx = [$bool] ()\n"
  "  xxxx.append (!yes)\n"
  "  var lg = xxxx.length ()\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_40_embeddedSampleCode (
  "11-heap.omnibus",
  "omnibus",
  true, // Text file
 5013, // Text length
  gWrapperFileContent_40_embeddedSampleCode
) ;

//--- File 'teensy-3-6/12-section-service-duration.omnibus'

const char * gWrapperFileContent_20_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "section emptySection () {\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "service emptyService () {\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "section getSysTick () -> $u32 {\n"
  "  result = ©SYST.CVR\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let ITERATIONS = 7\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "\n"
  "  //············································································\n"
  "\n"
  "  event @onSetup first {\n"
  "    var cumul $u32 = 0\n"
  "  //--- Compute getSysTick duration\n"
  "    for _ $u32 in 0 ..< ITERATIONS {\n"
  "      time.wait (!during:1)\n"
  "      let t0 = getSysTick ()\n"
  "      let t1 = getSysTick ()\n"
  "      cumul += t0 - t1\n"
  "      lcd.print (!u32:t0 - t1)\n"
  "      lcd.print (!spaces:1)\n"
  "    }\n"
  "    let systickDuration = cumul / ITERATIONS\n"
  "  //--- Compute emptySection duration\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    for _ $u32 in 0 ..< ITERATIONS {\n"
  "      time.wait (!during:1)\n"
  "      let t0 = getSysTick ()\n"
  "      emptySection ()\n"
  "      let t1 = getSysTick ()\n"
  "      lcd.print (!u32:t0 - t1 - systickDuration)\n"
  "      lcd.print (!spaces:1)\n"
  "    }\n"
  "  //--- Compute emptyService duration\n"
  "    lcd.goto (!line:2 !column:0)\n"
  "    for _ $u32 in 0 ..< 4 {\n"
  "      time.wait (!during:1)\n"
  "      let t0 = getSysTick ()\n"
  "      emptyService ()\n"
  "      let t1 = getSysTick ()\n"
  "      lcd.print (!u32:t0 - t1 - systickDuration)\n"
  "      lcd.print (!spaces:1)\n"
  "    }\n"
  "  }\n"
  "\n"
  "\n"
  "  //············································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_20_embeddedSampleCode (
  "12-section-service-duration.omnibus",
  "omnibus",
  true, // Text file
 1855, // Text length
  gWrapperFileContent_20_embeddedSampleCode
) ;

//--- File 'teensy-3-6/13-usb-device.omnibus'

const char * gWrapperFileContent_22_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "//   Display clock settings\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "//let myBUS_MHZ @display = BUS_MHZ\n"
  "//let myFLEXBUS_MHZ @display = FLEXBUS_MHZ\n"
  "//let myFLASH_KHZ @display = FLASH_KHZ\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// USB DEVICE DRIVER\n"
  "// Kevin Cuzner wrote a simpler version, and a great blog article:\n"
  "//   http://kevincuzner.com/2014/12/12/teensy-3-1-bare-metal-writing-a-usb-driver/\n"
  "//   https://github.com/kcuzner/teensy-oscilloscope/blob/master/scope-teensy/src/usb.c\n"
  "//---\n"
  "//   https://github.com/prof7bit/frdm-kl25z-minimal-usb-hid\n"
  "//   http://www.beyondlogic.org/usbnutshell/usb1.shtml\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// 1. La routine init du pilote est exécutée. Elle se termine par l'activation du pull-up sur D+. Ceci a pour\n"
  "//    conséquence que le host lance une commande d'initialisation qui déclenche une interruption\n"
  "// 2. L'interruption est du type 'RESET', et la routine configureEndPoint0OnReset effectue la configuration.\n"
  "// 3. Nouvelle interruption, du type 'TOKEN COMPLETED' -> on lance tokenCompleted (). Cette routine lit l'endPoint\n"
  "//    concerné, il s'agit du n°0. On exécute alors endpoint_0_handler ().\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let DEVICE_DESCRIPTOR = [18 : $u8] (\n"
  "  !18 // Descriptor size in bytes\n"
  "  !1  // DEVICE constant\n"
  "  !0x00 !0x02 // USB specification release (BCD): 0x0200\n"
  "  !0x02 // Class code (2 -> communication)\n"
  "  !0    // Subclass code\n"
  "  !0    // Protocol code\n"
  "  !8    // Maximum packet size for endpoint0 (low-speed: 8, full-speed: 8, 16, 32, 64)\n"
  "  !0xAD !0xDE // Vendor ID:   0xDEAD\n"
  "  !0xAF !0xBE // Product ID : 0xBEAF\n"
  "  !0 !0 // Device release number (BCD)\n"
  "  !0 // Index of string descriptor for the manufacturer (0 -> no string)\n"
  "  !0 // Index of string descriptor for the product (0 -> no string)\n"
  "  !0 // Index of string descriptor for the serial umber (0 -> no string)\n"
  "  !1 // Number of possible configurations\n"
  ")\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let CONFIG_DESCRIPTOR = [32 : $u8] (\n"
  "//--- Configuration descriptor\n"
  "  !9  // Configuration descriptor size in bytes\n"
  "  !2  // CONFIGURATION constant\n"
  "  !32 !0 // The number of bytes in the configuration descriptor and all its subordinate descriptors\n"
  "  !1 // Number of interfaces in the configuration (should be ≥ 1)\n"
  "  !1 // Identifier for Set_Configuration and Get_Configuration (should be ≥ 1)\n"
  "  !0 // Index of string descriptor for the configuration (0 -> no string)\n"
  "  !0 // Device is bus-powered (bit 6=1 --> self powered)\n"
  "  !100 / 2 // Half of bus current required, in milli-amperes (50 --> 100 mA)\n"
  "//--- Subordinate descriptor: INTERFACE association\n"
  "  !9  // $interface descriptor size in bytes\n"
  "  !4  // INTERFACE constant\n"
  "  !0  // Number identifying this interface\n"
  "  !0  // Value used to select an alternate setting (0: no alternate setting)\n"
  "  !2  // Number of endpoints supported (not counting endpoint 0)\n"
  "  !0x0A // Class code (0x0A --> Data $interface of Communication Device Class)\n"
  "  !0x00 // Subclass code\n"
  "  !0  // $interface Protocol\n"
  "  !0  // Index of string descriptor for the interface (0 --> no string)\n"
  "//--- Subordinate descriptor: ENDPOINT association\n"
  "  !7  // Endpoint descriptor size in bytes\n"
  "  !5  // ENDPOINT constant\n"
  "  !1  // ENDPOINT number and direction (bit 7=0 --> OUT)\n"
  "  !0x02 // Transfer type (0x02 --> BULK)\n"
  "  !64 !0 // Maximum packet size (0 à 1024); here: 64\n"
  "  !0  // Maximum latency / polling interval / NAK rate [ignored for bulk and control transfers]\n"
  "//--- Subordinate descriptor: ENDPOINT association\n"
  "  !7  // Endpoint descriptor size in bytes\n"
  "  !5  // ENDPOINT constant\n"
  "  !1 | 0x80  // ENDPOINT number and direction (bit 7=1 --> IN)\n"
  "  !0x02 // Transfer type (0x02 --> BULK)\n"
  "  !64 !0 // Maximum packet size (0 à 1024); here: 64\n"
  "  !0  // Maximulm latency / polling interval / NAK rate [ignored for bulk and control transfers]\n"
  ")\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let NUM_ENDPOINTS = 4\n"
  "\n"
  "//······················································································································\n"
  "\n"
  "struct $BDT @copyable {\n"
  " var desc $u32 = 0\n"
  " var addr $u32 = 0\n"
  "}\n"
  "\n"
  "\n"
  "let BDT_OWN   = 0x80\n"
  "let BDT_DATA1 = 0x40\n"
  "let BDT_DATA0 = 0x00\n"
  "let BDT_DTS   = 0x08\n"
  "let BDT_STALL = 0x04\n"
  "//let BDT_PID(n) (((n) >> 2) & 15)\n"
  "\n"
  "let EP0_RX_SIZE = 8\n"
  "\n"
  "func BDT_DESC safe section (\?count $u32 \?data $u1) -> $u32 {\n"
  "  result = BDT_OWN | BDT_DTS | (count << 16) | if data ≠ 0 {BDT_DATA1} else {BDT_DATA0}\n"
  "}\n"
  "\n"
  "let TX   = 1\n"
  "let RX   = 0\n"
  "let ODD  = 1\n"
  "let EVEN = 0\n"
  "let DATA0 = 0\n"
  "let DATA1 = 1\n"
  "\n"
  "func index safe section (\? endpoint $u32 \?tx $u32 \?odd $u32) -> $u32 {\n"
  "  result = (endpoint << 2) | (tx << 1) | odd\n"
  "}\n"
  "\n"
  "let TRACE_SIZE = 10\n"
  "\n"
  "//······················································································································\n"
  "\n"
  "driver usb_device > digital {\n"
  "// Descriptor table should be aligned on a 512 byte-boudary\n"
  "  var descriptorTable @align 512 = [(NUM_ENDPOINTS+1)*4 : $BDT] (!repeated: $BDT ())\n"
  "\n"
  "  var ep0_rx0_buf @align 4 = [EP0_RX_SIZE : $u8] (!repeated:0)\n"
  "  var ep0_rx1_buf @align 4 = [EP0_RX_SIZE : $u8] (!repeated:0)\n"
  "  var ep0_tx_bdt_bank $u32 = 0\n"
  "\n"
  "  var état = [TRACE_SIZE : $u4] (!repeated:0)\n"
  "  var indexÉtat $u32 = 0\n"
  "\n"
  "  public section lireÉtat (\?index $u32) -> $u32 {\n"
  "    result = extend (self.état [index])\n"
  "  }\n"
  "\n"
  "  var trace $u32 = 0\n"
  "\n"
  "  public section lireTrace () -> $u32 {\n"
  "    result = self.trace\n"
  "  }\n"
  "\n"
  "  public section lireAddresseUSB () -> $u32 {\n"
  "    result = extend (©USB0.ADDR)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L2)\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "  // This basically follows the flowchart in the Kinetis Quick Reference User Guide, Rev. 3, 05/2014, page 134\n"
  "  //-- Assume 48 MHz clock already running\n"
  "    ©SIM.SCGC4 |= {©SIM.SCGC4 !USBOTG:1} // SIM - enable clock\n"
  "    ©MPU.RGDAAC [0] |= {©MPU.RGDAAC !M4RE:1 !M4WE:1}\n"
  "  //--- If using IRC48M, turn on the USB clock recovery hardware\n"
  "    if @static (F_CPU_MHZ == 180) || (F_CPU_MHZ == 216) {\n"
  "      ©USB0.CLK_RECOVER_IRC_EN = {©USB0.CLK_RECOVER_IRC_EN !IRC_EN:1 !REG_EN:1}\n"
  "      ©USB0.CLK_RECOVER_CTRL = {©USB0.CLK_RECOVER_CTRL !CLOCK_RECOVER_EN:1 !RESTART_IFRTRIM_EN:1}\n"
  "    }\n"
  "  //--- Reset USB module (SB0:USBTRC0:USBRESET is always read as 0. Wait 2 USB clock cycles after setting this bit)\n"
  "    ©USB0.USBTRC0 |= {©USB0.USBTRC0 !USBRESET:1} // Page 1516\n"
  "    while ©USB0.USBTRC0.USBRESET ≠ 0 {} // wait for reset to end\n"
  "  //-- Set descriptor table base address\n"
  "    let descriptorTableBaseAddress = addressof (self.descriptorTable)\n"
  "    ©USB0.BDTPAGE1 = descriptorTableBaseAddress [08...15]\n"
  "    ©USB0.BDTPAGE2 = descriptorTableBaseAddress [16...23]\n"
  "    ©USB0.BDTPAGE3 = descriptorTableBaseAddress [24...31]\n"
  "  //--- Clear all ISR flags\n"
  "    ©USB0.ISTAT = 0xFF\n"
  "    ©USB0.ERRSTAT = 0xFF\n"
  "    ©USB0.OTGISTAT = 0xFF\n"
  "    ©USB0.INTEN = {©USB0.INTEN !USBRSTEN:1} // | 0x40\n"
  "  //-- Enable USB\n"
  "    ©USB0.CTL = {©USB0.CTL !USBENSOFEN:1}\n"
  "    ©USB0.USBCTRL = 0\n"
  "  //-- Enable reset interrupt\n"
  "    ©USB0.INTEN = {©USB0.INTEN !USBRSTEN:1}\n"
  "  //-- Enable interrupt in NVIC\n"
  "    enable (!interrupt: .USBFS_OTG)\n"
  "  //--- Enable d+ pullup\n"
  "    ©USB0.CONTROL = {©USB0.CONTROL !DPPULLUPNONOTG:1} // Page 1515\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section USBFS_OTG {\n"
  "    let status = ©USB0.ISTAT\n"
  "\n"
  "  //-------------------- RESET: configure Endpoint 0\n"
  "    if (status & {©USB0.ISTAT !USBRST:1}) ≠ 0 {\n"
  "      self.trace |= 1\n"
  "//      self.état [self.indexÉtat] = 1\n"
  "//      self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "      self.configureEndPoint0OnReset ()\n"
  "  //    ©USB0.ISTAT = ©USB0.ISTAT !USBRST:1) // Ack\n"
  "    }else{\n"
  "    //-------------------- START OF FRAME\n"
  "      if (status & {©USB0.ISTAT !SOFTOK:1}) ≠ 0 {\n"
  "  //        self.état [self.indexÉtat] = 2\n"
  "  //        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !SOFTOK:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- TOKEN COMPLETED\n"
  "      if (status & {©USB0.ISTAT !TOKDNE:1}) ≠ 0 { // Page 1502\n"
  "        self.trace |= 2\n"
  "  //        digital.write (!yes !toPort:LED_L2)\n"
  "  //        self.état [self.indexÉtat] = 3\n"
  "  //        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        self.tokenCompleted ()\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !TOKDNE:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- STALL\n"
  "      if (status & {©USB0.ISTAT !STALL:1}) ≠ 0 {\n"
  "        self.état [self.indexÉtat] = 4\n"
  "        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !STALL:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- ERROR\n"
  "      if (status & {©USB0.ISTAT !ERROR:1}) ≠ 0 {\n"
  "        self.état [self.indexÉtat] = 5\n"
  "        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        let err = ©USB0.ERRSTAT\n"
  "        ©USB0.ERRSTAT = err\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !ERROR:1} // Ack\n"
  "      }\n"
  "\n"
  "    //-------------------- SLEEP\n"
  "      if (status & {©USB0.ISTAT !SLEEP:1}) ≠ 0 {\n"
  "        self.état [self.indexÉtat] = 6\n"
  "        self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "        ©USB0.ISTAT = {©USB0.ISTAT !SLEEP:1} // Ack\n"
  "      }\n"
  "    }\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  func configureEndPoint0OnReset section @mutating () {\n"
  "//      self.état [self.indexÉtat] = 1\n"
  "//      self.indexÉtat = (self.indexÉtat + 1) % TRACE_SIZE\n"
  "      ©USB0.CTL |= {©USB0.CTL !ODDRST:1}\n"
  "      self.ep0_tx_bdt_bank = 0\n"
  "   //--- Set up buffers to receive Setup and OUT packets\n"
  "      self.descriptorTable [index(!0 !RX !EVEN)].desc = BDT_DESC (!EP0_RX_SIZE  !0)\n"
  "      self.descriptorTable [index(!0 !RX !EVEN)].addr = addressof (self.ep0_rx0_buf)\n"
  "      self.descriptorTable [index(!0 !RX !ODD) ].desc = BDT_DESC (!EP0_RX_SIZE !0)\n"
  "      self.descriptorTable [index(!0 !RX !ODD) ].addr = addressof (self.ep0_rx1_buf)\n"
  "      self.descriptorTable [index(!0 !TX !EVEN)].desc = 0\n"
  "      self.descriptorTable [index(!0 !TX !ODD) ].desc = 0\n"
  "    //--- Activate endpoint 0\n"
  "      ©USB0.ENDPT [0] = {©USB0.ENDPT !EPRXEN:1 !EPTXEN:1 !EPHSHK:1}\n"
  "    //--- Clear all ending interrupts\n"
  "      ©USB0.ERRSTAT = 0xFF\n"
  "      ©USB0.ISTAT = 0xFF\n"
  "    //--- Set the address to zero during enumeration\n"
  "      ©USB0.ADDR = 0\n"
  "    //--- Enable other interrupts\n"
  "      ©USB0.ERREN = 0xFF\n"
  "      ©USB0.INTEN = {©USB0.INTEN !STALLEN:1 !SLEEPEN:1 !TOKDNEEN:1 !SOFTOKEN:1 !ERROREN:1 !USBRSTEN:1}\n"
  "    //--- is this necessary\?\n"
  "   //   ©USB0.CTL = ©USB0.CTL !USBENOFEN:1) // Page 1507\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "  // This means a transaction has completed, we receive this interrupt\n"
  "  // after data was transferred and the handshake has been completed:\n"
  "  //\n"
  "  //   host:TOK_IN    -> device:DATA ->   host:ACK/NAK -> $interrupt\n"
  "  //   host:TOK_OUT   ->   host:DATA -> device:ACK/NAK -> $interrupt\n"
  "  //   host:TOK_SETUP ->   host:DATA -> device:ACK/NAK -> $interrupt\n"
  "  //\n"
  "  // The handler can then process the received data or queue more\n"
  "  // data to be sent during the next transaction. When there is a\n"
  "  // TOK_IN transaction and no data has been placed in the TX buffer\n"
  "  // then the hardware will automatically send a NAK:\n"
  "  //\n"
  "  //   host:TOK_IN -> device:NAK -> NO $interrupt!\n"
  "  //\n"
  "  // There will be no interrupt in this case! This means as long\n"
  "  // as there is no data to be sent there will also be no TOK_IN\n"
  "  // calls to the handler anymore. Something else has to prepare\n"
  "  // a new TX buffer for that endpoint when data becomes available\n"
  "  // again, the handler will only be called AFTER the transmission!\n"
  "\n"
  "  func tokenCompleted section @mutating () {\n"
  "    let transactionStatus = ©USB0.STAT\n"
  "    let endPoint $u4 = transactionStatus [4...7]\n"
  "    let TX_transitionStatus = transactionStatus [3...3]\n"
  "    let ODD_transitionStatus = transactionStatus [2...2]\n"
  "    let index = index (!extend (endPoint) !extend (TX_transitionStatus) !extend (ODD_transitionStatus))\n"
  "   //--- Get TOK_PID\n"
  "     let TOK_PID = self.descriptorTable [index].desc [2...5]\n"
  "//     let TOK_PID = self.ep0_rx0_buf [0] [2...5]\n"
  "     self.trace |= (extend $u32 (TOK_PID)) << 8\n"
  "   //---\n"
  "     if TOK_PID == 0x09 { // IN_TOKEN: transfer device --> host\n"
  "     }else if TOK_PID == 0x01 { // OUT_TOKEN: transfer host --> device\n"
  "     }else if TOK_PID == 0x0D { // SETUP_TOKEN: transfer host --> device\n"
  "       let bmRequestType = self.ep0_rx0_buf [0]\n"
  "       self.trace |= (extend $u32 (bmRequestType)) << 12\n"
  "       if bmRequestType == 0 { // setup device\n"
  "         self.setupDevice ()\n"
  "       }else if bmRequestType == 1 { // setup interface\n"
  "\n"
  "       }else if bmRequestType == 2 { // setup end point\n"
  "\n"
  "       }\n"
  "       ©USB0.CTL = {©USB0.CTL !USBENSOFEN:1}\n"
  "     }\n"
  "   //---\n"
  "    if endPoint == 0 {\n"
  "      self.endpoint_0_handler (!transactionStatus: transactionStatus)\n"
  "    }else{\n"
  "\n"
  "    }\n"
  "//    let index = transactionStatus >> 2\n"
  "//    let pid = (self.descriptorTable [index].desc >> 2) & 15\n"
  "//    if pid == 0x0D { // Setup received from host\n"
  "//      self.usb_setup ()\n"
  "//    //--- Unfreeze the USB, now that we're ready\n"
  "//      ©USB0.CTL) = ©USB0.CTL !USBENOFEN:1) // clear TXSUSPENDTOKENBUSY bit\n"
  "//    }else if pid == 0x09 { // IN transaction completed to host\n"
  "//    }else if (pid == 0x01) || (pid == 0x02) { // OUT transaction received from host\n"
  "//\n"
  "//    }\n"
  "\n"
  "//    if endPoint == 0 {\n"
  "//      self.configure\n"
  "//    }else{\n"
  "//\n"
  "//    }\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  func setupDevice section @mutating () {\n"
  "    self.trace |= 8\n"
  "    let bRequest = self.ep0_rx0_buf [1]\n"
  "    if bRequest == 6 { // mGET_DESC\n"
  "\n"
  "    }else if bRequest == 5 { // mSET_ADDRESS\n"
  "\n"
  "    }else if bRequest == 9 { // mSET_CONFIG\n"
  "\n"
  "    }\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  func endpoint_0_handler section @mutating (\?transactionStatus: _ $u8) {\n"
  "    self.trace |= 4\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "//  func section usb_setup @mutating () {\n"
  "//  //---\n"
  "//    let index $u32 = 0\n"
  "//    self.descriptorTable [index].desc = BDT_DESC (!EP0_SIZE !DATA1)\n"
  "//    self.descriptorTable [index(!0 !TX !EVEN)].desc = 0\n"
  "//    self.descriptorTable [index(!0 !TX !ODD) ].desc = 0\n"
  "//  //--- Grab the 8 byte setup info\n"
  "//    let bmRequestType = self.ep0_rx0_buf [0] & 0x1F\n"
  "//    let bRequest = self.ep0_rx0_buf [1]\n"
  "//    if bmRequestType == 0 { // Setup device\n"
  "//      digital.write (!yes !toPort:LED_L2)\n"
  "//      self.usb_setup_device (!bRequest)\n"
  "//    }else if bmRequestType == 1 { // Setup interface\n"
  "//      digital.write (!yes !toPort:LED_L3)\n"
  "//\n"
  "//    }else if bmRequestType == 2 { // Setup endpoint\n"
  "//      digital.write (!yes !toPort:LED_L4)\n"
  "//\n"
  "//    }\n"
  "//////    let wValue  = {UInt16 !8:self.ep0_rx0_buf [3] !8:self.ep0_rx0_buf [2]}\n"
  "//////    let wIndex  = {UInt16 !8:self.ep0_rx0_buf [5] !8:self.ep0_rx0_buf [4]}\n"
  "//////    let wLength = {UInt16 !8:self.ep0_rx0_buf [7] !8:self.ep0_rx0_buf [6]}\n"
  "////  //--- Build uint16 requestAndType\n"
  "////    let requestAndType = {UInt16 !8:bRequest !8:bmRequestType}\n"
  "////  //---\n"
  "////    if requestAndType == 0x0500 { // Set address, nothing to do\n"
  "////        digital.write (!yes !toPort:LED_L2)\n"
  "////    }else if requestAndType == 0x0900 { // Set configuration\n"
  "////        digital.write (!yes !toPort:LED_L1)\n"
  "////\n"
  "////\n"
  "////    }else if requestAndType == 0x0880 { // Get configuration\n"
  "////    }else if requestAndType == 0x0080 { // Get status (device)\n"
  "////    }else if requestAndType == 0x0082 { // Get status (endpoint)\n"
  "////    }else if requestAndType == 0x0102 { // Clear feature (device)\n"
  "////    }else if requestAndType == 0x0302 { // Clear feature (endpoint)\n"
  "////    }else if (requestAndType == 0x0680) || (requestAndType == 0x0681) { // Get descriptor\n"
  "////        digital.write (!yes !toPort:LED_L3)\n"
  "////    }\n"
  "//  }\n"
  "//\n"
  "////#define mGET_STATUS           0\n"
  "////#define mCLR_FEATURE          1\n"
  "////#define mSET_FEATURE          3\n"
  "////#define mSET_ADDRESS          5\n"
  "////#define mGET_DESC             6\n"
  "////#define mSET_DESC             7\n"
  "////#define mGET_CONFIG           8\n"
  "////#define mSET_CONFIG           9\n"
  "////#define mGET_INTF             10\n"
  "////#define mSET_INTF             11\n"
  "////#define mSYNC_FRAME           12\n"
  "//\n"
  "//  func section usb_setup_device @mutating (\?bRequest $u8) {\n"
  "//    self.trace = extend (bRequest)\n"
  "////    const usb_descriptor_list_t *p;\n"
  "////    int len;\n"
  "////\n"
  "////    switch (setup->bRequest) {\n"
  "////        case mGET_DESC:\n"
  "////            p = usb_descriptor_list;                    // Find entry in table\n"
  "////            while(p->wValue) {\n"
  "////                if(p->wValue == setup->wValue) {\n"
  "////                    if(p->length == 0)\n"
  "////                        len = p->addr[0];               // Use structure length\n"
  "////                    else\n"
  "////                        len = p->length;\n"
  "////\n"
  "////                    iprintf(\"sending 0x%04x %d\\r\\n\",setup->wValue, len);\n"
  "////                    usb_queue_tx(ep, p->addr, min(len, setup->wLength));\n"
  "////                    return;\n"
  "////                }\n"
  "////                p++;\n"
  "////            }\n"
  "////            iprintf(\"NOT IMPLEMENTED! 0x%04x\\r\\n\", setup->wValue);\n"
  "////            break;\n"
  "////\n"
  "////        case mSET_ADDRESS:\n"
  "////            device_state = ADDRESS;\n"
  "////            device_address = setup->wValue & 0x7f;\n"
  "////            usb_tx(ep,0,0);                         // Send handshake\n"
  "////            break;\n"
  "////\n"
  "////        case mSET_CONFIG:\n"
  "////            iprintf(\"setconfig: %d\\r\\n\", setup->wValue);\n"
  "////            device_state = ENUMERATED;\n"
  "////            usb_set_config(setup->wValue);\n"
  "////            usb_tx(ep,0,0);                         // Send handshake\n"
  "////            break;\n"
  "////\n"
  "////        default:\n"
  "////            iprintf(\"NOT IMPLEMENTED! %d\\r\\n\", setup->bRequest);\n"
  "////            break;\n"
  "////      }\n"
  "//  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver usb_device ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// TASK\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T @stacksize 512 @autostart {\n"
  "  var tick $u32 = 0\n"
  "  var état $u32 = 0\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  while event time.wait (!until:self.tick) {\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    self.tick +%= 500\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    for i $u32 in 0 ..< TRACE_SIZE {\n"
  "      let e = usb_device.lireÉtat (!i)\n"
  "      lcd.print (!hex2:e)\n"
  "    }\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!hex8:usb_device.lireAddresseUSB ())\n"
  "    lcd.goto (!line:2 !column:0)\n"
  "    lcd.print (!hex8:usb_device.lireTrace ())\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_22_embeddedSampleCode (
  "13-usb-device.omnibus",
  "omnibus",
  true, // Text file
 20317, // Text length
  gWrapperFileContent_22_embeddedSampleCode
) ;

//--- File 'teensy-3-6/14-task-activation-duration-64-bit-timer.omnibus'

const char * gWrapperFileContent_16_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "let @display BUS_MHZ2 = BUS_MHZ\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "driver timer ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver timer > root {\n"
  "  var tick = $u64 ()\n"
  "\n"
  "  startup {\n"
  "  //--- Power on PIT\n"
  "    ©SIM.SCGC6 |= {©SIM.SCGC6 !PIT:1}\n"
  "   //--- Enable PIT module\n"
  "    ©PIT.MCR = 0\n"
  "  //--- Disable PIT0 and PIT1\n"
  "    ©PIT.TCTRL [0] = 0\n"
  "    ©PIT.TCTRL [1] = 0\n"
  "  //--- PIT0 clock frequency is BUS_MHZ (in MHz)\n"
  "    ©PIT.LDVAL [0] = $u32.max\n"
  "    ©PIT.LDVAL [1] = $u32.max\n"
  "  //--- Enable PIT0 and PIT1 : start counting, no interrupt\n"
  "    ©PIT.TCTRL [1] = {©PIT.TCTRL !CHN:1 !TEN:1}\n"
  "    ©PIT.TCTRL [0] = {©PIT.TCTRL !TEN:1}\n"
  "  }\n"
  "\n"
  "  public section setTick () {\n"
  "    self.tick = self.now ()\n"
  "  }\n"
  "\n"
  "  public section getTick () -> $u64 {\n"
  "    result = self.tick\n"
  "  }\n"
  "\n"
  "  public section now () -> $u64 {\n"
  "    result = extend (©PIT.LTMR64H)\n"
  "    result <<= 32\n"
  "    result |= extend (©PIT.LTMR64L)\n"
  "    result = ~ result\n"
  "    result +%= 1\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync s = $Semaphore (!value:0)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche0 @stacksize 512 @autostart {\n"
  "  var compteur $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    s.wait ()\n"
  "    let duration = ((timer.now () - timer.getTick ()) * 1000) / BUS_MHZ\n"
  "    lcd.print (!u64:duration)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche1 @stacksize 512 @autostart {\n"
  "\n"
  "  event @onSetup first {\n"
  "    timer.setTick ()\n"
  "    s.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_16_embeddedSampleCode (
  "14-task-activation-duration-64-bit-timer.omnibus",
  "omnibus",
  true, // Text file
 1900, // Text length
  gWrapperFileContent_16_embeddedSampleCode
) ;

//--- File 'teensy-3-6/15-task-activation-duration-systick.omnibus'

const char * gWrapperFileContent_28_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "driver myDriver ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "//\n"
  "driver myDriver > time {\n"
  "  var tick $u32 = 0\n"
  "\n"
  "  public section noteTick () {\n"
  "    self.tick = ©SYST.CVR\n"
  "  }\n"
  "\n"
  "  public section getDuration () -> $u32 {\n"
  "    result = self.tick - ©SYST.CVR\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync s = $Semaphore (!value:0)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task TâcheA > TâcheB @stacksize 512 @autostart {\n"
  "\n"
  "  event @onSetup first {\n"
  "    s.wait ()\n"
  "    let duration = myDriver.getDuration ()\n"
  "    lcd.print (!u32:duration)\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!hex8: currentStackPointer ())\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task TâcheB @stacksize 512 @autostart {\n"
  "\n"
  "  event @onSetup first {\n"
  "    myDriver.noteTick ()\n"
  "    s.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_28_embeddedSampleCode (
  "15-task-activation-duration-systick.omnibus",
  "omnibus",
  true, // Text file
 1309, // Text length
  gWrapperFileContent_28_embeddedSampleCode
) ;

//--- File 'teensy-3-6/16-clock-out-pin.omnibus'

const char * gWrapperFileContent_31_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "// Le champ CLKOUTSEL de SIM_SOPT2 permet de sélectionner le signal qui sera sorti :\n"
  "// 000  FlexBus CLKOUT : signal faible…\n"
  "// 001  Reserved\n"
  "// 010  Flash clock : signal faible…\n"
  "// 011  LPO clock (1 kHz) : testé ok\n"
  "// 100  MCGIRCLK : pas de signal \?\n"
  "// 101  RTC 32.768kHz clock : testé ok\n"
  "// 110  OSCERCLK0 : pas de signal \?\n"
  "// 111  IRC 48 MHz clock : attention, cette horloge n'est pas toujours activée\n"
  "// Il y a deux possibilités d'association à un port :\n"
  "//  - PTA6, ALT 5 : inaccessible sur la Teensy 3.6\n"
  "//  - PTC3, ALT 5 : PORT #9 sur le Teensy 3.6\n"
  "\n"
  "driver myDriver > digital {\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "    ©SIM.SOPT2 |= {©SIM.SOPT2 !CLKOUTSEL:3}\n"
  "    ©PORTC.PCR [3] = {©PORTC.PCR !MUX:5}\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_31_embeddedSampleCode (
  "16-clock-out-pin.omnibus",
  "omnibus",
  true, // Text file
 1224, // Text length
  gWrapperFileContent_31_embeddedSampleCode
) ;

//--- File 'teensy-3-6/17-flextimer-as-pwm.omnibus'

const char * gWrapperFileContent_34_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 24\n"
  "//let myBUS_MHZ @display = BUS_MHZ\n"
  "//let myFLEXBUS_MHZ @display = FLEXBUS_MHZ\n"
  "//let myFLASH_KHZ @display = FLASH_KHZ\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver > digital {\n"
  "\n"
  "  //····················································································································\n"
  "  //--- Clock source is set by the CLKS field of FTM0:SC :\n"
  "  //   00  No clock selected. This in effect disables the FTM counter. \n"
  "  //   01  System clock, frequency given by BUS_MHZ\n"
  "  //   10  Fixed frequency clock, is MCGFFCLK \?\?\?\?\?\n"
  "  //   11  External clock \n"
  "  //--- Clock prescaler is set by the PS field of FTM0:SC :\n"
  "  //   000  Divide by 1 \n"
  "  //   001  Divide by 2 \n"
  "  //   010  Divide by 4 \n"
  "  //   011  Divide by 8 \n"
  "  //   100  Divide by 16 \n"
  "  //   101  Divide by 32 \n"
  "  //   110  Divide by 64 \n"
  "  //   111  Divide by 128\n"
  "  //  The overflow frequency is : BUS_MHZ / (prescaler * (FTM0:MOD - FTM0:CNTIN + 1))\n"
  "  //---- Examples for BUS_MHZ = 60 MHz (F_CPU_MHZ = 240)\n"
  "  //    prescaler   FTM0:CNTIN   FTM0:MOD   Resulting frequency\n"
  "  //      /16                0     0xFFFF   57,22 Hz\n"
  "  //      /1                 0         14   4 MHz\n"
  "  //····················································································································\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "    digital.set (!mode:.output !toPort:.D3) // Led L0\n"
  "    digital.set (!mode:.output !toPort:.D8) // Led L0\n"
  "  //--- Enable clock\n"
  "    ©SIM.SCGC6 |= {©SIM.SCGC6 !FTM0:1}\n"
  "  //--- Set counter min value\n"
  "    ©FTM[0].CNTIN = {©FTM.CNTIN !INIT:0}\n"
  "  //--- Set counter max value\n"
  "    ©FTM[0].MOD = {©FTM.MOD !MOD:0xFFFF}\n"
  "  //--- Set prescaler\n"
  "    ©FTM[0].SC = {©FTM.SC !CLKS:1 !PS:4}\n"
  "  //--- Enable NVIC interrupt\n"
  "    enable (!interrupt:.FTM0)\n"
  "  //--- Enable FTM interrupt\n"
  "    ©FTM[0].SC |= {©FTM.SC !TOIE:1}\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section FTM0 {\n"
  "  //--- Set by hardware when the FTM counter passes the value in the MOD register.\n"
  "  //    The TOF bit is cleared by reading the SC register while TOF is set and then writing a 0 to TOF bit\n"
  "    ©FTM[0].SC &= ~ {©FTM.SC !TOF:1}\n"
  "    digital.toggle (!port:.D3)\n"
  "    digital.toggle (!port:.D8)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_34_embeddedSampleCode (
  "17-flextimer-as-pwm.omnibus",
  "omnibus",
  true, // Text file
 2720, // Text length
  gWrapperFileContent_34_embeddedSampleCode
) ;

//--- File 'teensy-3-6/18-flextimer-external-clock.omnibus'

const char * gWrapperFileContent_41_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver > digital {\n"
  "\n"
  "  //····················································································································\n"
  "  //--- Two external clocks are available for the Flexi timers : FTM_CLKIN0 and FTM_CKLIN1\n"
  "  //  Input ports for FTM_CLKIN0\n"
  "  //    PTA18 ALT 4: not available, used by 16 MHz quartz\n"
  "  //    PTB16 ALT 4: pin #0\n"
  "  //    PTC12 ALT 4: not available on Teensy\n"
  "  //  Input ports for FTM_CLKIN1\n"
  "  //    PTA19 ALT 4: not available, used by 16 MHz quartz\n"
  "  //    PTB17 ALT 4: pin #1\n"
  "  //    PTC13 ALT 4: not available on Teensy\n"
  "  //  For selecting external clock for FTM: CLKS field of FTM0:SC set to 3.\n"
  "  //  The FTMiCLKSEL fields of the SIM:SOPT4 register select FTM_CLKIN0 or FTM_CKLIN1 :\n"
  "  //    0 for FTM_CLKIN0\n"
  "  //    1 for FTM_CLKIN0\n"
  "  //····················································································································\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "  //--- Enable clock\n"
  "    ©SIM.SCGC6 |= {©SIM.SCGC6 !FTM0:1 !FTM1:1}\n"
  "    ©SIM.SOPT4 = 0 // |= ©SIM.SOPT4 !FTM1CLKSEL:1)\n"
  "  //-- Configure PTB16 as FTM_CLKIN0 (with pullup)\n"
  "//    ©PORTB.PCR[16] = ©PORTB.PCR !MUX:4 !PE:1 !PS:1)\n"
  "    ©PORTB.PCR[17] = {©PORTB.PCR !MUX:4 !PE:1 !PS:1}\n"
  "  //--- Set counter min value\n"
  "//    ©FTM[1].CONF = ©FTM.CONF !NUMTOF:31)\n"
  "    ©FTM[0].MODE = 0x05\n"
  "    ©FTM[0].SC = 0\n"
  "    ©FTM[0].CNTIN = {©FTM.CNTIN !INIT:0}\n"
  "    ©FTM[0].CNT = {©FTM.CNT !COUNT:0}\n"
  "    ©FTM[0].MOD = {©FTM.MOD !MOD:1}\n"
  "    ©FTM[0].C0SC = 0x14\n"
  "    ©PORTB.PCR[16] = {©PORTB.PCR !MUX:4 !PE:1 !PS:1}\n"
  "    ©FTM[0].C0V = 0\n"
  "    ©FTM[0].SC = 0x58\n"
  "\n"
  "//    ©FTM[0].CNTIN = ©FTM.CNTIN !INIT:0)\n"
  "    ©FTM[1].CNTIN = {©FTM.CNTIN !INIT:0}\n"
  "  //--- Set counter current value\n"
  "//    ©FTM[0].CNT = ©FTM.CNT !COUNT:0)\n"
  "    ©FTM[1].CNT = {©FTM.CNT !COUNT:0}\n"
  "  //--- Set counter max value\n"
  "//    ©FTM[0].MOD = ©FTM.MOD !MOD:1)\n"
  "    ©FTM[1].MOD = {©FTM.MOD !MOD:0xFFFF}\n"
  "\n"
  "//    ©FTM[0].CONF = ©FTM.CONF !BDMMODE:3)\n"
  "//    ©FTM[1].CONF = ©FTM.CONF !BDMMODE:3)\n"
  "//    ©FTM[0].MODE = ©FTM.MODE !FTMEN:1)\n"
  "//    ©FTM[1].MODE- = ©FTM.MODE !FTMEN:1)\n"
  "  //--- Set prescaler (0 -> divide by 1) and clock source (3 --> external source)\n"
  "//    ©FTM[0].C0V = 0  //compare value = 0\n"
  "//    ©FTM[0].SC = ©FTM.SC !CLKS:3 !PS:0)\n"
  "    ©FTM[1].SC = {©FTM.SC !CLKS:1 !PS:6}\n"
  "  //--- Enable NVIC interrupt\n"
  "    enable (!interrupt:.FTM0)\n"
  "  //--- Enable FTM interrupt\n"
  "//    ©FTM[0].SC |= ©FTM.SC !TOIE:1)\n"
  "  //--- Enable NVIC interrupt\n"
  "    enable (!interrupt:.FTM1)\n"
  "  //--- Enable FTM interrupt\n"
  "    ©FTM[1].SC |= {©FTM.SC !TOIE:1}\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "   section readCounter0 () -> $u32 {\n"
  "    result = ©FTM[0].CNT\n"
  "  }\n"
  "  //····················································································································\n"
  "\n"
  "   section readCounter1 () -> $u32 {\n"
  "    result = ©FTM[1].CNT\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section FTM0 {\n"
  "  //--- Set by hardware when the FTM counter passes the value in the MOD register.\n"
  "  //    The TOF bit is cleared by reading the SC register while TOF is set and then writing a 0 to TOF bit\n"
  "    ©FTM[0].SC &= ~ {©FTM.SC !TOF:1}\n"
  "    digital.toggle (!port:LED_L0)\n"
  "  }\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section FTM1 {\n"
  "  //--- Set by hardware when the FTM counter passes the value in the MOD register.\n"
  "  //    The TOF bit is cleared by reading the SC register while TOF is set and then writing a 0 to TOF bit\n"
  "    ©FTM[1].SC &= ~ {©FTM.SC !TOF:1}\n"
  "    digital.toggle (!port:LED_L1)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  var échéance $u32 = 0\n"
  "  var counter0 $u32 = 0\n"
  "  var counter1 $u32 = 0\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L3)\n"
  "    lcd.print (!string:\"FTM0:\")\n"
  "    lcd.goto (!line:1 !column:0)\n"
  "    lcd.print (!string:\"FTM1:\")\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until:self.échéance) {\n"
  "    self.échéance +%= 1_000\n"
  "    digital.toggle (!port:LED_L3)\n"
  "    let counter0 = myDriver.readCounter0 ()\n"
  "    if self.counter0 ≠ counter0 {\n"
  "      self.counter0 = counter0\n"
  "      lcd.goto (!line:0 !column:6)\n"
  "      lcd.print (!u32:counter0)\n"
  "    }\n"
  "    let counter1 = myDriver.readCounter1 ()\n"
  "    if self.counter1 ≠ counter1 {\n"
  "      self.counter1 = counter1\n"
  "      lcd.goto (!line:1 !column:6)\n"
  "      lcd.print (!u32:counter1)\n"
  "    }\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_41_embeddedSampleCode (
  "18-flextimer-external-clock.omnibus",
  "omnibus",
  true, // Text file
 5148, // Text length
  gWrapperFileContent_41_embeddedSampleCode
) ;

//--- File 'teensy-3-6/19-external-interrupt.omnibus'

const char * gWrapperFileContent_32_embeddedSampleCode = 
  "target \"teensy-3-6/xtr64\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver > digital {\n"
  "\n"
  "  //····················································································································\n"
  "  //--- LED_L0 is port #3: PTA12\n"
  "  //    PORTA_PCR12 is configured to generate an interrupt on falling edge\n"
  "  // So: when LED_L0 is swichted off, LED_L1 toggles\n"
  "  //--- Port #12 is PTC7\n"
  "  //    PORTC_PCR7 is configured to generate an interrupt on falling edge\n"
  "  // So: when push button P4 is pressed, LED_L4 toggles\n"
  "  //····················································································································\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "    digital.set (!mode:.output !toPort:LED_L1)\n"
  "    digital.set (!mode:.output !toPort:LED_L4)\n"
  "    digital.set (!mode:.inputPullUp !toPort:BUTTON_P4)\n"
  "  //--- Generate an interrupt on falling edge of port #3 (PTA12)\n"
  "    ©PORTA.PCR[12] |= {©PORTA.PCR !IRQC:0xA}\n"
  "  //--- Enable NVIC interrupt\n"
  "    enable (!interrupt:.pinDetectPortA)\n"
  "  //--- Enable NVIC interrupt\n"
  "    enable (!interrupt:.pinDetectPortA)\n"
  "  //--- Digital filters are clocked by the LPO clock\n"
  "    ©PORTC.DFCR = 1\n"
  "  //--- Setr digital filter length\n"
  "    ©PORTC.DFWR = 31\n"
  "  //--- Enable digital filter ou PTC7\n"
  "    ©PORTC.DFER = 1 << 7\n"
  "  //--- Generate an interrupt on falling edge of port #12 (PTC7)\n"
  "    ©PORTC.PCR[7] |= {©PORTC.PCR !IRQC:0xA}\n"
  "  //--- Enable NVIC interrupt\n"
  "    enable (!interrupt:.pinDetectPortC)\n"
  "  //--- Enable NVIC interrupt\n"
  "    enable (!interrupt:.pinDetectPortC)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section pinDetectPortA {\n"
  "  //--- Acknowledge interrupt (several ways to do)\n"
  " //   #PORTA:PCR[12 |= ©PORTA.PCR !ISF:1) // Setting bit ISF clears interrupt\n"
  "    ©PORTA.PCR[12] @bit 24 = 1 // The same, using bit banding\n"
  " //   ©PORTA.ISFR = 1 << 12 // Setting bit 12 clears interrupt\n"
  "  //--- Toggle LED_L1\n"
  "    digital.toggle (!port:LED_L1)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "  interrupt section pinDetectPortC {\n"
  "  //--- Acknowledge interrupt (several ways to do)\n"
  " //   ©PORTC.PCR[7] |= ©PORTC.PCR !ISF:1) // Setting bit ISF clears interrupt\n"
  "    ©PORTC.PCR[7] @bit 24 = 1 // The same, using bit banding\n"
  " //   ©PORTC.ISFR = 1 << 7 // Setting bit 7 clears interrupt\n"
  "  //--- Toggle LED_L4\n"
  "    digital.toggle (!port:LED_L4)\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  var échéance $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.échéance) {\n"
  "    self.échéance +%= 1_000\n"
  "    digital.toggle (!port:LED_L0)\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_32_embeddedSampleCode (
  "19-external-interrupt.omnibus",
  "omnibus",
  true, // Text file
 3341, // Text length
  gWrapperFileContent_32_embeddedSampleCode
) ;

//--- File 'teensy-3-6/20-round-robin-32-tasks.omnibus'

const char * gWrapperFileContent_25_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver > digital {\n"
  "\n"
  "  //····················································································································\n"
  "  //--- LED_L0 is port #3: PTA12\n"
  "  //    PORTA_PCR12 is configured to generate an interrupt on falling edge\n"
  "  // So: when LED_L0 is swichted off, LED_L1 toggles\n"
  "  //--- Port #12 is PTC7\n"
  "  //    PORTC_PCR7 is configured to generate an interrupt on falling edge\n"
  "  // So: when push button P4 is pressed, LED_L4 toggles\n"
  "  //····················································································································\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  var tick = $u32 ()\n"
  "\n"
  "  public section noteTick () {\n"
  "    self.tick = ©SYST.CVR\n"
  "  }\n"
  "\n"
  "  public section getDuration () -> $u32 {\n"
  "    result = self.tick - ©SYST.CVR\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync sémaphore0 = $Semaphore (!value:0)\n"
  "sync sémaphore1 = $Semaphore (!value:0)\n"
  "sync sémaphore2 = $Semaphore (!value:0)\n"
  "sync sémaphore3 = $Semaphore (!value:0)\n"
  "sync sémaphore4 = $Semaphore (!value:0)\n"
  "sync sémaphore5 = $Semaphore (!value:0)\n"
  "sync sémaphore6 = $Semaphore (!value:0)\n"
  "sync sémaphore7 = $Semaphore (!value:0)\n"
  "sync sémaphore8 = $Semaphore (!value:0)\n"
  "sync sémaphore9 = $Semaphore (!value:0)\n"
  "sync sémaphore10 = $Semaphore (!value:0)\n"
  "sync sémaphore11 = $Semaphore (!value:0)\n"
  "sync sémaphore12 = $Semaphore (!value:0)\n"
  "sync sémaphore13 = $Semaphore (!value:0)\n"
  "sync sémaphore14 = $Semaphore (!value:0)\n"
  "sync sémaphore15 = $Semaphore (!value:0)\n"
  "sync sémaphore16 = $Semaphore (!value:0)\n"
  "sync sémaphore17 = $Semaphore (!value:0)\n"
  "sync sémaphore18 = $Semaphore (!value:0)\n"
  "sync sémaphore19 = $Semaphore (!value:0)\n"
  "sync sémaphore20 = $Semaphore (!value:0)\n"
  "sync sémaphore21 = $Semaphore (!value:0)\n"
  "sync sémaphore22 = $Semaphore (!value:0)\n"
  "sync sémaphore23 = $Semaphore (!value:0)\n"
  "sync sémaphore24 = $Semaphore (!value:0)\n"
  "sync sémaphore25 = $Semaphore (!value:0)\n"
  "sync sémaphore26 = $Semaphore (!value:0)\n"
  "sync sémaphore27 = $Semaphore (!value:0)\n"
  "sync sémaphore28 = $Semaphore (!value:0)\n"
  "sync sémaphore29 = $Semaphore (!value:0)\n"
  "sync sémaphore30 = $Semaphore (!value:0)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T0 @stacksize 512 @autostart {\n"
  "  var échéance $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.échéance) {\n"
  "    self.échéance +%= 500\n"
  "    myDriver.noteTick ()\n"
  "    sémaphore0.signal ()\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  while event sémaphore0.wait () {\n"
  "    sémaphore1.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T2 @stacksize 512 @autostart {\n"
  "  while event sémaphore1.wait () {\n"
  "    sémaphore2.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T3 @stacksize 512 @autostart {\n"
  "  while event sémaphore2.wait () {\n"
  "    sémaphore3.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T4 @stacksize 512 @autostart {\n"
  "  while event sémaphore3.wait () {\n"
  "    sémaphore4.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T5 @stacksize 512 @autostart {\n"
  "  while event sémaphore4.wait () {\n"
  "    sémaphore5.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T6 @stacksize 512 @autostart {\n"
  "  while event sémaphore5.wait () {\n"
  "    sémaphore6.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T7 @stacksize 512 @autostart {\n"
  "  while event sémaphore6.wait () {\n"
  "    sémaphore7.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T8 @stacksize 512 @autostart {\n"
  "  while event sémaphore7.wait () {\n"
  "    sémaphore8.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T9 @stacksize 512 @autostart {\n"
  "  while event sémaphore8.wait () {\n"
  "    sémaphore10.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T10 @stacksize 512 @autostart {\n"
  "  while event sémaphore9.wait () {\n"
  "    sémaphore10.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T11 @stacksize 512 @autostart {\n"
  "  while event sémaphore10.wait () {\n"
  "    sémaphore11.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T12 @stacksize 512 @autostart {\n"
  "  while event sémaphore11.wait () {\n"
  "    sémaphore12.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T13 @stacksize 512 @autostart {\n"
  "  while event sémaphore12.wait () {\n"
  "    sémaphore13.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T14 @stacksize 512 @autostart {\n"
  "  while event sémaphore13.wait () {\n"
  "    sémaphore14.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T15 @stacksize 512 @autostart {\n"
  "  while event sémaphore14.wait () {\n"
  "    sémaphore15.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T16 @stacksize 512 @autostart {\n"
  "  while event sémaphore15.wait () {\n"
  "    sémaphore16.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T17 @stacksize 512 @autostart {\n"
  "  while event sémaphore16.wait () {\n"
  "    sémaphore17.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T18 @stacksize 512 @autostart {\n"
  "  while event sémaphore17.wait () {\n"
  "    sémaphore18.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T19 @stacksize 512 @autostart {\n"
  "  while event sémaphore18.wait () {\n"
  "    sémaphore19.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T20 @stacksize 512 @autostart {\n"
  "  while event sémaphore19.wait () {\n"
  "    sémaphore20.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T21 @stacksize 512 @autostart {\n"
  "  while event sémaphore20.wait () {\n"
  "    sémaphore21.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T22 @stacksize 512 @autostart {\n"
  "  while event sémaphore21.wait () {\n"
  "    sémaphore22.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T23 @stacksize 512 @autostart {\n"
  "  while event sémaphore22.wait () {\n"
  "    sémaphore23.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T24 @stacksize 512 @autostart {\n"
  "  while event sémaphore23.wait () {\n"
  "    sémaphore24.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T25 @stacksize 512 @autostart {\n"
  "  while event sémaphore24.wait () {\n"
  "    sémaphore25.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T26 @stacksize 512 @autostart {\n"
  "  while event sémaphore25.wait () {\n"
  "    sémaphore26.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T27 @stacksize 512 @autostart {\n"
  "  while event sémaphore26.wait () {\n"
  "    sémaphore27.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T28 @stacksize 512 @autostart {\n"
  "  while event sémaphore27.wait () {\n"
  "    sémaphore28.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T29 @stacksize 512 @autostart {\n"
  "  while event sémaphore28.wait () {\n"
  "    sémaphore29.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T30 @stacksize 512 @autostart {\n"
  "  while event sémaphore29.wait () {\n"
  "    sémaphore30.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T31 @stacksize 512 @autostart {\n"
  "  while event sémaphore30.wait () {\n"
  "    let duration = myDriver.getDuration ()\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:duration)\n"
  "    digital.toggle (!port:LED_L0)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_25_embeddedSampleCode (
  "20-round-robin-32-tasks.omnibus",
  "omnibus",
  true, // Text file
 10275, // Text length
  gWrapperFileContent_25_embeddedSampleCode
) ;

//--- File 'teensy-3-6/21-round-robin-64-tasks.omnibus'

const char * gWrapperFileContent_18_embeddedSampleCode = 
  "target \"teensy-3-6/xtr64\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver > digital {\n"
  "\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  var tick = $u32 ()\n"
  "\n"
  "  public section noteTick () {\n"
  "    self.tick = ©SYST.CVR\n"
  "  }\n"
  "\n"
  "  public section getDuration () -> $u32 {\n"
  "    result = self.tick - ©SYST.CVR\n"
  "  }\n"
  "\n"
  "  //····················································································································\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver myDriver ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "sync sémaphore0 = $Semaphore (!value:0)\n"
  "sync sémaphore1 = $Semaphore (!value:0)\n"
  "sync sémaphore2 = $Semaphore (!value:0)\n"
  "sync sémaphore3 = $Semaphore (!value:0)\n"
  "sync sémaphore4 = $Semaphore (!value:0)\n"
  "sync sémaphore5 = $Semaphore (!value:0)\n"
  "sync sémaphore6 = $Semaphore (!value:0)\n"
  "sync sémaphore7 = $Semaphore (!value:0)\n"
  "sync sémaphore8 = $Semaphore (!value:0)\n"
  "sync sémaphore9 = $Semaphore (!value:0)\n"
  "sync sémaphore10 = $Semaphore (!value:0)\n"
  "sync sémaphore11 = $Semaphore (!value:0)\n"
  "sync sémaphore12 = $Semaphore (!value:0)\n"
  "sync sémaphore13 = $Semaphore (!value:0)\n"
  "sync sémaphore14 = $Semaphore (!value:0)\n"
  "sync sémaphore15 = $Semaphore (!value:0)\n"
  "sync sémaphore16 = $Semaphore (!value:0)\n"
  "sync sémaphore17 = $Semaphore (!value:0)\n"
  "sync sémaphore18 = $Semaphore (!value:0)\n"
  "sync sémaphore19 = $Semaphore (!value:0)\n"
  "sync sémaphore20 = $Semaphore (!value:0)\n"
  "sync sémaphore21 = $Semaphore (!value:0)\n"
  "sync sémaphore22 = $Semaphore (!value:0)\n"
  "sync sémaphore23 = $Semaphore (!value:0)\n"
  "sync sémaphore24 = $Semaphore (!value:0)\n"
  "sync sémaphore25 = $Semaphore (!value:0)\n"
  "sync sémaphore26 = $Semaphore (!value:0)\n"
  "sync sémaphore27 = $Semaphore (!value:0)\n"
  "sync sémaphore28 = $Semaphore (!value:0)\n"
  "sync sémaphore29 = $Semaphore (!value:0)\n"
  "sync sémaphore30 = $Semaphore (!value:0)\n"
  "sync sémaphore31 = $Semaphore (!value:0)\n"
  "sync sémaphore32 = $Semaphore (!value:0)\n"
  "sync sémaphore33 = $Semaphore (!value:0)\n"
  "sync sémaphore34 = $Semaphore (!value:0)\n"
  "sync sémaphore35 = $Semaphore (!value:0)\n"
  "sync sémaphore36 = $Semaphore (!value:0)\n"
  "sync sémaphore37 = $Semaphore (!value:0)\n"
  "sync sémaphore38 = $Semaphore (!value:0)\n"
  "sync sémaphore39 = $Semaphore (!value:0)\n"
  "sync sémaphore40 = $Semaphore (!value:0)\n"
  "sync sémaphore41 = $Semaphore (!value:0)\n"
  "sync sémaphore42 = $Semaphore (!value:0)\n"
  "sync sémaphore43 = $Semaphore (!value:0)\n"
  "sync sémaphore44 = $Semaphore (!value:0)\n"
  "sync sémaphore45 = $Semaphore (!value:0)\n"
  "sync sémaphore46 = $Semaphore (!value:0)\n"
  "sync sémaphore47 = $Semaphore (!value:0)\n"
  "sync sémaphore48 = $Semaphore (!value:0)\n"
  "sync sémaphore49 = $Semaphore (!value:0)\n"
  "sync sémaphore50 = $Semaphore (!value:0)\n"
  "sync sémaphore51 = $Semaphore (!value:0)\n"
  "sync sémaphore52 = $Semaphore (!value:0)\n"
  "sync sémaphore53 = $Semaphore (!value:0)\n"
  "sync sémaphore54 = $Semaphore (!value:0)\n"
  "sync sémaphore55 = $Semaphore (!value:0)\n"
  "sync sémaphore56 = $Semaphore (!value:0)\n"
  "sync sémaphore57 = $Semaphore (!value:0)\n"
  "sync sémaphore58 = $Semaphore (!value:0)\n"
  "sync sémaphore59 = $Semaphore (!value:0)\n"
  "sync sémaphore60 = $Semaphore (!value:0)\n"
  "sync sémaphore61 = $Semaphore (!value:0)\n"
  "sync sémaphore62 = $Semaphore (!value:0)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T0 @stacksize 512 @autostart {\n"
  "  var échéance $u32 = 0\n"
  "\n"
  "  while event time.wait (!until:self.échéance) {\n"
  "    self.échéance +%= 500\n"
  "    myDriver.noteTick ()\n"
  "    sémaphore0.signal ()\n"
  "  }\n"
  "\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T1 @stacksize 512 @autostart {\n"
  "  while event sémaphore0.wait () {\n"
  "    sémaphore1.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T2 @stacksize 512 @autostart {\n"
  "  while event sémaphore1.wait () {\n"
  "    sémaphore2.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T3 @stacksize 512 @autostart {\n"
  "  while event sémaphore2.wait () {\n"
  "    sémaphore3.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T4 @stacksize 512 @autostart {\n"
  "  while event sémaphore3.wait () {\n"
  "    sémaphore4.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T5 @stacksize 512 @autostart {\n"
  "  while event sémaphore4.wait () {\n"
  "    sémaphore5.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T6 @stacksize 512 @autostart {\n"
  "  while event sémaphore5.wait () {\n"
  "    sémaphore6.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T7 @stacksize 512 @autostart {\n"
  "  while event sémaphore6.wait () {\n"
  "    sémaphore7.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T8 @stacksize 512 @autostart {\n"
  "  while event sémaphore7.wait () {\n"
  "    sémaphore8.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T9 @stacksize 512 @autostart {\n"
  "  while event sémaphore8.wait () {\n"
  "    sémaphore9.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T10 @stacksize 512 @autostart {\n"
  "  while event sémaphore9.wait () {\n"
  "    sémaphore10.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T11 @stacksize 512 @autostart {\n"
  "  while event sémaphore10.wait () {\n"
  "    sémaphore11.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T12 @stacksize 512 @autostart {\n"
  "  while event sémaphore11.wait () {\n"
  "    sémaphore12.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T13 @stacksize 512 @autostart {\n"
  "  while event sémaphore12.wait () {\n"
  "    sémaphore13.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T14 @stacksize 512 @autostart {\n"
  "  while event sémaphore13.wait () {\n"
  "    sémaphore14.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T15 @stacksize 512 @autostart {\n"
  "  while event sémaphore14.wait () {\n"
  "    sémaphore15.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T16 @stacksize 512 @autostart {\n"
  "  while event sémaphore15.wait () {\n"
  "    sémaphore16.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T17 @stacksize 512 @autostart {\n"
  "  while event sémaphore16.wait () {\n"
  "    sémaphore17.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T18 @stacksize 512 @autostart {\n"
  "  while event sémaphore17.wait () {\n"
  "    sémaphore18.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T19 @stacksize 512 @autostart {\n"
  "  while event sémaphore18.wait () {\n"
  "    sémaphore19.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T20 @stacksize 512 @autostart {\n"
  "  while event sémaphore19.wait () {\n"
  "    sémaphore20.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T21 @stacksize 512 @autostart {\n"
  "  while event sémaphore20.wait () {\n"
  "    sémaphore21.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T22 @stacksize 512 @autostart {\n"
  "  while event sémaphore21.wait () {\n"
  "    sémaphore22.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T23 @stacksize 512 @autostart {\n"
  "  while event sémaphore22.wait () {\n"
  "    sémaphore23.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T24 @stacksize 512 @autostart {\n"
  "  while event sémaphore23.wait () {\n"
  "    sémaphore24.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T25 @stacksize 512 @autostart {\n"
  "  while event sémaphore24.wait () {\n"
  "    sémaphore25.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T26 @stacksize 512 @autostart {\n"
  "  while event sémaphore25.wait () {\n"
  "    sémaphore26.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T27 @stacksize 512 @autostart {\n"
  "  while event sémaphore26.wait () {\n"
  "    sémaphore27.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T28 @stacksize 512 @autostart {\n"
  "  while event sémaphore27.wait () {\n"
  "    sémaphore28.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T29 @stacksize 512 @autostart {\n"
  "  while event sémaphore28.wait () {\n"
  "    sémaphore29.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T30 @stacksize 512 @autostart {\n"
  "  while event sémaphore29.wait () {\n"
  "    sémaphore30.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T31 @stacksize 512 @autostart {\n"
  "  while event sémaphore30.wait () {\n"
  "    sémaphore31.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T32 @stacksize 512 @autostart {\n"
  "  while event sémaphore31.wait () {\n"
  "    sémaphore32.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T33 @stacksize 512 @autostart {\n"
  "  while event sémaphore32.wait () {\n"
  "    sémaphore33.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T34 @stacksize 512 @autostart {\n"
  "  while event sémaphore33.wait () {\n"
  "    sémaphore34.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T35 @stacksize 512 @autostart {\n"
  "  while event sémaphore34.wait () {\n"
  "    sémaphore35.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T36 @stacksize 512 @autostart {\n"
  "  while event sémaphore35.wait () {\n"
  "    sémaphore36.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T37 @stacksize 512 @autostart {\n"
  "  while event sémaphore36.wait () {\n"
  "    sémaphore37.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T38 @stacksize 512 @autostart {\n"
  "  while event sémaphore37.wait () {\n"
  "    sémaphore38.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T39 @stacksize 512 @autostart {\n"
  "  while event sémaphore38.wait () {\n"
  "    sémaphore39.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T40 @stacksize 512 @autostart {\n"
  "  while event sémaphore39.wait () {\n"
  "    sémaphore40.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T41 @stacksize 512 @autostart {\n"
  "  while event sémaphore40.wait () {\n"
  "    sémaphore41.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T42 @stacksize 512 @autostart {\n"
  "  while event sémaphore41.wait () {\n"
  "    sémaphore42.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T43 @stacksize 512 @autostart {\n"
  "  while event sémaphore42.wait () {\n"
  "    sémaphore43.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T44 @stacksize 512 @autostart {\n"
  "  while event sémaphore43.wait () {\n"
  "    sémaphore44.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T45 @stacksize 512 @autostart {\n"
  "  while event sémaphore44.wait () {\n"
  "    sémaphore45.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T46 @stacksize 512 @autostart {\n"
  "  while event sémaphore45.wait () {\n"
  "    sémaphore46.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T47 @stacksize 512 @autostart {\n"
  "  while event sémaphore46.wait () {\n"
  "    sémaphore47.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T48 @stacksize 512 @autostart {\n"
  "  while event sémaphore47.wait () {\n"
  "    sémaphore48.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T49 @stacksize 512 @autostart {\n"
  "  while event sémaphore48.wait () {\n"
  "    sémaphore49.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T50 @stacksize 512 @autostart {\n"
  "  while event sémaphore49.wait () {\n"
  "    sémaphore50.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T51 @stacksize 512 @autostart {\n"
  "  while event sémaphore50.wait () {\n"
  "    sémaphore51.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T52 @stacksize 512 @autostart {\n"
  "  while event sémaphore51.wait () {\n"
  "    sémaphore52.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T53 @stacksize 512 @autostart {\n"
  "  while event sémaphore52.wait () {\n"
  "    sémaphore53.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T54 @stacksize 512 @autostart {\n"
  "  while event sémaphore53.wait () {\n"
  "    sémaphore54.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T55 @stacksize 512 @autostart {\n"
  "  while event sémaphore54.wait () {\n"
  "    sémaphore55.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T56 @stacksize 512 @autostart {\n"
  "  while event sémaphore55.wait () {\n"
  "    sémaphore56.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T57 @stacksize 512 @autostart {\n"
  "  while event sémaphore56.wait () {\n"
  "    sémaphore57.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T58 @stacksize 512 @autostart {\n"
  "  while event sémaphore57.wait () {\n"
  "    sémaphore58.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T59 @stacksize 512 @autostart {\n"
  "  while event sémaphore58.wait () {\n"
  "    sémaphore59.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T60 @stacksize 512 @autostart {\n"
  "  while event sémaphore59.wait () {\n"
  "    sémaphore60.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T61 @stacksize 512 @autostart {\n"
  "  while event sémaphore60.wait () {\n"
  "    sémaphore61.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T62 @stacksize 512 @autostart {\n"
  "  while event sémaphore61.wait () {\n"
  "    sémaphore62.signal ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task T63 @stacksize 512 @autostart {\n"
  "  while event sémaphore62.wait () {\n"
  "    let duration = myDriver.getDuration ()\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:duration)\n"
  "    digital.toggle (!port: LED_L0)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_18_embeddedSampleCode (
  "21-round-robin-64-tasks.omnibus",
  "omnibus",
  true, // Text file
 18324, // Text length
  gWrapperFileContent_18_embeddedSampleCode
) ;

//--- File 'teensy-3-6/22-task-activate.omnibus'

const char * gWrapperFileContent_24_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche0 @stacksize 512 @autostart {\n"
  "  var tick $u32 = 0\n"
  "\n"
  "  while event time.wait (!until: self.tick) {\n"
  "    self.tick += 500\n"
  "    Tâche1.activate ()\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche1 @stacksize 512 { // Do not activate\n"
  "\n"
  "  event @onSetup first {\n"
  "    digital.set (!mode:.output !toPort:LED_L0)\n"
  "  }\n"
  "\n"
  "  event @onStart first {\n"
  "    digital.toggle (!port:LED_L0)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_24_embeddedSampleCode (
  "22-task-activate.omnibus",
  "omnibus",
  true, // Text file
 807, // Text length
  gWrapperFileContent_24_embeddedSampleCode
) ;

//--- File 'teensy-3-6/23-large-integer.omnibus'

const char * gWrapperFileContent_35_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 240\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "let largeConstant = 123_456_789_123_456_789_123_456_789_123\n"
  "\n"
  "typealias $LargeInt = $u97\n"
  "\n"
  "func getLargeConstant () -> $LargeInt {\n"
  "  result = largeConstant\n"
  "}\n"
  "\n"
  "func getLargeAddition (\? inA $LargeInt \?inB $LargeInt) -> $LargeInt {\n"
  "  result = inA + inB\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche0 @stacksize 512 @autostart {\n"
  "  var tick = $u32 ()\n"
  "  var largeInteger = $LargeInt ()\n"
  "  var otherLargeInteger = $LargeInt ()\n"
  "\n"
  "  while event time.wait (!until: self.tick) {\n"
  "    self.otherLargeInteger += self.largeInteger\n"
  "    self.tick += 500\n"
  "    self.largeInteger = getLargeAddition (!self.largeInteger !getLargeConstant ())\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_35_embeddedSampleCode (
  "23-large-integer.omnibus",
  "omnibus",
  true, // Text file
 926, // Text length
  gWrapperFileContent_35_embeddedSampleCode
) ;

//--- File 'teensy-3-6/24-computed-properties.omnibus'

const char * gWrapperFileContent_39_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche0 @stacksize 512 @autostart {\n"
  "  var tick = $u32 ()\n"
  "\n"
  "  var readComputedProperty $u32 { result = self.tick }\n"
  "\n"
  "  var readWriteComputedProperty $u32 {\n"
  "    @set { self.tick = newValue }\n"
  "    @get { result = self.tick }\n"
  "  }\n"
  "\n"
  "  while event time.wait (!until: self.tick) {\n"
  "    self.readWriteComputedProperty += 500\n"
  "//    self.tick += 500\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32:self.readComputedProperty)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_39_embeddedSampleCode (
  "24-computed-properties.omnibus",
  "omnibus",
  true, // Text file
 795, // Text length
  gWrapperFileContent_39_embeddedSampleCode
) ;

//--- File 'teensy-3-6/25-enumeration.omnibus'

const char * gWrapperFileContent_23_embeddedSampleCode = 
  "target \"teensy-3-6/xtr32\"\n"
  "let F_CPU_MHZ = 180\n"
  "\n"
  "import \"carte-tp-teensy-3-6.omnibus-import\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "enum $monEnum {\n"
  "  case zéro\n"
  "  case un\n"
  "  case deux\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "task Tâche0 @stacksize 512 @autostart {\n"
  "  var tick = $u32 ()\n"
  "  var énumération = $monEnum.zéro\n"
  "\n"
  "  while event time.wait (!until: self.tick) {\n"
  "    self.tick += 500\n"
  "    self.énumération = .un\n"
  "    var autre2num = self.énumération\n"
  "    self.énumération = .deux\n"
  "    digital.toggle (!port:LED_L0)\n"
  "    lcd.goto (!line:0 !column:0)\n"
  "    lcd.print (!u32: self.tick)\n"
  "  }\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_23_embeddedSampleCode (
  "25-enumeration.omnibus",
  "omnibus",
  true, // Text file
 752, // Text length
  gWrapperFileContent_23_embeddedSampleCode
) ;

//--- File 'teensy-3-6/carte-tp-teensy-3-6.omnibus-import'

const char * gWrapperFileContent_17_embeddedSampleCode = 
  "ctAssert target \"teensy-3-6/xtr32\", \"teensy-3-6/xtr64\"\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver lcd (!DB4:.D16 !DB5:.D15 !DB6:.D14 !DB7:.D19 !RS:.D18 !ENABLE:.D17)\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "//   ACTIVITY LED\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "driver ActivityLed > digital {\n"
  "  startup {\n"
  "    digital.set (!mode:.output !toPort:.D13) // Led Teensy\n"
  "  }\n"
  "}\n"
  "\n"
  "driver ActivityLed ()\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "public func activityLedOn safe section @exported () {\n"
  "  digital.write (!yes !toPort:.D13)\n"
  "}\n"
  "\n"
  "public func activityLedOff safe section @exported () {\n"
  "  digital.write (!no !toPort:.D13)\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let LED_L0 = $DigitalPort.D3\n"
  "let LED_L1 = $DigitalPort.D4\n"
  "let LED_L2 = $DigitalPort.D5\n"
  "let LED_L3 = $DigitalPort.D6\n"
  "let LED_L4 = $DigitalPort.D7\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "let BUTTON_P0 = $DigitalPort.D8\n"
  "let BUTTON_P1 = $DigitalPort.D9\n"
  "let BUTTON_P2 = $DigitalPort.D10\n"
  "let BUTTON_P3 = $DigitalPort.D11\n"
  "let BUTTON_P4 = $DigitalPort.D12\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "panic @setup 0 {\n"
  "  digital.set (!mode:.output !toPort:LED_L0)\n"
  "  digital.set (!mode:.output !toPort:LED_L1)\n"
  "  digital.set (!mode:.output !toPort:LED_L2)\n"
  "  digital.set (!mode:.output !toPort:LED_L3)\n"
  "  digital.set (!mode:.output !toPort:LED_L4)\n"
  "  lcd.clearScreenInPanicMode ()\n"
  "  lcd.gotoInPanicMode (!line:0 !column:0)\n"
  "  if LINE == 0 { // ISR Panic\n"
  "    lcd.printStringInPanicMode (!\"ISR PANIC\")\n"
  "  }else{\n"
  "    lcd.printStringInPanicMode (!FILE)\n"
  "    lcd.gotoInPanicMode (!line:2 !column:0)\n"
  "    lcd.printStringInPanicMode (!\"Line:\")\n"
  "    lcd.printUnsignedInPanicMode (!LINE)\n"
  "  }\n"
  "  lcd.gotoInPanicMode (!line:3 !column:0)\n"
  "  lcd.printStringInPanicMode (!\"Code:\")\n"
  "  lcd.printUnsignedInPanicMode (!CODE)\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
  "\n"
  "panic @loop 0 {\n"
  "  time.panicBusyWaitingDuringMS (!50)\n"
  "  digital.toggle (!port:LED_L0)\n"
  "  digital.toggle (!port:LED_L1)\n"
  "  digital.toggle (!port:LED_L2)\n"
  "  digital.toggle (!port:LED_L3)\n"
  "  digital.toggle (!port:LED_L4)\n"
  "}\n"
  "\n"
  "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n"
   ;

const cRegularFileWrapper gWrapperFile_17_embeddedSampleCode (
  "carte-tp-teensy-3-6.omnibus-import",
  "omnibus-import",
  true, // Text file
 2786, // Text length
  gWrapperFileContent_17_embeddedSampleCode
) ;

//--- All files of 'teensy-3-6' directory

static const cRegularFileWrapper * gWrapperAllFiles_embeddedSampleCode_3 [27] = {
  & gWrapperFile_27_embeddedSampleCode,
  & gWrapperFile_26_embeddedSampleCode,
  & gWrapperFile_33_embeddedSampleCode,
  & gWrapperFile_21_embeddedSampleCode,
  & gWrapperFile_30_embeddedSampleCode,
  & gWrapperFile_19_embeddedSampleCode,
  & gWrapperFile_37_embeddedSampleCode,
  & gWrapperFile_36_embeddedSampleCode,
  & gWrapperFile_38_embeddedSampleCode,
  & gWrapperFile_29_embeddedSampleCode,
  & gWrapperFile_40_embeddedSampleCode,
  & gWrapperFile_20_embeddedSampleCode,
  & gWrapperFile_22_embeddedSampleCode,
  & gWrapperFile_16_embeddedSampleCode,
  & gWrapperFile_28_embeddedSampleCode,
  & gWrapperFile_31_embeddedSampleCode,
  & gWrapperFile_34_embeddedSampleCode,
  & gWrapperFile_41_embeddedSampleCode,
  & gWrapperFile_32_embeddedSampleCode,
  & gWrapperFile_25_embeddedSampleCode,
  & gWrapperFile_18_embeddedSampleCode,
  & gWrapperFile_24_embeddedSampleCode,
  & gWrapperFile_35_embeddedSampleCode,
  & gWrapperFile_39_embeddedSampleCode,
  & gWrapperFile_23_embeddedSampleCode,
  & gWrapperFile_17_embeddedSampleCode,
  nullptr
} ;

//--- All sub-directories of 'teensy-3-6' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_3 [1] = {
  nullptr
} ;

//--- Directory 'teensy-3-6'

const cDirectoryWrapper gWrapperDirectory_3_embeddedSampleCode (
  "teensy-3-6",
  26,
  gWrapperAllFiles_embeddedSampleCode_3,
  0,
  gWrapperAllDirectories_embeddedSampleCode_3
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_embeddedSampleCode_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_embeddedSampleCode_0 [4] = {
  & gWrapperDirectory_1_embeddedSampleCode,
  & gWrapperDirectory_2_embeddedSampleCode,
  & gWrapperDirectory_3_embeddedSampleCode,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_embeddedSampleCode (
  "",
  0,
  gWrapperAllFiles_embeddedSampleCode_0,
  3,
  gWrapperAllDirectories_embeddedSampleCode_0
) ;


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@loadIndirectVolatileIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_loadIndirectVolatileIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                              const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                              GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_loadIndirectVolatileIR temp_0 = this ;
  GGS_string var_llvmType_698 = extensionGetter_llvmTypeName (temp_0.readProperty_mTargetValue (), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 23)) ;
  GGS_string var_ptr_748 = GGS_string ("%registerPointer.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 24)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 25)) ;
  const GGS_loadIndirectVolatileIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_ptr_748, inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 26)).add_operation (GGS_string (" = inttoptr i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 26)).add_operation (temp_1.readProperty_mLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 26)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 26)).add_operation (var_llvmType_698, inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 26)).add_operation (GGS_string ("* ;\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 26)) ;
  const GGS_loadIndirectVolatileIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_2.readProperty_mTargetValue (), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)).add_operation (GGS_string (" = load volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)).add_operation (var_llvmType_698, inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)).add_operation (var_llvmType_698, inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)).add_operation (var_ptr_748, inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 28)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeDeclarationBarrierAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeDeclarationBarrierAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_compileTimeDeclarationBarrierAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)), temp_0, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeDeclarationBarrierAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compileTimeDeclarationBarrierAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 44)).readProperty_string () ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeDeclarationBarrierAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compileTimeDeclarationBarrierAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("ordered-declaration-list.galgas", 50)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeDeclarationBarrierAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeDeclarationBarrierAST::method_enterInContext (GGS_semanticContext & /* ioArgument_ioContext */,
                                                                   GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                   GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                   GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                   GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                   GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendUnsignedOperatorsTo?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendUnsignedOperatorsTo_3F__26_ (const GGS_string constinArgument_inTypeName,
                                                GGS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("ordered-declaration-list.galgas", 77)), GGS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 77)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("ordered-declaration-list.galgas", 80)), GGS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 80)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("ordered-declaration-list.galgas", 83)), GGS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("ordered-declaration-list.galgas", 86)), GGS_string ("udiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 87)), GGS_string ("udiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 87)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("ordered-declaration-list.galgas", 89)), GGS_string ("urem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 89)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 90)), GGS_string ("urem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 90)) ;
  }
  {
  routine_appendPrefixOperatorDeclaration_5F_bitWiseComplement_3F__26_ (constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 100)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendSignedOperatorsTo?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendSignedOperatorsTo_3F__26_ (const GGS_string constinArgument_inTypeName,
                                              GGS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("ordered-declaration-list.galgas", 113)), GGS_string ("add"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 113)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("ordered-declaration-list.galgas", 116)), GGS_string ("sub"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 116)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("ordered-declaration-list.galgas", 119)), GGS_string ("mul"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 119)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("ordered-declaration-list.galgas", 122)), GGS_string ("srem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 122)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 123)), GGS_string ("srem"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 123)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("ordered-declaration-list.galgas", 125)), GGS_string ("sdiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 125)) ;
  }
  {
  routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("ordered-declaration-list.galgas", 126)), GGS_string ("sdiv"), constinArgument_inTypeName, constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 126)) ;
  }
  {
  routine_appendPrefixOperatorDeclaration_5F_minus_3F__26_ (constinArgument_inTypeName, ioArgument_ioPrecedenceGraph, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 136)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildOrderedDeclarationList?ast?sourceFile?endOfSourceFile!orderedDeclarationList'
//
//--------------------------------------------------------------------------------------------------

void routine_buildOrderedDeclarationList_3F_ast_3F_sourceFile_3F_endOfSourceFile_21_orderedDeclarationList (const GGS_ast constinArgument_inAST,
                                                                                                            const GGS_string constinArgument_inSourceFile,
                                                                                                            const GGS_location constinArgument_inEndOfSourceFile,
                                                                                                            GGS_declarationListAST & outArgument_outSortedDeclarationListAST,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSortedDeclarationListAST.drop () ; // Release 'out' argument
  GGS_semanticTypePrecedenceGraph var_precedenceGraph_7982 = GGS_semanticTypePrecedenceGraph::init (inCompiler COMMA_HERE) ;
  UpEnumerator_declarationListAST enumerator_8011 (constinArgument_inAST.readProperty_mDeclarationListAST ()) ;
  while (enumerator_8011.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) enumerator_8011.current_mDeclaration (HERE).ptr (), var_precedenceGraph_7982, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 150)) ;
    enumerator_8011.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.readProperty_mExternFunctionListAST (), var_precedenceGraph_7982, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 153)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.readProperty_mTaskListAST (), var_precedenceGraph_7982, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 154)) ;
  GGS_bigint var_addintegerTypeCount_8441 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 156)) ;
  UpEnumerator_stringlist enumerator_8472 (var_precedenceGraph_7982.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 157))) ;
  while (enumerator_8472.hasCurrentObject ()) {
    GGS_stringlist var_Uxx_8558 = enumerator_8472.current_mValue (HERE).getter_componentsSeparatedByString (GGS_string ("u") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 159)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool test_1 = GGS_bool (ComparisonKind::equal, var_Uxx_8558.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 160)).objectCompare (GGS_uint (uint32_t (2U)))) ;
      if (GalgasBool::boolTrue == test_1.boolEnum ()) {
        test_1 = GGS_bool (ComparisonKind::equal, var_Uxx_8558.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 160)).objectCompare (GGS_string::makeEmptyString ())) ;
      }
      GGS_bool test_2 = test_1 ;
      if (GalgasBool::boolTrue == test_2.boolEnum ()) {
        test_2 = var_Uxx_8558.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 160)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 160)) ;
      }
      test_0 = test_2.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_uint var_n_8734 = var_Uxx_8558.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 161)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 161)) ;
        GGS_integerDeclarationAST var_declaration_8795 = GGS_integerDeclarationAST::init_21__21_ (GGS_bool (false), var_n_8734, inCompiler COMMA_HERE) ;
        callExtensionMethod_enterInPrecedenceGraph ((cPtr_integerDeclarationAST *) var_declaration_8795.ptr (), var_precedenceGraph_7982, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 163)) ;
        {
        routine_appendUnsignedOperatorsTo_3F__26_ (enumerator_8472.current_mValue (HERE), var_precedenceGraph_7982, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 165)) ;
        }
        var_addintegerTypeCount_8441.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 167)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_stringlist var_Ixx_9071 = enumerator_8472.current_mValue (HERE).getter_componentsSeparatedByString (GGS_string ("i") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 169)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_bool test_4 = GGS_bool (ComparisonKind::equal, var_Ixx_9071.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 170)).objectCompare (GGS_uint (uint32_t (2U)))) ;
        if (GalgasBool::boolTrue == test_4.boolEnum ()) {
          test_4 = GGS_bool (ComparisonKind::equal, var_Ixx_9071.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 170)).objectCompare (GGS_string::makeEmptyString ())) ;
        }
        GGS_bool test_5 = test_4 ;
        if (GalgasBool::boolTrue == test_5.boolEnum ()) {
          test_5 = var_Ixx_9071.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 170)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 170)) ;
        }
        test_3 = test_5.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GGS_uint var_n_9251 = var_Ixx_9071.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 171)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 171)) ;
          GGS_integerDeclarationAST var_declaration_9314 = GGS_integerDeclarationAST::init_21__21_ (GGS_bool (true), var_n_9251, inCompiler COMMA_HERE) ;
          callExtensionMethod_enterInPrecedenceGraph ((cPtr_integerDeclarationAST *) var_declaration_9314.ptr (), var_precedenceGraph_7982, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 173)) ;
          {
          routine_appendSignedOperatorsTo_3F__26_ (enumerator_8472.current_mValue (HERE), var_precedenceGraph_7982, inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 175)) ;
          }
          var_addintegerTypeCount_8441.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 177)) ;
        }
      }
    }
    enumerator_8472.gotoNextObject () ;
  }
  GGS_compileTimeDeclarationBarrierAST var_compileTimeDeclarationBarrierAST_9679 = GGS_compileTimeDeclarationBarrierAST::init (inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_compileTimeDeclarationBarrierAST *) var_compileTimeDeclarationBarrierAST_9679.ptr (), var_precedenceGraph_7982, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 183)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    GGS_bool test_7 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 185)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_7.boolEnum ()) {
      test_7 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()) ;
    }
    test_6 = test_7.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      routine_print_3F_ (GGS_string ("    Added ").add_operation (var_addintegerTypeCount_8441.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 186)).add_operation (GGS_string (" integer types\n"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 186)) ;
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    GGS_bool test_9 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 189)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_9.boolEnum ()) {
      test_9 = GGS_bool (gOption_omnibus_5F_options_emitDeclarationDependencyGraphFile.readProperty_value ()) ;
    }
    test_8 = test_9.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_string var_s_10226 = var_precedenceGraph_7982.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 190)) ;
      GGS_string var_filePath_10265 = constinArgument_inSourceFile.add_operation (GGS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 191)) ;
      GGS_bool joker_10370 ; // Joker input parameter
      var_s_10226.method_writeToFileWhenDifferentContents (var_filePath_10265, joker_10370, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 192)) ;
    }
  }
  GGS_declarationListAST temp_10 = GGS_declarationListAST::init (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 195)) ;
  outArgument_outSortedDeclarationListAST = temp_10 ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::greaterThan, var_precedenceGraph_7982.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 196)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      UpEnumerator_lstringlist enumerator_10551 (var_precedenceGraph_7982.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 197))) ;
      while (enumerator_10551.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_10551.current_mValue (HERE).readProperty_location (), enumerator_10551.current_mValue (HERE).readProperty_string ().add_operation (GGS_string (" is not defined in declaration dependency graph"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 198)), fixItArray12  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 198)) ;
        enumerator_10551.gotoNextObject () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_11) {
    GGS_declarationListAST var_unsortedSemanticDeclarationListAST_10825 ;
    GGS_lstringlist joker_10791 ; // Joker input parameter
    GGS_lstringlist joker_10866 ; // Joker input parameter
    var_precedenceGraph_7982.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_10791, var_unsortedSemanticDeclarationListAST_10825, joker_10866, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 201)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::greaterThan, var_unsortedSemanticDeclarationListAST_10825.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 207)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        GGS_string var_s_10944 = GGS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_10825.getter_count (SOURCE_FILE ("ordered-declaration-list.galgas", 209)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 208)).add_operation (GGS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 209)) ;
        UpEnumerator_declarationListAST enumerator_11119 (var_unsortedSemanticDeclarationListAST_10825) ;
        while (enumerator_11119.hasCurrentObject ()) {
          var_s_10944.plusAssignOperation(GGS_string ("\n-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11119.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 212)) ;
          enumerator_11119.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_10944, fixItArray14  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 214)) ;
        UpEnumerator_declarationListAST enumerator_11302 (var_unsortedSemanticDeclarationListAST_10825) ;
        while (enumerator_11302.hasCurrentObject ()) {
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (callExtensionGetter_locationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11302.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)), GGS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_11302.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)).add_operation (GGS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)), fixItArray15  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 216)) ;
          enumerator_11302.gotoNextObject () ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkRequiredProcedures?ast?context?endOfSourceFile'
//
//--------------------------------------------------------------------------------------------------

void routine_checkRequiredProcedures_3F_ast_3F_context_3F_endOfSourceFile (const GGS_ast constinArgument_inAST,
                                                                           const GGS_semanticContext constinArgument_inContext,
                                                                           const GGS_location /* constinArgument_inEndOfSourceFile */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_requiredFunctionDeclarationListAST enumerator_2207 (constinArgument_inAST.readProperty_mRequiredFunctionListAST ()) ;
  while (enumerator_2207.hasCurrentObject ()) {
    GGS_lstring var_requiredFunctionSignature_2243 = extensionGetter_routineSignature (enumerator_2207.current (HERE).readProperty_mFormalArgumentList (), enumerator_2207.current (HERE).readProperty_mName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 61)) ;
    GGS_string var_requiredFunctionMangledName_2359 = enumerator_2207.current (HERE).readProperty_mName ().readProperty_string ().add_operation (var_requiredFunctionSignature_2243.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 62)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inContext.readProperty_mRoutineMap ().getter_hasKey (var_requiredFunctionMangledName_2359 COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 63)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 63)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2207.current (HERE).readProperty_mName ().readProperty_location (), GGS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_bool var_implementedPublic_2703 ;
      GGS_routineTypedSignature var_implementedSignature_2734 ;
      GGS_unifiedTypeMapEntry var_implementedReturnTypeProxy_2768 ;
      GGS_routineLLVMNameDict var_implementedModeDictionary_2844 ;
      GGS_bool var_implementedIsExported_2883 ;
      GGS_mode var_implementedMode_2918 ;
      constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_requiredFunctionMangledName_2359.getter_nowhere (SOURCE_FILE ("declaration-required-proc.galgas", 67)), var_implementedPublic_2703, var_implementedSignature_2734, var_implementedReturnTypeProxy_2768, var_implementedModeDictionary_2844, var_implementedIsExported_2883, var_implementedMode_2918, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 66)) ;
      GGS_location var_errorLocation_2952 = constinArgument_inContext.readProperty_mRoutineMap ().getter_locationForKey (var_requiredFunctionMangledName_2359, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 75)) ;
      GGS_routineTypedSignature var_requiredTypedSignature_3156 ;
      {
      routine_routineTypedSignature_32__3F__3F__21_ (constinArgument_inContext.readProperty_mTypeMap (), enumerator_2207.current (HERE).readProperty_mFormalArgumentList (), var_requiredTypedSignature_3156, inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 77)) ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_typedString (var_requiredTypedSignature_3156, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)).objectCompare (extensionGetter_typedString (var_implementedSignature_2734, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_2952, GGS_string ("function signature should be ").add_operation (extensionGetter_typedString (var_requiredTypedSignature_3156, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)).add_operation (GGS_string (" (as required by required function declaration)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_implementedReturnTypeProxy_2768.getter_isNull (SOURCE_FILE ("declaration-required-proc.galgas", 83)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 83)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_2952, GGS_string ("function should not return a value (as required by required function declaration)"), fixItArray5  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)) ;
        }
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, var_implementedMode_2918.objectCompare (enumerator_2207.current (HERE).readProperty_mExecutionMode ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_errorLocation_2952, GGS_string ("required mode is '").add_operation (extensionGetter_string (enumerator_2207.current (HERE).readProperty_mExecutionMode (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), fixItArray7  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)) ;
        }
      }
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = var_implementedPublic_2703.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 99)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_errorLocation_2952, GGS_string ("function should be public (as required by required function declaration)"), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 100)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_bool test_11 = enumerator_2207.current (HERE).readProperty_mIsExported () ;
        if (GalgasBool::boolTrue == test_11.boolEnum ()) {
          test_11 = var_implementedIsExported_2883.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 103)) ;
        }
        test_10 = test_11.boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, EnumFixItKind::fixItInsertAfter, GGS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106))) ;
          inCompiler->emitSemanticError (var_errorLocation_2952, GGS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)).add_operation (GGS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), fixItArray12  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 104)) ;
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          GGS_bool test_14 = var_implementedIsExported_2883 ;
          if (GalgasBool::boolTrue == test_14.boolEnum ()) {
            test_14 = enumerator_2207.current (HERE).readProperty_mIsExported ().operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 107)) ;
          }
          test_13 = test_14.boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            GenericArray <FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_errorLocation_2952, GGS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)).add_operation (GGS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), fixItArray15  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 108)) ;
          }
        }
      }
    }
    enumerator_2207.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalStringInExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                     GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GGS_lstring::init_21__21_ (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), constinArgument_inConstantName.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalStringInExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalStringInExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::method_analyzeExpression (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                                  const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                  const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                  const GGS_semanticContext /* constinArgument_inContext */,
                                                                  const GGS_mode /* constinArgument_inMode */,
                                                                  GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                  GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                  GGS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                  GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                  GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                  GGS_objectIR & outArgument_outResult,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_staticStringIndex_3361 ;
  {
  const GGS_literalStringInExpressionAST temp_0 = this ;
  extensionSetter_findOrAddStaticString (ioArgument_ioStaticEntityMap, temp_0.readProperty_mLiteralString ().readProperty_string (), var_staticStringIndex_3361, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 62)) ;
  }
  const GGS_literalStringInExpressionAST temp_1 = this ;
  outArgument_outResult = GGS_objectIR::class_func_literalString (temp_1.readProperty_mLiteralString ().readProperty_string ().getter_utf_38_Length (SOURCE_FILE ("expression-literal-string.galgas", 63)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)), var_staticStringIndex_3361  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@storeIndirectVolatileIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_storeIndirectVolatileIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_storeIndirectVolatileIR temp_0 = this ;
  GGS_string var_llvmType_796 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mTargetVarType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 25)) ;
  GGS_string var_ptr_848 = GGS_string ("%registerPointer.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 26)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 27)) ;
  const GGS_storeIndirectVolatileIR temp_1 = this ;
  const GGS_storeIndirectVolatileIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_ptr_848, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (GGS_string (" = inttoptr i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (temp_1.readProperty_mLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (var_llvmType_796, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (GGS_string ("  store volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (var_llvmType_796, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 29)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 29)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mSourceValue (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 29)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 29)).add_operation (var_llvmType_796, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 29)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 29)).add_operation (var_ptr_848, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 30)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'codeOptimization?&intermediateCode'
//
//--------------------------------------------------------------------------------------------------

void routine_codeOptimization_3F__26_intermediateCode (const GGS_string constinArgument_inSourceFile,
                                                       GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineAccessibilityIR temp_0 = GGS_routineAccessibilityIR::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 27)) ;
  GGS_routineAccessibilityIR var_routineAccessibilityIR_1342 = temp_0 ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 29)) ;
  GGS_stringset var_exploreRoutineSet_1465 = temp_1 ;
  GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 30)) ;
  GGS_stringset var_allRoutineSet_1506 = temp_2 ;
  GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 31)) ;
  GGS_stringset var_definedRoutineSet_1543 = temp_3 ;
  UpEnumerator_routineListIR enumerator_1609 (ioArgument_ioIntermediateCodeStruct.readProperty_mRoutineListIR ()) ;
  while (enumerator_1609.hasCurrentObject ()) {
    GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 33)) ;
    GGS_stringset var_accessibleRoutineSet_1646 = temp_4 ;
    callExtensionMethod_enterAccessibleEntities ((cPtr_abstractRoutineIR *) enumerator_1609.current (HERE).readProperty_mRoutine ().ptr (), var_accessibleRoutineSet_1646, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 34)) ;
    var_routineAccessibilityIR_1342.addAssignOperation (enumerator_1609.current (HERE).readProperty_mRoutine (), var_accessibleRoutineSet_1646  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 35)) ;
    var_allRoutineSet_1506.plusAssignOperation(var_accessibleRoutineSet_1646, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 36)) ;
    var_definedRoutineSet_1543.plusPlusAssignOperation (enumerator_1609.current (HERE).readProperty_mRoutine ().readProperty_mRoutineMangledName ().readProperty_string ()  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 37)) ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = enumerator_1609.current (HERE).readProperty_mRoutine ().readProperty_isRequired ().boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        var_exploreRoutineSet_1465.plusPlusAssignOperation (enumerator_1609.current (HERE).readProperty_mRoutine ().readProperty_mRoutineMangledName ().readProperty_string ()  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 39)) ;
      }
    }
    enumerator_1609.gotoNextObject () ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_string var_m_2152 = GGS_string ("** Dead code elimination\n") ;
      var_m_2152.plusAssignOperation(GGS_string ("    ").add_operation (ioArgument_ioIntermediateCodeStruct.readProperty_mRoutineListIR ().getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 44)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 44)).add_operation (GGS_string (" routines, "), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 44)) ;
      var_m_2152.plusAssignOperation(var_exploreRoutineSet_1465.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 45)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 45)).add_operation (GGS_string (" root routines.\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 45)) ;
      {
      routine_print_3F_ (var_m_2152, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 46)) ;
      }
    }
  }
  GGS_stringset var_undefinedRoutineSet_2460 = var_allRoutineSet_1506.substract_operation (var_definedRoutineSet_1543, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 49)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::greaterThan, var_undefinedRoutineSet_2460.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 50)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_string var_m_2566 = GGS_string ("undefined routine(s):") ;
      UpEnumerator_stringset enumerator_2603 (var_undefinedRoutineSet_2460) ;
      while (enumerator_2603.hasCurrentObject ()) {
        var_m_2566.plusAssignOperation(GGS_string ("\n    - ").add_operation (enumerator_2603.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 53)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 53)) ;
        enumerator_2603.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("dead-code-elimination.galgas", 55)), var_m_2566, fixItArray8  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 55)) ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = GGS_bool (gOption_omnibus_5F_options_noDeadCodeElimination.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      {
      routine_print_3F_ (GGS_string ("    No dead code elimination (option --").add_operation (GGS_string (gOption_omnibus_5F_options_noDeadCodeElimination.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 59)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 59)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_stringset temp_10 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 61)) ;
    GGS_stringset var_usefulRoutineSet_2996 = temp_10 ;
    if (ioArgument_ioIntermediateCodeStruct.readProperty_mRoutineListIR ().getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 62)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 62)).isValid ()) {
      uint32_t variant_3023 = ioArgument_ioIntermediateCodeStruct.readProperty_mRoutineListIR ().getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 62)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 62)).uintValue () ;
      bool loop_3023 = true ;
      while (loop_3023) {
        loop_3023 = GGS_bool (ComparisonKind::greaterThan, var_exploreRoutineSet_1465.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 62)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
        if (loop_3023) {
          loop_3023 = GGS_bool (ComparisonKind::greaterThan, var_exploreRoutineSet_1465.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 62)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
        }
        if (loop_3023 && (0 == variant_3023)) {
          loop_3023 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("dead-code-elimination.galgas", 62)) ;
        }
        if (loop_3023) {
          variant_3023 -= 1 ;
          GGS_stringset var_currentSet_3131 = var_exploreRoutineSet_1465 ;
          GGS_stringset temp_11 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 64)) ;
          var_exploreRoutineSet_1465 = temp_11 ;
          UpEnumerator_routineAccessibilityIR enumerator_3213 (var_routineAccessibilityIR_1342) ;
          while (enumerator_3213.hasCurrentObject ()) {
            GGS_lstring var_routineMangledName_3251 = enumerator_3213.current (HERE).readProperty_mRoutine ().readProperty_mRoutineMangledName () ;
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = var_currentSet_3131.getter_hasKey (var_routineMangledName_3251.readProperty_string () COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 67)).operator_and (var_usefulRoutineSet_2996.getter_hasKey (var_routineMangledName_3251.readProperty_string () COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 67)).operator_not (SOURCE_FILE ("dead-code-elimination.galgas", 67)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 67)).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                var_usefulRoutineSet_2996.plusPlusAssignOperation (var_routineMangledName_3251.readProperty_string ()  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 68)) ;
                var_exploreRoutineSet_1465.plusAssignOperation(enumerator_3213.current (HERE).readProperty_mAccessibleRoutineSet (), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 69)) ;
              }
            }
            enumerator_3213.gotoNextObject () ;
          }
        }
      }
    }
    UpEnumerator_routineAccessibilityIR enumerator_3650 (var_routineAccessibilityIR_1342) ;
    while (enumerator_3650.hasCurrentObject ()) {
      GGS_lstring var_routineMangledName_3686 = enumerator_3650.current (HERE).readProperty_mRoutine ().readProperty_mRoutineMangledName () ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = enumerator_3650.current (HERE).readProperty_mRoutine ().readProperty_warnsIfUnused ().operator_and (var_usefulRoutineSet_2996.getter_hasKey (var_routineMangledName_3686.readProperty_string () COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 76)).operator_not (SOURCE_FILE ("dead-code-elimination.galgas", 76)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 76)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticWarning (var_routineMangledName_3686.readProperty_location (), GGS_string ("unused routine"), fixItArray14  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 77)) ;
        }
      }
      enumerator_3650.gotoNextObject () ;
    }
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_string var_m_4030 = GGS_string ("    ").add_operation (var_usefulRoutineSet_2996.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 82)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 82)).add_operation (GGS_string (" useful routines.\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 82)) ;
        {
        routine_print_3F_ (var_m_4030, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 86)) ;
        }
      }
    }
    GGS_routineListIR temp_16 = GGS_routineListIR::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 89)) ;
    ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR = temp_16 ;
    UpEnumerator_routineAccessibilityIR enumerator_4359 (var_routineAccessibilityIR_1342) ;
    while (enumerator_4359.hasCurrentObject ()) {
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = var_usefulRoutineSet_2996.getter_hasKey (enumerator_4359.current_mRoutine (HERE).readProperty_mRoutineMangledName ().readProperty_string () COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 91)).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssignOperation (enumerator_4359.current_mRoutine (HERE)  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 92)) ;
        }
      }
      enumerator_4359.gotoNextObject () ;
    }
  }
  GGS_string var_filePath_4581 = constinArgument_inSourceFile.add_operation (GGS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 97)) ;
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    test_18 = GGS_bool (gOption_omnibus_5F_options_emitRoutineInvocationGraphFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      {
      routine_displayInvocationGraph_3F__3F_ (ioArgument_ioIntermediateCodeStruct.readProperty_mRoutineListIR (), var_filePath_4581, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 99)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_18) {
    {
    GGS_string::class_method_deleteFileIfExists (var_filePath_4581, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 101)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'displayInvocationGraph??'
//
//--------------------------------------------------------------------------------------------------

void routine_displayInvocationGraph_3F__3F_ (const GGS_routineListIR constinArgument_inRoutineListIR,
                                             const GGS_string constinArgument_inFilePath,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_5052 = GGS_string ("digraph G {\n") ;
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 113)) ;
  GGS_stringset var_definedRoutines_5107 = temp_0 ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 114)) ;
  GGS_stringset var_allRoutines_5146 = temp_1 ;
  UpEnumerator_routineListIR enumerator_5171 (constinArgument_inRoutineListIR) ;
  while (enumerator_5171.hasCurrentObject ()) {
    var_definedRoutines_5107.plusPlusAssignOperation (enumerator_5171.current_mRoutine (HERE).readProperty_mRoutineMangledName ().readProperty_string ()  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 116)) ;
    var_allRoutines_5146.plusPlusAssignOperation (enumerator_5171.current_mRoutine (HERE).readProperty_mRoutineMangledName ().readProperty_string ()  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 117)) ;
    GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 118)) ;
    GGS_stringset var_accessibleRoutineSet_5321 = temp_2 ;
    GGS_uint joker_5408 = GGS_uint (uint32_t (0U)) ;
    callExtensionMethod_enterAccessibleEntities ((cPtr_abstractRoutineIR *) enumerator_5171.current_mRoutine (HERE).ptr (), var_accessibleRoutineSet_5321, joker_5408, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 119)) ;
    var_allRoutines_5146.plusAssignOperation(var_accessibleRoutineSet_5321, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 120)) ;
    var_s_5052.plusAssignOperation(GGS_string ("  \"").add_operation (enumerator_5171.current_mRoutine (HERE).readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 121)).add_operation (GGS_string ("\" [shape=rectangle"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 121)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = enumerator_5171.current_mRoutine (HERE).readProperty_isRequired ().boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_s_5052.plusAssignOperation(GGS_string (", color=blue"), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 123)) ;
      }
    }
    var_s_5052.plusAssignOperation(GGS_string ("] ;\n"), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 125)) ;
    UpEnumerator_stringset enumerator_5664 (var_accessibleRoutineSet_5321) ;
    while (enumerator_5664.hasCurrentObject ()) {
      var_s_5052.plusAssignOperation(GGS_string ("  \"").add_operation (enumerator_5171.current_mRoutine (HERE).readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 127)).add_operation (GGS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 127)).add_operation (enumerator_5664.current (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 127)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 127)) ;
      enumerator_5664.gotoNextObject () ;
    }
    enumerator_5171.gotoNextObject () ;
  }
  GGS_stringset var_undefinedRoutineSet_5840 = var_allRoutines_5146.substract_operation (var_definedRoutines_5107, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 131)) ;
  UpEnumerator_stringset enumerator_5911 (var_undefinedRoutineSet_5840) ;
  while (enumerator_5911.hasCurrentObject ()) {
    var_s_5052.plusAssignOperation(GGS_string ("  \"").add_operation (enumerator_5911.current (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 133)).add_operation (GGS_string ("\" [shape=rectangle, color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 133)) ;
    enumerator_5911.gotoNextObject () ;
  }
  var_s_5052.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 135)) ;
  GGS_bool joker_6073 ; // Joker input parameter
  var_s_5052.method_writeToFileWhenDifferentContents (constinArgument_inFilePath, joker_6073, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 136)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::greaterThan, var_undefinedRoutineSet_5840.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 137)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GGS_string var_m_6127 = var_undefinedRoutineSet_5840.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 138)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 138)).add_operation (GGS_string (" undefined routine(s) in routine invocation graph"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 138)) ;
      UpEnumerator_stringset enumerator_6231 (var_undefinedRoutineSet_5840) ;
      while (enumerator_6231.hasCurrentObject ()) {
        var_m_6127.plusAssignOperation(GGS_string ("\n    - ").add_operation (enumerator_6231.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 140)) ;
        enumerator_6231.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("dead-code-elimination.galgas", 142)), var_m_6127, fixItArray5  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 142)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@varInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_varInstructionWithAssignmentAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_varInstructionWithAssignmentAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_varInstructionWithAssignmentAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("instruction-var.galgas", 97)) ;
      }
    }
  }
  const GGS_varInstructionWithAssignmentAST temp_3 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 99)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@varDeclarationInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_varDeclarationInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_varDeclarationInstructionAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-var.galgas", 105)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@varInstructionWithAssignmentAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_varInstructionWithAssignmentAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                               const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                               const GGS_semanticContext constinArgument_inContext,
                                                                               const GGS_mode constinArgument_inMode,
                                                                               GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                               GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                               GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                               GGS_allocaList & ioArgument_ioAllocaList,
                                                                               GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_varInstructionWithAssignmentAST temp_0 = this ;
  GGS_omnibusType temp_1 ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, temp_0.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 124)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    const GGS_varInstructionWithAssignmentAST temp_3 = this ;
    temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 125)) ;
  }
  GGS_omnibusType var_targetType_4865 = temp_1 ;
  GGS_objectIR var_sourcePossibleReference_5437 ;
  const GGS_varInstructionWithAssignmentAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_4865, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_5437, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)) ;
  const GGS_varInstructionWithAssignmentAST temp_5 = this ;
  GGS_objectIR var_result_5471 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_sourcePossibleReference_5437, var_targetType_4865, temp_5.readProperty_mVarName ().readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 141)) ;
  const GGS_varInstructionWithAssignmentAST temp_6 = this ;
  const GGS_varInstructionWithAssignmentAST temp_7 = this ;
  GGS_lstring var_omnibusLocalVariableName_5732 = GGS_lstring::init_21__21_ (temp_6.readProperty_mVarName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-var.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)), temp_7.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 150)) ;
  {
  const GGS_varInstructionWithAssignmentAST temp_8 = this ;
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, temp_8.readProperty_mVarName (), extensionGetter_type (var_result_5471, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)), var_omnibusLocalVariableName_5732, GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 151)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)) ;
  }
  ioArgument_ioAllocaList.addAssignOperation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_5732.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)), extensionGetter_type (var_result_5471, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)), GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 153)) ;
  {
  const GGS_varInstructionWithAssignmentAST temp_9 = this ;
  extensionSetter_appendAssignmentIR (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioAllocaList, extensionGetter_type (var_result_5471, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 159)), function_llvmNameForLocalVariable (var_omnibusLocalVariableName_5732.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 160)), var_sourcePossibleReference_5437, temp_9.readProperty_mVarName ().readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 155)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@varDeclarationInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_varDeclarationInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                                            const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                            const GGS_semanticContext constinArgument_inContext,
                                                                            const GGS_mode /* constinArgument_inMode */,
                                                                            GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                            GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                            GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                            GGS_allocaList & ioArgument_ioAllocaList,
                                                                            GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_varDeclarationInstructionAST temp_0 = this ;
  GGS_omnibusType var_targetType_7095 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 180)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_targetType_7095.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 182)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_varDeclarationInstructionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GGS_string ("$").add_operation (var_targetType_7095.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)).add_operation (GGS_string (" type is a compile time type, and is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)), fixItArray3  COMMA_SOURCE_FILE ("instruction-var.galgas", 183)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_targetType_7095.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 184)).operator_not (SOURCE_FILE ("instruction-var.galgas", 184)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_varDeclarationInstructionAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mVarName ().readProperty_location (), GGS_string ("$").add_operation (var_targetType_7095.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 185)).add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 185)), fixItArray6  COMMA_SOURCE_FILE ("instruction-var.galgas", 185)) ;
      }
    }
  }
  const GGS_varDeclarationInstructionAST temp_7 = this ;
  const GGS_varDeclarationInstructionAST temp_8 = this ;
  GGS_lstring var_omnibusName_7521 = GGS_lstring::init_21__21_ (temp_7.readProperty_mVarName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-var.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)), temp_8.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 189)) ;
  {
  const GGS_varDeclarationInstructionAST temp_9 = this ;
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, temp_9.readProperty_mVarName (), var_targetType_7095, var_omnibusName_7521, GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("instruction-var.galgas", 190)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 190)) ;
  }
  ioArgument_ioAllocaList.addAssignOperation (function_llvmNameForLocalVariable (var_omnibusName_7521.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 192)), var_targetType_7095, GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 192)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmAttributeFunction'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_llvmAttributeFunction (Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (" nounwind minsize optsize ") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmAttributeFunction = false ;
static GGS_string gOnceFunctionResult_llvmAttributeFunction ;

//--------------------------------------------------------------------------------------------------

GGS_string function_llvmAttributeFunction (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmAttributeFunction) {
    gOnceFunctionResult_llvmAttributeFunction = onceFunction_llvmAttributeFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmAttributeFunction = true ;
  }
  return gOnceFunctionResult_llvmAttributeFunction ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmAttributeFunction (void) {
  gOnceFunctionResult_llvmAttributeFunction.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmAttributeFunction (nullptr,
                                                                 releaseOnceFunctionResult_llvmAttributeFunction) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmAttributeFunction [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmAttributeFunction (Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_llvmAttributeFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmAttributeFunction ("llvmAttributeFunction",
                                                                       functionWithGenericHeader_llvmAttributeFunction,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_llvmAttributeFunction) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'staticAttribute'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_staticAttribute (Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("static") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_staticAttribute = false ;
static GGS_string gOnceFunctionResult_staticAttribute ;

//--------------------------------------------------------------------------------------------------

GGS_string function_staticAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticAttribute) {
    gOnceFunctionResult_staticAttribute = onceFunction_staticAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticAttribute = true ;
  }
  return gOnceFunctionResult_staticAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_staticAttribute (void) {
  gOnceFunctionResult_staticAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_staticAttribute (nullptr,
                                                           releaseOnceFunctionResult_staticAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_staticAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_staticAttribute (Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_staticAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_staticAttribute ("staticAttribute",
                                                                 functionWithGenericHeader_staticAttribute,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_staticAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'compileTimeDeclarationBarrier'
//
//--------------------------------------------------------------------------------------------------

static GGS_lstring onceFunction_compileTimeDeclarationBarrier (Compiler *
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_string ("«compile time»").getter_nowhere (SOURCE_FILE ("generated-code-prefixes.galgas", 16)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compileTimeDeclarationBarrier = false ;
static GGS_lstring gOnceFunctionResult_compileTimeDeclarationBarrier ;

//--------------------------------------------------------------------------------------------------

GGS_lstring function_compileTimeDeclarationBarrier (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeDeclarationBarrier) {
    gOnceFunctionResult_compileTimeDeclarationBarrier = onceFunction_compileTimeDeclarationBarrier (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeDeclarationBarrier = true ;
  }
  return gOnceFunctionResult_compileTimeDeclarationBarrier ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compileTimeDeclarationBarrier (void) {
  gOnceFunctionResult_compileTimeDeclarationBarrier.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_compileTimeDeclarationBarrier (nullptr,
                                                                         releaseOnceFunctionResult_compileTimeDeclarationBarrier) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_compileTimeDeclarationBarrier [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compileTimeDeclarationBarrier (Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GGS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_compileTimeDeclarationBarrier (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compileTimeDeclarationBarrier ("compileTimeDeclarationBarrier",
                                                                               functionWithGenericHeader_compileTimeDeclarationBarrier,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               0,
                                                                               functionArgs_compileTimeDeclarationBarrier) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'registerGroupNameFromOmnibusName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_registerGroupNameFromOmnibusName (const GGS_lstring & constinArgument_inName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("registers ").add_operation (constinArgument_inName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 24)), constinArgument_inName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_registerGroupNameFromOmnibusName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_registerGroupNameFromOmnibusName (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_registerGroupNameFromOmnibusName (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_registerGroupNameFromOmnibusName ("registerGroupNameFromOmnibusName",
                                                                                  functionWithGenericHeader_registerGroupNameFromOmnibusName,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_registerGroupNameFromOmnibusName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalStringName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_literalStringName (const GGS_uint & constinArgument_inIndex,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@string.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 32)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_literalStringName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_literalStringName (Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_literalStringName (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_literalStringName ("literalStringName",
                                                                   functionWithGenericHeader_literalStringName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_literalStringName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalCharacterArrayName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_literalCharacterArrayName (const GGS_uint & constinArgument_inIndex,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@str.array.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 38)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_literalCharacterArrayName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_literalCharacterArrayName (Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GGS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_uint operand0 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_literalCharacterArrayName (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_literalCharacterArrayName ("literalCharacterArrayName",
                                                                           functionWithGenericHeader_literalCharacterArrayName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_literalCharacterArrayName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorMapKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_infixOperatorMapKey (const GGS_omnibusType & constinArgument_inLeftType,
                                          const GGS_omnibusInfixOperator & constinArgument_inInfixOperator,
                                          const GGS_location & constinArgument_inOperatorLocation,
                                          const GGS_omnibusType & constinArgument_inRightType,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_1887 = constinArgument_inLeftType.readProperty_omnibusTypeDescriptionName ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)).add_operation (extensionGetter_string (constinArgument_inInfixOperator, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)) ;
  var_s_1887.plusAssignOperation(GGS_string (" ").add_operation (constinArgument_inRightType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_1887, constinArgument_inOperatorLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_infixOperatorMapKey [5] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_omnibusInfixOperator,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_omnibusType,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_infixOperatorMapKey (Compiler * inCompiler,
                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                 const GGS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_omnibusInfixOperator operand1 = GGS_omnibusInfixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                     inCompiler
                                                                                     COMMA_THERE) ;
  const GGS_location operand2 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  const GGS_omnibusType operand3 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_infixOperatorMapKey (operand0,
                                       operand1,
                                       operand2,
                                       operand3,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_infixOperatorMapKey ("infixOperatorMapKey",
                                                                     functionWithGenericHeader_infixOperatorMapKey,
                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                     4,
                                                                     functionArgs_infixOperatorMapKey) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorFunctionName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_infixOperatorFunctionName (const GGS_omnibusType & constinArgument_inLeftType,
                                               const GGS_omnibusInfixOperator & constinArgument_inOperator,
                                               const GGS_omnibusType & constinArgument_inRightType,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("operator.").add_operation (constinArgument_inLeftType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 62)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 62)) ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GGS_omnibusInfixOperator::Enumeration::invalid:
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_equal:
    {
      result_result.plusAssignOperation(GGS_string ("equal"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 64)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_lessThan:
    {
      result_result.plusAssignOperation(GGS_string ("lessThan"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 65)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_infEqual:
    {
      result_result.plusAssignOperation(GGS_string ("infEqual"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 66)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_bitWiseAndOp:
    {
      result_result.plusAssignOperation(GGS_string ("bitWiseAnd"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 67)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_bitWiseOrOp:
    {
      result_result.plusAssignOperation(GGS_string ("bitWiseOr"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 68)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_bitWiseXorOp:
    {
      result_result.plusAssignOperation(GGS_string ("xor"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 69)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_addOp:
    {
      result_result.plusAssignOperation(GGS_string ("add"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 70)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_addOpNoOvf:
    {
      result_result.plusAssignOperation(GGS_string ("addOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 71)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_subOp:
    {
      result_result.plusAssignOperation(GGS_string ("sub"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 72)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_subOpNoOvf:
    {
      result_result.plusAssignOperation(GGS_string ("subOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 73)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_mulOp:
    {
      result_result.plusAssignOperation(GGS_string ("mul"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 74)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_mulOpNoOvf:
    {
      result_result.plusAssignOperation(GGS_string ("mulOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 75)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_divOp:
    {
      result_result.plusAssignOperation(GGS_string ("div"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 76)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_divOpNoOvf:
    {
      result_result.plusAssignOperation(GGS_string ("divNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 77)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_modOp:
    {
      result_result.plusAssignOperation(GGS_string ("modulo"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 78)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_modOpNoOvf:
    {
      result_result.plusAssignOperation(GGS_string ("moduloNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 79)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_leftShiftOp:
    {
      result_result.plusAssignOperation(GGS_string ("leftShift"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 80)) ;
    }
    break ;
  case GGS_omnibusInfixOperator::Enumeration::enum_rightShiftOp:
    {
      result_result.plusAssignOperation(GGS_string ("rightShift"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 81)) ;
    }
    break ;
  }
  result_result.plusAssignOperation(GGS_string (".").add_operation (constinArgument_inRightType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 83)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_infixOperatorFunctionName [4] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_omnibusInfixOperator,
  & kTypeDescriptor_GALGAS_omnibusType,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_infixOperatorFunctionName (Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GGS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_omnibusInfixOperator operand1 = GGS_omnibusInfixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                     inCompiler
                                                                                     COMMA_THERE) ;
  const GGS_omnibusType operand2 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_infixOperatorFunctionName (operand0,
                                             operand1,
                                             operand2,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_infixOperatorFunctionName ("infixOperatorFunctionName",
                                                                           functionWithGenericHeader_infixOperatorFunctionName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           3,
                                                                           functionArgs_infixOperatorFunctionName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorMapKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_prefixOperatorMapKey (const GGS_omnibusType & constinArgument_inReceiverType,
                                           const GGS_prefixOperator & constinArgument_inOperator,
                                           const GGS_location & constinArgument_inOperatorLocation,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_3664 ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GGS_prefixOperator::Enumeration::invalid:
    break ;
  case GGS_prefixOperator::Enumeration::enum_minusNoOvf:
    {
      var_s_3664 = GGS_string ("-%") ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_minusOp:
    {
      var_s_3664 = GGS_string ("-") ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_notOp:
    {
      var_s_3664 = GGS_string ("not") ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_bitWiseComplement:
    {
      var_s_3664 = GGS_string ("~") ;
    }
    break ;
  }
  var_s_3664.plusAssignOperation(GGS_string (" ").add_operation (constinArgument_inReceiverType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 101)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 101)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_3664, constinArgument_inOperatorLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_prefixOperatorMapKey [4] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_prefixOperator,
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_prefixOperatorMapKey (Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GGS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_prefixOperator operand1 = GGS_prefixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GGS_location operand2 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  return function_prefixOperatorMapKey (operand0,
                                        operand1,
                                        operand2,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_prefixOperatorMapKey ("prefixOperatorMapKey",
                                                                      functionWithGenericHeader_prefixOperatorMapKey,
                                                                      & kTypeDescriptor_GALGAS_lstring,
                                                                      3,
                                                                      functionArgs_prefixOperatorMapKey) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorFunctionName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_prefixOperatorFunctionName (const GGS_omnibusType & constinArgument_inReceiverType,
                                                const GGS_prefixOperator & constinArgument_inOperator,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("operator.") ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GGS_prefixOperator::Enumeration::invalid:
    break ;
  case GGS_prefixOperator::Enumeration::enum_minusNoOvf:
    {
      result_result.plusAssignOperation(GGS_string ("minusNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 113)) ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_minusOp:
    {
      result_result.plusAssignOperation(GGS_string ("minus"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 114)) ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_notOp:
    {
      result_result.plusAssignOperation(GGS_string ("not"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 115)) ;
    }
    break ;
  case GGS_prefixOperator::Enumeration::enum_bitWiseComplement:
    {
      result_result.plusAssignOperation(GGS_string ("complement"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 116)) ;
    }
    break ;
  }
  result_result.plusAssignOperation(GGS_string (".").add_operation (constinArgument_inReceiverType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 118)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_prefixOperatorFunctionName [3] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_prefixOperator,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_prefixOperatorFunctionName (Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GGS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GGS_prefixOperator operand1 = GGS_prefixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_prefixOperatorFunctionName (operand0,
                                              operand1,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_prefixOperatorFunctionName ("prefixOperatorFunctionName",
                                                                            functionWithGenericHeader_prefixOperatorFunctionName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            2,
                                                                            functionArgs_prefixOperatorFunctionName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'staticStringTypeName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_staticStringTypeName (Compiler *
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("literalString") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_staticStringTypeName = false ;
static GGS_string gOnceFunctionResult_staticStringTypeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_staticStringTypeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticStringTypeName) {
    gOnceFunctionResult_staticStringTypeName = onceFunction_staticStringTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticStringTypeName = true ;
  }
  return gOnceFunctionResult_staticStringTypeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_staticStringTypeName (void) {
  gOnceFunctionResult_staticStringTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_staticStringTypeName (nullptr,
                                                                releaseOnceFunctionResult_staticStringTypeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_staticStringTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_staticStringTypeName (Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GGS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_staticStringTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_staticStringTypeName ("staticStringTypeName",
                                                                      functionWithGenericHeader_staticStringTypeName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      0,
                                                                      functionArgs_staticStringTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'functionResultVariableName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_functionResultVariableName (Compiler *
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("result") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_functionResultVariableName = false ;
static GGS_string gOnceFunctionResult_functionResultVariableName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_functionResultVariableName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_functionResultVariableName) {
    gOnceFunctionResult_functionResultVariableName = onceFunction_functionResultVariableName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_functionResultVariableName = true ;
  }
  return gOnceFunctionResult_functionResultVariableName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_functionResultVariableName (void) {
  gOnceFunctionResult_functionResultVariableName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_functionResultVariableName (nullptr,
                                                                      releaseOnceFunctionResult_functionResultVariableName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_functionResultVariableName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_functionResultVariableName (Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GGS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_functionResultVariableName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_functionResultVariableName ("functionResultVariableName",
                                                                            functionWithGenericHeader_functionResultVariableName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            0,
                                                                            functionArgs_functionResultVariableName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForFunction'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForFunction (const GGS_string & constinArgument_inName,
                                         Compiler *
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 140)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForFunction [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForFunction (Compiler * inCompiler,
                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                 const GGS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForFunction (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForFunction ("llvmNameForFunction",
                                                                     functionWithGenericHeader_llvmNameForFunction,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_llvmNameForFunction) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'getterLLVMName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_getterLLVMName (const GGS_string & constinArgument_inReceiverLLVMTypeName,
                                    const GGS_string & constinArgument_inPropertyName,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("get.").add_operation (constinArgument_inReceiverLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)).add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_getterLLVMName [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_getterLLVMName (Compiler * inCompiler,
                                                            const cObjectArray & inEffectiveParameterArray,
                                                            const GGS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_string operand1 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_getterLLVMName (operand0,
                                  operand1,
                                  inCompiler
                                  COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_getterLLVMName ("getterLLVMName",
                                                                functionWithGenericHeader_getterLLVMName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                2,
                                                                functionArgs_getterLLVMName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setterLLVMName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_setterLLVMName (const GGS_string & constinArgument_inReceiverLLVMTypeName,
                                    const GGS_string & constinArgument_inPropertyName,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("set.").add_operation (constinArgument_inReceiverLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 156)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 156)).add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 156)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_setterLLVMName [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_setterLLVMName (Compiler * inCompiler,
                                                            const cObjectArray & inEffectiveParameterArray,
                                                            const GGS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_string operand1 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_setterLLVMName (operand0,
                                  operand1,
                                  inCompiler
                                  COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_setterLLVMName ("setterLLVMName",
                                                                functionWithGenericHeader_setterLLVMName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                2,
                                                                functionArgs_setterLLVMName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceInterrupt'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_llvmNameForServiceInterrupt (const GGS_lstring & constinArgument_inName,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("interrupt.service.").add_operation (constinArgument_inName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 164)), constinArgument_inName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForServiceInterrupt [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForServiceInterrupt (Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_llvmNameForServiceInterrupt (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceInterrupt ("llvmNameForServiceInterrupt",
                                                                             functionWithGenericHeader_llvmNameForServiceInterrupt,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             1,
                                                                             functionArgs_llvmNameForServiceInterrupt) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionInterrupt'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForSectionInterrupt (const GGS_string & constinArgument_inName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("interrupt.section.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 170)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForSectionInterrupt [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForSectionInterrupt (Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForSectionInterrupt (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionInterrupt ("llvmNameForSectionInterrupt",
                                                                             functionWithGenericHeader_llvmNameForSectionInterrupt,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             1,
                                                                             functionArgs_llvmNameForSectionInterrupt) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceCall'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForServiceCall (const GGS_string & constinArgument_inName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("service.user.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 178)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 178)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForServiceCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForServiceCall (Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForServiceCall (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceCall ("llvmNameForServiceCall",
                                                                        functionWithGenericHeader_llvmNameForServiceCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForServiceCall) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForServiceImplementation (const GGS_string & constinArgument_inName,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("service.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 184)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 184)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForServiceImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForServiceImplementation (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForServiceImplementation (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceImplementation ("llvmNameForServiceImplementation",
                                                                                  functionWithGenericHeader_llvmNameForServiceImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForServiceImplementation) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionCall'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForSectionCall (const GGS_string & constinArgument_inName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("section.user.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 192)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 192)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForSectionCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForSectionCall (Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForSectionCall (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionCall ("llvmNameForSectionCall",
                                                                        functionWithGenericHeader_llvmNameForSectionCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForSectionCall) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForSectionImplementation (const GGS_string & constinArgument_inName,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("section.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 198)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 198)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForSectionImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForSectionImplementation (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForSectionImplementation (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionImplementation ("llvmNameForSectionImplementation",
                                                                                  functionWithGenericHeader_llvmNameForSectionImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForSectionImplementation) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'acceptVariableOmnibusName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_acceptVariableOmnibusName (Compiler *
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("accept") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_acceptVariableOmnibusName = false ;
static GGS_string gOnceFunctionResult_acceptVariableOmnibusName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_acceptVariableOmnibusName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_acceptVariableOmnibusName) {
    gOnceFunctionResult_acceptVariableOmnibusName = onceFunction_acceptVariableOmnibusName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_acceptVariableOmnibusName = true ;
  }
  return gOnceFunctionResult_acceptVariableOmnibusName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_acceptVariableOmnibusName (void) {
  gOnceFunctionResult_acceptVariableOmnibusName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_acceptVariableOmnibusName (nullptr,
                                                                     releaseOnceFunctionResult_acceptVariableOmnibusName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_acceptVariableOmnibusName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_acceptVariableOmnibusName (Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GGS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_acceptVariableOmnibusName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_acceptVariableOmnibusName ("acceptVariableOmnibusName",
                                                                           functionWithGenericHeader_acceptVariableOmnibusName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           0,
                                                                           functionArgs_acceptVariableOmnibusName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'waitForGuardChangeFunctionName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_waitForGuardChangeFunctionName (Compiler *
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("guard.wait.for.change") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = false ;
static GGS_string gOnceFunctionResult_waitForGuardChangeFunctionName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_waitForGuardChangeFunctionName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_waitForGuardChangeFunctionName) {
    gOnceFunctionResult_waitForGuardChangeFunctionName = onceFunction_waitForGuardChangeFunctionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = true ;
  }
  return gOnceFunctionResult_waitForGuardChangeFunctionName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_waitForGuardChangeFunctionName (void) {
  gOnceFunctionResult_waitForGuardChangeFunctionName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_waitForGuardChangeFunctionName (nullptr,
                                                                          releaseOnceFunctionResult_waitForGuardChangeFunctionName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_waitForGuardChangeFunctionName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_waitForGuardChangeFunctionName (Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GGS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_waitForGuardChangeFunctionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_waitForGuardChangeFunctionName ("waitForGuardChangeFunctionName",
                                                                                functionWithGenericHeader_waitForGuardChangeFunctionName,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                0,
                                                                                functionArgs_waitForGuardChangeFunctionName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForLocalVariable (const GGS_string & constinArgument_inName,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("%").add_operation (GGS_string ("var.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 220)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 220)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForLocalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForLocalVariable (Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GGS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForLocalVariable (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForLocalVariable ("llvmNameForLocalVariable",
                                                                          functionWithGenericHeader_llvmNameForLocalVariable,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          1,
                                                                          functionArgs_llvmNameForLocalVariable) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForSelf'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_llvmNameForSelf (Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("%self") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForSelf = false ;
static GGS_string gOnceFunctionResult_llvmNameForSelf ;

//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForSelf (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForSelf) {
    gOnceFunctionResult_llvmNameForSelf = onceFunction_llvmNameForSelf (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForSelf = true ;
  }
  return gOnceFunctionResult_llvmNameForSelf ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForSelf (void) {
  gOnceFunctionResult_llvmNameForSelf.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmNameForSelf (nullptr,
                                                           releaseOnceFunctionResult_llvmNameForSelf) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForSelf [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForSelf (Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_llvmNameForSelf (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSelf ("llvmNameForSelf",
                                                                 functionWithGenericHeader_llvmNameForSelf,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_llvmNameForSelf) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForGlobalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForGlobalVariable (const GGS_string & constinArgument_inName,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@gvar.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 232)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForGlobalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForGlobalVariable (Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GGS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForGlobalVariable (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForGlobalVariable ("llvmNameForGlobalVariable",
                                                                           functionWithGenericHeader_llvmNameForGlobalVariable,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_llvmNameForGlobalVariable) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForGlobalSyncInstance'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForGlobalSyncInstance (const GGS_string & constinArgument_inName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@gsync.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 238)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForGlobalSyncInstance [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForGlobalSyncInstance (Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GGS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmNameForGlobalSyncInstance (operand0,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForGlobalSyncInstance ("llvmNameForGlobalSyncInstance",
                                                                               functionWithGenericHeader_llvmNameForGlobalSyncInstance,
                                                                               & kTypeDescriptor_GALGAS_string,
                                                                               1,
                                                                               functionArgs_llvmNameForGlobalSyncInstance) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'instantiableAttribute'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_instantiableAttribute (Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("instantiable") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_instantiableAttribute = false ;
static GGS_string gOnceFunctionResult_instantiableAttribute ;

//--------------------------------------------------------------------------------------------------

GGS_string function_instantiableAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_instantiableAttribute) {
    gOnceFunctionResult_instantiableAttribute = onceFunction_instantiableAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_instantiableAttribute = true ;
  }
  return gOnceFunctionResult_instantiableAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_instantiableAttribute (void) {
  gOnceFunctionResult_instantiableAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_instantiableAttribute (nullptr,
                                                                 releaseOnceFunctionResult_instantiableAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_instantiableAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_instantiableAttribute (Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_instantiableAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_instantiableAttribute ("instantiableAttribute",
                                                                       functionWithGenericHeader_instantiableAttribute,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_instantiableAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'copyableAttribute'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_copyableAttribute (Compiler *
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("copyable") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_copyableAttribute = false ;
static GGS_string gOnceFunctionResult_copyableAttribute ;

//--------------------------------------------------------------------------------------------------

GGS_string function_copyableAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_copyableAttribute) {
    gOnceFunctionResult_copyableAttribute = onceFunction_copyableAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_copyableAttribute = true ;
  }
  return gOnceFunctionResult_copyableAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_copyableAttribute (void) {
  gOnceFunctionResult_copyableAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_copyableAttribute (nullptr,
                                                             releaseOnceFunctionResult_copyableAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_copyableAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_copyableAttribute (Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_copyableAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_copyableAttribute ("copyableAttribute",
                                                                   functionWithGenericHeader_copyableAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_copyableAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'mutatingAttribute'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_mutatingAttribute (Compiler *
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("mutating") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_mutatingAttribute = false ;
static GGS_string gOnceFunctionResult_mutatingAttribute ;

//--------------------------------------------------------------------------------------------------

GGS_string function_mutatingAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_mutatingAttribute) {
    gOnceFunctionResult_mutatingAttribute = onceFunction_mutatingAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_mutatingAttribute = true ;
  }
  return gOnceFunctionResult_mutatingAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_mutatingAttribute (void) {
  gOnceFunctionResult_mutatingAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_mutatingAttribute (nullptr,
                                                             releaseOnceFunctionResult_mutatingAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_mutatingAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_mutatingAttribute (Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_mutatingAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_mutatingAttribute ("mutatingAttribute",
                                                                   functionWithGenericHeader_mutatingAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_mutatingAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'userAttributeForRegister'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_userAttributeForRegister (Compiler *
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("user") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_userAttributeForRegister = false ;
static GGS_string gOnceFunctionResult_userAttributeForRegister ;

//--------------------------------------------------------------------------------------------------

GGS_string function_userAttributeForRegister (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_userAttributeForRegister) {
    gOnceFunctionResult_userAttributeForRegister = onceFunction_userAttributeForRegister (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_userAttributeForRegister = true ;
  }
  return gOnceFunctionResult_userAttributeForRegister ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_userAttributeForRegister (void) {
  gOnceFunctionResult_userAttributeForRegister.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_userAttributeForRegister (nullptr,
                                                                    releaseOnceFunctionResult_userAttributeForRegister) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_userAttributeForRegister [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_userAttributeForRegister (Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GGS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_userAttributeForRegister (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_userAttributeForRegister ("userAttributeForRegister",
                                                                          functionWithGenericHeader_userAttributeForRegister,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          0,
                                                                          functionArgs_userAttributeForRegister) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'noUnusedWarningAttribute'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_noUnusedWarningAttribute (Compiler *
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("noUnusedWarning") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_noUnusedWarningAttribute = false ;
static GGS_string gOnceFunctionResult_noUnusedWarningAttribute ;

//--------------------------------------------------------------------------------------------------

GGS_string function_noUnusedWarningAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_noUnusedWarningAttribute) {
    gOnceFunctionResult_noUnusedWarningAttribute = onceFunction_noUnusedWarningAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_noUnusedWarningAttribute = true ;
  }
  return gOnceFunctionResult_noUnusedWarningAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_noUnusedWarningAttribute (void) {
  gOnceFunctionResult_noUnusedWarningAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_noUnusedWarningAttribute (nullptr,
                                                                    releaseOnceFunctionResult_noUnusedWarningAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_noUnusedWarningAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_noUnusedWarningAttribute (Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GGS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_noUnusedWarningAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_noUnusedWarningAttribute ("noUnusedWarningAttribute",
                                                                          functionWithGenericHeader_noUnusedWarningAttribute,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          0,
                                                                          functionArgs_noUnusedWarningAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'exportedAttribute'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_exportedAttribute (Compiler *
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("exported") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_exportedAttribute = false ;
static GGS_string gOnceFunctionResult_exportedAttribute ;

//--------------------------------------------------------------------------------------------------

GGS_string function_exportedAttribute (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_exportedAttribute) {
    gOnceFunctionResult_exportedAttribute = onceFunction_exportedAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_exportedAttribute = true ;
  }
  return gOnceFunctionResult_exportedAttribute ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_exportedAttribute (void) {
  gOnceFunctionResult_exportedAttribute.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_exportedAttribute (nullptr,
                                                             releaseOnceFunctionResult_exportedAttribute) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_exportedAttribute [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_exportedAttribute (Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_exportedAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_exportedAttribute ("exportedAttribute",
                                                                   functionWithGenericHeader_exportedAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_exportedAttribute) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'stackNameForTask'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_stackNameForTask (const GGS_string & constinArgument_inTaskName,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@").add_operation (GGS_string ("task.stack.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 284)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 284)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_stackNameForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_stackNameForTask (Compiler * inCompiler,
                                                              const cObjectArray & inEffectiveParameterArray,
                                                              const GGS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_stackNameForTask (operand0,
                                    inCompiler
                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_stackNameForTask ("stackNameForTask",
                                                                  functionWithGenericHeader_stackNameForTask,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  1,
                                                                  functionArgs_stackNameForTask) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setupNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_setupNameForTaskType (const GGS_string & constinArgument_inTaskTypeName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@").add_operation (GGS_string ("task.setup.").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 290)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 290)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_setupNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_setupNameForTaskType (Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GGS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_setupNameForTaskType (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_setupNameForTaskType ("setupNameForTaskType",
                                                                      functionWithGenericHeader_setupNameForTaskType,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      1,
                                                                      functionArgs_setupNameForTaskType) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'activateNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_activateNameForTaskType (const GGS_string & constinArgument_inTaskTypeName,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("task.activate.").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 296)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_activateNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_activateNameForTaskType (Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GGS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_activateNameForTaskType (operand0,
                                           inCompiler
                                           COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_activateNameForTaskType ("activateNameForTaskType",
                                                                         functionWithGenericHeader_activateNameForTaskType,
                                                                         & kTypeDescriptor_GALGAS_string,
                                                                         1,
                                                                         functionArgs_activateNameForTaskType) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'deactivateNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_deactivateNameForTaskType (const GGS_string & constinArgument_inTaskTypeName,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@").add_operation (GGS_string ("task.deactivate.").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 302)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 302)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_deactivateNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_deactivateNameForTaskType (Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GGS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_deactivateNameForTaskType (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_deactivateNameForTaskType ("deactivateNameForTaskType",
                                                                           functionWithGenericHeader_deactivateNameForTaskType,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_deactivateNameForTaskType) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'stackAddressForTask'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_stackAddressForTask (const GGS_string & constinArgument_inTaskName,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("%").add_operation (GGS_string ("task.stack.address.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 308)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 308)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_stackAddressForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_stackAddressForTask (Compiler * inCompiler,
                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                 const GGS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_stackAddressForTask (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_stackAddressForTask ("stackAddressForTask",
                                                                     functionWithGenericHeader_stackAddressForTask,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_stackAddressForTask) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'mainRoutineNameForTask'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_mainRoutineNameForTask (const GGS_string & constinArgument_inTaskName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@").add_operation (GGS_string ("task.main.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 314)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 314)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_mainRoutineNameForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_mainRoutineNameForTask (Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_mainRoutineNameForTask (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_mainRoutineNameForTask ("mainRoutineNameForTask",
                                                                        functionWithGenericHeader_mainRoutineNameForTask,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_mainRoutineNameForTask) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForTaskLoopFunction'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_llvmNameForTaskLoopFunction (Compiler *
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("task.loop") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction = false ;
static GGS_string gOnceFunctionResult_llvmNameForTaskLoopFunction ;

//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForTaskLoopFunction (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction) {
    gOnceFunctionResult_llvmNameForTaskLoopFunction = onceFunction_llvmNameForTaskLoopFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskLoopFunction ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForTaskLoopFunction (void) {
  gOnceFunctionResult_llvmNameForTaskLoopFunction.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskLoopFunction (nullptr,
                                                                       releaseOnceFunctionResult_llvmNameForTaskLoopFunction) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForTaskLoopFunction [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForTaskLoopFunction (Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GGS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskLoopFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskLoopFunction ("llvmNameForTaskLoopFunction",
                                                                             functionWithGenericHeader_llvmNameForTaskLoopFunction,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             0,
                                                                             functionArgs_llvmNameForTaskLoopFunction) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForTaskWaitsForActivation'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_llvmNameForTaskWaitsForActivation (Compiler *
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("xtr.wait.for.activation") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForTaskWaitsForActivation = false ;
static GGS_string gOnceFunctionResult_llvmNameForTaskWaitsForActivation ;

//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForTaskWaitsForActivation (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskWaitsForActivation) {
    gOnceFunctionResult_llvmNameForTaskWaitsForActivation = onceFunction_llvmNameForTaskWaitsForActivation (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskWaitsForActivation = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskWaitsForActivation ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForTaskWaitsForActivation (void) {
  gOnceFunctionResult_llvmNameForTaskWaitsForActivation.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskWaitsForActivation (nullptr,
                                                                             releaseOnceFunctionResult_llvmNameForTaskWaitsForActivation) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForTaskWaitsForActivation [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForTaskWaitsForActivation (Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GGS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskWaitsForActivation ("llvmNameForTaskWaitsForActivation",
                                                                                   functionWithGenericHeader_llvmNameForTaskWaitsForActivation,
                                                                                   & kTypeDescriptor_GALGAS_string,
                                                                                   0,
                                                                                   functionArgs_llvmNameForTaskWaitsForActivation) ;

