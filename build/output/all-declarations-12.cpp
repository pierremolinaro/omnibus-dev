#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-12.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@llvmImplicitConverterToBoolean generateConvertToBooleanCode'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_llvmImplicitConverterToBoolean_generateConvertToBooleanCode (const cPtr_abstractImplicitConverterToBoolean * inObject,
                                                                                         const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                                                         const GALGAS_location /* constinArgument_inErrorLocation */,
                                                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                         GALGAS_implicitBooleanConversionResult & outArgument_outResult,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmImplicitConverterToBoolean * object = (const cPtr_llvmImplicitConverterToBoolean *) inObject ;
  macroValidSharedObject (object, cPtr_llvmImplicitConverterToBoolean) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mInstructionList.getter_length (SOURCE_FILE ("convert-to-boolean.galgas", 253)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outResult = GALGAS_implicitBooleanConversionResult::constructor_llvmVariable (extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 254))  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 254)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_assignmentGenerationVarMap var_varMap_11707 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("convert-to-boolean.galgas", 256)) ;
    {
    var_varMap_11707.setter_insertKey (object->mProperty_mReceiverName, extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 257)) ;
    }
    GALGAS_string var_resultLLVMName_11805 = GALGAS_string ("%temp").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("convert-to-boolean.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 258)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 259)) ;
    {
    var_varMap_11707.setter_insertKey (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("convert-to-boolean.galgas", 260)), var_resultLLVMName_11805, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 260)) ;
    }
    GALGAS_assignmentGenerationVarMap var_typeMap_11988 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("convert-to-boolean.galgas", 262)) ;
    {
    var_typeMap_11988.setter_insertKey (object->mProperty_mReceiverName, callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 263)) ;
    }
    GALGAS_stringlist var_generatedInstructions_12105 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("convert-to-boolean.galgas", 265)) ;
    extensionMethod_generateIRCode (object->mProperty_mInstructionList, var_varMap_11707, var_typeMap_11988, var_generatedInstructions_12105, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 266)) ;
    cEnumerator_stringlist enumerator_12275 (var_generatedInstructions_12105, kENUMERATION_UP) ;
    while (enumerator_12275.hasCurrentObject ()) {
      {
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, enumerator_12275.current_mValue (HERE), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("convert-to-boolean.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 268)) ;
      }
      enumerator_12275.gotoNextObject () ;
    }
    outArgument_outResult = GALGAS_implicitBooleanConversionResult::constructor_llvmVariable (var_resultLLVMName_11805  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 270)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_llvmImplicitConverterToBoolean_generateConvertToBooleanCode (void) {
  enterExtensionMethod_generateConvertToBooleanCode (kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean.mSlotID,
                                                     extensionMethod_llvmImplicitConverterToBoolean_generateConvertToBooleanCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_llvmImplicitConverterToBoolean_generateConvertToBooleanCode (defineExtensionMethod_llvmImplicitConverterToBoolean_generateConvertToBooleanCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'computeStaticExpression'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_computeStaticExpression (GALGAS_semanticContext & ioArgument_ioContext,
                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                      const GALGAS_expressionAST constinArgument_inExpression,
                                      const GALGAS_location constinArgument_inErrorLocation,
                                      const GALGAS_lstring constinArgument_inOptionalTypeName,
                                      GALGAS_objectIR & outArgument_outStaticExpressionIR,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStaticExpressionIR.drop () ; // Release 'out' argument
  GALGAS_omnibusType var_annotationType_748 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_annotationType_748 = function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 16)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (constinArgument_inOptionalTypeName, var_annotationType_748, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 18)) ;
  }
  GALGAS_semanticTemporariesStruct joker_1106 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("compute-static-expression.galgas", 27)) ;
  GALGAS_allocaList joker_1207 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("compute-static-expression.galgas", 30)) ;
  GALGAS_instructionListIR joker_1233 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("compute-static-expression.galgas", 31)) ;
  GALGAS_objectIR var_expressionIR_1273 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 22)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("compute-static-expression.galgas", 23)), var_annotationType_748, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("compute-static-expression.galgas", 26)), joker_1106, ioArgument_ioStaticEntityMap, ioArgument_ioContext.mProperty_mValuedObjectMap, joker_1207, joker_1233, var_expressionIR_1273, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 21)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_isStatic (var_expressionIR_1273, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 34)).operator_not (SOURCE_FILE ("compute-static-expression.galgas", 34)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("expression is not static"), fixItArray2  COMMA_SOURCE_FILE ("compute-static-expression.galgas", 35)) ;
      outArgument_outStaticExpressionIR.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    outArgument_outStaticExpressionIR = function_checkAssignmentCompatibility (ioArgument_ioContext.getter_mAssignmentOperatorMap (HERE), var_expressionIR_1273, var_annotationType_748, constinArgument_inErrorLocation, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 38)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@convertExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inConstantName,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 50)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("expression-convert.galgas", 52)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                                             extensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@convertExpressionAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 61)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("expression-convert.galgas", 63)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                                             extensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@convertExpressionAST analyzeExpression'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_convertExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  GALGAS_objectIR var_expressionResult_4360 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4360, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 87)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4360, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 100)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 105)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 106)), GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), fixItArray1  COMMA_SOURCE_FILE ("expression-convert.galgas", 106)) ;
    }
  }
  GALGAS_omnibusType temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 111)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)) ;
  }
  GALGAS_omnibusType var_resultType_4664 = temp_2 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_resultType_4664.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 114)).operator_not (SOURCE_FILE ("expression-convert.galgas", 114)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 115)), GALGAS_string ("this type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-convert.galgas", 115)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = extensionGetter_type (var_expressionResult_4360, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 116)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 116)).operator_not (SOURCE_FILE ("expression-convert.galgas", 116)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray7  COMMA_SOURCE_FILE ("expression-convert.galgas", 117)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      GALGAS_bigint var_minSource_5145 ;
      GALGAS_bigint var_maxSource_5164 ;
      GALGAS_bool joker_5166_2 ; // Joker input parameter
      GALGAS_uint joker_5166_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4360, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 119)).getter_kind (HERE).method_integer (var_minSource_5145, var_maxSource_5164, joker_5166_2, joker_5166_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 119)) ;
      GALGAS_bigint var_minTarget_5217 ;
      GALGAS_bigint var_maxTarget_5236 ;
      GALGAS_bool joker_5238_2 ; // Joker input parameter
      GALGAS_uint joker_5238_1 ; // Joker input parameter
      var_resultType_4664.getter_kind (HERE).method_integer (var_minTarget_5217, var_maxTarget_5236, joker_5238_2, joker_5238_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 120)) ;
      GALGAS_bool test_8 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5217.objectCompare (var_minSource_5145)) ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5236.objectCompare (var_maxSource_5164)) ;
      }
      GALGAS_bool var_alwaysPossible_5264 = test_8 ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_alwaysPossible_5264.boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 123)), GALGAS_string ("useless explicit conversion"), fixItArray10  COMMA_SOURCE_FILE ("expression-convert.galgas", 123)) ;
        }
      }
      {
      routine_getNewTempValue (var_resultType_4664, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 125)) ;
      }
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
        if (kBoolTrue == test_11) {
          ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4360  COMMA_SOURCE_FILE ("expression-convert.galgas", 127))  COMMA_SOURCE_FILE ("expression-convert.galgas", 127)) ;
        }
      }
      if (kBoolFalse == test_11) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_convertInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4360, object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-convert.galgas", 132))  COMMA_SOURCE_FILE ("expression-convert.galgas", 132)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_convertExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                          extensionMethod_convertExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_convertExpressionAST_analyzeExpression (defineExtensionMethod_convertExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@convertInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_convertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertInstructionIR * object = (const cPtr_convertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_convertInstructionIR) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 159))  COMMA_SOURCE_FILE ("expression-convert.galgas", 159)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_convertInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                                extensionMethod_convertInstructionIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_convertInstructionIR_enterAccessibleEntities (defineExtensionMethod_convertInstructionIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@convertInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_convertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertInstructionIR * object = (const cPtr_convertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_convertInstructionIR) ;
  GALGAS_string var_lbl_7097 = object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)).getter_string (SOURCE_FILE ("expression-convert.galgas", 169)) ;
  GALGAS_string var_convertMinOkLabel_7158 = GALGAS_string ("min.").add_operation (var_lbl_7097, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)) ;
  GALGAS_string var_convertMaxOkLabel_7205 = GALGAS_string ("max.").add_operation (var_lbl_7097, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)) ;
  GALGAS_string var_convertFailLabel_7251 = GALGAS_string ("fail.").add_operation (var_lbl_7097, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)) ;
  GALGAS_string var_compareMinVar_7288 = GALGAS_string ("cmp.").add_operation (var_lbl_7097, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)).add_operation (GALGAS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)) ;
  GALGAS_string var_compareMaxVar_7336 = GALGAS_string ("cmp.").add_operation (var_lbl_7097, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GALGAS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)) ;
  GALGAS_bigint var_minTarget_7414 ;
  GALGAS_bigint var_maxTarget_7433 ;
  GALGAS_bool joker_7435_2 ; // Joker input parameter
  GALGAS_uint joker_7435_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).getter_kind (HERE).method_integer (var_minTarget_7414, var_maxTarget_7433, joker_7435_2, joker_7435_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)) ;
  GALGAS_bigint var_minSource_7489 ;
  GALGAS_bool var_operandIsUnsigned_7528 ;
  GALGAS_bigint joker_7495 ; // Joker input parameter
  GALGAS_uint joker_7530_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)).getter_kind (HERE).method_integer (var_minSource_7489, joker_7495, var_operandIsUnsigned_7528, joker_7530_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)) ;
  GALGAS_string var_operandType_7551 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_minTarget_7414.objectCompare (var_minSource_7489)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMinVar_7288, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 179)) ;
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = var_operandIsUnsigned_7528.boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GALGAS_string ("uge") ;
      }else if (kBoolFalse == test_2) {
        temp_1 = GALGAS_string ("sge") ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 180)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7551, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (var_minTarget_7414.getter_string (SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 181)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMinVar_7288, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertMinOkLabel_7158, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertFailLabel_7251, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 182)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_convertMinOkLabel_7158.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 183)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMaxVar_7336, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 185)) ;
  GALGAS_string temp_3 ;
  const enumGalgasBool test_4 = var_operandIsUnsigned_7528.boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_string ("ule") ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_3, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 186)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7551, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (var_maxTarget_7433.getter_string (SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 187)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMaxVar_7336, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertMaxOkLabel_7205, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertFailLabel_7251, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 188)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertFailLabel_7251.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 189)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).getter_assemblerRepresentation (SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 190)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).getter_string (SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 191)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (function_panicCodeForConvertOverflow (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_string (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 192)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertMaxOkLabel_7205.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 194)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (var_operandType_7551, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 195)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_convertInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                            extensionMethod_convertInstructionIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_convertInstructionIR_llvmInstructionCode (defineExtensionMethod_convertInstructionIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@extendExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inConstantName,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 50)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("expression-extend.galgas", 52)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                                             extensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@extendExpressionAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 61)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("expression-extend.galgas", 63)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                                             extensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@extendExpressionAST analyzeExpression'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_extendExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  GALGAS_objectIR var_expressionResult_4213 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4213, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 85)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4213, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 98)) ;
  }
  GALGAS_omnibusType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 105)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 105)) ;
  }
  GALGAS_omnibusType var_resultType_4371 = temp_0 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_resultType_4371.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 108)).operator_not (SOURCE_FILE ("expression-extend.galgas", 108)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 109)), GALGAS_string ("this type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-extend.galgas", 109)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_type (var_expressionResult_4213, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 110)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 110)).operator_not (SOURCE_FILE ("expression-extend.galgas", 110)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-extend.galgas", 111)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      GALGAS_bool var_sourceIsUnsigned_4868 ;
      GALGAS_uint var_sourceSize_4893 ;
      GALGAS_bigint joker_4835_2 ; // Joker input parameter
      GALGAS_bigint joker_4835_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4213, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)).getter_kind (HERE).method_integer (joker_4835_2, joker_4835_1, var_sourceIsUnsigned_4868, var_sourceSize_4893, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)) ;
      GALGAS_bool var_targetIsUnsigned_4958 ;
      GALGAS_uint var_targetSize_4983 ;
      GALGAS_bigint joker_4925_2 ; // Joker input parameter
      GALGAS_bigint joker_4925_1 ; // Joker input parameter
      var_resultType_4371.getter_kind (HERE).method_integer (joker_4925_2, joker_4925_1, var_targetIsUnsigned_4958, var_targetSize_4983, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 114)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        GALGAS_bool test_7 = var_sourceIsUnsigned_4868 ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = var_targetIsUnsigned_4958 ;
        }
        test_6 = test_7.boolEnum () ;
        if (kBoolTrue == test_6) {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsStrictSup, var_sourceSize_4893.objectCompare (var_targetSize_4983)).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 117)), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray9  COMMA_SOURCE_FILE ("expression-extend.galgas", 117)) ;
            }
          }
          if (kBoolFalse == test_8) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_sourceSize_4893.objectCompare (var_targetSize_4983)).boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 119)), GALGAS_string ("same size: useless extend operation"), fixItArray11  COMMA_SOURCE_FILE ("expression-extend.galgas", 119)) ;
              }
            }
          }
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          GALGAS_bool test_13 = var_sourceIsUnsigned_4868 ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = var_targetIsUnsigned_4958.operator_not (SOURCE_FILE ("expression-extend.galgas", 121)) ;
          }
          test_12 = test_13.boolEnum () ;
          if (kBoolTrue == test_12) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsSupOrEqual, var_sourceSize_4893.objectCompare (var_targetSize_4983)).boolEnum () ;
              if (kBoolTrue == test_14) {
                TC_Array <C_FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 123)), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray15  COMMA_SOURCE_FILE ("expression-extend.galgas", 123)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_12) {
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            GALGAS_bool test_17 = var_sourceIsUnsigned_4868.operator_not (SOURCE_FILE ("expression-extend.galgas", 125)) ;
            if (kBoolTrue == test_17.boolEnum ()) {
              test_17 = var_targetIsUnsigned_4958 ;
            }
            test_16 = test_17.boolEnum () ;
            if (kBoolTrue == test_16) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 126)), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray18  COMMA_SOURCE_FILE ("expression-extend.galgas", 126)) ;
            }
          }
          if (kBoolFalse == test_16) {
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = GALGAS_bool (kIsStrictSup, var_sourceSize_4893.objectCompare (var_targetSize_4983)).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <C_FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 129)), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray20  COMMA_SOURCE_FILE ("expression-extend.galgas", 129)) ;
              }
            }
            if (kBoolFalse == test_19) {
              enumGalgasBool test_21 = kBoolTrue ;
              if (kBoolTrue == test_21) {
                test_21 = GALGAS_bool (kIsEqual, var_sourceSize_4893.objectCompare (var_targetSize_4983)).boolEnum () ;
                if (kBoolTrue == test_21) {
                  TC_Array <C_FixItDescription> fixItArray22 ;
                  inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 131)), GALGAS_string ("same size: useless extend operation"), fixItArray22  COMMA_SOURCE_FILE ("expression-extend.galgas", 131)) ;
                }
              }
            }
          }
        }
      }
      {
      routine_getNewTempValue (var_resultType_4371, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 134)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_4213, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 135)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_extendExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                          extensionMethod_extendExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_extendExpressionAST_analyzeExpression (defineExtensionMethod_extendExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@truncateExpressionAST addDependenceEdgeForStaticExpression'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                        const GALGAS_lstring constinArgument_inConstantName,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 50)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("expression-truncate.galgas", 52)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                                             extensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@truncateExpressionAST noteExpressionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 61)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("expression-truncate.galgas", 63)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                                             extensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@truncateExpressionAST analyzeExpression'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_truncateExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  GALGAS_objectIR var_expressionResult_4358 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 90)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4358, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 87)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4358, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 100)) ;
  }
  GALGAS_omnibusType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 107)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 107)) ;
  }
  GALGAS_omnibusType var_resultType_4516 = temp_0 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_resultType_4516.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 110)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 110)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 111)), GALGAS_string ("this type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-truncate.galgas", 111)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_type (var_expressionResult_4358, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 112)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 112)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-truncate.galgas", 113)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      GALGAS_bigint var_minSource_4997 ;
      GALGAS_bigint var_maxSource_5016 ;
      GALGAS_uint var_expSize_5042 ;
      GALGAS_bool joker_5018_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4358, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 115)).getter_kind (HERE).method_integer (var_minSource_4997, var_maxSource_5016, joker_5018_1, var_expSize_5042, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 115)) ;
      GALGAS_bigint var_minTarget_5091 ;
      GALGAS_bigint var_maxTarget_5110 ;
      GALGAS_uint var_resultSize_5147 ;
      GALGAS_bool joker_5121 ; // Joker input parameter
      var_resultType_4516.getter_kind (HERE).method_integer (var_minTarget_5091, var_maxTarget_5110, joker_5121, var_resultSize_5147, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 116)) ;
      GALGAS_bool test_6 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5091.objectCompare (var_minSource_4997)) ;
      if (kBoolTrue == test_6.boolEnum ()) {
        test_6 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5110.objectCompare (var_maxSource_5016)) ;
      }
      GALGAS_bool var_alwaysPossible_5171 = test_6 ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_alwaysPossible_5171.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 119)), GALGAS_string ("useless explicit conversion"), fixItArray8  COMMA_SOURCE_FILE ("expression-truncate.galgas", 119)) ;
        }
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsStrictInf, var_resultSize_5147.objectCompare (var_expSize_5042)).boolEnum () ;
        if (kBoolTrue == test_9) {
          {
          routine_getNewTempValue (var_resultType_4516, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 122)) ;
          }
          ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4358  COMMA_SOURCE_FILE ("expression-truncate.galgas", 123))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 123)) ;
        }
      }
      if (kBoolFalse == test_9) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_4358, var_resultType_4516, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 128)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_truncateExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                          extensionMethod_truncateExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_truncateExpressionAST_analyzeExpression (defineExtensionMethod_truncateExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@truncateInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_truncateInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateInstructionIR * object = (const cPtr_truncateInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_truncateInstructionIR) ;
  GALGAS_string var_operandType_6545 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 151)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (var_operandType_6545, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_truncateInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_truncateInstructionIR.mSlotID,
                                            extensionMethod_truncateInstructionIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_truncateInstructionIR_llvmInstructionCode (defineExtensionMethod_truncateInstructionIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@addressofControlRegisterAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_addressofControlRegisterAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                              const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                              GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_addressofControlRegisterAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_addressofControlRegisterAST.mSlotID,
                                                             extensionMethod_addressofControlRegisterAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_addressofControlRegisterAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_addressofControlRegisterAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@addressofControlRegisterAST noteExpressionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_addressofControlRegisterAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addressofControlRegisterAST * object = (const cPtr_addressofControlRegisterAST *) inObject ;
  macroValidSharedObject (object, cPtr_addressofControlRegisterAST) ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (object->mProperty_mControlRegisterLValue, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 44)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_addressofControlRegisterAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_addressofControlRegisterAST.mSlotID,
                                                             extensionMethod_addressofControlRegisterAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_addressofControlRegisterAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_addressofControlRegisterAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@addressofControlRegisterAST analyzeExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_addressofControlRegisterAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_addressofControlRegisterAST * object = (const cPtr_addressofControlRegisterAST *) inObject ;
  macroValidSharedObject (object, cPtr_addressofControlRegisterAST) ;
  GALGAS_string var_llvmRegisterAddressName_3899 ;
  GALGAS_omnibusType joker_3801 ; // Joker input parameter
  GALGAS_uint joker_3825 ; // Joker input parameter
  GALGAS_sliceMap joker_3841 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (object->mProperty_mControlRegisterLValue, GALGAS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, joker_3801, joker_3825, joker_3841, var_llvmRegisterAddressName_3899, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 64)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultTypeProxy_3954 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint").add_operation (constinArgument_inContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE).getter_string (SOURCE_FILE ("expression-addressof-control-register.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 83)).getter_nowhere (SOURCE_FILE ("expression-addressof-control-register.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 81)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_llvmValue (var_resultTypeProxy_3954.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 85)), var_llvmRegisterAddressName_3899  COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 85)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_addressofControlRegisterAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_addressofControlRegisterAST.mSlotID,
                                          extensionMethod_addressofControlRegisterAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_addressofControlRegisterAST_analyzeExpression (defineExtensionMethod_addressofControlRegisterAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@addressofExpressionAST addDependenceEdgeForStaticExpression'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_addressofExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                         const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                         GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_addressofExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_addressofExpressionAST.mSlotID,
                                                             extensionMethod_addressofExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_addressofExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_addressofExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@addressofExpressionAST noteExpressionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_addressofExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addressofExpressionAST * object = (const cPtr_addressofExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addressofExpressionAST) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mLValue, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 46)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_addressofExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_addressofExpressionAST.mSlotID,
                                                             extensionMethod_addressofExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_addressofExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_addressofExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@addressofExpressionAST analyzeExpression'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_addressofExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_addressofExpressionAST * object = (const cPtr_addressofExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addressofExpressionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-addressof-regular-var.galgas", 66)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mLValue.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("expression-addressof-regular-var.galgas", 67)), GALGAS_string ("addressof () cannot be used in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 67)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_LValueRepresentation var_lvalueIR_3868 ;
    extensionMethod_analyzeLValue (object->mProperty_mLValue, constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_3868, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 70)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_resultTypeProxy_3898 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint").add_operation (constinArgument_inContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE).getter_string (SOURCE_FILE ("expression-addressof-regular-var.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 85)).getter_nowhere (SOURCE_FILE ("expression-addressof-regular-var.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 83)) ;
    GALGAS_omnibusType var_resultType_4061 = var_resultTypeProxy_3898.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 87)) ;
    {
    routine_getNewTempValue (var_resultType_4061, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 88)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_addressofInstructionIR::constructor_new (outArgument_outResult, var_lvalueIR_3868  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 89))  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 89)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_addressofExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_addressofExpressionAST.mSlotID,
                                          extensionMethod_addressofExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_addressofExpressionAST_analyzeExpression (defineExtensionMethod_addressofExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@addressofInstructionIR llvmInstructionCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_addressofInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                        const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                        GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addressofInstructionIR * object = (const cPtr_addressofInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_addressofInstructionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)).add_operation (GALGAS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mLValue.getter_type (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)).add_operation (object->mProperty_mLValue.getter_llvmName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 113)).add_operation (GALGAS_string (" ; addressof\n"), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_addressofInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_addressofInstructionIR.mSlotID,
                                            extensionMethod_addressofInstructionIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_addressofInstructionIR_llvmInstructionCode (defineExtensionMethod_addressofInstructionIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@sizeofExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_sizeofExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                      const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                      GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_sizeofExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_sizeofExpressionAST.mSlotID,
                                                             extensionMethod_sizeofExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_sizeofExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_sizeofExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@sizeofTypeAST addDependenceEdgeForStaticExpression'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_sizeofTypeAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_sizeofTypeAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_sizeofTypeAST.mSlotID,
                                                             extensionMethod_sizeofTypeAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_sizeofTypeAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_sizeofTypeAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@sizeofExpressionAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_sizeofExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                      GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_sizeofExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_sizeofExpressionAST.mSlotID,
                                                             extensionMethod_sizeofExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_sizeofExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_sizeofExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@sizeofTypeAST noteExpressionTypesInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_sizeofTypeAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sizeofTypeAST * object = (const cPtr_sizeofTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_sizeofTypeAST) ;
  {
  ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("expression-sizeof.galgas", 75)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_sizeofTypeAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_sizeofTypeAST.mSlotID,
                                                             extensionMethod_sizeofTypeAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_sizeofTypeAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_sizeofTypeAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@sizeofExpressionAST analyzeExpression'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_sizeofExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                   const GALGAS_omnibusType constinArgument_inSelfType,
                                                                   const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                   const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_mode /* constinArgument_inMode */,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sizeofExpressionAST * object = (const cPtr_sizeofExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_sizeofExpressionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-sizeof.galgas", 97)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mLValue.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("expression-sizeof.galgas", 98)), GALGAS_string ("sizeof () cannot be used in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 98)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_omnibusType var_type_4669 ;
    extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inSelfType, object->mProperty_mLValue, var_type_4669, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 101)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_resultTypeProxy_4694 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint").add_operation (constinArgument_inContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE).getter_string (SOURCE_FILE ("expression-sizeof.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 104)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 102)) ;
    GALGAS_omnibusType var_resultType_4848 = var_resultTypeProxy_4694.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 106)) ;
    {
    routine_getNewTempValue (var_resultType_4848, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 107)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_sizeofInstructionIR::constructor_new (outArgument_outResult, var_type_4669  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 108))  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 108)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_sizeofExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_sizeofExpressionAST.mSlotID,
                                          extensionMethod_sizeofExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_sizeofExpressionAST_analyzeExpression (defineExtensionMethod_sizeofExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Overriding extension method '@sizeofTypeAST analyzeExpression'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_sizeofTypeAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                             const GALGAS_omnibusType /* constinArgument_inSelfType */,
                                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                             const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                             const GALGAS_mode /* constinArgument_inMode */,
                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                             GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                             GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             GALGAS_objectIR & outArgument_outResult,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sizeofTypeAST * object = (const cPtr_sizeofTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_sizeofTypeAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-sizeof.galgas", 132)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-sizeof.galgas", 133)), GALGAS_string ("sizeof () cannot be used in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 133)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_omnibusType var_type_6053 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 135)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 135)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_resultTypeProxy_6151 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint").add_operation (constinArgument_inContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE).getter_string (SOURCE_FILE ("expression-sizeof.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 138)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 136)) ;
    GALGAS_omnibusType var_resultType_6305 = var_resultTypeProxy_6151.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 140)) ;
    {
    routine_getNewTempValue (var_resultType_6305, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 141)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_sizeofInstructionIR::constructor_new (outArgument_outResult, var_type_6053  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 142))  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 142)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_sizeofTypeAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_sizeofTypeAST.mSlotID,
                                          extensionMethod_sizeofTypeAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_sizeofTypeAST_analyzeExpression (defineExtensionMethod_sizeofTypeAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@sizeofInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_sizeofInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sizeofInstructionIR * object = (const cPtr_sizeofInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_sizeofInstructionIR) ;
  GALGAS_string var_typeName_7408 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mSourceType.ptr (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 165)).add_operation (GALGAS_string (".asPtr = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 165)).add_operation (var_typeName_7408, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 165)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 165)).add_operation (var_typeName_7408, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 165)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 165)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 166)).add_operation (GALGAS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 166)).add_operation (var_typeName_7408, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 166)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 166)).add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 166)).add_operation (GALGAS_string (".asPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 166)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_sizeofInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_sizeofInstructionIR.mSlotID,
                                            extensionMethod_sizeofInstructionIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_sizeofInstructionIR_llvmInstructionCode (defineExtensionMethod_sizeofInstructionIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@typedConstantCallAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typedConstantCallAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inConstantName,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCallAST * object = (const cPtr_typedConstantCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCallAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mOptionalTypeName COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 46)) ;
      }
    }
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_2251 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_2251.hasCurrentObject ()) {
    switch (enumerator_2251.current_mAccess (HERE).enumValue ()) {
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
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_2471 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_2251.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_2471->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 53)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_2985 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_2251.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_2985->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_2559 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_2559.hasCurrentObject ()) {
          switch (enumerator_2559.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_2775 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2559.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_2775->mAssociatedValue1 ;
              enumGalgasBool test_1 = kBoolTrue ;
              if (kBoolTrue == test_1) {
                test_1 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_1) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 60)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_2888 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2559.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_2888->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 62)) ;
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
          enumerator_2559.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_2251.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typedConstantCallAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_typedConstantCallAST.mSlotID,
                                                             extensionMethod_typedConstantCallAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typedConstantCallAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_typedConstantCallAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@typedConstantCallAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typedConstantCallAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCallAST * object = (const cPtr_typedConstantCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCallAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGraph.setter_noteNode (object->mProperty_mOptionalTypeName COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 77)) ;
      }
    }
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_3603 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_3603.hasCurrentObject ()) {
    switch (enumerator_3603.current_mAccess (HERE).enumValue ()) {
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
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_3807 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_3603.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_3807->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 84)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_4305 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_3603.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_4305->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_3895 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_3895.hasCurrentObject ()) {
          switch (enumerator_3895.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4111 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3895.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_4111->mAssociatedValue1 ;
              enumGalgasBool test_1 = kBoolTrue ;
              if (kBoolTrue == test_1) {
                test_1 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_1) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 91)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4208 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3895.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_4208->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 93)) ;
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
          enumerator_3895.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_3603.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typedConstantCallAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_typedConstantCallAST.mSlotID,
                                                             extensionMethod_typedConstantCallAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typedConstantCallAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_typedConstantCallAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@typedConstantCallAST analyzeExpression'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typedConstantCallAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_typedConstantCallAST * object = (const cPtr_typedConstantCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCallAST) ;
  GALGAS_omnibusType var_inferredResultType_5344 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_inferredResultType_5344 = constinArgument_inOptionalTargetType ;
    }
  }
  if (kBoolFalse == test_0) {
    var_inferredResultType_5344 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 124)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 124)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_inferredResultType_5344.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-typed-constant.galgas", 126)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("expression-typed-constant.galgas", 127)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 127)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_lstring var_typeName_5677 = GALGAS_lstring::constructor_new (var_inferredResultType_5344.getter_omnibusTypeDescriptionName (HERE), object->mProperty_mConstructorName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 129)) ;
    GALGAS_constantMap var_classConstantMap_5842 ;
    constinArgument_inContext.getter_mTypeConstantMap (HERE).method_searchKey (var_typeName_5677, var_classConstantMap_5842, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 130)) ;
    GALGAS_bigint var_value_5976 ;
    GALGAS_lstring var_classTypeName_5995 ;
    var_classConstantMap_5842.method_searchKey (object->mProperty_mConstructorName, var_value_5976, var_classTypeName_5995, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 132)) ;
    GALGAS_omnibusType var_resultType_6015 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_classTypeName_5995, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 133)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 133)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_6015, var_value_5976  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 134)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsStrictSup, object->mProperty_mAccessList.getter_length (SOURCE_FILE ("expression-typed-constant.galgas", 137)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_objectIR var_newTemporaryReference_6452 ;
      {
      routine_getNewTempReference (extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 140)), ioArgument_ioTemporaries, var_newTemporaryReference_6452, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 140)) ;
      }
      ioArgument_ioAllocaList.addAssign_operation (extensionGetter_llvmName (var_newTemporaryReference_6452, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), extensionGetter_type (var_newTemporaryReference_6452, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_newTemporaryReference_6452, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 145)), extensionGetter_llvmName (var_newTemporaryReference_6452, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 146)), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 144)) ;
      }
      outArgument_outResult = var_newTemporaryReference_6452 ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 151)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typedConstantCallAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_typedConstantCallAST.mSlotID,
                                          extensionMethod_typedConstantCallAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typedConstantCallAST_analyzeExpression (defineExtensionMethod_typedConstantCallAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@ifExpressionAST addDependenceEdgeForStaticExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inConstantName,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 67)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 68)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 69)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                             extensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_ifExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@ifExpressionAST noteExpressionTypesInPrecedenceGraph'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 77)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 78)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 79)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                             extensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension method '@ifExpressionAST analyzeExpression'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_ifExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_objectIR var_ifExpressionResult_5119 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResult_5119, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 100)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_ifExpressionResult_5119, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 113)) ;
  }
  GALGAS_implicitBooleanConversionResult var_ifExpressionConvertedToBoolean_5513 ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.getter_mImplicitConversionToBooleanMap (HERE), var_ifExpressionResult_5119, object->mProperty_mIfExpressionEndLocation, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, var_ifExpressionConvertedToBoolean_5513, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 115)) ;
  GALGAS_objectIR var_thenExpressionTempResult_6102 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionTempResult_6102, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 128)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_thenExpressionTempResult_6102, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 141)) ;
  }
  GALGAS_objectIR var_thenExpressionResult_6247 = function_checkAssignmentCompatibility (constinArgument_inContext.getter_mAssignmentOperatorMap (HERE), var_thenExpressionTempResult_6102, constinArgument_inOptionalTargetType, object->mProperty_mThenExpressionEndLocation, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)) ;
  GALGAS_objectIR var_elseExpressionTempResult_6925 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionTempResult_6925, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 153)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_elseExpressionTempResult_6925, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 166)) ;
  }
  GALGAS_objectIR var_elseExpressionResult_7070 = function_checkAssignmentCompatibility (constinArgument_inContext.getter_mAssignmentOperatorMap (HERE), var_elseExpressionTempResult_6925, extensionGetter_type (var_thenExpressionResult_6247, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 173)), object->mProperty_mElseExpressionEndLocation, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 170)) ;
  switch (var_ifExpressionConvertedToBoolean_5513.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * extractPtr_7501 = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) (var_ifExpressionConvertedToBoolean_5513.unsafePointer ()) ;
      const GALGAS_bool extractedValue_boolValue = extractPtr_7501->mAssociatedValue0 ;
      GALGAS_objectIR temp_0 ;
      const enumGalgasBool test_1 = extractedValue_boolValue.boolEnum () ;
      if (kBoolTrue == test_1) {
        temp_0 = var_thenExpressionResult_6247 ;
      }else if (kBoolFalse == test_1) {
        temp_0 = var_elseExpressionResult_7070 ;
      }
      outArgument_outResult = temp_0 ;
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
      const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable * extractPtr_7792 = (const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable *) (var_ifExpressionConvertedToBoolean_5513.unsafePointer ()) ;
      const GALGAS_string extractedValue_testResultVariableName = extractPtr_7792->mAssociatedValue0 ;
      {
      routine_getNewTempValue (extensionGetter_type (var_elseExpressionResult_7070, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 182)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 182)) ;
      }
      {
      extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extractedValue_testResultVariableName, var_thenExpressionResult_6247, var_elseExpressionResult_7070, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 183)) ;
      }
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_ifExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                          extensionMethod_ifExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_ifExpressionAST_analyzeExpression (defineExtensionMethod_ifExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//   Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST addDependenceEdgeForStaticExpression'   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                              const GALGAS_lstring constinArgument_inConstantName,
                                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 19)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 20)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                                             extensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//   Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 28)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 29)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                                             extensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST analyzeExpression'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  GALGAS_instructionListIR var_leftInstructionGenerationList_2933 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 50)) ;
  GALGAS_objectIR var_leftOperand_3341 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_2933, var_leftOperand_3341, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 51)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_3341, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 64)) ;
  }
  GALGAS_implicitBooleanConversionResult var_leftBooleanOperand_3671 ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.getter_mImplicitConversionToBooleanMap (HERE), var_leftOperand_3341, object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, var_leftInstructionGenerationList_2933, ioArgument_ioAllocaList, var_leftBooleanOperand_3671, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 68)) ;
  GALGAS_instructionListIR var_rightInstructionGenerationList_3757 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 77)) ;
  GALGAS_objectIR var_rightOperand_4170 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (var_leftOperand_3341, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 81)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_3757, var_rightOperand_4170, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 78)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_4170, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 91)) ;
  }
  GALGAS_implicitBooleanConversionResult var_rightBooleanOperand_4504 ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.getter_mImplicitConversionToBooleanMap (HERE), var_rightOperand_4170, object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, var_rightInstructionGenerationList_3757, ioArgument_ioAllocaList, var_rightBooleanOperand_4504, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 95)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = var_leftBooleanOperand_3671.getter_isCompileTime (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = var_rightBooleanOperand_4504.getter_isCompileTime (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bool var_leftStaticValue_4705 ;
      var_leftBooleanOperand_3671.method_compileTime (var_leftStaticValue_4705, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 105)) ;
      GALGAS_bool var_rightStaticValue_4777 ;
      var_rightBooleanOperand_4504.method_compileTime (var_rightStaticValue_4777, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 106)) ;
      outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (extensionGetter_type (var_leftOperand_3341, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)), var_leftStaticValue_4705.operator_and (var_rightStaticValue_4777 COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)).getter_bigint (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107))  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    routine_getNewTempValue (extensionGetter_booleanType (constinArgument_inContext, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 110)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 110)) ;
    }
    {
    extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_llvmName (var_leftBooleanOperand_3671, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 114)), var_leftInstructionGenerationList_2933, extensionGetter_llvmName (var_rightBooleanOperand_4504, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 116)), var_rightInstructionGenerationList_3757, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 112)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                          extensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@integerSliceExpressionAST addDependenceEdgeForStaticExpression'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerSliceExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                            const GALGAS_lstring constinArgument_inConstantName,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerSliceExpressionAST * object = (const cPtr_integerSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerSliceExpressionAST) ;
  cEnumerator_integerSliceFieldListAST enumerator_2550 (object->mProperty_mSliceValues, kENUMERATION_UP) ;
  while (enumerator_2550.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) enumerator_2550.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 58)) ;
    enumerator_2550.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerSliceExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_integerSliceExpressionAST.mSlotID,
                                                             extensionMethod_integerSliceExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerSliceExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_integerSliceExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@integerSliceExpressionAST noteExpressionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerSliceExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerSliceExpressionAST * object = (const cPtr_integerSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerSliceExpressionAST) ;
  {
  ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 69)) ;
  }
  cEnumerator_integerSliceFieldListAST enumerator_3231 (object->mProperty_mSliceValues, kENUMERATION_UP) ;
  while (enumerator_3231.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_3231.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 71)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_3231.current_mSliceWidth (HERE).getter_string (HERE).getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 72)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_uint var_sliceWidth_3378 = enumerator_3231.current_mSliceWidth (HERE).getter_string (HERE).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 73)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsEqual, var_sliceWidth_3378.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_3231.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 75)), GALGAS_string ("the bit slice width should be > 0"), fixItArray2  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 75)) ;
          }
        }
        if (kBoolFalse == test_1) {
          {
          extensionSetter_noteUINTType (ioArgument_ioGraph, var_sliceWidth_3378, enumerator_3231.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 77)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, enumerator_3231.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string ("b"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          ioArgument_ioGraph.setter_noteNode (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 80)).getter_nowhere (SOURCE_FILE ("expression-integer-slice.galgas", 80)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 80)) ;
          }
        }
      }
    }
    enumerator_3231.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerSliceExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_integerSliceExpressionAST.mSlotID,
                                                             extensionMethod_integerSliceExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerSliceExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_integerSliceExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@integerSliceExpressionAST analyzeExpression'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerSliceExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_integerSliceExpressionAST * object = (const cPtr_integerSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerSliceExpressionAST) ;
  GALGAS_omnibusType var_resultType_4711 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 103)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 103)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_resultType_4711.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-integer-slice.galgas", 105)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 105)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 106)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 106)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bool var_unsigned_5013 ;
    GALGAS_uint var_bitCount_5036 ;
    GALGAS_bigint joker_4988_2 ; // Joker input parameter
    GALGAS_bigint joker_4988_1 ; // Joker input parameter
    var_resultType_4711.getter_kind (HERE).method_integer (joker_4988_2, joker_4988_1, var_unsigned_5013, var_bitCount_5036, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 108)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unsigned_5013.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 109)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 110)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 110)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      GALGAS_uint var_leftShiftAmount_5254 = var_bitCount_5036 ;
      GALGAS_bigint var_accumulatedFieldStaticValues_5308 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 114)) ;
      GALGAS_operandIRList var_operandList_5346 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-integer-slice.galgas", 115)) ;
      cEnumerator_integerSliceFieldListAST enumerator_5423 (object->mProperty_mSliceValues, kENUMERATION_UP) ;
      while (enumerator_5423.hasCurrentObject ()) {
        GALGAS_uint var_sliceWidth_5451 ;
        GALGAS_lstring var_expressionTypeName_5487 ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, enumerator_5423.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_5423.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 120)), GALGAS_string ("anonymous selector not allowed here"), fixItArray5  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 120)) ;
            var_operandList_5346.drop () ; // Release error dropped variable
            var_sliceWidth_5451.drop () ; // Release error dropped variable
            var_expressionTypeName_5487.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, enumerator_5423.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string ("b"))).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_sliceWidth_5451 = GALGAS_uint ((uint32_t) 1U) ;
              var_expressionTypeName_5487 = GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 123)), object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 123)) ;
            }
          }
          if (kBoolFalse == test_6) {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = enumerator_5423.current_mSliceWidth (HERE).getter_string (HERE).getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 124)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 124)).boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <C_FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (enumerator_5423.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 125)), GALGAS_string ("the selector should be an unsigned integer value"), fixItArray8  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 125)) ;
                var_operandList_5346.drop () ; // Release error dropped variable
                var_sliceWidth_5451.drop () ; // Release error dropped variable
                var_expressionTypeName_5487.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_7) {
              var_sliceWidth_5451 = enumerator_5423.current_mSliceWidth (HERE).getter_string (HERE).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 127)) ;
              var_expressionTypeName_5487 = GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_sliceWidth_5451.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 128)), object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 128)) ;
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = GALGAS_bool (kIsEqual, var_sliceWidth_5451.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_9) {
                  TC_Array <C_FixItDescription> fixItArray10 ;
                  inCompiler->emitSemanticError (enumerator_5423.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 130)), GALGAS_string ("the bit slice width should be > 0"), fixItArray10  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 130)) ;
                }
              }
            }
          }
        }
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = GALGAS_bool (kIsSupOrEqual, var_leftShiftAmount_5254.objectCompare (var_sliceWidth_5451)).boolEnum () ;
          if (kBoolTrue == test_11) {
            var_leftShiftAmount_5254 = var_leftShiftAmount_5254.substract_operation (var_sliceWidth_5451, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 134)) ;
          }
        }
        if (kBoolFalse == test_11) {
          GALGAS_uint var_specifiedBitCount_6423 = var_bitCount_5036.add_operation (var_sliceWidth_5451, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 136)).substract_operation (var_leftShiftAmount_5254, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 136)) ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_5423.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 137)), GALGAS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_6423.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)).add_operation (GALGAS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)).add_operation (var_bitCount_5036.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)), fixItArray12  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)) ;
          var_leftShiftAmount_5254 = GALGAS_uint ((uint32_t) 0U) ;
        }
        GALGAS_omnibusType var_expressionTargetType_6678 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_expressionTypeName_5487, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 141)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 141)) ;
        GALGAS_objectIR var_expressionResult_7234 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_5423.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_expressionTargetType_6678, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7234, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 142)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_7234, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 155)) ;
        }
        switch (extensionGetter_type (var_expressionResult_7234, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).getter_kind (HERE).enumValue ()) {
        case GALGAS_typeKind::kNotBuilt:
          break ;
        case GALGAS_typeKind::kEnum_staticArrayType:
          {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 162)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_dynamicArrayType:
          {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray14  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 164)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_opaque:
          {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray15  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 166)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_enumeration:
          {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray16  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 168)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_structure:
          {
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray17  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 170)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_syncTool:
          {
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray18  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 172)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_boolean:
          {
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_expressionResult_7234, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 174)).getter_omnibusTypeDescriptionName (SOURCE_FILE ("expression-integer-slice.galgas", 174)).objectCompare (var_expressionTargetType_6678.getter_omnibusTypeDescriptionName (SOURCE_FILE ("expression-integer-slice.galgas", 174)))).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <C_FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("an $").add_operation (var_expressionTargetType_6678.getter_omnibusTypeDescriptionName (SOURCE_FILE ("expression-integer-slice.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (GALGAS_string (" expression is required, found an $"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (extensionGetter_type (var_expressionResult_7234, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 177)).getter_omnibusTypeDescriptionName (SOURCE_FILE ("expression-integer-slice.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (GALGAS_string (" expression"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 177)), fixItArray20  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 175)) ;
              }
            }
            enumGalgasBool test_21 = kBoolTrue ;
            if (kBoolTrue == test_21) {
              test_21 = var_expressionResult_7234.getter_isLiteralInteger (SOURCE_FILE ("expression-integer-slice.galgas", 179)).boolEnum () ;
              if (kBoolTrue == test_21) {
                GALGAS_bigint var_value_8672 ;
                GALGAS_omnibusType joker_8645_1 ; // Joker input parameter
                var_expressionResult_7234.method_literalInteger (joker_8645_1, var_value_8672, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 180)) ;
                var_accumulatedFieldStaticValues_5308 = var_accumulatedFieldStaticValues_5308.operator_or (var_value_8672.left_shift_operation (var_leftShiftAmount_5254, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 181)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 181)) ;
              }
            }
            if (kBoolFalse == test_21) {
              GALGAS_objectIR var_extendedResult_8931 ;
              {
              routine_getNewTempValue (var_resultType_4711, ioArgument_ioTemporaries, var_extendedResult_8931, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 184)) ;
              }
              {
              extensionSetter_appendBoolToUInt (ioArgument_ioInstructionGenerationList, var_extendedResult_8931, var_expressionResult_7234, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 185)) ;
              }
              GALGAS_objectIR var_shiftedResult_9137 ;
              {
              routine_getNewTempValue (var_resultType_4711, ioArgument_ioTemporaries, var_shiftedResult_9137, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 187)) ;
              }
              {
              extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_9137, var_extendedResult_8931, var_leftShiftAmount_5254, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 188)) ;
              }
              var_operandList_5346.addAssign_operation (var_shiftedResult_9137  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 190)) ;
            }
          }
          break ;
        case GALGAS_typeKind::kEnum_void:
          {
            TC_Array <C_FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 193)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_literalString:
          {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 195)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_function:
          {
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 197)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_generic:
          {
            TC_Array <C_FixItDescription> fixItArray25 ;
            inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray25  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 199)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_llvmType:
          {
            TC_Array <C_FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray26  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 201)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_compileTimeBool:
          {
            TC_Array <C_FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray27  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 203)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_compileTimeInteger:
          {
            GALGAS_bigint var_value_10117 ;
            GALGAS_omnibusType joker_10090_1 ; // Joker input parameter
            var_expressionResult_7234.method_literalInteger (joker_10090_1, var_value_10117, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 205)) ;
            enumGalgasBool test_28 = kBoolTrue ;
            if (kBoolTrue == test_28) {
              test_28 = GALGAS_bool (kIsStrictInf, var_value_10117.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 206)))).boolEnum () ;
              if (kBoolTrue == test_28) {
                TC_Array <C_FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray29  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 207)) ;
              }
            }
            if (kBoolFalse == test_28) {
              enumGalgasBool test_30 = kBoolTrue ;
              if (kBoolTrue == test_30) {
                test_30 = GALGAS_bool (kIsStrictInf, var_value_10117.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 208)).left_shift_operation (var_sliceWidth_5451, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 208)))).boolEnum () ;
                if (kBoolTrue == test_30) {
                  var_accumulatedFieldStaticValues_5308 = var_accumulatedFieldStaticValues_5308.operator_or (var_value_10117.left_shift_operation (var_leftShiftAmount_5254, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)) ;
                }
              }
              if (kBoolFalse == test_30) {
                TC_Array <C_FixItDescription> fixItArray31 ;
                inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).left_shift_operation (var_sliceWidth_5451, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)), fixItArray31  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)) ;
              }
            }
          }
          break ;
        case GALGAS_typeKind::kEnum_integer:
          {
            const cEnumAssociatedValues_typeKind_integer * extractPtr_11427 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_type (var_expressionResult_7234, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).getter_kind (HERE).unsafePointer ()) ;
            const GALGAS_bigint extractedValue_min = extractPtr_11427->mAssociatedValue0 ;
            const GALGAS_bigint extractedValue_max = extractPtr_11427->mAssociatedValue1 ;
            const GALGAS_bool extractedValue_unsigned = extractPtr_11427->mAssociatedValue2 ;
            const GALGAS_uint extractedValue_expressionBitCount = extractPtr_11427->mAssociatedValue3 ;
            enumGalgasBool test_32 = kBoolTrue ;
            if (kBoolTrue == test_32) {
              test_32 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 214)).boolEnum () ;
              if (kBoolTrue == test_32) {
                TC_Array <C_FixItDescription> fixItArray33 ;
                inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("an $uint").add_operation (var_sliceWidth_5451.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)).add_operation (GALGAS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)), fixItArray33  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)) ;
              }
            }
            if (kBoolFalse == test_32) {
              enumGalgasBool test_34 = kBoolTrue ;
              if (kBoolTrue == test_34) {
                test_34 = GALGAS_bool (kIsNotEqual, extractedValue_expressionBitCount.objectCompare (var_sliceWidth_5451)).boolEnum () ;
                if (kBoolTrue == test_34) {
                  TC_Array <C_FixItDescription> fixItArray35 ;
                  inCompiler->emitSemanticError (enumerator_5423.current_mExpressionLocation (HERE), GALGAS_string ("an $uint").add_operation (var_sliceWidth_5451.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)).add_operation (GALGAS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)), fixItArray35  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)) ;
                }
              }
              if (kBoolFalse == test_34) {
                GALGAS_objectIR var_extendedResult_11032 ;
                {
                routine_getNewTempValue (var_resultType_4711, ioArgument_ioTemporaries, var_extendedResult_11032, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 220)) ;
                }
                {
                extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_11032, var_expressionResult_7234, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 221)) ;
                }
                GALGAS_objectIR var_shiftedResult_11234 ;
                {
                routine_getNewTempValue (var_resultType_4711, ioArgument_ioTemporaries, var_shiftedResult_11234, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 223)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_11234, var_extendedResult_11032, var_leftShiftAmount_5254, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 224)) ;
                }
                var_operandList_5346.addAssign_operation (var_shiftedResult_11234  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 226)) ;
              }
            }
          }
          break ;
        }
        enumerator_5423.gotoNextObject () ;
      }
      enumGalgasBool test_36 = kBoolTrue ;
      if (kBoolTrue == test_36) {
        test_36 = GALGAS_bool (kIsNotEqual, var_leftShiftAmount_5254.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_36) {
          TC_Array <C_FixItDescription> fixItArray37 ;
          inCompiler->emitSemanticError (object->mProperty_mLocation, var_bitCount_5036.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (GALGAS_string (" bits required, "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (var_bitCount_5036.substract_operation (var_leftShiftAmount_5254, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (GALGAS_string (" bits defined"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)), fixItArray37  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)) ;
        }
      }
      outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_4711, var_accumulatedFieldStaticValues_5308  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 234)) ;
      cEnumerator_operandIRList enumerator_11799 (var_operandList_5346, kENUMERATION_UP) ;
      while (enumerator_11799.hasCurrentObject ()) {
        GALGAS_objectIR var_newResult_11870 ;
        {
        routine_getNewTempValue (var_resultType_4711, ioArgument_ioTemporaries, var_newResult_11870, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 236)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_11870, extensionGetter_type (var_newResult_11870, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 239)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 240)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-integer-slice.galgas", 242)), enumerator_11799.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 237)) ;
        }
        outArgument_outResult = var_newResult_11870 ;
        enumerator_11799.gotoNextObject () ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerSliceExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_integerSliceExpressionAST.mSlotID,
                                          extensionMethod_integerSliceExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerSliceExpressionAST_analyzeExpression (defineExtensionMethod_integerSliceExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@literalIntegerInExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring constinArgument_inConstantName,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                                             extensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@literalIntegerInExpressionAST noteExpressionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                                             extensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@literalIntegerInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalIntegerInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                             const GALGAS_omnibusType /* constinArgument_inSelfType */,
                                                                             const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                             const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                             const GALGAS_mode /* constinArgument_inMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                             GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                             GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 62)), object->mProperty_mLiteralInteger.getter_bigint (HERE)  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 62)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalIntegerInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                          extensionMethod_literalIntegerInExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_analyzeExpression (defineExtensionMethod_literalIntegerInExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@literalStringInExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                               const GALGAS_lstring constinArgument_inConstantName,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GALGAS_lstring::constructor_new (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), constinArgument_inConstantName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                                             extensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@literalStringInExpressionAST noteExpressionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                                             extensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@literalStringInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalStringInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                            const GALGAS_omnibusType /* constinArgument_inSelfType */,
                                                                            const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                            const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                            const GALGAS_mode /* constinArgument_inMode */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                            GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                            GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                            GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_uint var_staticStringIndex_3562 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioStaticEntityMap, object->mProperty_mLiteralString.getter_string (HERE), var_staticStringIndex_3562, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 62)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalString (object->mProperty_mLiteralString.getter_string (HERE).getter_utf_38_Length (SOURCE_FILE ("expression-literal-string.galgas", 63)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)), var_staticStringIndex_3562  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalStringInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                          extensionMethod_literalStringInExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_analyzeExpression (defineExtensionMethod_literalStringInExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@literalBooleanInExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring constinArgument_inConstantName,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 41)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                                             extensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@literalBooleanInExpressionAST noteExpressionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                                             extensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@literalBooleanInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalBooleanInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                             const GALGAS_omnibusType /* constinArgument_inSelfType */,
                                                                             const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                             const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                             const GALGAS_mode /* constinArgument_inMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                             GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                             GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBooleanInExpressionAST * object = (const cPtr_literalBooleanInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBooleanInExpressionAST) ;
  GALGAS_bigint temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mValue.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)), temp_0  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalBooleanInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                          extensionMethod_literalBooleanInExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_analyzeExpression (defineExtensionMethod_literalBooleanInExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@registerInExpressionAST addDependenceEdgeForStaticExpression'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_registerInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inConstantName,
                                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerInExpressionAST * object = (const cPtr_registerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerInExpressionAST) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mControlRegisterLValue.getter_mRegisterGroupName (HERE) COMMA_SOURCE_FILE ("expression-control-register.galgas", 44)) ;
  }
  extensionMethod_addDependenceEdgeForStaticExpression (object->mProperty_mControlRegisterLValue, constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 45)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_registerInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_registerInExpressionAST.mSlotID,
                                                             extensionMethod_registerInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_registerInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_registerInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@registerInExpressionAST noteExpressionTypesInPrecedenceGraph'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_registerInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerInExpressionAST * object = (const cPtr_registerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerInExpressionAST) ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (object->mProperty_mControlRegisterLValue, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 53)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_registerInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_registerInExpressionAST.mSlotID,
                                                             extensionMethod_registerInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_registerInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_registerInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@registerInExpressionAST analyzeExpression'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_registerInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_registerInExpressionAST * object = (const cPtr_registerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerInExpressionAST) ;
  GALGAS_omnibusType var_registerType_4138 ;
  GALGAS_sliceMap var_sliceMap_4189 ;
  GALGAS_string var_llvmRegisterAddressName_4246 ;
  GALGAS_uint joker_4161 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (object->mProperty_mControlRegisterLValue, GALGAS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_registerType_4138, joker_4161, var_sliceMap_4189, var_llvmRegisterAddressName_4246, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 73)) ;
  {
  routine_getNewTempValue (var_registerType_4138, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-control-register.galgas", 90)) ;
  }
  {
  extensionSetter_appendLoadIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_llvmRegisterAddressName_4246, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 91)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mFieldName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_llvmBinaryOperation var_accessOperator_4610 ;
      GALGAS_bigint var_accessRightOperand_4648 ;
      GALGAS_omnibusType var_resultType_4683 ;
      var_sliceMap_4189.method_searchKey (object->mProperty_mFieldName, var_accessOperator_4610, var_accessRightOperand_4648, var_resultType_4683, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 94)) ;
      GALGAS_objectIR var_resultIR_4752 ;
      {
      routine_getNewTempValue (var_resultType_4683, ioArgument_ioTemporaries, var_resultIR_4752, inCompiler  COMMA_SOURCE_FILE ("expression-control-register.galgas", 100)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultIR_4752, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 103)), object->mProperty_mFieldName.getter_location (HERE), outArgument_outResult, var_accessOperator_4610, GALGAS_objectIR::constructor_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 107)), var_accessRightOperand_4648  COMMA_SOURCE_FILE ("expression-control-register.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 101)) ;
      }
      outArgument_outResult = var_resultIR_4752 ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_registerInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_registerInExpressionAST.mSlotID,
                                          extensionMethod_registerInExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_registerInExpressionAST_analyzeExpression (defineExtensionMethod_registerInExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@registerConstantExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                                             extensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@registerConstantExpressionAST noteExpressionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantExpressionAST * object = (const cPtr_registerConstantExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantExpressionAST) ;
  cEnumerator_registerIntegerFieldListAST enumerator_2988 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_2988.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_2988.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 65)) ;
    enumerator_2988.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                                             extensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@registerConstantExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_registerConstantExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_registerConstantExpressionAST * object = (const cPtr_registerConstantExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantExpressionAST) ;
  GALGAS_controlRegisterMap var_controlRegisterMap_4224 ;
  GALGAS_registerGroupKind joker_4195 ; // Joker input parameter
  constinArgument_inContext.getter_mControlRegisterGroupMap (HERE).method_searchKey (object->mProperty_mRegisterGroupName, joker_4195, var_controlRegisterMap_4224, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 87)) ;
  GALGAS_omnibusType var_registerType_4381 ;
  GALGAS_sliceMap var_registerBitSliceMap_4435 ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_4486 ;
  GALGAS_uint var_registerBitCount_4520 ;
  GALGAS_uint var_powerOfTwoForArraySize_4559 ;
  GALGAS_uint var_elementArraySize_4592 ;
  GALGAS_bool joker_4387_2 ; // Joker input parameter
  GALGAS_bool joker_4387_1 ; // Joker input parameter
  GALGAS_bigint joker_4492_2 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_4492_1 ; // Joker input parameter
  var_controlRegisterMap_4224.method_searchKey (object->mProperty_mRegisterName, var_registerType_4381, joker_4387_2, joker_4387_1, var_registerBitSliceMap_4435, var_registerFieldMap_4486, joker_4492_2, joker_4492_1, var_registerBitCount_4520, var_powerOfTwoForArraySize_4559, var_elementArraySize_4592, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 93)) ;
  GALGAS_bigint var_accumulatedFieldStaticValues_4707 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 105)) ;
  GALGAS_operandIRList var_operandList_4741 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-register-value-from-slices.galgas", 106)) ;
  cEnumerator_registerIntegerFieldListAST enumerator_4810 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_4810.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_4810.current_mFieldName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_4810.current_mFieldName (HERE).getter_location (SOURCE_FILE ("expression-register-value-from-slices.galgas", 109)), GALGAS_string ("anonymous selector not allowed here"), fixItArray1  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 109)) ;
        var_operandList_4741.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_uint var_fieldBitIndex_5019 ;
      GALGAS_uint var_fieldBitCount_5052 ;
      var_registerFieldMap_4486.method_searchKey (enumerator_4810.current_mFieldName (HERE), var_fieldBitIndex_5019, var_fieldBitCount_5052, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 111)) ;
      GALGAS_lstring var_inferredTypeName_5087 = GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_fieldBitCount_5052.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 116)), enumerator_4810.current_mFieldName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 116)) ;
      GALGAS_omnibusType var_inferredType_5230 ;
      constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (var_inferredTypeName_5087, var_inferredType_5230, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 117)) ;
      GALGAS_objectIR var_expressionResult_5700 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_4810.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_inferredType_5230, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5700, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 119)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_5700, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 132)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = extensionGetter_type (var_expressionResult_5700, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 137)).getter_kind (HERE).getter_isCompileTimeInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas", 137)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_bigint var_value_5998 ;
          GALGAS_omnibusType joker_5971_1 ; // Joker input parameter
          var_expressionResult_5700.method_literalInteger (joker_5971_1, var_value_5998, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 138)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsStrictInf, var_value_5998.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 139)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (enumerator_4810.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray4  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 140)) ;
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsStrictInf, var_value_5998.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 141)).left_shift_operation (var_fieldBitCount_5052, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 141)))).boolEnum () ;
              if (kBoolTrue == test_5) {
                var_accumulatedFieldStaticValues_4707 = var_accumulatedFieldStaticValues_4707.operator_or (var_value_5998.left_shift_operation (var_fieldBitIndex_5019, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 142)) COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 142)) ;
              }
            }
            if (kBoolFalse == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_4810.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).left_shift_operation (var_fieldBitCount_5052, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)), fixItArray6  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = extensionGetter_type (var_expressionResult_5700, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_bool var_unsigned_6519 ;
            GALGAS_uint var_expressionBitCount_6558 ;
            GALGAS_bigint joker_6488_2 ; // Joker input parameter
            GALGAS_bigint joker_6488_1 ; // Joker input parameter
            extensionGetter_type (var_expressionResult_5700, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 147)).getter_kind (HERE).method_integer (joker_6488_2, joker_6488_1, var_unsigned_6519, var_expressionBitCount_6558, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 147)) ;
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = var_unsigned_6519.operator_not (SOURCE_FILE ("expression-register-value-from-slices.galgas", 148)).boolEnum () ;
              if (kBoolTrue == test_8) {
                TC_Array <C_FixItDescription> fixItArray9 ;
                inCompiler->emitSemanticError (enumerator_4810.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray9  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 149)) ;
              }
            }
            if (kBoolFalse == test_8) {
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                test_10 = GALGAS_bool (kIsNotEqual, var_expressionBitCount_6558.objectCompare (var_fieldBitCount_5052)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  TC_Array <C_FixItDescription> fixItArray11 ;
                  inCompiler->emitSemanticError (enumerator_4810.current_mExpressionLocation (HERE), GALGAS_string ("type error, $uint").add_operation (var_fieldBitCount_5052.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)).add_operation (GALGAS_string (" type required"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)), fixItArray11  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)) ;
                }
              }
              if (kBoolFalse == test_10) {
                GALGAS_objectIR var_partialResult_6927 = var_expressionResult_5700 ;
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = GALGAS_bool (kIsStrictInf, var_expressionBitCount_6558.objectCompare (var_registerBitCount_4520)).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    GALGAS_objectIR var_extendedResult_7081 ;
                    {
                    routine_getNewTempValue (var_registerType_4381, ioArgument_ioTemporaries, var_extendedResult_7081, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 156)) ;
                    }
                    {
                    extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_7081, var_partialResult_6927, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 157)) ;
                    }
                    var_partialResult_6927 = var_extendedResult_7081 ;
                  }
                }
                GALGAS_objectIR var_shiftedResult_7335 ;
                {
                routine_getNewTempValue (var_registerType_4381, ioArgument_ioTemporaries, var_shiftedResult_7335, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 161)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_7335, var_partialResult_6927, var_fieldBitIndex_5019, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 162)) ;
                }
                var_operandList_4741.addAssign_operation (var_shiftedResult_7335  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 164)) ;
              }
            }
          }
        }
      }
    }
    enumerator_4810.gotoNextObject () ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_registerType_4381, var_accumulatedFieldStaticValues_4707  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 170)) ;
  cEnumerator_operandIRList enumerator_7725 (var_operandList_4741, kENUMERATION_UP) ;
  while (enumerator_7725.hasCurrentObject ()) {
    GALGAS_objectIR var_newResult_7794 ;
    {
    routine_getNewTempValue (var_registerType_4381, ioArgument_ioTemporaries, var_newResult_7794, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 172)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_7794, extensionGetter_type (var_newResult_7794, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 175)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 176)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-register-value-from-slices.galgas", 178)), enumerator_7725.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 173)) ;
    }
    outArgument_outResult = var_newResult_7794 ;
    enumerator_7725.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_registerConstantExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                          extensionMethod_registerConstantExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_registerConstantExpressionAST_analyzeExpression (defineExtensionMethod_registerConstantExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@primaryInExpressionAST addDependenceEdgeForStaticExpression'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inConstantName,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mReceiverName COMMA_SOURCE_FILE ("expression-primary.galgas", 106)) ;
      }
    }
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_4260 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_4260.hasCurrentObject ()) {
    switch (enumerator_4260.current_mAccess (HERE).enumValue ()) {
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
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_4480 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_4260.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_4480->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 113)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_4994 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_4260.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_4994->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_4568 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_4568.hasCurrentObject ()) {
          switch (enumerator_4568.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4784 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4568.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_4784->mAssociatedValue1 ;
              enumGalgasBool test_1 = kBoolTrue ;
              if (kBoolTrue == test_1) {
                test_1 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_1) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("expression-primary.galgas", 120)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4897 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4568.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_4897->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 122)) ;
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
          enumerator_4568.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_4260.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                             extensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@primaryInExpressionAST noteExpressionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_5523 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_5523.hasCurrentObject ()) {
    switch (enumerator_5523.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * extractPtr_5732 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) (enumerator_5523.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_low = extractPtr_5732->mAssociatedValue0 ;
        const GALGAS_lbigint extractedValue_high = extractPtr_5732->mAssociatedValue1 ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsSupOrEqual, extractedValue_high.getter_bigint (HERE).objectCompare (extractedValue_low.getter_bigint (HERE))).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_high.getter_bigint (HERE).substract_operation (extractedValue_low.getter_bigint (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)), extractedValue_low.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)) ;
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
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_5886 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_5523.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_5886->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 144)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_6384 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_5523.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_6384->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_5974 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_5974.hasCurrentObject ()) {
          switch (enumerator_5974.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_6190 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_5974.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_6190->mAssociatedValue1 ;
              enumGalgasBool test_1 = kBoolTrue ;
              if (kBoolTrue == test_1) {
                test_1 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_1) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("expression-primary.galgas", 151)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_6287 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_5974.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_6287->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 153)) ;
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
          enumerator_5974.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_5523.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                             extensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@primaryInExpressionAST analyzeExpression'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 181)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mReceiverName.getter_location (SOURCE_FILE ("expression-primary.galgas", 182)), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 182)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_1) {
        const GALGAS_primaryInExpressionAST temp_3 = object ;
        callExtensionMethod_analyzePrimaryExpressionNoSelf ((const cPtr_primaryInExpressionAST *) temp_3.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 184)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-primary.galgas", 198)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mReceiverName.getter_location (SOURCE_FILE ("expression-primary.galgas", 199)), GALGAS_string ("'self' is not available in this context"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 199)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      const GALGAS_primaryInExpressionAST temp_6 = object ;
      callExtensionMethod_analyzePrimaryExpressionWithSelf ((const cPtr_primaryInExpressionAST *) temp_6.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 201)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_primaryInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                          extensionMethod_primaryInExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_primaryInExpressionAST_analyzeExpression (defineExtensionMethod_primaryInExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Routine 'procAnalyzeAccesListInExpression'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  cEnumerator_primaryInExpressionAccessListAST enumerator_13867 (constinArgument_inAccessList, kENUMERATION_UP) ;
  while (enumerator_13867.hasCurrentObject ()) {
    switch (enumerator_13867.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * extractPtr_14147 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) (enumerator_13867.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_low = extractPtr_14147->mAssociatedValue0 ;
        const GALGAS_lbigint extractedValue_high = extractPtr_14147->mAssociatedValue1 ;
        {
        routine_handleSliceInExpression (constinArgument_inContext, ioArgument_ioResult, extractedValue_low, extractedValue_high, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 358)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_14418 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_13867.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_14418->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (ioArgument_ioResult, extractedValue_propertyName, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 367)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_15026 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_13867.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_15026->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_15026->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_checkIndexExpression = extractPtr_15026->mAssociatedValue2 ;
        {
        routine_handleArrayAccessInExpression (ioArgument_ioResult, extractedValue_indexExpression, extractedValue_endOfIndex, extractedValue_checkIndexExpression, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 376)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_15706 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_13867.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_methodName = extractPtr_15706->mAssociatedValue0 ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_15706->mAssociatedValue1 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_15706->mAssociatedValue2 ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 393)).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("a method cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 394)) ;
            ioArgument_ioResult.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_0) {
          {
          routine_handleFunctionCallInExpression (extractedValue_methodName, ioArgument_ioResult, constinArgument_inSelfType, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 396)) ;
          }
        }
      }
      break ;
    }
    enumerator_13867.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'handleSliceInExpression'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inLow.getter_bigint (HERE).objectCompare (constinArgument_inHigh.getter_bigint (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLow.getter_location (SOURCE_FILE ("expression-primary.galgas", 504)), GALGAS_string ("low bound should be lower or equal to high bound"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 504)) ;
      ioArgument_ioResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      GALGAS_bool test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 505)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 505)) ;
      if (kBoolTrue != test_3.boolEnum ()) {
        test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 505)).getter_kind (HERE).getter_isCompileTimeInteger (SOURCE_FILE ("expression-primary.galgas", 505)) ;
      }
      test_2 = test_3.operator_not (SOURCE_FILE ("expression-primary.galgas", 505)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inLow.getter_location (SOURCE_FILE ("expression-primary.galgas", 506)), GALGAS_string ("Invalid, receiver is not an integer"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 506)) ;
        ioArgument_ioResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      {
      extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, ioArgument_ioResult, constinArgument_inLow.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 509)), ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 509)) ;
      }
      GALGAS_lstring var_resultIntegerName_19319 = GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (constinArgument_inHigh.getter_bigint (HERE).substract_operation (constinArgument_inLow.getter_bigint (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)).getter_string (SOURCE_FILE ("expression-primary.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)), constinArgument_inLow.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-primary.galgas", 511)) ;
      GALGAS_omnibusType var_sliceType_19476 ;
      constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (var_resultIntegerName_19319, var_sliceType_19476, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 512)) ;
      {
      extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_19476, ioArgument_ioResult, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)) ;
      }
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInExpression'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_handlePropertyAccessInExpression (GALGAS_objectIR & ioArgument_ioResult,
                                               const GALGAS_lstring constinArgument_inPropertyName,
                                               const GALGAS_mode constinArgument_inMode,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_type_19979 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 527)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_20040 = var_type_19979.getter_propertyGetterMap (HERE) ;
  GALGAS_propertyGetterKind var_accessKind_20151 ;
  GALGAS_bool joker_20114 ; // Joker input parameter
  var_propertyGetterMap_20040.method_searchKey (constinArgument_inPropertyName, joker_20114, var_accessKind_20151, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 529)) ;
  switch (var_accessKind_20151.enumValue ()) {
  case GALGAS_propertyGetterKind::kNotBuilt:
    break ;
  case GALGAS_propertyGetterKind::kEnum_constantProperty:
    {
      const cEnumAssociatedValues_propertyGetterKind_constantProperty * extractPtr_20237 = (const cEnumAssociatedValues_propertyGetterKind_constantProperty *) (var_accessKind_20151.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_value = extractPtr_20237->mAssociatedValue0 ;
      ioArgument_ioResult = extractedValue_value ;
    }
    break ;
  case GALGAS_propertyGetterKind::kEnum_storedProperty:
    {
      const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_20638 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_accessKind_20151.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_propertyType = extractPtr_20638->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_propertyIndex = extractPtr_20638->mAssociatedValue1 ;
      GALGAS_string var_property_5F_llvmName_20367 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_20367, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 534)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 536)), extensionGetter_llvmName (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 537)), var_property_5F_llvmName_20367, extractedValue_propertyIndex, constinArgument_inPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 535)) ;
      }
      ioArgument_ioResult = GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_20367  COMMA_SOURCE_FILE ("expression-primary.galgas", 542)) ;
    }
    break ;
  case GALGAS_propertyGetterKind::kEnum_computedProperty:
    {
      const cEnumAssociatedValues_propertyGetterKind_computedProperty * extractPtr_21126 = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) (var_accessKind_20151.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_propertyTypeProxy = extractPtr_21126->mAssociatedValue0 ;
      const GALGAS_routineLLVMNameDict extractedValue_modeDictionary = extractPtr_21126->mAssociatedValue1 ;
      {
      extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 544)) ;
      }
      GALGAS_string var_routineLLVMName_20828 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_modeDictionary, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 545)) ;
      GALGAS_objectIR var_resultValueIR_21091 ;
      {
      extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, var_routineLLVMName_20828, extractedValue_propertyTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 550)), var_resultValueIR_21091, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 546)) ;
      }
      ioArgument_ioResult = var_resultValueIR_21091 ;
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'handleArrayAccessInExpression'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  switch (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 576)).getter_subscript (HERE).enumValue ()) {
  case GALGAS_subscript::kNotBuilt:
    break ;
  case GALGAS_subscript::kEnum_noSubscript:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is ").add_operation (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 578)).getter_omnibusTypeDescriptionName (SOURCE_FILE ("expression-primary.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 578)).add_operation (GALGAS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 578)), fixItArray0  COMMA_SOURCE_FILE ("expression-primary.galgas", 578)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is literal string (dynamic array) and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 580)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_23105 = (const cEnumAssociatedValues_subscript_staticSubscript *) (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 576)).getter_subscript (HERE).unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_elementType = extractPtr_23105->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_arraySize = extractPtr_23105->mAssociatedValue1 ;
      GALGAS_objectIR var_indexIR_22859 ;
      {
      routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_arraySize, extractedValue_elementType, ioArgument_ioInstructionGenerationList, var_indexIR_22859, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 583)) ;
      }
      GALGAS_objectIR var_result_23077 ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, extractedValue_elementType, var_indexIR_22859, var_result_23077, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 600)) ;
      }
      ioArgument_ioResult = var_result_23077 ;
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'handleFunctionCallInExpression'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_omnibusType var_receiverType_23828 = extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 627)) ;
  GALGAS_lstring var_methodMangledName_23921 = extensionGetter_mangledName (constinArgument_inArguments, var_receiverType_23828.getter_omnibusTypeDescriptionName (SOURCE_FILE ("expression-primary.galgas", 629)), constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 629)) ;
  GALGAS_bool var_implementedPublic_24173 ;
  GALGAS_routineTypedSignature var_formalSignature_24198 ;
  GALGAS_unifiedTypeMap_2D_proxy var_formalReturnTypeProxy_24229 ;
  GALGAS_routineLLVMNameDict var_implementedModeDictionary_24292 ;
  GALGAS_bool var_implementedIsExported_24330 ;
  GALGAS_mode var_implementedMode_24362 ;
  constinArgument_inContext.getter_mRoutineMap (HERE).method_searchKey (var_methodMangledName_23921, var_implementedPublic_24173, var_formalSignature_24198, var_formalReturnTypeProxy_24229, var_implementedModeDictionary_24292, var_implementedIsExported_24330, var_implementedMode_24362, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 632)) ;
  GALGAS_string var_functionLLVMName_24406 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_24292, constinArgument_inMode, constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 642)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_formalReturnTypeProxy_24229.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 644)).getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-primary.galgas", 644)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 645)), GALGAS_string ("not a function (returns no value)"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 645)) ;
      ioArgument_ioObjectIR.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 648)) ;
    }
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_24929 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 650)) ;
    var_effectiveParameterListIR_24929.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 651)), ioArgument_ioObjectIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 651)) ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_24198, constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_24929, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 653)) ;
    }
    GALGAS_objectIR var_callReturnedResult_25699 ;
    {
    routine_getNewTempValue (var_formalReturnTypeProxy_24229.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 669)), ioArgument_ioTemporaries, var_callReturnedResult_25699, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 669)) ;
    }
    GALGAS_lstring var_routineMangledName_25748 = function_routineMangledNameFromCall (extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 671)).getter_llvmBaseTypeName (HERE), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 671)) ;
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (var_callReturnedResult_25699, var_routineMangledName_25748, var_functionLLVMName_24406, var_effectiveParameterListIR_24929  COMMA_SOURCE_FILE ("expression-primary.galgas", 672))  COMMA_SOURCE_FILE ("expression-primary.galgas", 672)) ;
    ioArgument_ioObjectIR = var_callReturnedResult_25699 ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@standaloneFunctionInExpressionAST addDependenceEdgeForStaticExpression'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneFunctionInExpressionAST * object = (const cPtr_standaloneFunctionInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneFunctionInExpressionAST) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mStandaloneFunctionName COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 37)) ;
  }
  cEnumerator_effectiveArgumentListAST enumerator_2079 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_2079.hasCurrentObject ()) {
    switch (enumerator_2079.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_2271 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2079.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_2271->mAssociatedValue1 ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 43)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_2380 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2079.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_2380->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 45)) ;
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
    enumerator_2079.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST.mSlotID,
                                                             extensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@standaloneFunctionInExpressionAST noteExpressionTypesInPrecedenceGraph'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneFunctionInExpressionAST * object = (const cPtr_standaloneFunctionInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneFunctionInExpressionAST) ;
  cEnumerator_effectiveArgumentListAST enumerator_2982 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_2982.hasCurrentObject ()) {
    switch (enumerator_2982.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_3174 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2982.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3174->mAssociatedValue1 ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 64)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_3267 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2982.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_3267->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 66)) ;
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
    enumerator_2982.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST.mSlotID,
                                                             extensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@standaloneFunctionInExpressionAST analyzeExpression'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mStandaloneFunctionName.getter_location (HERE), GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 92)) ;
    }
  }
  GALGAS_lstring var_routineLLVMName_4593 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), object->mProperty_mStandaloneFunctionName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 95)) ;
  GALGAS_lstring var_signature_4716 = extensionGetter_routineSignature (object->mProperty_mArguments, object->mProperty_mStandaloneFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 97)) ;
  GALGAS_lstring var_requiredFunctionMangledName_4844 = GALGAS_lstring::constructor_new (object->mProperty_mStandaloneFunctionName.getter_string (HERE).add_operation (var_signature_4716.getter_string (SOURCE_FILE ("expression-standalone-function-call.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 99)), object->mProperty_mStandaloneFunctionName.getter_location (SOURCE_FILE ("expression-standalone-function-call.galgas", 99))  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 99)) ;
  GALGAS_bool var_implementedPublic_5069 ;
  GALGAS_routineTypedSignature var_formalSignature_5094 ;
  GALGAS_unifiedTypeMap_2D_proxy var_formalReturnTypeProxy_5125 ;
  GALGAS_routineLLVMNameDict var_implementedModeDictionary_5188 ;
  GALGAS_bool var_isExported_5215 ;
  GALGAS_mode var_implementedMode_5247 ;
  constinArgument_inContext.getter_mRoutineMap (HERE).method_searchKey (var_requiredFunctionMangledName_4844, var_implementedPublic_5069, var_formalSignature_5094, var_formalReturnTypeProxy_5125, var_implementedModeDictionary_5188, var_isExported_5215, var_implementedMode_5247, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 101)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_formalReturnTypeProxy_5125.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-standalone-function-call.galgas", 111)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_requiredFunctionMangledName_4844.getter_location (SOURCE_FILE ("expression-standalone-function-call.galgas", 112)), GALGAS_string ("this function does not return any value"), fixItArray3  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 112)) ;
      outArgument_outFunctionCallReturnedValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    GALGAS_string var_functionLLVMName_5498 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_5188, constinArgument_inMode, var_requiredFunctionMangledName_4844, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 115)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_5700 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-standalone-function-call.galgas", 117)) ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_5094, object->mProperty_mArguments, var_requiredFunctionMangledName_4844.getter_location (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_5700, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 118)) ;
    }
    {
    routine_getNewTempValue (var_formalReturnTypeProxy_5125.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 134)), ioArgument_ioTemporaries, outArgument_outFunctionCallReturnedValue, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 134)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (outArgument_outFunctionCallReturnedValue, var_routineLLVMName_4593, var_functionLLVMName_5498, var_effectiveParameterListIR_5700  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 136))  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 136)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_standaloneFunctionInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST.mSlotID,
                                          extensionMethod_standaloneFunctionInExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_standaloneFunctionInExpressionAST_analyzeExpression (defineExtensionMethod_standaloneFunctionInExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@constructorCallAST addDependenceEdgeForStaticExpression'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inConstantName,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCallAST * object = (const cPtr_constructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallAST) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mTypeName COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
  }
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2191 (object->mProperty_mParameterList, kENUMERATION_UP) ;
  while (enumerator_2191.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) enumerator_2191.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 52)) ;
    enumerator_2191.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_constructorCallAST.mSlotID,
                                                             extensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_constructorCallAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@constructorCallAST noteExpressionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCallAST * object = (const cPtr_constructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallAST) ;
  {
  ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 61)) ;
  }
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2823 (object->mProperty_mParameterList, kENUMERATION_UP) ;
  while (enumerator_2823.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_2823.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 63)) ;
    enumerator_2823.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_constructorCallAST.mSlotID,
                                                             extensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@constructorCallAST analyzeExpression'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_string var_constructorKey_3914 = GALGAS_string ("(") ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_3957 (object->mProperty_mParameterList, kENUMERATION_UP) ;
  while (enumerator_3957.hasCurrentObject ()) {
    var_constructorKey_3914.plusAssign_operation(GALGAS_string ("!").add_operation (enumerator_3957.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)) ;
    enumerator_3957.gotoNextObject () ;
  }
  var_constructorKey_3914.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 89)) ;
  GALGAS_omnibusType var_resultType_4094 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)) ;
  GALGAS_lstring var_typeName_4183 = GALGAS_lstring::constructor_new (var_resultType_4094.getter_omnibusTypeDescriptionName (HERE), object->mProperty_mErrorLocation  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 92)) ;
  GALGAS_constructorMap var_constructorMap_4328 ;
  constinArgument_inContext.getter_mTypeConstructorMap (HERE).method_searchKey (var_typeName_4183, var_constructorMap_4328, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 93)) ;
  GALGAS_constructorSignature var_constructorSignature_4474 ;
  GALGAS_constructorValue var_initValue_4489 ;
  var_constructorMap_4328.method_searchKey (GALGAS_lstring::constructor_new (var_constructorKey_3914, object->mProperty_mErrorLocation  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)), var_constructorSignature_4474, var_initValue_4489, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)) ;
  switch (var_initValue_4489.enumValue ()) {
  case GALGAS_constructorValue::kNotBuilt:
    break ;
  case GALGAS_constructorValue::kEnum_arrayValue:
    {
      const cEnumAssociatedValues_constructorValue_arrayValue * extractPtr_7669 = (const cEnumAssociatedValues_constructorValue_arrayValue *) (var_initValue_4489.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_elementType = extractPtr_7669->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_size = extractPtr_7669->mAssociatedValue1 ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, var_constructorKey_3914.objectCompare (GALGAS_string ("(!repeated)"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_expressionAST var_expression_4637 = object->mProperty_mParameterList.getter_mExpressionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 100)) ;
          GALGAS_objectIR var_expressionResult_5122 ;
          callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) var_expression_4637.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_elementType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5122, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 101)) ;
          GALGAS_objectIR var_result_5147 = function_checkAssignmentCompatibility (constinArgument_inContext.getter_mAssignmentOperatorMap (HERE), var_expressionResult_5122, extractedValue_elementType, object->mProperty_mParameterList.getter_mSelectorAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 118)).getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 114)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = extensionGetter_isStatic (var_result_5147, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 121)).boolEnum () ;
            if (kBoolTrue == test_1) {
              GALGAS_uint var_idx_5455 = ioArgument_ioStaticEntityMap.getter_mGlobalStructuredConstantList (HERE).getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 122)) ;
              outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayRepeatedStaticValue (var_resultType_4094, extractedValue_size, var_result_5147, var_idx_5455  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 123)) ;
              GALGAS_operandIRList var_operandIRList_5662 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 124)) ;
              cEnumerator_range enumerator_5695 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), extractedValue_size.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 125))), kENUMERATION_UP) ;
              while (enumerator_5695.hasCurrentObject ()) {
                var_operandIRList_5662.addAssign_operation (var_result_5147  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 126)) ;
                enumerator_5695.gotoNextObject () ;
              }
              ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssign_operation (var_resultType_4094, var_operandIRList_5662  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 128)) ;
            }
          }
          if (kBoolFalse == test_1) {
            outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayRepeatedDynamicValue (var_resultType_4094, extractedValue_size, var_result_5147  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 130)) ;
          }
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_string var_individualConstructor_5993 = GALGAS_string ("(") ;
        cEnumerator_range enumerator_6025 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), extractedValue_size.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134))), kENUMERATION_UP) ;
        while (enumerator_6025.hasCurrentObject ()) {
          var_individualConstructor_5993.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 135)) ;
          enumerator_6025.gotoNextObject () ;
        }
        var_individualConstructor_5993.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 137)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, var_constructorKey_3914.objectCompare (var_individualConstructor_5993)).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_operandIRList var_operandIRList_6201 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 139)) ;
            GALGAS_bool var_resultIsStatic_6233 = GALGAS_bool (true) ;
            cEnumerator_functionCallEffectiveParameterListAST enumerator_6273 (object->mProperty_mParameterList, kENUMERATION_UP) ;
            while (enumerator_6273.hasCurrentObject ()) {
              GALGAS_objectIR var_expressionResult_6769 ;
              callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_6273.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_elementType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6769, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 142)) ;
              GALGAS_objectIR var_result_6802 = function_checkAssignmentCompatibility (constinArgument_inContext.getter_mAssignmentOperatorMap (HERE), var_expressionResult_6769, extractedValue_elementType, enumerator_6273.current_mSelector (HERE).getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 155)) ;
              var_operandIRList_6201.addAssign_operation (var_result_6802  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 162)) ;
              GALGAS_bool test_3 = var_resultIsStatic_6233 ;
              if (kBoolTrue == test_3.boolEnum ()) {
                test_3 = extensionGetter_isStatic (var_result_6802, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 163)) ;
              }
              var_resultIsStatic_6233 = test_3 ;
              enumerator_6273.gotoNextObject () ;
            }
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = var_resultIsStatic_6233.boolEnum () ;
              if (kBoolTrue == test_4) {
                GALGAS_uint var_idx_7218 = ioArgument_ioStaticEntityMap.getter_mGlobalStructuredConstantList (HERE).getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 166)) ;
                outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayStaticValues (var_resultType_4094, var_operandIRList_6201, var_idx_7218  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 167)) ;
                ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssign_operation (var_resultType_4094, var_operandIRList_6201  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 168)) ;
              }
            }
            if (kBoolFalse == test_4) {
              outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayDynamicValues (var_resultType_4094, var_operandIRList_6201  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 170)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("invalid constructor"), fixItArray5  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 173)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_constructorValue::kEnum_null:
    {
      outArgument_outResult = GALGAS_objectIR::constructor_null (var_resultType_4094  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 177)) ;
    }
    break ;
  case GALGAS_constructorValue::kEnum_simple:
    {
      const cEnumAssociatedValues_constructorValue_simple * extractPtr_7995 = (const cEnumAssociatedValues_constructorValue_simple *) (var_initValue_4489.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_7995->mAssociatedValue0 ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 179)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, var_resultType_4094.getter_omnibusTypeDescriptionName (HERE).add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 180)), fixItArray7  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 180)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_4094, extractedValue_value  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 182)) ;
      }
    }
    break ;
  case GALGAS_constructorValue::kEnum_structure:
    {
      const cEnumAssociatedValues_constructorValue_structure * extractPtr_9675 = (const cEnumAssociatedValues_constructorValue_structure *) (var_initValue_4489.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_sortedOperandList = extractPtr_9675->mAssociatedValue0 ;
      GALGAS_sortedOperandIRList var_sortedOperandIRList_8062 = extractedValue_sortedOperandList ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 186)).objectCompare (var_constructorSignature_4474.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 186)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_string temp_9 ;
          const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_constructorSignature_4474.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 188)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_10) {
            temp_9 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_10) {
            temp_9 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("this constructor call should name ").add_operation (var_constructorSignature_4474.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 187)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 188)).add_operation (object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 189)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 189)), fixItArray11  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_8) {
        cEnumerator_constructorSignature enumerator_8455 (var_constructorSignature_4474, kENUMERATION_UP) ;
        cEnumerator_functionCallEffectiveParameterListAST enumerator_8488 (object->mProperty_mParameterList, kENUMERATION_UP) ;
        while (enumerator_8455.hasCurrentObject () && enumerator_8488.hasCurrentObject ()) {
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            test_12 = GALGAS_bool (kIsNotEqual, enumerator_8488.current_mSelector (HERE).getter_string (HERE).objectCompare (enumerator_8455.current_mSelector (HERE))).boolEnum () ;
            if (kBoolTrue == test_12) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (enumerator_8488.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-constructor-call.galgas", 194)), GALGAS_string ("the selector should be '!").add_operation (enumerator_8455.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)), fixItArray13  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)) ;
            }
          }
          GALGAS_objectIR var_expressionResult_9139 ;
          callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_8488.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_8455.current_mType (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_9139, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 196)) ;
          GALGAS_objectIR var_result_9168 = function_checkAssignmentCompatibility (constinArgument_inContext.getter_mAssignmentOperatorMap (HERE), var_expressionResult_9139, enumerator_8455.current_mType (HERE), enumerator_8488.current_mSelector (HERE).getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 209)) ;
          {
          extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_result_9168, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 216)) ;
          }
          var_sortedOperandIRList_8062.addAssign_operation (var_result_9168, enumerator_8455.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 217)) ;
          enumerator_8455.gotoNextObject () ;
          enumerator_8488.gotoNextObject () ;
        }
        outArgument_outResult = GALGAS_objectIR::constructor_llvmStructureValue (var_resultType_4094, var_sortedOperandIRList_8062  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 219)) ;
      }
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_constructorCallAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_constructorCallAST.mSlotID,
                                          extensionMethod_constructorCallAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_constructorCallAST_analyzeExpression (defineExtensionMethod_constructorCallAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@compileTimeInfixOperatorAST locationForErrorSignaling'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_compileTimeInfixOperatorAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_compileTimeInfixOperatorAST * object = (const cPtr_compileTimeInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeInfixOperatorAST) ;
  result_outLocation = object->mProperty_mInfixOperatorLocation ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_compileTimeInfixOperatorAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST.mSlotID,
                                                  extensionGetter_compileTimeInfixOperatorAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_compileTimeInfixOperatorAST_locationForErrorSignaling (defineExtensionGetter_compileTimeInfixOperatorAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@compileTimeInfixOperatorAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compileTimeInfixOperatorAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_compileTimeInfixOperatorAST * object = (const cPtr_compileTimeInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeInfixOperatorAST) ;
  GALGAS_lstring var_nodeName_5614 = GALGAS_lstring::constructor_new (extensionGetter_string (object->mProperty_mInfixOperator, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (object->mProperty_mLeftTypeName.getter_string (SOURCE_FILE ("infix-operator-compile-time.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (object->mProperty_mRightTypeName.getter_string (SOURCE_FILE ("infix-operator-compile-time.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)), object->mProperty_mInfixOperatorLocation  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)) ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_5614, temp_0, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 184)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5614, object->mProperty_mLeftTypeName COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 185)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5614, object->mProperty_mRightTypeName COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 186)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5614, object->mProperty_mResultTypeName COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 187)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 188)), var_nodeName_5614 COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 188)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeInfixOperatorAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST.mSlotID,
                                               extensionMethod_compileTimeInfixOperatorAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeInfixOperatorAST_enterInPrecedenceGraph (defineExtensionMethod_compileTimeInfixOperatorAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension getter '@compileTimeInfixOperatorAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_compileTimeInfixOperatorAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_compileTimeInfixOperatorAST * object = (const cPtr_compileTimeInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeInfixOperatorAST) ;
  result_outRepresentation = object->mProperty_mLeftTypeName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (extensionGetter_string (object->mProperty_mInfixOperator, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (object->mProperty_mRightTypeName.getter_string (SOURCE_FILE ("infix-operator-compile-time.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_compileTimeInfixOperatorAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST.mSlotID,
                                                           extensionGetter_compileTimeInfixOperatorAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_compileTimeInfixOperatorAST_keyRepresentationForErrorSignaling (defineExtensionGetter_compileTimeInfixOperatorAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@compileTimeInfixOperatorAST enterInContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_unifiedTypeMap_2D_proxy var_leftTypeProxy_7368 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mLeftTypeName, var_leftTypeProxy_7368 COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 212)) ;
  }
  GALGAS_omnibusType var_leftType_7384 = var_leftTypeProxy_7368.getter_type (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 213)) ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_leftType_7384.ptr (), object->mProperty_mLeftTypeName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 214)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightTypeProxy_7559 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mRightTypeName, var_rightTypeProxy_7559 COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 215)) ;
  }
  GALGAS_omnibusType var_rightType_7576 = var_rightTypeProxy_7559.getter_type (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 216)) ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_rightType_7576.ptr (), object->mProperty_mRightTypeName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 217)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultTypeProxy_7756 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mResultTypeName, var_resultTypeProxy_7756 COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 218)) ;
  }
  GALGAS_omnibusType var_resultType_7774 = var_resultTypeProxy_7756.getter_type (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 219)) ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_resultType_7774.ptr (), object->mProperty_mResultTypeName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 220)) ;
  GALGAS_ctCheckMap var_ctCheckMap_7926 = GALGAS_ctCheckMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-compile-time.galgas", 222)) ;
  {
  var_ctCheckMap_7926.setter_insertKey (object->mProperty_mLeftOperandName, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 223)) ;
  }
  {
  var_ctCheckMap_7926.setter_insertKey (object->mProperty_mRightOperandName, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 224)) ;
  }
  callExtensionMethod_checkCompileTimeExpression ((const cPtr_ctExpressionAST *) object->mProperty_mExpression.ptr (), var_ctCheckMap_7926, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 225)) ;
  GALGAS_lstring var_key_8122 = function_infixOperatorMapKey (var_leftType_7384, extensionGetter_omnibusInfixOperator (object->mProperty_mInfixOperator, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 227)), object->mProperty_mInfixOperatorLocation, var_rightType_7576, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 227)) ;
  GALGAS_compileTimeInfixOperatorUsage var_definition_8224 = GALGAS_compileTimeInfixOperatorUsage::constructor_new (object->mProperty_mLeftOperandName, object->mProperty_mRightOperandName, object->mProperty_mExpression  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 228)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8122, var_resultType_7774, var_definition_8224, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 233)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mInfixOperator.objectCompare (GALGAS_compileTimeInfixOperatorEnumeration::constructor_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 235)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsEqual, object->mProperty_mInfixOperator.objectCompare (GALGAS_compileTimeInfixOperatorEnumeration::constructor_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 235)))) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_lstring var_equal_5F_key_8517 = function_infixOperatorMapKey (var_leftType_7384, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 236)), object->mProperty_mInfixOperatorLocation, var_rightType_7576, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 236)) ;
      GALGAS_lstring var_lessThan_5F_key_8615 = function_infixOperatorMapKey (var_leftType_7384, GALGAS_omnibusInfixOperator::constructor_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 237)), object->mProperty_mInfixOperatorLocation, var_rightType_7576, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 237)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = ioArgument_ioContext.getter_mInfixOperatorMap (HERE).getter_hasKey (var_equal_5F_key_8517.getter_string (SOURCE_FILE ("infix-operator-compile-time.galgas", 238)) COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)).operator_and (ioArgument_ioContext.getter_mInfixOperatorMap (HERE).getter_hasKey (var_lessThan_5F_key_8615.getter_string (SOURCE_FILE ("infix-operator-compile-time.galgas", 238)) COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)) COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_omnibusInfixOperatorUsage var_equalOperatorUsage_8887 ;
          GALGAS_omnibusType joker_8862 ; // Joker input parameter
          ioArgument_ioContext.getter_mInfixOperatorMap (HERE).method_searchKey (var_equal_5F_key_8517, joker_8862, var_equalOperatorUsage_8887, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 239)) ;
          GALGAS_omnibusInfixOperatorUsage var_lessThanOperatorUsage_8975 ;
          GALGAS_omnibusType joker_8947 ; // Joker input parameter
          ioArgument_ioContext.getter_mInfixOperatorMap (HERE).method_searchKey (var_lessThan_5F_key_8615, joker_8947, var_lessThanOperatorUsage_8975, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 240)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            GALGAS_compileTimeInfixOperatorUsage var_eou_8991 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_equalOperatorUsage_8887.ptr ())) ;
            if (NULL == var_eou_8991.ptr ()) {
              test_3 = kBoolFalse ;
            }
            if (kBoolTrue == test_3) {
              GALGAS_compileTimeInfixOperatorUsage var_ltou_9063 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_lessThanOperatorUsage_8975.ptr ())) ;
              if (NULL == var_ltou_9063.ptr ()) {
                test_3 = kBoolFalse ;
              }
              if (kBoolTrue == test_3) {
                GALGAS_compileTimeInfixInfEqualOperatorUsage var_infEqual_5F_definition_9156 = GALGAS_compileTimeInfixInfEqualOperatorUsage::constructor_new (var_eou_8991, var_ltou_9063  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 243)) ;
                GALGAS_lstring var_infEqual_5F_key_9237 = function_infixOperatorMapKey (var_leftType_7384, GALGAS_omnibusInfixOperator::constructor_infEqual (SOURCE_FILE ("infix-operator-compile-time.galgas", 244)), object->mProperty_mInfixOperatorLocation, var_rightType_7576, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 244)) ;
                {
                ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_infEqual_5F_key_9237, var_resultType_7774, var_infEqual_5F_definition_9156, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 245)) ;
                }
              }
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsEqual, object->mProperty_mInfixOperator.objectCompare (GALGAS_compileTimeInfixOperatorEnumeration::constructor_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 250)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_lstring var_addOpNoOVF_5F_key_9525 = function_infixOperatorMapKey (var_leftType_7384, GALGAS_omnibusInfixOperator::constructor_addOpNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 251)), object->mProperty_mInfixOperatorLocation, var_rightType_7576, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 251)) ;
      {
      ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_addOpNoOVF_5F_key_9525, var_resultType_7774, var_definition_8224, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 252)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeInfixOperatorAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST.mSlotID,
                                       extensionMethod_compileTimeInfixOperatorAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeInfixOperatorAST_enterInContext (defineExtensionMethod_compileTimeInfixOperatorAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@compileTimeInfixOperatorUsage generateCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_bigint var_result_11350 ;
  const GALGAS_compileTimeInfixOperatorUsage temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_compileTimeInfixOperatorUsage *) temp_0.ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_11350, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 293)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_11350  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 294)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeInfixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage.mSlotID,
                                     extensionMethod_compileTimeInfixOperatorUsage_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeInfixOperatorUsage_generateCode (defineExtensionMethod_compileTimeInfixOperatorUsage_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@compileTimeInfixInfEqualOperatorUsage generateCode'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_bigint var_result_12312 ;
  callExtensionMethod_eval ((const cPtr_compileTimeInfixOperatorUsage *) object->mProperty_mEqualOperatorUsage.ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_12312, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 316)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_result_12312.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 317)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      callExtensionMethod_eval ((const cPtr_compileTimeInfixOperatorUsage *) object->mProperty_mLessThanOperatorUsage.ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_12312, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 318)) ;
    }
  }
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_12312  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 320)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimeInfixInfEqualOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage.mSlotID,
                                     extensionMethod_compileTimeInfixInfEqualOperatorUsage_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimeInfixInfEqualOperatorUsage_generateCode (defineExtensionMethod_compileTimeInfixInfEqualOperatorUsage_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension getter '@llvmInfixOperatorAST locationForErrorSignaling'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_llvmInfixOperatorAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_llvmInfixOperatorAST * object = (const cPtr_llvmInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmInfixOperatorAST) ;
  result_outLocation = object->mProperty_mInfixOperatorLocation ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_llvmInfixOperatorAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_llvmInfixOperatorAST.mSlotID,
                                                  extensionGetter_llvmInfixOperatorAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_llvmInfixOperatorAST_locationForErrorSignaling (defineExtensionGetter_llvmInfixOperatorAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'appendInfixOperatorDeclaration'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_appendInfixOperatorDeclaration (const GALGAS_omnibusInfixOperator constinArgument_inInfixOperator,
                                             const GALGAS_string constinArgument_inLLVMOperation,
                                             const GALGAS_string constinArgument_inTypeName,
                                             const GALGAS_string constinArgument_inResultOmnibusTypeName,
                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionList var_llvmInstructionList_1622 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 36)) ;
  GALGAS_llvmGenerationInstructionElementList var_instructionElements_1687 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 37)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 38))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 38))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 38)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 40))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 40))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 40)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 41))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 41)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 42))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 42))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 42)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 43))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 43)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 44))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 44))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 44)) ;
  GALGAS_llvmGenerationInstructionElementList temp_0 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 45)) ;
  temp_0.plusAssign_operation (var_instructionElements_1687, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 45)) ;
  var_llvmInstructionList_1622.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_0  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 45))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 45)) ;
  GALGAS_abstractDeclarationAST var_declaration_2227 = GALGAS_llvmInfixOperatorAST::constructor_new (constinArgument_inInfixOperator, GALGAS_location::constructor_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 48)), GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 49)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 50)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 51)), GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 52)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 53)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 54)), constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 55)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 56)), var_llvmInstructionList_1622  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 46)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_2227.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 59)) ;
  var_llvmInstructionList_1622 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 61)) ;
  var_instructionElements_1687 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 62)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 63)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 65))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 65))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 65)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 66))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 66)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 67))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 67))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 67)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 68))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 68)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 69))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 69))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 69)) ;
  GALGAS_llvmGenerationInstructionElementList temp_1 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 70)) ;
  temp_1.plusAssign_operation (var_instructionElements_1687, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 70)) ;
  var_llvmInstructionList_1622.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_1  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 70))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 70)) ;
  var_declaration_2227 = GALGAS_llvmInfixOperatorAST::constructor_new (constinArgument_inInfixOperator, GALGAS_location::constructor_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 73)), GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 74)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 75)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 76)), GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 77)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 78)).getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 78)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 79)), constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 80)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 81)), var_llvmInstructionList_1622  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 71)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_2227.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 84)) ;
  var_llvmInstructionList_1622 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 86)) ;
  var_instructionElements_1687 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 87)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 88))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 88))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 88)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 90))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 90))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 90)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 91))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 91)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 92))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 92))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 92)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 93))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 93)) ;
  var_instructionElements_1687.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 94))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 94))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 94)) ;
  GALGAS_llvmGenerationInstructionElementList temp_2 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 95)) ;
  temp_2.plusAssign_operation (var_instructionElements_1687, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 95)) ;
  var_llvmInstructionList_1622.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_2  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 95))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 95)) ;
  var_declaration_2227 = GALGAS_llvmInfixOperatorAST::constructor_new (constinArgument_inInfixOperator, GALGAS_location::constructor_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 98)), GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 99)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 100)).getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 100)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 101)), GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 102)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 103)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 104)), constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 105)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 106)), var_llvmInstructionList_1622  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 96)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_2227.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 109)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@llvmInfixOperatorAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_llvmInfixOperatorAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmInfixOperatorAST * object = (const cPtr_llvmInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmInfixOperatorAST) ;
  GALGAS_lstring var_nodeName_6426 = GALGAS_lstring::constructor_new (extensionGetter_string (object->mProperty_mInfixOperator, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (object->mProperty_mLeftTypeName.getter_string (SOURCE_FILE ("infix-operator-llvm.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (object->mProperty_mRightTypeName.getter_string (SOURCE_FILE ("infix-operator-llvm.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)), object->mProperty_mInfixOperatorLocation  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)) ;
  {
  const GALGAS_llvmInfixOperatorAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6426, temp_0, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 162)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6426, object->mProperty_mLeftTypeName COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 163)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6426, object->mProperty_mRightTypeName COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 164)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6426, object->mProperty_mResultTypeName COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 165)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_llvmInfixOperatorAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_llvmInfixOperatorAST.mSlotID,
                                               extensionMethod_llvmInfixOperatorAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_llvmInfixOperatorAST_enterInPrecedenceGraph (defineExtensionMethod_llvmInfixOperatorAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@llvmInfixOperatorAST keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_llvmInfixOperatorAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_llvmInfixOperatorAST * object = (const cPtr_llvmInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmInfixOperatorAST) ;
  result_outRepresentation = object->mProperty_mLeftTypeName.getter_string (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)).add_operation (extensionGetter_string (object->mProperty_mInfixOperator, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)).add_operation (object->mProperty_mRightTypeName.getter_string (SOURCE_FILE ("infix-operator-llvm.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_llvmInfixOperatorAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_llvmInfixOperatorAST.mSlotID,
                                                           extensionGetter_llvmInfixOperatorAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_llvmInfixOperatorAST_keyRepresentationForErrorSignaling (defineExtensionGetter_llvmInfixOperatorAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@llvmInfixOperatorAST enterInContext'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_unifiedTypeMap_2D_proxy var_leftTypeProxy_8093 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mLeftTypeName, var_leftTypeProxy_8093 COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 189)) ;
  }
  GALGAS_omnibusType var_leftType_8109 = var_leftTypeProxy_8093.getter_type (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 190)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightTypeProxy_8224 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mRightTypeName, var_rightTypeProxy_8224 COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 191)) ;
  }
  GALGAS_omnibusType var_rightType_8241 = var_rightTypeProxy_8224.getter_type (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 192)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultTypeProxy_8359 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mResultTypeName, var_resultTypeProxy_8359 COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 193)) ;
  }
  GALGAS_omnibusType var_resultType_8377 = var_resultTypeProxy_8359.getter_type (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 194)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8109.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)).operator_and (callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8241.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)) COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInfixOperatorLocation, GALGAS_string ("one of the two argument types should not be a compile time type"), fixItArray1  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 196)) ;
    }
  }
  callExtensionMethod_checkIsNotCompileTimeType ((const cPtr_omnibusType *) var_resultType_8377.ptr (), object->mProperty_mResultTypeName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 198)) ;
  GALGAS_lstring var_key_8692 = function_infixOperatorMapKey (var_leftType_8109, object->mProperty_mInfixOperator, object->mProperty_mInfixOperatorLocation, var_rightType_8241, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 200)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8109.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 202)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 202)).operator_and (callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8241.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 202)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 202)) COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 202)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_llvmInfixOperatorUsage var_definition_8898 = GALGAS_llvmInfixOperatorUsage::constructor_new (function_infixOperatorFunctionName (var_leftType_8109, object->mProperty_mInfixOperator, var_rightType_8241, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 204)), object->mProperty_mLeftOperandName, object->mProperty_mRightOperandName, object->mProperty_mInstructionList  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 203)) ;
      {
      ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8692, var_resultType_8377, var_definition_8898, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 209)) ;
      }
      GALGAS_assignmentGenerationVarMap var_varMap_9195 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-llvm.galgas", 210)) ;
      {
      var_varMap_9195.setter_insertKey (object->mProperty_mLeftOperandName, GALGAS_string ("%").add_operation (object->mProperty_mLeftOperandName.getter_string (SOURCE_FILE ("infix-operator-llvm.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 211)) ;
      }
      {
      var_varMap_9195.setter_insertKey (object->mProperty_mRightOperandName, GALGAS_string ("%").add_operation (object->mProperty_mRightOperandName.getter_string (SOURCE_FILE ("infix-operator-llvm.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 212)) ;
      }
      GALGAS_assignmentGenerationVarMap var_typeMap_9376 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-llvm.galgas", 213)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8109.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 214)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 214)).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          var_typeMap_9376.setter_insertKey (object->mProperty_mLeftOperandName, callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_leftType_8109.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 215)) ;
          }
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8241.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 217)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 217)).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          var_typeMap_9376.setter_insertKey (object->mProperty_mRightOperandName, callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_rightType_8241.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 218)) ;
          }
        }
      }
      {
      var_typeMap_9376.setter_insertKey (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 220)), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_resultType_8377.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 220)) ;
      }
      GALGAS_llvmGenerationInstructionList var_instructionList_9756 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 221)) ;
      var_instructionList_9756.addAssign_operation (GALGAS_llvmVarInstruction::constructor_new (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 222))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 222))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 222)) ;
      var_instructionList_9756.plusAssign_operation(object->mProperty_mInstructionList, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 223)) ;
      {
      extensionSetter_appendReturn (var_instructionList_9756, GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 224)), GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 224)) ;
      }
      GALGAS_stringlist var_generatedInstructions_9986 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 225)) ;
      GALGAS_allocaList var_allocaList_10018 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 226)) ;
      GALGAS_uint var_temporaryIndex_10048 = GALGAS_uint ((uint32_t) 0U) ;
      extensionMethod_generateIRCode (var_instructionList_9756, var_varMap_9195, var_typeMap_9376, var_generatedInstructions_9986, var_temporaryIndex_10048, var_allocaList_10018, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 228)) ;
      GALGAS_infixOperatorRoutineIR var_routine_10176 = GALGAS_infixOperatorRoutineIR::constructor_new (GALGAS_lstring::constructor_new (function_infixOperatorFunctionName (var_leftType_8109, object->mProperty_mInfixOperator, var_rightType_8241, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 230)), object->mProperty_mInfixOperatorLocation  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 230)), GALGAS_bool (true), GALGAS_bool (false), var_leftType_8109, object->mProperty_mLeftOperandName.getter_string (HERE), var_rightType_8241, object->mProperty_mRightOperandName.getter_string (HERE), var_resultType_8377, var_generatedInstructions_9986, var_allocaList_10018  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 229)) ;
      ioArgument_ioRoutineListIR.addAssign_operation (var_routine_10176  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 241)) ;
    }
  }
  if (kBoolFalse == test_2) {
    GALGAS_llvmInlineInfixOperatorUsage var_definition_10627 = GALGAS_llvmInlineInfixOperatorUsage::constructor_new (object->mProperty_mLeftOperandName, object->mProperty_mRightOperandName, object->mProperty_mInstructionList  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 243)) ;
    {
    ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8692, var_resultType_8377, var_definition_10627, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 248)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_llvmInfixOperatorAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_llvmInfixOperatorAST.mSlotID,
                                       extensionMethod_llvmInfixOperatorAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_llvmInfixOperatorAST_enterInContext (defineExtensionMethod_llvmInfixOperatorAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@llvmInfixOperatorUsage generateCode'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_objectIR var_leftOperand_11817 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_11817, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 277)) ;
  }
  GALGAS_objectIR var_rightOperand_11953 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_11953, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 282)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 287)) ;
  }
  GALGAS_procCallEffectiveParameterListIR var_argumentList_12221 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 288)) ;
  var_argumentList_12221.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("infix-operator-llvm.galgas", 289)), var_leftOperand_11817  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 289)) ;
  var_argumentList_12221.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("infix-operator-llvm.galgas", 290)), var_rightOperand_11953  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 290)) ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (outArgument_outResultValue, GALGAS_lstring::constructor_new (object->mProperty_mInfixMangledFunctionName, constinArgument_inOperatorLocation  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 293)), object->mProperty_mInfixMangledFunctionName, var_argumentList_12221  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 291))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 291)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_llvmInfixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_llvmInfixOperatorUsage.mSlotID,
                                     extensionMethod_llvmInfixOperatorUsage_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_llvmInfixOperatorUsage_generateCode (defineExtensionMethod_llvmInfixOperatorUsage_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@llvmInlineInfixOperatorUsage generateCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_objectIR var_leftOperand_13326 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_13326, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 321)) ;
  }
  GALGAS_objectIR var_rightOperand_13462 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_13462, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 326)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 331)) ;
  }
  GALGAS_assignmentGenerationVarMap var_varMap_13718 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-llvm.galgas", 332)) ;
  {
  var_varMap_13718.setter_insertKey (object->mProperty_mLeftOperandName, extensionGetter_llvmName (var_leftOperand_13326, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 333)) ;
  }
  {
  var_varMap_13718.setter_insertKey (object->mProperty_mRightOperandName, extensionGetter_llvmName (var_rightOperand_13462, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 334)) ;
  }
  {
  var_varMap_13718.setter_insertKey (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 335)), extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 335)) ;
  }
  GALGAS_assignmentGenerationVarMap var_typeMap_13963 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-llvm.galgas", 336)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13326, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 337)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 337)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 337)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      var_typeMap_13963.setter_insertKey (object->mProperty_mLeftOperandName, callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13326, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 338)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 338)) ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_13462, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 340)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 340)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 340)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      var_typeMap_13963.setter_insertKey (object->mProperty_mRightOperandName, callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_13462, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 341)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 341)) ;
      }
    }
  }
  GALGAS_stringlist var_generatedInstructions_14283 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 343)) ;
  extensionMethod_generateIRCode (object->mProperty_mInstructionList, var_varMap_13718, var_typeMap_13963, var_generatedInstructions_14283, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 344)) ;
  cEnumerator_stringlist enumerator_14449 (var_generatedInstructions_14283, kENUMERATION_UP) ;
  while (enumerator_14449.hasCurrentObject ()) {
    {
    extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, enumerator_14449.current_mValue (HERE), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("infix-operator-llvm.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 346)) ;
    }
    enumerator_14449.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_llvmInlineInfixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage.mSlotID,
                                     extensionMethod_llvmInlineInfixOperatorUsage_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_llvmInlineInfixOperatorUsage_generateCode (defineExtensionMethod_llvmInlineInfixOperatorUsage_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@infixOperatorRoutineIR llvmCodeGeneration'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_infixOperatorRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorRoutineIR * object = (const cPtr_infixOperatorRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mResultType.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)).add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (object->mProperty_mTargetVarName, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mSourceType.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)).add_operation (object->mProperty_mSourceVarName, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)).add_operation (GALGAS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)) ;
  extensionMethod_generateAllocaList (object->mProperty_mAllocaList, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 374)) ;
  cEnumerator_stringlist enumerator_15732 (object->mProperty_mGeneratedInstructions, kENUMERATION_UP) ;
  while (enumerator_15732.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_15732.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 376)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 376)) ;
    enumerator_15732.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 378)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_infixOperatorRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_infixOperatorRoutineIR.mSlotID,
                                           extensionMethod_infixOperatorRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_infixOperatorRoutineIR_llvmCodeGeneration (defineExtensionMethod_infixOperatorRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@inlineInfixOperatorUsage generateCode'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_objectIR var_leftOperand_2858 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_2858, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 76)) ;
  }
  GALGAS_objectIR var_rightOperand_2981 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_2981, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 78)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-map.galgas", 79)) ;
  }
  GALGAS_string var_s_3161 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (object->mProperty_mLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_2858, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (extensionGetter_llvmName (var_leftOperand_2858, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)).add_operation (extensionGetter_llvmName (var_rightOperand_2981, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)) ;
  {
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_3161, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("infix-operator-map.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 82)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_inlineInfixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_inlineInfixOperatorUsage.mSlotID,
                                     extensionMethod_inlineInfixOperatorUsage_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_inlineInfixOperatorUsage_generateCode (defineExtensionMethod_inlineInfixOperatorUsage_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@omnibusInfixOperatorExpressionAST addDependenceEdgeForStaticExpression'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_omnibusInfixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_omnibusInfixOperatorExpressionAST * object = (const cPtr_omnibusInfixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_omnibusInfixOperatorExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 68)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 69)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_omnibusInfixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_omnibusInfixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_omnibusInfixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_omnibusInfixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@omnibusInfixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_omnibusInfixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_omnibusInfixOperatorExpressionAST * object = (const cPtr_omnibusInfixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_omnibusInfixOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 77)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 78)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_omnibusInfixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_omnibusInfixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_omnibusInfixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_omnibusInfixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@omnibusInfixOperatorExpressionAST analyzeExpression'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_objectIR var_leftOperand_5443 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperand_5443, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 118)) ;
  GALGAS_objectIR var_rightOperand_5894 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (var_leftOperand_5443, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 135)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightOperand_5894, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 132)) ;
  extensionMethod_generateInfixOperatorCode (constinArgument_inContext.getter_mInfixOperatorMap (HERE), var_leftOperand_5443, object->mProperty_mInfixOperator, object->mProperty_mOperatorLocation, var_rightOperand_5894, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 146)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_omnibusInfixOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST.mSlotID,
                                          extensionMethod_omnibusInfixOperatorExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_omnibusInfixOperatorExpressionAST_analyzeExpression (defineExtensionMethod_omnibusInfixOperatorExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension getter '@compiletimePrefixOperatorAST locationForErrorSignaling'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_compiletimePrefixOperatorAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_compiletimePrefixOperatorAST * object = (const cPtr_compiletimePrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compiletimePrefixOperatorAST) ;
  result_outLocation = object->mProperty_mPrefixOperatorLocation ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_compiletimePrefixOperatorAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST.mSlotID,
                                                  extensionGetter_compiletimePrefixOperatorAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_compiletimePrefixOperatorAST_locationForErrorSignaling (defineExtensionGetter_compiletimePrefixOperatorAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@compiletimePrefixOperatorAST enterInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_compiletimePrefixOperatorAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_compiletimePrefixOperatorAST * object = (const cPtr_compiletimePrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compiletimePrefixOperatorAST) ;
  GALGAS_lstring var_nodeName_3694 = GALGAS_lstring::constructor_new (extensionGetter_string (object->mProperty_mPrefixOperator, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)).add_operation (object->mProperty_mReceiverTypeName.getter_string (SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)), object->mProperty_mPrefixOperatorLocation  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)) ;
  {
  const GALGAS_compiletimePrefixOperatorAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3694, temp_0, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 101)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3694, object->mProperty_mReceiverTypeName COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 102)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3694, object->mProperty_mResultTypeName COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 103)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 104)), var_nodeName_3694 COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 104)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compiletimePrefixOperatorAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST.mSlotID,
                                               extensionMethod_compiletimePrefixOperatorAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compiletimePrefixOperatorAST_enterInPrecedenceGraph (defineExtensionMethod_compiletimePrefixOperatorAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension getter '@compiletimePrefixOperatorAST keyRepresentationForErrorSignaling'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_compiletimePrefixOperatorAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_compiletimePrefixOperatorAST * object = (const cPtr_compiletimePrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compiletimePrefixOperatorAST) ;
  result_outRepresentation = extensionGetter_string (object->mProperty_mPrefixOperator, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)).add_operation (object->mProperty_mReceiverTypeName.getter_string (SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_compiletimePrefixOperatorAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST.mSlotID,
                                                           extensionGetter_compiletimePrefixOperatorAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_compiletimePrefixOperatorAST_keyRepresentationForErrorSignaling (defineExtensionGetter_compiletimePrefixOperatorAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@compiletimePrefixOperatorAST enterInContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_unifiedTypeMap_2D_proxy var_receiverTypeProxy_5387 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mReceiverTypeName, var_receiverTypeProxy_5387 COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 128)) ;
  }
  GALGAS_omnibusType var_receiverType_5407 = var_receiverTypeProxy_5387.getter_type (inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 129)) ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_receiverType_5407.ptr (), object->mProperty_mReceiverTypeName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 130)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultTypeProxy_5596 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mResultTypeName, var_resultTypeProxy_5596 COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 131)) ;
  }
  GALGAS_omnibusType var_resultType_5614 = var_resultTypeProxy_5596.getter_type (inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 132)) ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_resultType_5614.ptr (), object->mProperty_mResultTypeName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 133)) ;
  GALGAS_ctCheckMap var_ctCheckMap_5766 = GALGAS_ctCheckMap::constructor_emptyMap (SOURCE_FILE ("prefix-operator-compile-time.galgas", 135)) ;
  {
  var_ctCheckMap_5766.setter_insertKey (object->mProperty_mReceiverName, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 136)) ;
  }
  callExtensionMethod_checkCompileTimeExpression ((const cPtr_ctExpressionAST *) object->mProperty_mExpression.ptr (), var_ctCheckMap_5766, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 137)) ;
  GALGAS_lstring var_key_5913 = function_prefixOperatorMapKey (var_receiverType_5407, extensionGetter_prefixOperator (object->mProperty_mPrefixOperator, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 139)), object->mProperty_mPrefixOperatorLocation, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 139)) ;
  GALGAS_compileTimePrefixOperatorUsage var_definition_6011 = GALGAS_compileTimePrefixOperatorUsage::constructor_new (object->mProperty_mPrefixOperatorLocation, object->mProperty_mReceiverName, object->mProperty_mExpression  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 140)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_5913, var_receiverType_5407, var_resultType_5614, var_definition_6011, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 145)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mPrefixOperator.objectCompare (GALGAS_compileTimePrefixOperatorEnumeration::constructor_minusOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 147)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_lstring var_minusNoOvf_5F_key_6300 = function_prefixOperatorMapKey (var_receiverType_5407, GALGAS_prefixOperator::constructor_minusNoOvf (SOURCE_FILE ("prefix-operator-compile-time.galgas", 148)), object->mProperty_mPrefixOperatorLocation, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 148)) ;
      {
      ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_minusNoOvf_5F_key_6300, var_receiverType_5407, var_resultType_5614, var_definition_6011, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 149)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compiletimePrefixOperatorAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST.mSlotID,
                                       extensionMethod_compiletimePrefixOperatorAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compiletimePrefixOperatorAST_enterInContext (defineExtensionMethod_compiletimePrefixOperatorAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@compileTimePrefixOperatorUsage generateCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_bigint var_receiverValue_7520 ;
  GALGAS_omnibusType joker_7492_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_literalInteger (joker_7492_1, var_receiverValue_7520, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 175)) ;
  GALGAS_ctMap var_varMap_7537 = GALGAS_ctMap::constructor_emptyMap (SOURCE_FILE ("prefix-operator-compile-time.galgas", 176)) ;
  {
  var_varMap_7537.setter_insertKey (object->mProperty_mReceiverOperandName, var_receiverValue_7520, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 177)) ;
  }
  GALGAS_bigint var_result_7682 ;
  callExtensionMethod_computeCompileTimeExpression ((const cPtr_ctExpressionAST *) object->mProperty_mExpression.ptr (), var_varMap_7537, var_result_7682, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 178)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_7682  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 179)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_compileTimePrefixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage.mSlotID,
                                     extensionMethod_compileTimePrefixOperatorUsage_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_compileTimePrefixOperatorUsage_generateCode (defineExtensionMethod_compileTimePrefixOperatorUsage_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension getter '@llvmPrefixOperatorAST locationForErrorSignaling'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_llvmPrefixOperatorAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_llvmPrefixOperatorAST * object = (const cPtr_llvmPrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmPrefixOperatorAST) ;
  result_outLocation = object->mProperty_mPrefixOperatorLocation ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_llvmPrefixOperatorAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_llvmPrefixOperatorAST.mSlotID,
                                                  extensionGetter_llvmPrefixOperatorAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_llvmPrefixOperatorAST_locationForErrorSignaling (defineExtensionGetter_llvmPrefixOperatorAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Routine 'appendPrefixOperatorDeclaration_minus'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_appendPrefixOperatorDeclaration_5F_minus (const GALGAS_string constinArgument_inOmnibusReceiverTypeName,
                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionList var_llvmInstructionList_2213 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 58)) ;
  GALGAS_llvmGenerationInstructionElementList var_instructionElements_2278 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 59)) ;
  var_instructionElements_2278.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 60))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 60))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 60)) ;
  var_instructionElements_2278.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = sub ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 61))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 61)) ;
  var_instructionElements_2278.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 62))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 62))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 62)) ;
  var_instructionElements_2278.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" 0, ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 63)) ;
  var_instructionElements_2278.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 64)) ;
  GALGAS_llvmGenerationInstructionElementList temp_0 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 65)) ;
  temp_0.plusAssign_operation (var_instructionElements_2278, inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 65)) ;
  var_llvmInstructionList_2213.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_0  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 65))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 65)) ;
  GALGAS_abstractDeclarationAST var_declaration_2690 = GALGAS_llvmPrefixOperatorAST::constructor_new (GALGAS_llvmPrefixOperatorEnumeration::constructor_minusOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 67)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 68)), GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 69)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 70)), var_llvmInstructionList_2213, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 72))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 66)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_2690.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 74)) ;
  var_declaration_2690 = GALGAS_llvmPrefixOperatorAST::constructor_new (GALGAS_llvmPrefixOperatorEnumeration::constructor_minusOpNoOvf (SOURCE_FILE ("prefix-operator-llvm.galgas", 76)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 77)), GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 78)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 79)), var_llvmInstructionList_2213, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 81))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 75)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_2690.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 83)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Routine 'appendPrefixOperatorDeclaration_bitWiseComplement'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_appendPrefixOperatorDeclaration_5F_bitWiseComplement (const GALGAS_string constinArgument_inOmnibusReceiverTypeName,
                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionList var_llvmInstructionList_3563 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 93)) ;
  GALGAS_llvmGenerationInstructionElementList var_instructionElements_3628 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 94)) ;
  var_instructionElements_3628.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 95))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 95))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 95)) ;
  var_instructionElements_3628.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = xor ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 96))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 96)) ;
  var_instructionElements_3628.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 97))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 97))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 97)) ;
  var_instructionElements_3628.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 98))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 98)) ;
  var_instructionElements_3628.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 99))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 99))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 99)) ;
  var_instructionElements_3628.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (", -1")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 100))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 100)) ;
  GALGAS_llvmGenerationInstructionElementList temp_0 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 101)) ;
  temp_0.plusAssign_operation (var_instructionElements_3628, inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 101)) ;
  var_llvmInstructionList_3563.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_0  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 101))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 101)) ;
  GALGAS_abstractDeclarationAST var_declaration_4089 = GALGAS_llvmPrefixOperatorAST::constructor_new (GALGAS_llvmPrefixOperatorEnumeration::constructor_bitWiseComplement (SOURCE_FILE ("prefix-operator-llvm.galgas", 103)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 104)), GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 105)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 106)), var_llvmInstructionList_3563, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 108))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 102)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_4089.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 110)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@llvmPrefixOperatorAST enterInPrecedenceGraph'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_llvmPrefixOperatorAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmPrefixOperatorAST * object = (const cPtr_llvmPrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmPrefixOperatorAST) ;
  GALGAS_lstring var_nodeName_6432 = GALGAS_lstring::constructor_new (extensionGetter_string (object->mProperty_mPrefixOperator, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)).add_operation (object->mProperty_mReceiverTypeName.getter_string (SOURCE_FILE ("prefix-operator-llvm.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)), object->mProperty_mPrefixOperatorLocation  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)) ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6432, temp_0, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 175)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6432, object->mProperty_mReceiverTypeName COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 176)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6432, object->mProperty_mResultTypeName COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 177)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_llvmPrefixOperatorAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_llvmPrefixOperatorAST.mSlotID,
                                               extensionMethod_llvmPrefixOperatorAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_llvmPrefixOperatorAST_enterInPrecedenceGraph (defineExtensionMethod_llvmPrefixOperatorAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension getter '@llvmPrefixOperatorAST keyRepresentationForErrorSignaling'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_llvmPrefixOperatorAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_llvmPrefixOperatorAST * object = (const cPtr_llvmPrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmPrefixOperatorAST) ;
  result_outRepresentation = extensionGetter_string (object->mProperty_mPrefixOperator, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)).add_operation (object->mProperty_mReceiverTypeName.getter_string (SOURCE_FILE ("prefix-operator-llvm.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_llvmPrefixOperatorAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_llvmPrefixOperatorAST.mSlotID,
                                                           extensionGetter_llvmPrefixOperatorAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_llvmPrefixOperatorAST_keyRepresentationForErrorSignaling (defineExtensionGetter_llvmPrefixOperatorAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@llvmPrefixOperatorAST enterInContext'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_unifiedTypeMap_2D_proxy var_receiverTypeProxy_8032 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mReceiverTypeName, var_receiverTypeProxy_8032 COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 201)) ;
  }
  GALGAS_omnibusType var_receiverType_8052 = var_receiverTypeProxy_8032.getter_type (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 202)) ;
  callExtensionMethod_checkIsNotCompileTimeType ((const cPtr_omnibusType *) var_receiverType_8052.ptr (), object->mProperty_mReceiverTypeName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 203)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultTypeProxy_8244 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mResultTypeName, var_resultTypeProxy_8244 COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 204)) ;
  }
  GALGAS_omnibusType var_resultType_8262 = var_resultTypeProxy_8244.getter_type (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 205)) ;
  callExtensionMethod_checkIsNotCompileTimeType ((const cPtr_omnibusType *) var_resultType_8262.ptr (), object->mProperty_mResultTypeName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 206)) ;
  GALGAS_string var_prefixMangledFunctionName_8419 = function_prefixOperatorFunctionName (var_receiverType_8052, extensionGetter_prefixOperator (object->mProperty_mPrefixOperator, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 208)) ;
  GALGAS_lstring var_key_8491 = function_prefixOperatorMapKey (var_receiverType_8052, extensionGetter_prefixOperator (object->mProperty_mPrefixOperator, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 209)), object->mProperty_mPrefixOperatorLocation, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 209)) ;
  GALGAS_llvmPrefixOperatorUsage var_definition_8589 = GALGAS_llvmPrefixOperatorUsage::constructor_new (var_prefixMangledFunctionName_8419, object->mProperty_mReceiverName, object->mProperty_mInstructionList  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 210)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_8491, var_receiverType_8052, var_resultType_8262, var_definition_8589, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 215)) ;
  }
  GALGAS_assignmentGenerationVarMap var_varMap_8847 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("prefix-operator-llvm.galgas", 217)) ;
  {
  var_varMap_8847.setter_insertKey (object->mProperty_mReceiverName, GALGAS_string ("%").add_operation (object->mProperty_mReceiverName.getter_string (SOURCE_FILE ("prefix-operator-llvm.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 218)) ;
  }
  GALGAS_assignmentGenerationVarMap var_typeMap_8949 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("prefix-operator-llvm.galgas", 219)) ;
  {
  var_typeMap_8949.setter_insertKey (object->mProperty_mReceiverName, callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_receiverType_8052.ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 220)) ;
  }
  {
  var_typeMap_8949.setter_insertKey (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 221)), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_resultType_8262.ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 221)) ;
  }
  GALGAS_llvmGenerationInstructionList var_instructionList_9142 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 222)) ;
  var_instructionList_9142.addAssign_operation (GALGAS_llvmVarInstruction::constructor_new (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 223))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 223))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 223)) ;
  var_instructionList_9142.plusAssign_operation(object->mProperty_mInstructionList, inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 224)) ;
  {
  extensionSetter_appendReturn (var_instructionList_9142, GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 225)), GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 225)) ;
  }
  GALGAS_stringlist var_generatedInstructions_9364 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 226)) ;
  GALGAS_allocaList var_allocaList_9394 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 227)) ;
  GALGAS_uint var_temporaryIndex_9422 = GALGAS_uint ((uint32_t) 0U) ;
  extensionMethod_generateIRCode (var_instructionList_9142, var_varMap_8847, var_typeMap_8949, var_generatedInstructions_9364, var_temporaryIndex_9422, var_allocaList_9394, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 229)) ;
  GALGAS_prefixOperatorRoutineIR var_routine_9546 = GALGAS_prefixOperatorRoutineIR::constructor_new (GALGAS_lstring::constructor_new (var_prefixMangledFunctionName_8419, object->mProperty_mPrefixOperatorLocation  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 231)), GALGAS_bool (true), GALGAS_bool (false), var_receiverType_8052, object->mProperty_mReceiverName.getter_string (HERE), var_resultType_8262, var_generatedInstructions_9364, var_allocaList_9394  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 230)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (var_routine_9546  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 240)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_llvmPrefixOperatorAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_llvmPrefixOperatorAST.mSlotID,
                                       extensionMethod_llvmPrefixOperatorAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_llvmPrefixOperatorAST_enterInContext (defineExtensionMethod_llvmPrefixOperatorAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@llvmPrefixOperatorUsage generateCode'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_objectIR var_receiverOperand_10829 = constinArgument_inReceiverOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_receiverOperand_10829, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 267)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 272)) ;
  }
  GALGAS_procCallEffectiveParameterListIR var_argumentList_11103 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 273)) ;
  var_argumentList_11103.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("prefix-operator-llvm.galgas", 274)), var_receiverOperand_10829  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 274)) ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (outArgument_outResultValue, GALGAS_lstring::constructor_new (object->mProperty_mPrefixMangledFunctionName, constinArgument_inOperatorLocation  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 277)), object->mProperty_mPrefixMangledFunctionName, var_argumentList_11103  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 275))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 275)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_llvmPrefixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage.mSlotID,
                                     extensionMethod_llvmPrefixOperatorUsage_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_llvmPrefixOperatorUsage_generateCode (defineExtensionMethod_llvmPrefixOperatorUsage_generateCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@prefixOperatorRoutineIR llvmCodeGeneration'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_prefixOperatorRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                        const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                        GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorRoutineIR * object = (const cPtr_prefixOperatorRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mResultType.ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)).add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (object->mProperty_mReceiverVarName, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (GALGAS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)) ;
  extensionMethod_generateAllocaList (object->mProperty_mAllocaList, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 304)) ;
  cEnumerator_stringlist enumerator_12435 (object->mProperty_mGeneratedInstructions, kENUMERATION_UP) ;
  while (enumerator_12435.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_12435.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)) ;
    enumerator_12435.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 308)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_prefixOperatorRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_prefixOperatorRoutineIR.mSlotID,
                                           extensionMethod_prefixOperatorRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_prefixOperatorRoutineIR_llvmCodeGeneration (defineExtensionMethod_prefixOperatorRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@prefixOperatorExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                              const GALGAS_lstring constinArgument_inConstantName,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 28)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@prefixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 36)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@prefixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_objectIR var_expressionResult_3258 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3258, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 57)) ;
  GALGAS_bool var_currentlyInSafeMode_3307 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 71)) ;
  GALGAS_bool var_noPanicGeneration_3355 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()) ;
  extensionMethod_generatePrefixOperatorCode (constinArgument_inContext.getter_mPrefixOperatorMap (HERE), var_expressionResult_3258, object->mProperty_mOp, object->mProperty_mOperatorLocation, var_currentlyInSafeMode_3307, var_noPanicGeneration_3355, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 73)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_prefixOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                          extensionMethod_prefixOperatorExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_analyzeExpression (defineExtensionMethod_prefixOperatorExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@checkInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 41)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                                                              extensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@checkInstructionAST instructionSemanticAnalysis'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_instructionListIR var_instructionGenerationList_2990 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 60)) ;
  GALGAS_objectIR var_expressionResult_3386 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 64)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_2990, var_expressionResult_3386, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 61)) ;
  GALGAS_implicitBooleanConversionResult var_booleanOperand_3617 ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.getter_mImplicitConversionToBooleanMap (HERE), var_expressionResult_3386, object->mProperty_mCheckMessage.getter_location (HERE), ioArgument_ioTemporaries, var_instructionGenerationList_2990, ioArgument_ioAllocaList, var_booleanOperand_3617, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 74)) ;
  switch (var_booleanOperand_3617.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * extractPtr_3891 = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) (var_booleanOperand_3617.unsafePointer ()) ;
      const GALGAS_bool extractedValue_boolValue = extractPtr_3891->mAssociatedValue0 ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = extractedValue_boolValue.operator_not (SOURCE_FILE ("directive-check.galgas", 85)).boolEnum () ;
        if (kBoolTrue == test_0) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mCheckMessage.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (object->mProperty_mCheckMessage.getter_location (SOURCE_FILE ("directive-check.galgas", 87)), GALGAS_string ("check failure: ").add_operation (object->mProperty_mCheckMessage.getter_string (SOURCE_FILE ("directive-check.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 87)), fixItArray2  COMMA_SOURCE_FILE ("directive-check.galgas", 87)) ;
            }
          }
          if (kBoolFalse == test_1) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (object->mProperty_mCheckMessage.getter_location (SOURCE_FILE ("directive-check.galgas", 89)), GALGAS_string ("check failure"), fixItArray3  COMMA_SOURCE_FILE ("directive-check.galgas", 89)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not static: use assert instruction"), fixItArray4  COMMA_SOURCE_FILE ("directive-check.galgas", 93)) ;
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_checkInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                                                    extensionMethod_checkInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_checkInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_checkInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@assertInstructionAST noteInstructionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 36)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                                                              extensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@assertInstructionAST instructionSemanticAnalysis'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)), fixItArray1  COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_3001 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 58)) ;
  GALGAS_objectIR var_expressionValue_3400 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 62)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3001, var_expressionValue_3400, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 59)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_type (var_expressionValue_3400, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 73)).getter_kind (HERE).getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 73)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 73)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assert.galgas", 74)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_isStatic (var_expressionValue_3400, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 77)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is static: use check directive"), fixItArray5  COMMA_SOURCE_FILE ("instruction-assert.galgas", 78)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 81)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_instructionGenerationList_3001, var_expressionValue_3400  COMMA_SOURCE_FILE ("instruction-assert.galgas", 82))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 82)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_assertInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                                                    extensionMethod_assertInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_assertInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_assertInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@assertInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_assertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                     GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 107)) ;
  GALGAS_string var_labelAssertOk_4883 = GALGAS_string ("assert.ok.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-assert.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 108)) ;
  GALGAS_string var_labelAssertEr_4950 = GALGAS_string ("assert.not.ok.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-assert.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (var_labelAssertOk_4883, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (var_labelAssertEr_4950, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelAssertEr_4950.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (object->mProperty_mAssertInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (object->mProperty_mAssertInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (function_panicCodeForAssertViolation (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelAssertOk_4883.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_assertInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                            extensionMethod_assertInstructionIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_assertInstructionIR_llvmInstructionCode (defineExtensionMethod_assertInstructionIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@assertInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_assertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                         GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 126)) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (object->mProperty_mAssertInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 127))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 127)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_assertInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                                extensionMethod_assertInstructionIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_assertInstructionIR_enterAccessibleEntities (defineExtensionMethod_assertInstructionIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@assignmentInstructionAST noteInstructionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 40)) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 41)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                              extensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@assignmentInstructionAST instructionSemanticAnalysis'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_omnibusType var_targetType_3090 ;
  extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inSelfType, object->mProperty_mTargetAST, var_targetType_3090, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 59)) ;
  GALGAS_objectIR var_sourceOperandPossibleReference_3534 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_3090, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_3534, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  GALGAS_instructionListListIR var_pendingStoreComputedPropertyInstructionGenerationList_3637 = GALGAS_instructionListListIR::constructor_emptyList (SOURCE_FILE ("instruction-assignment.galgas", 75)) ;
  GALGAS_LValueRepresentation var_lvalueIR_4107 ;
  extensionMethod_analyzeLValueInAssignment (object->mProperty_mTargetAST, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_pendingStoreComputedPropertyInstructionGenerationList_3637, var_lvalueIR_4107, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 76)) ;
  {
  extensionSetter_appendAssignmentIR (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, constinArgument_inContext.getter_mAssignmentOperatorMap (HERE), ioArgument_ioAllocaList, var_lvalueIR_4107.getter_type (HERE), var_lvalueIR_4107.getter_llvmName (HERE), var_sourceOperandPossibleReference_3534, object->mProperty_mInstructionLocation, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 90)) ;
  }
  cEnumerator_instructionListListIR enumerator_4548 (var_pendingStoreComputedPropertyInstructionGenerationList_3637, kENUMERATION_DOWN) ;
  while (enumerator_4548.hasCurrentObject ()) {
    ioArgument_ioInstructionGenerationList.plusAssign_operation(enumerator_4548.current_mInstructionList (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)) ;
    enumerator_4548.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_assignmentInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                    extensionMethod_assignmentInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_assignmentInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_assignmentInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Routine 'analyzeVariableInLValueInAssignment'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_omnibusType var_currentType_8498 = constinArgument_inVariableType ;
  GALGAS_string var_currentLLVMName_8537 = constinArgument_inLLVMName ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
      {
      GALGAS_objectIR joker_8661 ; // Joker input parameter
      extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8661, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 198)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_9340 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_9340->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_nextOperand = extractPtr_9340->mAssociatedValue1 ;
      {
      GALGAS_objectIR joker_8804 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8804, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 200)) ;
      }
      {
      routine_handlePropertyAccessInAssignment (constinArgument_inSelfType, var_currentType_8498, var_currentLLVMName_8537, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_name, extractedValue_nextOperand, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 201)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_10090 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_10090->mAssociatedValue0 ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_10090->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_checkIndexExpression = extractPtr_10090->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_nextOperand = extractPtr_10090->mAssociatedValue3 ;
      {
      GALGAS_objectIR joker_9500 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9500, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 218)) ;
      }
      {
      routine_handleArrayAccessInAssignment (constinArgument_inSelfType, var_currentType_8498, var_currentLLVMName_8537, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_indexExpression, extractedValue_endOfIndex, extractedValue_checkIndexExpression, extractedValue_nextOperand, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 219)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_new (var_currentType_8498, var_currentLLVMName_8537  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 238)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInAssignment'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_propertySetterMap var_propertySetterMap_11069 = ioArgument_ioCurrentType.getter_propertySetterMap (HERE) ;
  GALGAS_propertySetterKind var_propertyAccess_11193 ;
  GALGAS_bool joker_11152 ; // Joker input parameter
  var_propertySetterMap_11069.method_searchKey (constinArgument_inPropertyName, joker_11152, var_propertyAccess_11193, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 260)) ;
  switch (var_propertyAccess_11193.enumValue ()) {
  case GALGAS_propertySetterKind::kNotBuilt:
    break ;
  case GALGAS_propertySetterKind::kEnum_computedProperty:
    {
      const cEnumAssociatedValues_propertySetterKind_computedProperty * extractPtr_13228 = (const cEnumAssociatedValues_propertySetterKind_computedProperty *) (var_propertyAccess_11193.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_computedPropertyType = extractPtr_13228->mAssociatedValue0 ;
      const GALGAS_routineLLVMNameDict extractedValue_getterModeDictionary = extractPtr_13228->mAssociatedValue1 ;
      const GALGAS_routineLLVMNameDict extractedValue_setterModeDictionary = extractPtr_13228->mAssociatedValue2 ;
      GALGAS_string var_getterRoutineLLVMName_11387 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_getterModeDictionary, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 264)) ;
      GALGAS_objectIR var_resultValueIR_11725 ;
      {
      extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, GALGAS_objectIR::constructor_reference (ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 267)), var_getterRoutineLLVMName_11387, extractedValue_computedPropertyType.getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 269)), var_resultValueIR_11725, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 265)) ;
      }
      {
      extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, var_resultValueIR_11725, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 273)) ;
      }
      GALGAS_string var_setterRoutineLLVMName_11947 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_setterModeDictionary, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 275)) ;
      GALGAS_instructionListIR var_pendingStoreComputedPropertyInstructionGenerationList_12109 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assignment.galgas", 276)) ;
      GALGAS_objectIR var_tempValueIR_12134 = var_resultValueIR_11725 ;
      {
      extensionSetter_appendLoadWhenReference (var_pendingStoreComputedPropertyInstructionGenerationList_12109, ioArgument_ioTemporaries, var_tempValueIR_12134, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 278)) ;
      }
      {
      extensionSetter_appendStoreComputedPropertyValue (var_pendingStoreComputedPropertyInstructionGenerationList_12109, GALGAS_objectIR::constructor_reference (ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 280)), var_setterRoutineLLVMName_11947, var_tempValueIR_12134, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 279)) ;
      }
      ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList.addAssign_operation (var_pendingStoreComputedPropertyInstructionGenerationList_12109  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 284)) ;
      ioArgument_ioCurrentType = extensionGetter_type (var_resultValueIR_11725, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 286)) ;
      ioArgument_ioCurrentLLVMName = extensionGetter_llvmName (var_resultValueIR_11725, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 287)) ;
      {
      routine_handleNextOperandInAssignment (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 288)) ;
      }
    }
    break ;
  case GALGAS_propertySetterKind::kEnum_storedProperty:
    {
      const cEnumAssociatedValues_propertySetterKind_storedProperty * extractPtr_14129 = (const cEnumAssociatedValues_propertySetterKind_storedProperty *) (var_propertyAccess_11193.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_propertyType = extractPtr_14129->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_index = extractPtr_14129->mAssociatedValue1 ;
      GALGAS_string var_newLLVMvariable_13349 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_13349, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 304)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, var_newLLVMvariable_13349, extractedValue_index, constinArgument_inPropertyName.getter_string (SOURCE_FILE ("instruction-assignment.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 305)) ;
      }
      ioArgument_ioCurrentType = extractedValue_propertyType ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_13349 ;
      {
      routine_handleNextOperandInAssignment (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 314)) ;
      }
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'handleArrayAccessInAssignment'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  switch (ioArgument_ioCurrentType.getter_subscript (HERE).enumValue ()) {
  case GALGAS_subscript::kNotBuilt:
    break ;
  case GALGAS_subscript::kEnum_noSubscript:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is ").add_operation (ioArgument_ioCurrentType.getter_omnibusTypeDescriptionName (SOURCE_FILE ("instruction-assignment.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 355)).add_operation (GALGAS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 355)), fixItArray0  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 354)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is literal string and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 357)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_16820 = (const cEnumAssociatedValues_subscript_staticSubscript *) (ioArgument_ioCurrentType.getter_subscript (HERE).unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_elementType = extractPtr_16820->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_arraySize = extractPtr_16820->mAssociatedValue1 ;
      GALGAS_objectIR var_indexIR_15975 ;
      {
      routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_arraySize, extractedValue_elementType, ioArgument_ioInstructionGenerationList, var_indexIR_15975, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 361)) ;
      }
      GALGAS_string var_newLLVMvariable_16038 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_16038, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 378)) ;
      }
      {
      extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, extractedValue_elementType, var_newLLVMvariable_16038, var_indexIR_15975, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 379)) ;
      }
      ioArgument_ioCurrentType = extractedValue_elementType ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_16038 ;
      {
      routine_handleNextOperandInAssignment (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 388)) ;
      }
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'analyzeSelfLValueInAssignment'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_omnibusType var_currentType_17659 = constinArgument_inSelfType ;
  GALGAS_string var_currentLLVMName_17694 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 423)) ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_18337 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_18337->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_next = extractPtr_18337->mAssociatedValue1 ;
      {
      routine_handlePropertyAccessInAssignment (constinArgument_inSelfType, var_currentType_17659, var_currentLLVMName_17694, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_name, extractedValue_next, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 427)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_19008 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_19008->mAssociatedValue0 ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_19008->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_checkIndexExpression = extractPtr_19008->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_nextOperand = extractPtr_19008->mAssociatedValue3 ;
      {
      routine_handleArrayAccessInAssignment (constinArgument_inSelfType, var_currentType_17659, var_currentLLVMName_17694, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_indexExpression, extractedValue_endOfIndex, extractedValue_checkIndexExpression, extractedValue_nextOperand, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 444)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_new (var_currentType_17659, var_currentLLVMName_17694  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 463)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'handleNextOperandInAssignment'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_20532 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_20532->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_next = extractPtr_20532->mAssociatedValue1 ;
      {
      routine_handlePropertyAccessInAssignment (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_name, extractedValue_next, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 486)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_21207 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_21207->mAssociatedValue0 ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_21207->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_checkIndexExpression = extractPtr_21207->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_nextOperand = extractPtr_21207->mAssociatedValue3 ;
      {
      routine_handleArrayAccessInAssignment (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_indexExpression, extractedValue_endOfIndex, extractedValue_checkIndexExpression, extractedValue_nextOperand, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 503)) ;
      }
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//    Overriding extension method '@controlRegisterAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_controlRegisterAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterAssignmentInstructionAST * object = (const cPtr_controlRegisterAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterAssignmentInstructionAST) ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (object->mProperty_mControlRegisterLValue, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 59)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 60)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_controlRegisterAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST.mSlotID,
                                                              extensionMethod_controlRegisterAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_controlRegisterAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_controlRegisterAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension method '@controlRegisterAssignmentInstructionAST instructionSemanticAnalysis'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_omnibusType var_registerType_4295 ;
  GALGAS_string var_llvmRegAddressName_4387 ;
  GALGAS_uint joker_4318 ; // Joker input parameter
  GALGAS_sliceMap joker_4334 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (object->mProperty_mControlRegisterLValue, GALGAS_bool (true), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_registerType_4295, joker_4318, joker_4334, var_llvmRegAddressName_4387, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 79)) ;
  GALGAS_objectIR var_sourceIR_4831 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_registerType_4295, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceIR_4831, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 96)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceIR_4831, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 110)) ;
  }
  GALGAS_omnibusType var_t_5025 = extensionGetter_type (var_sourceIR_4831, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 115)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_t_5025.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 116)).operator_not (SOURCE_FILE ("instruction-assignment-control-register.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mControlRegisterLValue.getter_mRegisterGroupName (HERE).getter_location (SOURCE_FILE ("instruction-assignment-control-register.galgas", 117)), GALGAS_string ("source expression is not copyable"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 117)) ;
    }
  }
  if (kBoolFalse == test_0) {
    switch (object->mProperty_mAssignmentKind.enumValue ()) {
    case GALGAS_controlRegisterAssignmentOperatorKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterAssignmentOperatorKind::kEnum_assignment:
      {
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_4295, var_llvmRegAddressName_4387, var_sourceIR_4831, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 121)) ;
        }
      }
      break ;
    case GALGAS_controlRegisterAssignmentOperatorKind::kEnum_assignmentWithOperator:
      {
        const cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator * extractPtr_6867 = (const cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator *) (object->mProperty_mAssignmentKind.unsafePointer ()) ;
        const GALGAS_omnibusInfixOperator extractedValue_infixOperator = extractPtr_6867->mAssociatedValue0 ;
        const GALGAS_location extractedValue_operatorLocation = extractPtr_6867->mAssociatedValue1 ;
        GALGAS_objectIR var_registerValueIR_5498 ;
        {
        routine_getNewTempValue (var_registerType_4295, ioArgument_ioTemporaries, var_registerValueIR_5498, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 124)) ;
        }
        {
        extensionSetter_appendLoadIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerValueIR_5498, var_llvmRegAddressName_4387, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 125)) ;
        }
        GALGAS_lstring var_key_5650 = function_infixOperatorMapKey (var_registerType_4295, extractedValue_infixOperator, extractedValue_operatorLocation, extensionGetter_type (var_sourceIR_4831, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 127)) ;
        GALGAS_omnibusType var_resultType_5804 ;
        GALGAS_omnibusInfixOperatorUsage var_operatorUsage_5823 ;
        constinArgument_inContext.getter_mInfixOperatorMap (HERE).method_searchKey (var_key_5650, var_resultType_5804, var_operatorUsage_5823, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 128)) ;
        GALGAS_objectIR var_operationResult_6069 ;
        callExtensionMethod_generateCode ((const cPtr_omnibusInfixOperatorUsage *) var_operatorUsage_5823.ptr (), var_registerValueIR_5498, extractedValue_operatorLocation, var_sourceIR_4831, var_resultType_5804, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_operationResult_6069, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 129)) ;
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_4295, var_llvmRegAddressName_4387, var_operationResult_6069, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 158)) ;
        }
      }
      break ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_controlRegisterAssignmentInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST.mSlotID,
                                                    extensionMethod_controlRegisterAssignmentInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_controlRegisterAssignmentInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_controlRegisterAssignmentInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension method '@sliceAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sliceAssignmentInstructionAST * object = (const cPtr_sliceAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_sliceAssignmentInstructionAST) ;
  {
  ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 84)) ;
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 85)) ;
  cEnumerator_sliceAssignmentListAST enumerator_3327 (object->mProperty_mSliceAssignmentList, kENUMERATION_UP) ;
  while (enumerator_3327.hasCurrentObject ()) {
    switch (enumerator_3327.current_mSliceKind (HERE).enumValue ()) {
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
        const cEnumAssociatedValues_sliceTargetAST_lValue * extractPtr_3533 = (const cEnumAssociatedValues_sliceTargetAST_lValue *) (enumerator_3327.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_LValueAST extractedValue_target = extractPtr_3533->mAssociatedValue0 ;
        extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_target, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 92)) ;
      }
      break ;
    }
    enumerator_3327.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST.mSlotID,
                                                              extensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@sliceAssignmentInstructionAST instructionSemanticAnalysis'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_omnibusType var_resultType_4464 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 113)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 113)) ;
  GALGAS_uint var_bitCount_4599 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_resultType_4464.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("instruction-slice-assignment.galgas", 116)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 117)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray1  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 117)) ;
      var_bitCount_4599.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bool var_unsigned_4783 ;
    GALGAS_bigint joker_4758_2 ; // Joker input parameter
    GALGAS_bigint joker_4758_1 ; // Joker input parameter
    var_resultType_4464.getter_kind (HERE).method_integer (joker_4758_2, joker_4758_1, var_unsigned_4783, var_bitCount_4599, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 119)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unsigned_4783.operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 120)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 121)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 121)) ;
        var_bitCount_4599.drop () ; // Release error dropped variable
      }
    }
  }
  GALGAS_objectIR var_sourceOperand_5349 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_resultType_4464, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperand_5349, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 125)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperand_5349, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 139)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_sourceOperand_5349.getter_isLiteralInteger (SOURCE_FILE ("instruction-slice-assignment.galgas", 141)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_bigint var_value_5658 ;
      GALGAS_omnibusType joker_5631_1 ; // Joker input parameter
      var_sourceOperand_5349.method_literalInteger (joker_5631_1, var_value_5658, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 142)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsSupOrEqual, var_value_5658.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 143)).left_shift_operation (var_bitCount_4599, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 143)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mSourceExpressionLocation, GALGAS_string ("static value too large"), fixItArray6  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 144)) ;
          var_sourceOperand_5349.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        var_sourceOperand_5349 = GALGAS_objectIR::constructor_literalInteger (var_resultType_4464, var_value_5658  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 146)) ;
      }
    }
  }
  GALGAS_uint var_rightShiftAmount_5914 = var_bitCount_4599 ;
  GALGAS_bigint var_accumulatedFieldStaticValues_5964 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 151)) ;
  cEnumerator_sliceAssignmentListAST enumerator_6025 (object->mProperty_mSliceAssignmentList, kENUMERATION_UP) ;
  while (enumerator_6025.hasCurrentObject ()) {
    GALGAS_objectIR var_sourceOperandForSlicing_6060 = var_sourceOperand_5349 ;
    GALGAS_lstring var_sliceTypeName_6127 ;
    GALGAS_uint var_sliceWidth_6148 ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsEqual, enumerator_6025.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_6025.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 158)), GALGAS_string ("anonymous selector not allowed here"), fixItArray8  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 158)) ;
        var_sliceWidth_6148.drop () ; // Release error dropped variable
        var_sliceTypeName_6127.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsEqual, enumerator_6025.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string ("b"))).boolEnum () ;
        if (kBoolTrue == test_9) {
          var_sliceWidth_6148 = GALGAS_uint ((uint32_t) 1U) ;
          var_sliceTypeName_6127 = GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 161)), object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 161)) ;
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = enumerator_6025.current_mSliceWidth (HERE).getter_string (HERE).getter_isDecimalUnsignedNumber (SOURCE_FILE ("instruction-slice-assignment.galgas", 162)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 162)).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_6025.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 163)), GALGAS_string ("the selector should be an unsigned integer value"), fixItArray11  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 163)) ;
            var_sliceWidth_6148.drop () ; // Release error dropped variable
            var_sliceTypeName_6127.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_10) {
          var_sliceWidth_6148 = enumerator_6025.current_mSliceWidth (HERE).getter_string (HERE).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 165)) ;
          var_sliceTypeName_6127 = GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_sliceWidth_6148.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 166)), object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 166)) ;
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            test_12 = GALGAS_bool (kIsEqual, var_sliceWidth_6148.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_12) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (enumerator_6025.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 168)), GALGAS_string ("the bit slice width should be > 0"), fixItArray13  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 168)) ;
            }
          }
        }
      }
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (kIsSupOrEqual, var_rightShiftAmount_5914.objectCompare (var_sliceWidth_6148)).boolEnum () ;
      if (kBoolTrue == test_14) {
        var_rightShiftAmount_5914 = var_rightShiftAmount_5914.substract_operation (var_sliceWidth_6148, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 172)) ;
      }
    }
    if (kBoolFalse == test_14) {
      GALGAS_uint var_specifiedBitCount_6969 = var_bitCount_4599.add_operation (var_sliceWidth_6148, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)).substract_operation (var_rightShiftAmount_5914, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)) ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (enumerator_6025.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 175)), GALGAS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_6969.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 175)).add_operation (GALGAS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 175)).add_operation (var_bitCount_4599.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 175)), fixItArray15  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 175)) ;
      var_rightShiftAmount_5914 = GALGAS_uint ((uint32_t) 0U) ;
    }
    GALGAS_omnibusType var_sliceType_7169 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_sliceTypeName_6127, inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 178)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 178)) ;
    {
    extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, var_sourceOperandForSlicing_6060, var_rightShiftAmount_5914, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 180)) ;
    }
    {
    extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_7169, var_sourceOperandForSlicing_6060, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 181)) ;
    }
    switch (enumerator_6025.current_mSliceKind (HERE).enumValue ()) {
    case GALGAS_sliceTargetAST::kNotBuilt:
      break ;
    case GALGAS_sliceTargetAST::kEnum_discarded:
      {
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_varDeclaration:
      {
        const cEnumAssociatedValues_sliceTargetAST_varDeclaration * extractPtr_8474 = (const cEnumAssociatedValues_sliceTargetAST_varDeclaration *) (enumerator_6025.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_varName = extractPtr_8474->mAssociatedValue0 ;
        GALGAS_lstring var_omnibusLocalVariableName_7674 = GALGAS_lstring::constructor_new (extractedValue_varName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 187)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 187)), extractedValue_varName.getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 187))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 187)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 188)) ;
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_varName, var_sliceType_7169, var_omnibusLocalVariableName_7674, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-slice-assignment.galgas", 189)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 189)) ;
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_7674.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 191)), var_sliceType_7169, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 191)) ;
        GALGAS_LValueRepresentation var_targetRef_8073 = GALGAS_LValueRepresentation::constructor_new (var_sliceType_7169, function_llvmNameForLocalVariable (var_omnibusLocalVariableName_7674.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 195))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 193)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.getter_mAssignmentOperatorMap (HERE), ioArgument_ioTemporaries, extractedValue_varName.getter_location (HERE), var_sourceOperandForSlicing_6060, var_targetRef_8073, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 198)) ;
        }
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_letDeclaration:
      {
        const cEnumAssociatedValues_sliceTargetAST_letDeclaration * extractPtr_9362 = (const cEnumAssociatedValues_sliceTargetAST_letDeclaration *) (enumerator_6025.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_letName = extractPtr_9362->mAssociatedValue0 ;
        GALGAS_lstring var_omnibusLocalVariableName_8577 = GALGAS_lstring::constructor_new (extractedValue_letName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 207)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 207)), extractedValue_letName.getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 207))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 207)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 208)) ;
        {
        extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_letName, GALGAS_bool (false), var_sliceType_7169, var_omnibusLocalVariableName_8577, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 209)) ;
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_8577.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 211)), var_sliceType_7169, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 211)) ;
        GALGAS_LValueRepresentation var_targetRef_8959 = GALGAS_LValueRepresentation::constructor_new (var_sliceType_7169, function_llvmNameForLocalVariable (var_omnibusLocalVariableName_8577.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 215))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 213)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.getter_mAssignmentOperatorMap (HERE), ioArgument_ioTemporaries, extractedValue_letName.getter_location (HERE), var_sourceOperandForSlicing_6060, var_targetRef_8959, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 218)) ;
        }
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_lValue:
      {
        const cEnumAssociatedValues_sliceTargetAST_lValue * extractPtr_10120 = (const cEnumAssociatedValues_sliceTargetAST_lValue *) (enumerator_6025.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_LValueAST extractedValue_target = extractPtr_10120->mAssociatedValue0 ;
        GALGAS_LValueRepresentation var_lvalueIR_9828 ;
        extensionMethod_analyzeLValue (extractedValue_target, constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_9828, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 226)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.getter_mAssignmentOperatorMap (HERE), ioArgument_ioTemporaries, extractedValue_target.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 243)), var_sourceOperandForSlicing_6060, var_lvalueIR_9828, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 240)) ;
        }
      }
      break ;
    }
    enumerator_6025.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_sliceAssignmentInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST.mSlotID,
                                                    extensionMethod_sliceAssignmentInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_sliceAssignmentInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_sliceAssignmentInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@bitbandInstructionAST noteInstructionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitbandInstructionAST * object = (const cPtr_bitbandInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_bitbandInstructionAST) ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (object->mProperty_mControlRegisterLValue, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 52)) ;
  {
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("uint1").getter_nowhere (SOURCE_FILE ("instruction-bit-banding.galgas", 53)) COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 53)) ;
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mBitExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 54)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 55)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_bitbandInstructionAST.mSlotID,
                                                              extensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@bitbandInstructionAST instructionSemanticAnalysis'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_omnibusType var_requiredSourceExpressionType_3743 ;
  constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint1"), object->mProperty_mSourceExpressionLocation  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 76)), var_requiredSourceExpressionType_3743, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 75)) ;
  GALGAS_objectIR var_sourceExpressionOperand_4201 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_requiredSourceExpressionType_3743, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceExpressionOperand_4201, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 80)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceExpressionOperand_4201, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 94)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (kIsEqual, extensionGetter_type (var_sourceExpressionOperand_4201, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 99)).getter_omnibusTypeDescriptionName (HERE).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 99)))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = var_sourceExpressionOperand_4201.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 99)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bigint var_value_4667 ;
      GALGAS_omnibusType joker_4640_1 ; // Joker input parameter
      var_sourceExpressionOperand_4201.method_literalInteger (joker_4640_1, var_value_4667, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 100)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_bool test_3 = GALGAS_bool (kIsStrictInf, var_value_4667.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 101)))) ;
        if (kBoolTrue != test_3.boolEnum ()) {
          test_3 = GALGAS_bool (kIsStrictSup, var_value_4667.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 101)))) ;
        }
        test_2 = test_3.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mSourceExpressionLocation, GALGAS_string ("static value should be 0 or 1"), fixItArray4  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 102)) ;
        }
      }
      if (kBoolFalse == test_2) {
        var_sourceExpressionOperand_4201 = GALGAS_objectIR::constructor_literalInteger (var_requiredSourceExpressionType_3743, var_value_4667  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 104)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_sourceExpressionOperand_4201, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 106)).getter_omnibusTypeDescriptionName (HERE).objectCompare (var_requiredSourceExpressionType_3743.getter_omnibusTypeDescriptionName (HERE))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mSourceExpressionLocation, GALGAS_string ("bit expression type should be $").add_operation (var_requiredSourceExpressionType_3743.getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 107)), fixItArray6  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 107)) ;
      }
    }
  }
  GALGAS_uint var_registerBitCount_5652 ;
  GALGAS_string var_llvmRegisterAddressName_5725 ;
  GALGAS_omnibusType joker_5608 ; // Joker input parameter
  GALGAS_sliceMap joker_5667 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (object->mProperty_mControlRegisterLValue, GALGAS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, joker_5608, var_registerBitCount_5652, joker_5667, var_llvmRegisterAddressName_5725, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 110)) ;
  GALGAS_omnibusType var_requiredBitExpressionType_5966 ;
  constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_registerBitCount_5652.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 130)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 130)).getter_significantBitCount (SOURCE_FILE ("instruction-bit-banding.galgas", 130)).getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 130)), object->mProperty_mBitExpressionLocation  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 130)), var_requiredBitExpressionType_5966, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)) ;
  GALGAS_objectIR var_bitExpressionOperand_6412 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mBitExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_requiredBitExpressionType_5966, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_bitExpressionOperand_6412, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 134)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_bitExpressionOperand_6412, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 148)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    GALGAS_bool test_8 = GALGAS_bool (kIsEqual, extensionGetter_type (var_bitExpressionOperand_6412, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 153)).getter_omnibusTypeDescriptionName (HERE).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 153)))) ;
    if (kBoolTrue == test_8.boolEnum ()) {
      test_8 = var_bitExpressionOperand_6412.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 153)) ;
    }
    test_7 = test_8.boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_bigint var_value_6860 ;
      GALGAS_omnibusType joker_6833_1 ; // Joker input parameter
      var_bitExpressionOperand_6412.method_literalInteger (joker_6833_1, var_value_6860, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 154)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        GALGAS_bool test_10 = GALGAS_bool (kIsStrictInf, var_value_6860.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 155)))) ;
        if (kBoolTrue != test_10.boolEnum ()) {
          test_10 = GALGAS_bool (kIsSupOrEqual, var_value_6860.objectCompare (var_registerBitCount_5652.getter_bigint (SOURCE_FILE ("instruction-bit-banding.galgas", 155)))) ;
        }
        test_9 = test_10.boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (object->mProperty_mBitExpressionLocation, GALGAS_string ("static value should be >= 0 and <").add_operation (var_registerBitCount_5652.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 156)), fixItArray11  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 156)) ;
        }
      }
      if (kBoolFalse == test_9) {
        var_bitExpressionOperand_6412 = GALGAS_objectIR::constructor_literalInteger (var_requiredBitExpressionType_5966, var_value_6860  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 158)) ;
      }
    }
  }
  if (kBoolFalse == test_7) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_bitExpressionOperand_6412, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 160)).getter_omnibusTypeDescriptionName (HERE).objectCompare (var_requiredBitExpressionType_5966.getter_omnibusTypeDescriptionName (HERE))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (object->mProperty_mBitExpressionLocation, GALGAS_string ("bit expression type should be $").add_operation (var_requiredBitExpressionType_5966.getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 161)), fixItArray13  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 161)) ;
      }
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_bitbandInstructionIR::constructor_new (var_llvmRegisterAddressName_5725, var_bitExpressionOperand_6412, var_sourceExpressionOperand_4201, constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterBaseAddress (HERE).getter_bigint (HERE), constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterRelocationAddress (HERE).getter_bigint (HERE), constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterOffsetMultiplier (HERE).getter_bigint (HERE), constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterBitMultiplier (HERE).getter_bigint (HERE)  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 164))  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 164)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_bitbandInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_bitbandInstructionAST.mSlotID,
                                                    extensionMethod_bitbandInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_bitbandInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_bitbandInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@bitbandInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_bitbandInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitbandInstructionIR * object = (const cPtr_bitbandInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_bitbandInstructionIR) ;
  GALGAS_string var_idx_9441 = ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 206)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 207)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Bit band\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byte.offset.").add_operation (var_idx_9441, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GALGAS_string (" = sub i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (object->mProperty_mRegisterAddressLLVMname, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (object->mProperty_mBitbandRegisterBaseAddress.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byte.offset.").add_operation (var_idx_9441, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GALGAS_string (".mul = mul i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (var_idx_9441, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (object->mProperty_mBitbandRegisterOffsetMultiplier.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %bit.offset.").add_operation (var_idx_9441, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GALGAS_string (".mul = mul i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (extensionGetter_llvmName (object->mProperty_mBitExpressionOperand, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (object->mProperty_mBitbandRegisterBitMultiplier.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %offset.").add_operation (var_idx_9441, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GALGAS_string (" = add i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (var_idx_9441, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GALGAS_string (".mul, %bit.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (var_idx_9441, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GALGAS_string (".mul\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %bit.word.addr.").add_operation (var_idx_9441, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GALGAS_string (" = add i32 %offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (var_idx_9441, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (object->mProperty_mBitbandRegisterRelocationAddress.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr.").add_operation (var_idx_9441, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GALGAS_string (" = inttoptr i32 %bit.word.addr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (var_idx_9441, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GALGAS_string (" to i32*\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value.").add_operation (var_idx_9441, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GALGAS_string (" = zext i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceExpressionOperand, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GALGAS_string (" to i32\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i32 %value.").add_operation (var_idx_9441, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)).add_operation (GALGAS_string (", i32* %ptr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)).add_operation (var_idx_9441, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_bitbandInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_bitbandInstructionIR.mSlotID,
                                            extensionMethod_bitbandInstructionIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_bitbandInstructionIR_llvmInstructionCode (defineExtensionMethod_bitbandInstructionIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@varInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGraph.setter_noteNode (object->mProperty_mOptionalTypeName COMMA_SOURCE_FILE ("instruction-var.galgas", 97)) ;
      }
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 99)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                                                              extensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@varDeclarationInstructionAST noteInstructionTypesInPrecedenceGraph'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_varDeclarationInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varDeclarationInstructionAST * object = (const cPtr_varDeclarationInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationInstructionAST) ;
  {
  ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("instruction-var.galgas", 105)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_varDeclarationInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varDeclarationInstructionAST.mSlotID,
                                                              extensionMethod_varDeclarationInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_varDeclarationInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varDeclarationInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@varInstructionWithAssignmentAST instructionSemanticAnalysis'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_omnibusType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 124)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 125)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 125)) ;
  }
  GALGAS_omnibusType var_targetType_4992 = temp_0 ;
  GALGAS_objectIR var_sourcePossibleReference_5584 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_4992, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_5584, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)) ;
  GALGAS_objectIR var_result_5601 = function_checkAssignmentCompatibility (constinArgument_inContext.getter_mAssignmentOperatorMap (HERE), var_sourcePossibleReference_5584, var_targetType_4992, object->mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 141)) ;
  GALGAS_lstring var_omnibusLocalVariableName_5874 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 149))  COMMA_SOURCE_FILE ("instruction-var.galgas", 149)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 150)) ;
  {
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, object->mProperty_mVarName, extensionGetter_type (var_result_5601, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)), var_omnibusLocalVariableName_5874, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 151)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_5874.getter_string (SOURCE_FILE ("instruction-var.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)), extensionGetter_type (var_result_5601, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 153)) ;
  {
  extensionSetter_appendAssignmentIR (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, constinArgument_inContext.getter_mAssignmentOperatorMap (HERE), ioArgument_ioAllocaList, extensionGetter_type (var_result_5601, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 159)), function_llvmNameForLocalVariable (var_omnibusLocalVariableName_5874.getter_string (SOURCE_FILE ("instruction-var.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 160)), var_sourcePossibleReference_5584, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 162)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 155)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_varInstructionWithAssignmentAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                                                    extensionMethod_varInstructionWithAssignmentAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_instructionSemanticAnalysis (defineExtensionMethod_varInstructionWithAssignmentAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@varDeclarationInstructionAST instructionSemanticAnalysis'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_omnibusType var_targetType_7224 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 180)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 180)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_targetType_7224.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 182)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 183)), GALGAS_string ("$").add_operation (var_targetType_7224.getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)).add_operation (GALGAS_string (" type is a compile time type, and is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)), fixItArray1  COMMA_SOURCE_FILE ("instruction-var.galgas", 183)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_targetType_7224.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 184)).operator_not (SOURCE_FILE ("instruction-var.galgas", 184)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 185)), GALGAS_string ("$").add_operation (var_targetType_7224.getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 185)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 185)), fixItArray3  COMMA_SOURCE_FILE ("instruction-var.galgas", 185)) ;
      }
    }
  }
  GALGAS_lstring var_omnibusName_7657 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 188))  COMMA_SOURCE_FILE ("instruction-var.galgas", 188)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 189)) ;
  {
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, object->mProperty_mVarName, var_targetType_7224, var_omnibusName_7657, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("instruction-var.galgas", 190)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 190)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_7657.getter_string (SOURCE_FILE ("instruction-var.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 192)), var_targetType_7224, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 192)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_varDeclarationInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_varDeclarationInstructionAST.mSlotID,
                                                    extensionMethod_varDeclarationInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_varDeclarationInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_varDeclarationInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@letInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGraph.setter_noteNode (object->mProperty_mOptionalTypeName COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
      }
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                                                              extensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@letInstructionWithAssignmentAST instructionSemanticAnalysis'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_omnibusType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 69)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 70)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 70)) ;
  }
  GALGAS_omnibusType var_targetType_3207 = temp_0 ;
  GALGAS_objectIR var_expressionResult_3788 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_3207, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3788, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 73)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_3788, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 86)) ;
  }
  GALGAS_objectIR var_result_3939 = function_checkAssignmentCompatibility (constinArgument_inContext.getter_mAssignmentOperatorMap (HERE), var_expressionResult_3788, var_targetType_3207, object->mProperty_mConstantName.getter_location (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 91)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) extensionGetter_type (var_result_3939, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)).operator_not (SOURCE_FILE ("instruction-let.galgas", 100)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 101)), extensionGetter_omnibusTypeDescriptionName (var_result_3939, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 101)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 101)), fixItArray3  COMMA_SOURCE_FILE ("instruction-let.galgas", 101)) ;
      var_result_3939.drop () ; // Release error dropped variable
    }
  }
  GALGAS_lstring var_omnibusName_4369 = GALGAS_lstring::constructor_new (object->mProperty_mConstantName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-let.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)), object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 104))  COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 105)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_omnibusTypeDescriptionName (var_result_3939, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_4369.getter_string (SOURCE_FILE ("instruction-let.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)), extensionGetter_type (var_result_3939, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-let.galgas", 107)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_result_3939, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 109)), function_llvmNameForLocalVariable (var_omnibusName_4369.getter_string (SOURCE_FILE ("instruction-let.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 110)), var_result_3939, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)) ;
      }
    }
  }
  {
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, object->mProperty_mConstantName, GALGAS_bool (false), extensionGetter_type (var_result_3939, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 114)), var_omnibusName_4369, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 114)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_letInstructionWithAssignmentAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                                                    extensionMethod_letInstructionWithAssignmentAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_instructionSemanticAnalysis (defineExtensionMethod_letInstructionWithAssignmentAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'enter_NOP_function'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enter_5F_NOP_5F_function (GALGAS_declarationListAST & ioArgument_ioDeclarationListAST,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-nop.galgas", 14)) ;
  temp_0.addAssign_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)).getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 14))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)) ;
  GALGAS_lstringlist var_attributeList_902 = temp_0 ;
  GALGAS_instructionListAST temp_1 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  temp_1.addAssign_operation (GALGAS_instructionNOP::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("instruction-nop.galgas", 15))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 15))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  GALGAS_instructionListAST var_instructionList_967 = temp_1 ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("instruction-nop.galgas", 18)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 20)), GALGAS_string ("nop").getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 21)), var_attributeList_902, GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("instruction-nop.galgas", 23)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 24)), var_instructionList_967, GALGAS_location::constructor_nowhere (SOURCE_FILE ("instruction-nop.galgas", 26))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 17))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@instructionNOP noteInstructionTypesInPrecedenceGraph'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_instructionNOP_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * /* inObject */,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_instructionNOP_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_instructionNOP.mSlotID,
                                                              extensionMethod_instructionNOP_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_instructionNOP_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_instructionNOP_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@instructionNOP instructionSemanticAnalysis'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_instructionNOP_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_instructionNOP.mSlotID,
                                                    extensionMethod_instructionNOP_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_instructionNOP_instructionSemanticAnalysis (defineExtensionMethod_instructionNOP_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@panicInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionAST * object = (const cPtr_panicInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 33)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_panicInstructionAST.mSlotID,
                                                              extensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@panicInstructionAST instructionSemanticAnalysis'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)), fixItArray1  COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)) ;
    }
  }
  GALGAS_instructionListIR var_unusedInstructionListIR_3020 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 56)) ;
  GALGAS_objectIR var_result_3411 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("instruction-panic.galgas", 59)), constinArgument_inContext.getter_mPanicCodeType (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_3020, var_result_3411, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 57)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR_3020.getter_length (SOURCE_FILE ("instruction-panic.galgas", 72)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue != test_3.boolEnum ()) {
      test_3 = var_result_3411.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 73)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 73)) ;
    }
    GALGAS_bool test_4 = test_3 ;
    if (kBoolTrue != test_4.boolEnum ()) {
      test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_omnibusTypeDescriptionName (var_result_3411, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 74)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 74)))) ;
    }
    test_2 = test_4.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("throw expression should be a literal integer"), fixItArray5  COMMA_SOURCE_FILE ("instruction-panic.galgas", 75)) ;
    }
  }
  if (kBoolFalse == test_2) {
    GALGAS_bigint var_min_3770 ;
    GALGAS_bigint var_max_3783 ;
    GALGAS_bool joker_3785_2 ; // Joker input parameter
    GALGAS_uint joker_3785_1 ; // Joker input parameter
    constinArgument_inContext.getter_mPanicCodeType (HERE).getter_kind (HERE).method_integer (var_min_3770, var_max_3783, joker_3785_2, joker_3785_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 77)) ;
    GALGAS_bigint var_throwValue_3841 ;
    GALGAS_omnibusType joker_3817_1 ; // Joker input parameter
    var_result_3411.method_literalInteger (joker_3817_1, var_throwValue_3841, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 78)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      GALGAS_bool test_7 = GALGAS_bool (kIsStrictInf, var_throwValue_3841.objectCompare (var_min_3770)) ;
      if (kBoolTrue != test_7.boolEnum ()) {
        test_7 = GALGAS_bool (kIsStrictSup, var_throwValue_3841.objectCompare (var_max_3783)) ;
      }
      test_6 = test_7.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.getter_mPanicCodeType (HERE).getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)), fixItArray8  COMMA_SOURCE_FILE ("instruction-panic.galgas", 80)) ;
      }
    }
    if (kBoolFalse == test_6) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 82)).boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_throwValue_3841  COMMA_SOURCE_FILE ("instruction-panic.galgas", 83))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)) ;
        }
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_panicInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_panicInstructionAST.mSlotID,
                                                    extensionMethod_panicInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_panicInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_panicInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@panicInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_panicInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionIR * object = (const cPtr_panicInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (object->mProperty_mThrowLocation, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-panic.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (object->mProperty_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (object->mProperty_mPanicCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_panicInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_panicInstructionIR.mSlotID,
                                            extensionMethod_panicInstructionIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_panicInstructionIR_llvmInstructionCode (defineExtensionMethod_panicInstructionIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@panicInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_panicInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                        GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionIR * object = (const cPtr_panicInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionIR) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (object->mProperty_mThrowLocation, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 118))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_panicInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_panicInstructionIR.mSlotID,
                                                extensionMethod_panicInstructionIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_panicInstructionIR_enterAccessibleEntities (defineExtensionMethod_panicInstructionIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@ifInstructionAST noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                              extensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@ifInstructionAST instructionSemanticAnalysis'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_objectIR var_testResult_4999 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 113)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResult_4999, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 110)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResult_4999, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 123)) ;
  }
  GALGAS_implicitBooleanConversionResult var_booleanResult_5372 ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.getter_mImplicitConversionToBooleanMap (HERE), var_testResult_4999, object->mProperty_mTestExpressionEndLocation, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, var_booleanResult_5372, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 128)) ;
  switch (var_booleanResult_5372.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = object->mProperty_mStaticIfExpression.operator_not (SOURCE_FILE ("instruction-if.galgas", 139)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticWarning (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
        }
      }
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = object->mProperty_mStaticIfExpression.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is not static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-if.galgas", 144)) ;
        }
      }
    }
    break ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_5877 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 149)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mThenInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, object->mProperty_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_5877, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 150)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_6366 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 163)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mElseInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, object->mProperty_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_6366, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 164)) ;
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 176)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (extensionGetter_llvmName (var_booleanResult_5372, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 179)), object->mProperty_mTestExpressionEndLocation, var_thenInstructionGenerationList_5877, var_elseInstructionGenerationList_6366  COMMA_SOURCE_FILE ("instruction-if.galgas", 178))  COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_ifInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                    extensionMethod_ifInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_ifInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_ifInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@ifInstructionIR llvmInstructionCode'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_ifInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  GALGAS_string var_labelTrue_7919 = GALGAS_string ("if.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)) ;
  GALGAS_string var_labelFalse_7986 = GALGAS_string ("if.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  GALGAS_string var_labelEnd_8052 = GALGAS_string ("if.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (object->mProperty_mLLVMTestName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelTrue_7919, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelFalse_7986, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_7919.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8052, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 213)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_7986.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8052, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_8052.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_ifInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                            extensionMethod_ifInstructionIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_ifInstructionIR_llvmInstructionCode (defineExtensionMethod_ifInstructionIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@ifInstructionIR enterAccessibleEntities'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_ifInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mThenInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 228)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mElseInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 229)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_ifInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                                extensionMethod_ifInstructionIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_ifInstructionIR_enterAccessibleEntities (defineExtensionMethod_ifInstructionIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@syncInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionAST * object = (const cPtr_syncInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionAST) ;
  cEnumerator_syncInstructionBranchListAST enumerator_5029 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_5029.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5029.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 141)) ;
    enumerator_5029.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_syncInstructionAST.mSlotID,
                                                              extensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@syncInstructionAST instructionSemanticAnalysis'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_guardedCommandIRList var_guardedCommandIRList_6058 = GALGAS_guardedCommandIRList::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 161)) ;
  cEnumerator_syncInstructionBranchListAST enumerator_6129 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_6129.hasCurrentObject ()) {
    switch (enumerator_6129.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandAST::kNotBuilt:
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolean * extractPtr_7524 = (const cEnumAssociatedValues_guardedCommandAST_boolean *) (enumerator_6129.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isContinue = extractPtr_7524->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_7524->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_7524->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_6273 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 165)) ;
        GALGAS_objectIR var_expressionResult_6735 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes.operator_or (GALGAS_routineAttributes::constructor_guard (SOURCE_FILE ("instruction-event.galgas", 168)) COMMA_SOURCE_FILE ("instruction-event.galgas", 168)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 169)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_6273, var_expressionResult_6735, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 166)) ;
        {
        extensionSetter_appendLoadWhenReference (var_guardInstructionGenerationList_6273, ioArgument_ioTemporaries, var_expressionResult_6735, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 179)) ;
        }
        GALGAS_implicitBooleanConversionResult var_booleanResult_7128 ;
        extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.getter_mImplicitConversionToBooleanMap (HERE), var_expressionResult_6735, extractedValue_endOfExpression, ioArgument_ioTemporaries, var_guardInstructionGenerationList_6273, ioArgument_ioAllocaList, var_booleanResult_7128, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 180)) ;
        switch (var_booleanResult_7128.enumValue ()) {
        case GALGAS_implicitBooleanConversionResult::kNotBuilt:
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
          {
            TC_Array <C_FixItDescription> fixItArray0 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is a compile time value"), fixItArray0  COMMA_SOURCE_FILE ("instruction-event.galgas", 190)) ;
          }
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
          {
          }
          break ;
        }
        var_guardedCommandIRList_6058.addAssign_operation (GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_isContinue, var_guardInstructionGenerationList_6273, extensionGetter_llvmName (var_booleanResult_7128, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 196))  COMMA_SOURCE_FILE ("instruction-event.galgas", 193))  COMMA_SOURCE_FILE ("instruction-event.galgas", 193)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolAndSync * extractPtr_13209 = (const cEnumAssociatedValues_guardedCommandAST_boolAndSync *) (enumerator_6129.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isContinue = extractPtr_13209->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_13209->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_warnsOnStaticExpression = extractPtr_13209->mAssociatedValue2 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_13209->mAssociatedValue3 ;
        const GALGAS_lbool extractedValue_usesSelf = extractPtr_13209->mAssociatedValue4 ;
        const GALGAS_lstringlist extractedValue_nameList = extractPtr_13209->mAssociatedValue5 ;
        const GALGAS_effectiveArgumentListAST extractedValue_parameterList = extractPtr_13209->mAssociatedValue6 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_7687 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 199)) ;
        GALGAS_objectIR var_expressionResult_8159 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_guard (SOURCE_FILE ("instruction-event.galgas", 203)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 204)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_7687, var_expressionResult_8159, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 201)) ;
        {
        extensionSetter_appendLoadWhenReference (var_boolExpInstructionGenerationList_7687, ioArgument_ioTemporaries, var_expressionResult_8159, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 214)) ;
        }
        GALGAS_implicitBooleanConversionResult var_booleanResult_8549 ;
        extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.getter_mImplicitConversionToBooleanMap (HERE), var_expressionResult_8159, extractedValue_endOfExp, ioArgument_ioTemporaries, var_boolExpInstructionGenerationList_7687, ioArgument_ioAllocaList, var_booleanResult_8549, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 215)) ;
        switch (var_booleanResult_8549.enumValue ()) {
        case GALGAS_implicitBooleanConversionResult::kNotBuilt:
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
          {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = extractedValue_warnsOnStaticExpression.boolEnum () ;
              if (kBoolTrue == test_1) {
                TC_Array <C_FixItDescription> fixItArray2 ;
                inCompiler->emitSemanticWarning (extractedValue_endOfExp, GALGAS_string ("guarded expression is static"), fixItArray2  COMMA_SOURCE_FILE ("instruction-event.galgas", 226)) ;
              }
            }
          }
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
          {
          }
          break ;
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_9285 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 241)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_9360 ;
        GALGAS_lstring var_guardMangledName_9392 ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = extractedValue_usesSelf.getter_bool (HERE).boolEnum () ;
          if (kBoolTrue == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = constinArgument_inSelfType.getter_kind (HERE).getter_isVoid (SOURCE_FILE ("instruction-event.galgas", 245)).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (extractedValue_usesSelf.getter_location (SOURCE_FILE ("instruction-event.galgas", 246)), GALGAS_string ("'self' is not available in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-event.galgas", 246)) ;
                var_guardEffectiveParameterListIR_9360.drop () ; // Release error dropped variable
                var_guardMangledName_9392.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_4) {
              GALGAS_lstringlist var_propertyList_9640 = extractedValue_nameList ;
              GALGAS_lstring var_guardName_9700 ;
              {
              var_propertyList_9640.setter_popLast (var_guardName_9700, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 249)) ;
              }
              GALGAS_objectIR var_currentObject_9735 = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 250))  COMMA_SOURCE_FILE ("instruction-event.galgas", 250)) ;
              cEnumerator_lstringlist enumerator_9841 (var_propertyList_9640, kENUMERATION_UP) ;
              while (enumerator_9841.hasCurrentObject ()) {
                {
                routine_handlePropertyAccessInExpression (var_currentObject_9735, enumerator_9841.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 252)) ;
                }
                enumerator_9841.gotoNextObject () ;
              }
              {
              routine_analyzeGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObject_9735, var_guardName_9700, extractedValue_parameterList, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_9285, var_guardEffectiveParameterListIR_9360, var_guardMangledName_9392, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 261)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, extractedValue_nameList.getter_length (SOURCE_FILE ("instruction-event.galgas", 278)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (extractedValue_nameList.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 279)).getter_location (SOURCE_FILE ("instruction-event.galgas", 279)), GALGAS_string ("Standalone guard are not handled"), fixItArray7  COMMA_SOURCE_FILE ("instruction-event.galgas", 279)) ;
              var_guardMangledName_9392.drop () ; // Release error dropped variable
              var_guardEffectiveParameterListIR_9360.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_6) {
            GALGAS_lstringlist var_propertyList_11070 = extractedValue_nameList ;
            GALGAS_lstring var_globalReceiverName_11138 ;
            {
            var_propertyList_11070.setter_popFirst (var_globalReceiverName_11138, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 284)) ;
            }
            GALGAS_lstring var_guardName_11186 ;
            {
            var_propertyList_11070.setter_popLast (var_guardName_11186, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 285)) ;
            }
            GALGAS_objectIR var_currentObjectIR_11356 ;
            extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, var_globalReceiverName_11138, constinArgument_inMode, ioArgument_ioTemporaries.getter_mInitializedDriverSet (HERE), var_currentObjectIR_11356, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 286)) ;
            cEnumerator_lstringlist enumerator_11409 (var_propertyList_11070, kENUMERATION_UP) ;
            while (enumerator_11409.hasCurrentObject ()) {
              {
              routine_handlePropertyAccessInExpression (var_currentObjectIR_11356, enumerator_11409.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 293)) ;
              }
              enumerator_11409.gotoNextObject () ;
            }
            {
            routine_analyzeGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObjectIR_11356, var_guardName_11186, extractedValue_parameterList, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_9285, var_guardEffectiveParameterListIR_9360, var_guardMangledName_9392, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 302)) ;
            }
          }
        }
        switch (var_booleanResult_8549.enumValue ()) {
        case GALGAS_implicitBooleanConversionResult::kNotBuilt:
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
          {
            const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * extractPtr_12758 = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) (var_booleanResult_8549.unsafePointer ()) ;
            const GALGAS_bool extractedValue_boolValue = extractPtr_12758->mAssociatedValue0 ;
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = extractedValue_boolValue.boolEnum () ;
              if (kBoolTrue == test_8) {
                var_guardedCommandIRList_6058.addAssign_operation (GALGAS_guardedCommandIR::constructor_sync (extractedValue_isContinue, var_guardMangledName_9392.getter_string (HERE), var_guardInstructionGenerationList_9285, var_guardEffectiveParameterListIR_9360  COMMA_SOURCE_FILE ("instruction-event.galgas", 322))  COMMA_SOURCE_FILE ("instruction-event.galgas", 322)) ;
              }
            }
            if (kBoolFalse == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_guardMangledName_9392.getter_location (SOURCE_FILE ("instruction-event.galgas", 329)), GALGAS_string ("false guard not handled yet"), fixItArray9  COMMA_SOURCE_FILE ("instruction-event.galgas", 329)) ;
            }
          }
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
          {
            const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable * extractPtr_13199 = (const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable *) (var_booleanResult_8549.unsafePointer ()) ;
            const GALGAS_string extractedValue_llvmName = extractPtr_13199->mAssociatedValue0 ;
            var_guardedCommandIRList_6058.addAssign_operation (GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_isContinue, var_boolExpInstructionGenerationList_7687, extractedValue_llvmName, var_guardMangledName_9392.getter_string (HERE), var_guardInstructionGenerationList_9285, var_guardEffectiveParameterListIR_9360  COMMA_SOURCE_FILE ("instruction-event.galgas", 332))  COMMA_SOURCE_FILE ("instruction-event.galgas", 332)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_6129.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 368)) ;
  }
  GALGAS_syncInstructionBranchListIR var_syncInstructionBranchListIR_14360 = GALGAS_syncInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 369)) ;
  cEnumerator_syncInstructionBranchListAST enumerator_14418 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  cEnumerator_guardedCommandIRList enumerator_14462 (var_guardedCommandIRList_6058, kENUMERATION_UP) ;
  while (enumerator_14418.hasCurrentObject () && enumerator_14462.hasCurrentObject ()) {
    GALGAS_instructionListIR var_branchInstructionGenerationList_14520 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 371)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_14418.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_14418.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_14520, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 372)) ;
    var_syncInstructionBranchListIR_14360.addAssign_operation (enumerator_14462.current_mGuardedCommand (HERE), var_branchInstructionGenerationList_14520  COMMA_SOURCE_FILE ("instruction-event.galgas", 384)) ;
    enumerator_14418.gotoNextObject () ;
    enumerator_14462.gotoNextObject () ;
  }
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_on_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 386)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_syncInstructionBranchListIR_14360  COMMA_SOURCE_FILE ("instruction-event.galgas", 388))  COMMA_SOURCE_FILE ("instruction-event.galgas", 388)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_syncInstructionAST.mSlotID,
                                                    extensionMethod_syncInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_syncInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'analyzeGuardCall'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_guardMangledName_16122 = extensionGetter_mangledName (constinArgument_inEffectiveParameterList, extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 409)).getter_omnibusTypeDescriptionName (SOURCE_FILE ("instruction-event.galgas", 409)), constinArgument_inGuardName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 409)) ;
  GALGAS_bool var_isPublic_16368 ;
  GALGAS_routineTypedSignature var_formalSignature_16412 ;
  GALGAS_lstring var_guardRoutineUserLLVMName_16442 ;
  GALGAS_lstring joker_16444 ; // Joker input parameter
  constinArgument_inContext.getter_mGuardMap (HERE).method_searchKey (var_guardMangledName_16122, var_isPublic_16368, var_formalSignature_16412, var_guardRoutineUserLLVMName_16442, joker_16444, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 411)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_isPublic_16368.operator_not (SOURCE_FILE ("instruction-event.galgas", 413)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-event.galgas", 414)), GALGAS_string ("this guard is not public"), fixItArray1  COMMA_SOURCE_FILE ("instruction-event.galgas", 414)) ;
      outArgument_outGuardMangledName.drop () ; // Release error dropped variable
      outArgument_outEffectiveParameterListIR.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outGuardMangledName = var_guardRoutineUserLLVMName_16442 ;
    GALGAS_procCallEffectiveParameterListIR temp_2 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 418)) ;
    temp_2.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-event.galgas", 418)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("instruction-event.galgas", 418)) ;
    outArgument_outEffectiveParameterListIR = temp_2 ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_16412, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.getter_location (HERE), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 419)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@syncInstructionIR llvmInstructionCode'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syncInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionIR * object = (const cPtr_syncInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mUsesGuards = GALGAS_bool (true) ;
  GALGAS_string var_startLabel_19585 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-event.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 487)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 488)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_19585, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 490)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 490)) ;
  GALGAS_string var_startLabelName_19749 = var_startLabel_19585.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 491)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_19749.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 492)) ;
  GALGAS_string var_exitLabelName_19833 = var_startLabel_19585.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 493)) ;
  GALGAS_string var_selectLabelName_19878 = var_startLabel_19585.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 494)) ;
  GALGAS_string var_errorLabelName_19924 = var_startLabel_19585.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 495)) ;
  GALGAS_string var_currentStartBranchLabel_19978 = var_startLabelName_19749 ;
  cEnumerator_syncInstructionBranchListIR enumerator_20038 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  GALGAS_uint index_20001 ((uint32_t) 0) ;
  while (enumerator_20038.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_20073 = GALGAS_string ("%").add_operation (var_startLabel_19585, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 498)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 498)).add_operation (index_20001.getter_string (SOURCE_FILE ("instruction-event.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 498)) ;
    GALGAS_bool var_isWhileGuardedCommand_20143 ;
    switch (enumerator_20038.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_20981 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_20038.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isExitCommand = extractPtr_20981->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_20981->mAssociatedValue1 ;
        const GALGAS_string extractedValue_boolGuardBoolLLVMName = extractPtr_20981->mAssociatedValue2 ;
        var_isWhileGuardedCommand_20143 = extractedValue_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 503)) ;
        GALGAS_string var_acceptedLabelName_20448 = var_startLabel_19585.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 504)).add_operation (index_20001.getter_string (SOURCE_FILE ("instruction-event.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 504)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 504)) ;
        GALGAS_string var_rejectedLabelName_20511 = var_startLabel_19585.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 505)).add_operation (index_20001.getter_string (SOURCE_FILE ("instruction-event.galgas", 505)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 505)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 505)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extractedValue_boolGuardBoolLLVMName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 506)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 506)).add_operation (var_acceptedLabelName_20448, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 506)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 506)).add_operation (var_rejectedLabelName_20511, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 506)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 506)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 506)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_20448.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 507)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 508)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_20511, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 509)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 509)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 509)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_20511.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 510)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_20073, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 511)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 511)).add_operation (extractedValue_boolGuardBoolLLVMName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 511)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 511)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_22715 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_20038.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isExitCommand = extractPtr_22715->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_expInstructionList = extractPtr_22715->mAssociatedValue1 ;
        const GALGAS_string extractedValue_boolGuardLLVMName = extractPtr_22715->mAssociatedValue2 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_22715->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_22715->mAssociatedValue4 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_22715->mAssociatedValue5 ;
        var_isWhileGuardedCommand_20143 = extractedValue_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)) ;
        GALGAS_string var_testOkLabelName_21292 = var_startLabel_19585.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (index_20001.getter_string (SOURCE_FILE ("instruction-event.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)) ;
        GALGAS_string var_testExitLabelName_21363 = var_startLabel_19585.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 516)).add_operation (index_20001.getter_string (SOURCE_FILE ("instruction-event.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 516)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 516)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extractedValue_boolGuardLLVMName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 517)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 517)).add_operation (var_testOkLabelName_21292, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 517)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 517)).add_operation (var_testExitLabelName_21363, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 517)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 517)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 517)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_21292.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 518)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 519)) ;
        GALGAS_string var_guardAcceptationLabelName_21715 = var_startLabel_19585.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (index_20001.getter_string (SOURCE_FILE ("instruction-event.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_21715, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 521)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 521)).add_operation (extractedValue_guardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 521)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 522)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_21943 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_21943.hasCurrentObject ()) {
          switch (enumerator_21943.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21943.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (extensionGetter_llvmName (enumerator_21943.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 526)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21943.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 528)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 528)).add_operation (extensionGetter_llvmName (enumerator_21943.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 528)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 528)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21943.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).add_operation (extensionGetter_llvmName (enumerator_21943.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 530)) ;
            }
            break ;
          }
          if (enumerator_21943.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 533)) ;
          }
          enumerator_21943.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 535)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_21363, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 536)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 536)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 536)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_21363.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 537)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_20073, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 538)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 538)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 538)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_21715, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)).add_operation (var_testOkLabelName_21292, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 539)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_19978, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 540)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 540)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_sync:
      {
        const cEnumAssociatedValues_guardedCommandIR_sync * extractPtr_23578 = (const cEnumAssociatedValues_guardedCommandIR_sync *) (enumerator_20038.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isExitCommand = extractPtr_23578->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_23578->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_23578->mAssociatedValue2 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_23578->mAssociatedValue3 ;
        var_isWhileGuardedCommand_20143 = extractedValue_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 543)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_20073, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 544)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 544)).add_operation (extractedValue_guardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 544)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 545)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_23129 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_23129.hasCurrentObject ()) {
          switch (enumerator_23129.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23129.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)).add_operation (extensionGetter_llvmName (enumerator_23129.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 549)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23129.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 551)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 551)).add_operation (extensionGetter_llvmName (enumerator_23129.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 551)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 551)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23129.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)).add_operation (extensionGetter_llvmName (enumerator_23129.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 553)) ;
            }
            break ;
          }
          if (enumerator_23129.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 556)) ;
          }
          enumerator_23129.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 558)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_23612 = var_startLabel_19585.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)).add_operation (index_20001.getter_string (SOURCE_FILE ("instruction-event.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)) ;
    GALGAS_string var_rejectedLabelName_23672 = var_startLabel_19585.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 561)).add_operation (index_20001.getter_string (SOURCE_FILE ("instruction-event.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 561)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_20073, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)).add_operation (var_acceptedLabelName_23612, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)).add_operation (var_rejectedLabelName_23672, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 562)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_23612.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 563)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 563)) ;
    extensionMethod_instructionListLLVMCode (enumerator_20038.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 564)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = var_isWhileGuardedCommand_20143.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = var_startLabelName_19749 ;
    }else if (kBoolFalse == test_1) {
      temp_0 = var_exitLabelName_19833 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 565)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 565)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_23672.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 566)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 566)) ;
    var_currentStartBranchLabel_19978 = var_rejectedLabelName_23672 ;
    enumerator_20038.gotoNextObject () ;
    index_20001.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 497)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_19878, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 569)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_19878, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)).add_operation (var_startLabelName_19749, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)).add_operation (var_errorLabelName_19924, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 570)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_19924.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 571)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_19833, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 573)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 573)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 573)) ;
    }
  }
  if (kBoolFalse == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (object->mProperty_mSelectInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 575)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 575)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 575)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 576)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 576)).add_operation (object->mProperty_mSelectInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 576)).getter_string (SOURCE_FILE ("instruction-event.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 576)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 576)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 576)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 577)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 577)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 577)).getter_string (SOURCE_FILE ("instruction-event.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 577)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 577)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 577)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 578)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_19833.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 580)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_syncInstructionIR.mSlotID,
                                            extensionMethod_syncInstructionIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncInstructionIR_llvmInstructionCode (defineExtensionMethod_syncInstructionIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@syncInstructionIR enterAccessibleEntities'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syncInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                       GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionIR * object = (const cPtr_syncInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionIR) ;
  GALGAS_uint var_branchCount_25408 = object->mProperty_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-event.galgas", 589)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_25408)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_25408 ;
    }
  }
  cEnumerator_syncInstructionBranchListIR enumerator_25593 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  while (enumerator_25593.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_25593.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 594)) ;
    switch (enumerator_25593.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_25912 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_25593.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_25912->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 597)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_sync:
      {
        const cEnumAssociatedValues_guardedCommandIR_sync * extractPtr_26144 = (const cEnumAssociatedValues_guardedCommandIR_sync *) (enumerator_25593.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_26144->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_26144->mAssociatedValue2 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 599)) ;
        ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-event.galgas", 600)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_26521 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_25593.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_26521->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_26521->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_26521->mAssociatedValue4 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 602)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 603)) ;
        ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-event.galgas", 604)) ;
      }
      break ;
    }
    enumerator_25593.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-event.galgas", 607)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (object->mProperty_mSelectInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 608))  COMMA_SOURCE_FILE ("instruction-event.galgas", 608)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syncInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_syncInstructionIR.mSlotID,
                                                extensionMethod_syncInstructionIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syncInstructionIR_enterAccessibleEntities (defineExtensionMethod_syncInstructionIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@whileInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mWhileInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 47)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_m_5F_while_5F_Expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 48)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                                                              extensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@whileInstructionAST instructionSemanticAnalysis'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_instructionListIR var_testInstructionGenerationList_3341 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 67)) ;
  GALGAS_objectIR var_testValue_3741 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_m_5F_while_5F_Expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 71)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_3341, var_testValue_3741, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 68)) ;
  {
  extensionSetter_appendLoadWhenReference (var_testInstructionGenerationList_3341, ioArgument_ioTemporaries, var_testValue_3741, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 81)) ;
  }
  GALGAS_implicitBooleanConversionResult var_booleanResult_4112 ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.getter_mImplicitConversionToBooleanMap (HERE), var_testValue_3741, object->mProperty_mEndOf_5F_test_5F_expression, ioArgument_ioTemporaries, var_testInstructionGenerationList_3341, ioArgument_ioAllocaList, var_booleanResult_4112, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 86)) ;
  switch (var_booleanResult_4112.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be a compile time expression"), fixItArray0  COMMA_SOURCE_FILE ("instruction-while.galgas", 96)) ;
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
    }
    break ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_4698 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 107)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 108)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, object->mProperty_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4698, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 109)) ;
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 121)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 124)), var_testInstructionGenerationList_3341, extensionGetter_llvmName (var_booleanResult_4112, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 126)), var_instructionGenerationList_4698  COMMA_SOURCE_FILE ("instruction-while.galgas", 123))  COMMA_SOURCE_FILE ("instruction-while.galgas", 123)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_whileInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                                                    extensionMethod_whileInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_whileInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_whileInstructionAST_instructionSemanticAnalysis, NULL) ;

