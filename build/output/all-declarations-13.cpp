#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@truncateExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  const GALGAS_truncateExpressionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 61)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_truncateExpressionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_truncateExpressionAST temp_3 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-truncate.galgas", 63)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                                             extensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_truncateExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@truncateExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_objectIR var_expressionResult_4433 ;
  const GALGAS_truncateExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 90)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4433, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 87)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4433, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 100)) ;
  }
  const GALGAS_truncateExpressionAST temp_1 = object ;
  GALGAS_omnibusType temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_3) {
    const GALGAS_truncateExpressionAST temp_4 = object ;
    temp_2 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_4.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 107)) ;
  }
  GALGAS_omnibusType var_resultType_4591 = temp_2 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_resultType_4591.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 110)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 110)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_truncateExpressionAST temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type is not an integer type"), fixItArray7  COMMA_SOURCE_FILE ("expression-truncate.galgas", 111)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = extensionGetter_type (var_expressionResult_4433, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 112)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 112)).boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_truncateExpressionAST temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mEndOfExpression (), GALGAS_string ("expression type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-truncate.galgas", 113)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_8) {
      GALGAS_bigint var_minSource_5069 ;
      GALGAS_bigint var_maxSource_5088 ;
      GALGAS_uint var_expSize_5114 ;
      GALGAS_bool joker_5090_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4433, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 115)).readProperty_kind ().method_integer (var_minSource_5069, var_maxSource_5088, joker_5090_1, var_expSize_5114, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 115)) ;
      GALGAS_bigint var_minTarget_5163 ;
      GALGAS_bigint var_maxTarget_5182 ;
      GALGAS_uint var_resultSize_5219 ;
      GALGAS_bool joker_5193 ; // Joker input parameter
      var_resultType_4591.readProperty_kind ().method_integer (var_minTarget_5163, var_maxTarget_5182, joker_5193, var_resultSize_5219, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 116)) ;
      GALGAS_bool test_11 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5163.objectCompare (var_minSource_5069)) ;
      if (kBoolTrue == test_11.boolEnum ()) {
        test_11 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5182.objectCompare (var_maxSource_5088)) ;
      }
      GALGAS_bool var_alwaysPossible_5243 = test_11 ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = var_alwaysPossible_5243.boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_truncateExpressionAST temp_13 = object ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("useless explicit conversion"), fixItArray14  COMMA_SOURCE_FILE ("expression-truncate.galgas", 119)) ;
        }
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsStrictInf, var_resultSize_5219.objectCompare (var_expSize_5114)).boolEnum () ;
        if (kBoolTrue == test_15) {
          {
          routine_getNewTempValue (var_resultType_4591, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 122)) ;
          }
          ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4433  COMMA_SOURCE_FILE ("expression-truncate.galgas", 123))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 123)) ;
        }
      }
      if (kBoolFalse == test_15) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_4433, var_resultType_4591, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 128)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_truncateExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                          extensionMethod_truncateExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_truncateExpressionAST_analyzeExpression (defineExtensionMethod_truncateExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@truncateInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_truncateInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateInstructionIR * object = (const cPtr_truncateInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_truncateInstructionIR) ;
  const GALGAS_truncateInstructionIR temp_0 = object ;
  GALGAS_string var_operandType_6647 = extensionGetter_llvmTypeName (temp_0.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 151)) ;
  const GALGAS_truncateInstructionIR temp_1 = object ;
  const GALGAS_truncateInstructionIR temp_2 = object ;
  const GALGAS_truncateInstructionIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (var_operandType_6647, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 152)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_truncateInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_truncateInstructionIR.mSlotID,
                                            extensionMethod_truncateInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_truncateInstructionIR_llvmInstructionCode (defineExtensionMethod_truncateInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofControlRegisterAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_addressofControlRegisterAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                              const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                              GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_addressofControlRegisterAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_addressofControlRegisterAST.mSlotID,
                                                             extensionMethod_addressofControlRegisterAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_addressofControlRegisterAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_addressofControlRegisterAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofControlRegisterAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_addressofControlRegisterAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addressofControlRegisterAST * object = (const cPtr_addressofControlRegisterAST *) inObject ;
  macroValidSharedObject (object, cPtr_addressofControlRegisterAST) ;
  const GALGAS_addressofControlRegisterAST temp_0 = object ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 44)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_addressofControlRegisterAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_addressofControlRegisterAST.mSlotID,
                                                             extensionMethod_addressofControlRegisterAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_addressofControlRegisterAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_addressofControlRegisterAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofControlRegisterAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_llvmRegisterAddressName_3923 ;
  const GALGAS_addressofControlRegisterAST temp_0 = object ;
  GALGAS_omnibusType joker_3825 ; // Joker input parameter
  GALGAS_uint joker_3849 ; // Joker input parameter
  GALGAS_sliceMap joker_3865 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GALGAS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, joker_3825, joker_3849, joker_3865, var_llvmRegisterAddressName_3923, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 64)) ;
  GALGAS_unifiedTypeMapEntry var_resultTypeProxy_3978 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GALGAS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-addressof-control-register.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 82)).getter_nowhere (SOURCE_FILE ("expression-addressof-control-register.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 81)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_llvmNamedValue (extensionGetter_type (var_resultTypeProxy_3978, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 84)), var_llvmRegisterAddressName_3923  COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 84)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_addressofControlRegisterAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_addressofControlRegisterAST.mSlotID,
                                          extensionMethod_addressofControlRegisterAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_addressofControlRegisterAST_analyzeExpression (defineExtensionMethod_addressofControlRegisterAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_addressofExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                         const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                         GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_addressofExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_addressofExpressionAST.mSlotID,
                                                             extensionMethod_addressofExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_addressofExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_addressofExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_addressofExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addressofExpressionAST * object = (const cPtr_addressofExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addressofExpressionAST) ;
  const GALGAS_addressofExpressionAST temp_0 = object ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (temp_0.readProperty_mLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 46)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_addressofExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_addressofExpressionAST.mSlotID,
                                                             extensionMethod_addressofExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_addressofExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_addressofExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
      const GALGAS_addressofExpressionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLValue ().readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("addressof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 67)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_LValueRepresentation var_lvalueIR_3897 ;
    const GALGAS_addressofExpressionAST temp_3 = object ;
    extensionMethod_analyzeLValue (temp_3.readProperty_mLValue (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_3897, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 70)) ;
    GALGAS_unifiedTypeMapEntry var_resultTypeProxy_3927 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GALGAS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-addressof-regular-var.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 84)).getter_nowhere (SOURCE_FILE ("expression-addressof-regular-var.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 83)) ;
    GALGAS_omnibusType var_resultType_4057 = extensionGetter_type (var_resultTypeProxy_3927, inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 86)) ;
    {
    routine_getNewTempValue (var_resultType_4057, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 87)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_addressofInstructionIR::constructor_new (outArgument_outResult, var_lvalueIR_3897  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 88))  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 88)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_addressofExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_addressofExpressionAST.mSlotID,
                                          extensionMethod_addressofExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_addressofExpressionAST_analyzeExpression (defineExtensionMethod_addressofExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addressofInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_addressofInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                        const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                        GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addressofInstructionIR * object = (const cPtr_addressofInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_addressofInstructionIR) ;
  const GALGAS_addressofInstructionIR temp_0 = object ;
  const GALGAS_addressofInstructionIR temp_1 = object ;
  const GALGAS_addressofInstructionIR temp_2 = object ;
  const GALGAS_addressofInstructionIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (GALGAS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mLValue ().readProperty_type ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (temp_2.readProperty_mLValue ().readProperty_llvmName (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)).add_operation (extensionGetter_llvmTypeName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)).add_operation (GALGAS_string (" ; addressof\n"), inCompiler COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof-regular-var.galgas", 111)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_addressofInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_addressofInstructionIR.mSlotID,
                                            extensionMethod_addressofInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_addressofInstructionIR_llvmInstructionCode (defineExtensionMethod_addressofInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sizeofExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                      const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                      GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sizeofExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_sizeofExpressionAST.mSlotID,
                                                             extensionMethod_sizeofExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sizeofExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_sizeofExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofTypeAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sizeofTypeAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sizeofTypeAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_sizeofTypeAST.mSlotID,
                                                             extensionMethod_sizeofTypeAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sizeofTypeAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_sizeofTypeAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sizeofExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                      GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sizeofExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_sizeofExpressionAST.mSlotID,
                                                             extensionMethod_sizeofExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sizeofExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_sizeofExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofTypeAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sizeofTypeAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sizeofTypeAST * object = (const cPtr_sizeofTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_sizeofTypeAST) ;
  {
  const GALGAS_sizeofTypeAST temp_0 = object ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-sizeof.galgas", 75)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sizeofTypeAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_sizeofTypeAST.mSlotID,
                                                             extensionMethod_sizeofTypeAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sizeofTypeAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_sizeofTypeAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
      const GALGAS_sizeofExpressionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLValue ().readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("sizeof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 98)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_omnibusType var_type_4731 ;
    const GALGAS_sizeofExpressionAST temp_3 = object ;
    extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inContext, constinArgument_inSelfType, temp_3.readProperty_mLValue (), var_type_4731, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 101)) ;
    GALGAS_unifiedTypeMapEntry var_resultTypeProxy_4756 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GALGAS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-sizeof.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 103)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 102)) ;
    GALGAS_omnibusType var_resultType_4877 = extensionGetter_type (var_resultTypeProxy_4756, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 105)) ;
    {
    routine_getNewTempValue (var_resultType_4877, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 106)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_sizeofInstructionIR::constructor_new (outArgument_outResult, var_type_4731  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 107))  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 107)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sizeofExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_sizeofExpressionAST.mSlotID,
                                          extensionMethod_sizeofExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sizeofExpressionAST_analyzeExpression (defineExtensionMethod_sizeofExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofTypeAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
    test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-sizeof.galgas", 131)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_sizeofTypeAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("sizeof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 132)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_sizeofTypeAST temp_3 = object ;
    GALGAS_omnibusType var_type_6087 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 134)) ;
    GALGAS_unifiedTypeMapEntry var_resultTypeProxy_6167 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GALGAS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-sizeof.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 136)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 135)) ;
    GALGAS_omnibusType var_resultType_6288 = extensionGetter_type (var_resultTypeProxy_6167, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 138)) ;
    {
    routine_getNewTempValue (var_resultType_6288, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 139)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_sizeofInstructionIR::constructor_new (outArgument_outResult, var_type_6087  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 140))  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 140)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sizeofTypeAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_sizeofTypeAST.mSlotID,
                                          extensionMethod_sizeofTypeAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sizeofTypeAST_analyzeExpression (defineExtensionMethod_sizeofTypeAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sizeofInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sizeofInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sizeofInstructionIR * object = (const cPtr_sizeofInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_sizeofInstructionIR) ;
  const GALGAS_sizeofInstructionIR temp_0 = object ;
  GALGAS_string var_typeName_7416 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 162)) ;
  const GALGAS_sizeofInstructionIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (GALGAS_string (".asPtr = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (var_typeName_7416, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (var_typeName_7416, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)) ;
  const GALGAS_sizeofInstructionIR temp_2 = object ;
  const GALGAS_sizeofInstructionIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_2.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (GALGAS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (var_typeName_7416, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (GALGAS_string (".asPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sizeofInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_sizeofInstructionIR.mSlotID,
                                            extensionMethod_sizeofInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sizeofInstructionIR_llvmInstructionCode (defineExtensionMethod_sizeofInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typedConstantCallAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typedConstantCallAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inConstantName,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCallAST * object = (const cPtr_typedConstantCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCallAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_typedConstantCallAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_typedConstantCallAST temp_2 = object ;
      ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 46)) ;
      }
    }
  }
  const GALGAS_typedConstantCallAST temp_3 = object ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_2285 (temp_3.readProperty_mAccessList (), kENUMERATION_UP) ;
  while (enumerator_2285.hasCurrentObject ()) {
    switch (enumerator_2285.current_mAccess (HERE).enumValue ()) {
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
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_2526 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_2285.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_2433_indexExpression = extractPtr_2526->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_2433_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 53)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_3065 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_2285.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_2583_arguments = extractPtr_3065->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_2625 (extractedValue_2583_arguments, kENUMERATION_UP) ;
        while (enumerator_2625.hasCurrentObject ()) {
          switch (enumerator_2625.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_2855 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2625.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_2753_typeName = extractPtr_2855->mAssociatedValue1 ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_bool (kIsNotEqual, extractedValue_2753_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_2753_typeName COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 60)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_2968 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2625.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_2887_expression = extractPtr_2968->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_2887_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 62)) ;
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
          enumerator_2625.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_2285.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typedConstantCallAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_typedConstantCallAST.mSlotID,
                                                             extensionMethod_typedConstantCallAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typedConstantCallAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_typedConstantCallAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typedConstantCallAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typedConstantCallAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCallAST * object = (const cPtr_typedConstantCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCallAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_typedConstantCallAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_typedConstantCallAST temp_2 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 77)) ;
      }
    }
  }
  const GALGAS_typedConstantCallAST temp_3 = object ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_3677 (temp_3.readProperty_mAccessList (), kENUMERATION_UP) ;
  while (enumerator_3677.hasCurrentObject ()) {
    switch (enumerator_3677.current_mAccess (HERE).enumValue ()) {
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
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_3902 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_3677.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_3825_indexExpression = extractPtr_3902->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_3825_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 84)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_4425 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_3677.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_3959_arguments = extractPtr_4425->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_4001 (extractedValue_3959_arguments, kENUMERATION_UP) ;
        while (enumerator_4001.hasCurrentObject ()) {
          switch (enumerator_4001.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4231 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4001.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_4129_typeName = extractPtr_4231->mAssociatedValue1 ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_bool (kIsNotEqual, extractedValue_4129_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_4129_typeName COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 91)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4328 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4001.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_4263_expression = extractPtr_4328->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_4263_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 93)) ;
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
          enumerator_4001.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_3677.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typedConstantCallAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_typedConstantCallAST.mSlotID,
                                                             extensionMethod_typedConstantCallAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typedConstantCallAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_typedConstantCallAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typedConstantCallAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_omnibusType var_inferredResultType_5468 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_typedConstantCallAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_inferredResultType_5468 = constinArgument_inOptionalTargetType ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_typedConstantCallAST temp_2 = object ;
    var_inferredResultType_5468 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_2.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 124)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_inferredResultType_5468.readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-typed-constant.galgas", 126)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_typedConstantCallAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mConstructorName ().readProperty_location (), GALGAS_string ("cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 127)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_typedConstantCallAST temp_6 = object ;
    GALGAS_lstring var_typeName_5793 = GALGAS_lstring::constructor_new (var_inferredResultType_5468.readProperty_omnibusTypeDescriptionName (), temp_6.readProperty_mConstructorName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 129)) ;
    GALGAS_constantMap var_classConstantMap_5963 ;
    constinArgument_inContext.readProperty_mTypeConstantMap ().method_searchKey (var_typeName_5793, var_classConstantMap_5963, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 130)) ;
    GALGAS_bigint var_value_6102 ;
    GALGAS_lstring var_classTypeName_6121 ;
    const GALGAS_typedConstantCallAST temp_7 = object ;
    var_classConstantMap_5963.method_searchKey (temp_7.readProperty_mConstructorName (), var_value_6102, var_classTypeName_6121, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 132)) ;
    GALGAS_omnibusType var_resultType_6141 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_classTypeName_6121, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 133)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_6141, var_value_6102  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 134)) ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_typedConstantCallAST temp_9 = object ;
    test_8 = GALGAS_bool (kIsStrictSup, temp_9.readProperty_mAccessList ().getter_length (SOURCE_FILE ("expression-typed-constant.galgas", 137)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_objectIR var_newTemporaryReference_6560 ;
      {
      routine_getNewTempReference (extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 140)), ioArgument_ioTemporaries, var_newTemporaryReference_6560, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 140)) ;
      }
      ioArgument_ioAllocaList.addAssign_operation (extensionGetter_llvmName (var_newTemporaryReference_6560, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), extensionGetter_type (var_newTemporaryReference_6560, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_newTemporaryReference_6560, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 145)), extensionGetter_llvmName (var_newTemporaryReference_6560, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 146)), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 144)) ;
      }
      outArgument_outResult = var_newTemporaryReference_6560 ;
      {
      const GALGAS_typedConstantCallAST temp_10 = object ;
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_10.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 151)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typedConstantCallAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_typedConstantCallAST.mSlotID,
                                          extensionMethod_typedConstantCallAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typedConstantCallAST_analyzeExpression (defineExtensionMethod_typedConstantCallAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inConstantName,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  const GALGAS_ifExpressionAST temp_0 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 67)) ;
  const GALGAS_ifExpressionAST temp_1 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 68)) ;
  const GALGAS_ifExpressionAST temp_2 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 69)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                             extensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_ifExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  const GALGAS_ifExpressionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 77)) ;
  const GALGAS_ifExpressionAST temp_1 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_1.readProperty_mThenExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 78)) ;
  const GALGAS_ifExpressionAST temp_2 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_2.readProperty_mElseExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 79)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                             extensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_ifExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_objectIR var_ifExpressionResult_5227 ;
  const GALGAS_ifExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResult_5227, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 100)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_ifExpressionResult_5227, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 113)) ;
  }
  GALGAS_implicitBooleanConversionResult var_ifExpressionConvertedToBoolean_5626 ;
  const GALGAS_ifExpressionAST temp_1 = object ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_ifExpressionResult_5227, temp_1.readProperty_mIfExpressionEndLocation (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, var_ifExpressionConvertedToBoolean_5626, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 115)) ;
  GALGAS_objectIR var_thenExpressionTempResult_6220 ;
  const GALGAS_ifExpressionAST temp_2 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_2.readProperty_mThenExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionTempResult_6220, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 128)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_thenExpressionTempResult_6220, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 141)) ;
  }
  const GALGAS_ifExpressionAST temp_3 = object ;
  GALGAS_objectIR var_thenExpressionResult_6365 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_thenExpressionTempResult_6220, constinArgument_inOptionalTargetType, temp_3.readProperty_mThenExpressionEndLocation (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)) ;
  GALGAS_objectIR var_elseExpressionTempResult_7053 ;
  const GALGAS_ifExpressionAST temp_4 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_4.readProperty_mElseExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionTempResult_7053, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 153)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_elseExpressionTempResult_7053, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 166)) ;
  }
  const GALGAS_ifExpressionAST temp_5 = object ;
  GALGAS_objectIR var_elseExpressionResult_7198 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_elseExpressionTempResult_7053, extensionGetter_type (var_thenExpressionResult_6365, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 173)), temp_5.readProperty_mElseExpressionEndLocation (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 170)) ;
  switch (var_ifExpressionConvertedToBoolean_5626.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * extractPtr_7634 = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) (var_ifExpressionConvertedToBoolean_5626.unsafePointer ()) ;
      const GALGAS_bool extractedValue_7546_boolValue = extractPtr_7634->mAssociatedValue0 ;
      GALGAS_objectIR temp_6 ;
      const enumGalgasBool test_7 = extractedValue_7546_boolValue.boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = var_thenExpressionResult_6365 ;
      }else if (kBoolFalse == test_7) {
        temp_6 = var_elseExpressionResult_7198 ;
      }
      outArgument_outResult = temp_6 ;
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
      const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable * extractPtr_7925 = (const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable *) (var_ifExpressionConvertedToBoolean_5626.unsafePointer ()) ;
      const GALGAS_string extractedValue_7678_testResultVariableName = extractPtr_7925->mAssociatedValue0 ;
      {
      routine_getNewTempValue (extensionGetter_type (var_elseExpressionResult_7198, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 182)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 182)) ;
      }
      {
      extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extractedValue_7678_testResultVariableName, var_thenExpressionResult_6365, var_elseExpressionResult_7198, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 183)) ;
      }
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                          extensionMethod_ifExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifExpressionAST_analyzeExpression (defineExtensionMethod_ifExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                              const GALGAS_lstring constinArgument_inConstantName,
                                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_0 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 19)) ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_1 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 20)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                                             extensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 28)) ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_1 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 29)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                                             extensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_instructionListIR var_leftInstructionGenerationList_2993 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 50)) ;
  GALGAS_objectIR var_leftOperand_3406 ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_2993, var_leftOperand_3406, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 51)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_3406, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 64)) ;
  }
  GALGAS_implicitBooleanConversionResult var_leftBooleanOperand_3741 ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_1 = object ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_leftOperand_3406, temp_1.readProperty_mOperatorLocation (), ioArgument_ioTemporaries, var_leftInstructionGenerationList_2993, ioArgument_ioAllocaList, var_leftBooleanOperand_3741, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 68)) ;
  GALGAS_instructionListIR var_rightInstructionGenerationList_3831 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 77)) ;
  GALGAS_objectIR var_rightOperand_4249 ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_2 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_2.readProperty_mRightExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (var_leftOperand_3406, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 81)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_3831, var_rightOperand_4249, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 78)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_4249, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 91)) ;
  }
  GALGAS_implicitBooleanConversionResult var_rightBooleanOperand_4588 ;
  const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_3 = object ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_rightOperand_4249, temp_3.readProperty_mOperatorLocation (), ioArgument_ioTemporaries, var_rightInstructionGenerationList_3831, ioArgument_ioAllocaList, var_rightBooleanOperand_4588, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 95)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool test_5 = var_leftBooleanOperand_3741.getter_isCompileTime (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)) ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = var_rightBooleanOperand_4588.getter_isCompileTime (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)) ;
    }
    test_4 = test_5.boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_bool var_leftStaticValue_4789 ;
      var_leftBooleanOperand_3741.method_compileTime (var_leftStaticValue_4789, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 105)) ;
      GALGAS_bool var_rightStaticValue_4861 ;
      var_rightBooleanOperand_4588.method_compileTime (var_rightStaticValue_4861, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 106)) ;
      outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (extensionGetter_type (var_leftOperand_3406, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)), var_leftStaticValue_4789.operator_and (var_rightStaticValue_4861 COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)).getter_bigint (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107))  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)) ;
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_6 = object ;
    routine_getNewTempValue (extensionGetter_booleanType (constinArgument_inContext, temp_6.readProperty_mOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 110)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 110)) ;
    }
    {
    const GALGAS_booleanShortCircuitAndOperatorExpressionAST temp_7 = object ;
    extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_llvmName (var_leftBooleanOperand_3741, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 114)), var_leftInstructionGenerationList_2993, extensionGetter_llvmName (var_rightBooleanOperand_4588, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 116)), var_rightInstructionGenerationList_3831, temp_7.readProperty_mOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 112)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST.mSlotID,
                                          extensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (defineExtensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerSliceExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_integerSliceExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                            const GALGAS_lstring constinArgument_inConstantName,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerSliceExpressionAST * object = (const cPtr_integerSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerSliceExpressionAST) ;
  const GALGAS_integerSliceExpressionAST temp_0 = object ;
  cEnumerator_integerSliceFieldListAST enumerator_2577 (temp_0.readProperty_mSliceValues (), kENUMERATION_UP) ;
  while (enumerator_2577.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) enumerator_2577.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 58)) ;
    enumerator_2577.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_integerSliceExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_integerSliceExpressionAST.mSlotID,
                                                             extensionMethod_integerSliceExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_integerSliceExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_integerSliceExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerSliceExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_integerSliceExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerSliceExpressionAST * object = (const cPtr_integerSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerSliceExpressionAST) ;
  {
  const GALGAS_integerSliceExpressionAST temp_0 = object ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 69)) ;
  }
  const GALGAS_integerSliceExpressionAST temp_1 = object ;
  cEnumerator_integerSliceFieldListAST enumerator_3268 (temp_1.readProperty_mSliceValues (), kENUMERATION_UP) ;
  while (enumerator_3268.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_3268.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 71)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = enumerator_3268.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 72)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_sliceWidth_3437 = enumerator_3268.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 73)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, var_sliceWidth_3437.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_3268.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("the bit slice width should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 75)) ;
          }
        }
        if (kBoolFalse == test_3) {
          {
          extensionSetter_noteUINTType (ioArgument_ioGraph, var_sliceWidth_3437, enumerator_3268.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 77)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_3268.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GALGAS_string ("b"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          ioArgument_ioGraph.setter_noteNode (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 80)).getter_nowhere (SOURCE_FILE ("expression-integer-slice.galgas", 80)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 80)) ;
          }
        }
      }
    }
    enumerator_3268.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_integerSliceExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_integerSliceExpressionAST.mSlotID,
                                                             extensionMethod_integerSliceExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_integerSliceExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_integerSliceExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerSliceExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_integerSliceExpressionAST temp_0 = object ;
  GALGAS_omnibusType var_resultType_4770 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 103)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_resultType_4770.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-integer-slice.galgas", 105)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 105)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_integerSliceExpressionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 106)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_bool var_unsigned_5059 ;
    GALGAS_uint var_bitCount_5082 ;
    GALGAS_bigint joker_5034_2 ; // Joker input parameter
    GALGAS_bigint joker_5034_1 ; // Joker input parameter
    var_resultType_4770.readProperty_kind ().method_integer (joker_5034_2, joker_5034_1, var_unsigned_5059, var_bitCount_5082, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 108)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_unsigned_5059.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 109)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_integerSliceExpressionAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type should be an unsigned integer type"), fixItArray6  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 110)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_4) {
      GALGAS_uint var_leftShiftAmount_5305 = var_bitCount_5082 ;
      GALGAS_bigint var_accumulatedFieldStaticValues_5363 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 114)) ;
      GALGAS_operandIRList var_operandList_5405 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-integer-slice.galgas", 115)) ;
      const GALGAS_integerSliceExpressionAST temp_7 = object ;
      cEnumerator_integerSliceFieldListAST enumerator_5465 (temp_7.readProperty_mSliceValues (), kENUMERATION_UP) ;
      while (enumerator_5465.hasCurrentObject ()) {
        GALGAS_uint var_sliceWidth_5519 ;
        GALGAS_lstring var_expressionTypeName_5559 ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsEqual, enumerator_5465.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_5465.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("anonymous selector not allowed here"), fixItArray9  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 120)) ;
            var_operandList_5405.drop () ; // Release error dropped variable
            var_sliceWidth_5519.drop () ; // Release error dropped variable
            var_expressionTypeName_5559.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_8) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsEqual, enumerator_5465.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GALGAS_string ("b"))).boolEnum () ;
            if (kBoolTrue == test_10) {
              var_sliceWidth_5519 = GALGAS_uint ((uint32_t) 1U) ;
              const GALGAS_integerSliceExpressionAST temp_11 = object ;
              var_expressionTypeName_5559 = GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 123)), temp_11.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 123)) ;
            }
          }
          if (kBoolFalse == test_10) {
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              test_12 = enumerator_5465.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 124)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 124)).boolEnum () ;
              if (kBoolTrue == test_12) {
                TC_Array <C_FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (enumerator_5465.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("the selector should be an unsigned integer value"), fixItArray13  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 125)) ;
                var_operandList_5405.drop () ; // Release error dropped variable
                var_sliceWidth_5519.drop () ; // Release error dropped variable
                var_expressionTypeName_5559.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_12) {
              var_sliceWidth_5519 = enumerator_5465.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 127)) ;
              const GALGAS_integerSliceExpressionAST temp_14 = object ;
              var_expressionTypeName_5559 = GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (var_sliceWidth_5519.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 128)), temp_14.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 128)) ;
              enumGalgasBool test_15 = kBoolTrue ;
              if (kBoolTrue == test_15) {
                test_15 = GALGAS_bool (kIsEqual, var_sliceWidth_5519.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_15) {
                  TC_Array <C_FixItDescription> fixItArray16 ;
                  inCompiler->emitSemanticError (enumerator_5465.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("the bit slice width should be > 0"), fixItArray16  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 130)) ;
                }
              }
            }
          }
        }
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = GALGAS_bool (kIsSupOrEqual, var_leftShiftAmount_5305.objectCompare (var_sliceWidth_5519)).boolEnum () ;
          if (kBoolTrue == test_17) {
            var_leftShiftAmount_5305 = var_leftShiftAmount_5305.substract_operation (var_sliceWidth_5519, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 134)) ;
          }
        }
        if (kBoolFalse == test_17) {
          GALGAS_uint var_specifiedBitCount_6502 = var_bitCount_5082.add_operation (var_sliceWidth_5519, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 136)).substract_operation (var_leftShiftAmount_5305, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 136)) ;
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (enumerator_5465.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_6502.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)).add_operation (GALGAS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)).add_operation (var_bitCount_5082.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)), fixItArray18  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)) ;
          var_leftShiftAmount_5305 = GALGAS_uint ((uint32_t) 0U) ;
        }
        GALGAS_omnibusType var_expressionTargetType_6757 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_expressionTypeName_5559, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 141)) ;
        GALGAS_objectIR var_expressionResult_7290 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_5465.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_expressionTargetType_6757, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7290, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 142)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_7290, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 155)) ;
        }
        switch (extensionGetter_type (var_expressionResult_7290, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().enumValue ()) {
        case GALGAS_typeKind::kNotBuilt:
          break ;
        case GALGAS_typeKind::kEnum_staticArrayType:
          {
            TC_Array <C_FixItDescription> fixItArray19 ;
            inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray19  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 162)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_dynamicArrayType:
          {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray20  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 164)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_opaque:
          {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray21  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 166)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_enumeration:
          {
            TC_Array <C_FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 168)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_structure:
          {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 170)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_syncTool:
          {
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 172)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_boolean:
          {
            enumGalgasBool test_25 = kBoolTrue ;
            if (kBoolTrue == test_25) {
              test_25 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_expressionResult_7290, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 174)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_expressionTargetType_6757.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
              if (kBoolTrue == test_25) {
                TC_Array <C_FixItDescription> fixItArray26 ;
                inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("an $").add_operation (var_expressionTargetType_6757.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (GALGAS_string (" expression is required, found an $"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (extensionGetter_type (var_expressionResult_7290, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 177)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).add_operation (GALGAS_string (" expression"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 177)), fixItArray26  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 175)) ;
              }
            }
            enumGalgasBool test_27 = kBoolTrue ;
            if (kBoolTrue == test_27) {
              test_27 = var_expressionResult_7290.getter_isLiteralInteger (SOURCE_FILE ("expression-integer-slice.galgas", 179)).boolEnum () ;
              if (kBoolTrue == test_27) {
                GALGAS_bigint var_value_8720 ;
                GALGAS_omnibusType joker_8693_1 ; // Joker input parameter
                var_expressionResult_7290.method_literalInteger (joker_8693_1, var_value_8720, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 180)) ;
                var_accumulatedFieldStaticValues_5363 = var_accumulatedFieldStaticValues_5363.operator_or (var_value_8720.left_shift_operation (var_leftShiftAmount_5305, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 181)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 181)) ;
              }
            }
            if (kBoolFalse == test_27) {
              GALGAS_objectIR var_extendedResult_8979 ;
              {
              routine_getNewTempValue (var_resultType_4770, ioArgument_ioTemporaries, var_extendedResult_8979, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 184)) ;
              }
              {
              extensionSetter_appendBoolToUInt (ioArgument_ioInstructionGenerationList, var_extendedResult_8979, var_expressionResult_7290, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 185)) ;
              }
              GALGAS_objectIR var_shiftedResult_9185 ;
              {
              routine_getNewTempValue (var_resultType_4770, ioArgument_ioTemporaries, var_shiftedResult_9185, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 187)) ;
              }
              {
              extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_9185, var_extendedResult_8979, var_leftShiftAmount_5305, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 188)) ;
              }
              var_operandList_5405.addAssign_operation (var_shiftedResult_9185  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 190)) ;
            }
          }
          break ;
        case GALGAS_typeKind::kEnum_void:
          {
            TC_Array <C_FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray28  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 193)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_literalString:
          {
            TC_Array <C_FixItDescription> fixItArray29 ;
            inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray29  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 195)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_function:
          {
            TC_Array <C_FixItDescription> fixItArray30 ;
            inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray30  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 197)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_generic:
          {
            TC_Array <C_FixItDescription> fixItArray31 ;
            inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray31  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 199)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_llvmType:
          {
            TC_Array <C_FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray32  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 201)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_compileTimeBool:
          {
            TC_Array <C_FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray33  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 203)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_compileTimeInteger:
          {
            GALGAS_bigint var_value_10165 ;
            GALGAS_omnibusType joker_10138_1 ; // Joker input parameter
            var_expressionResult_7290.method_literalInteger (joker_10138_1, var_value_10165, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 205)) ;
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = GALGAS_bool (kIsStrictInf, var_value_10165.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 206)))).boolEnum () ;
              if (kBoolTrue == test_34) {
                TC_Array <C_FixItDescription> fixItArray35 ;
                inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray35  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 207)) ;
              }
            }
            if (kBoolFalse == test_34) {
              enumGalgasBool test_36 = kBoolTrue ;
              if (kBoolTrue == test_36) {
                test_36 = GALGAS_bool (kIsStrictInf, var_value_10165.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 208)).left_shift_operation (var_sliceWidth_5519, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 208)))).boolEnum () ;
                if (kBoolTrue == test_36) {
                  var_accumulatedFieldStaticValues_5363 = var_accumulatedFieldStaticValues_5363.operator_or (var_value_10165.left_shift_operation (var_leftShiftAmount_5305, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)) ;
                }
              }
              if (kBoolFalse == test_36) {
                TC_Array <C_FixItDescription> fixItArray37 ;
                inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).left_shift_operation (var_sliceWidth_5519, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)), fixItArray37  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 211)) ;
              }
            }
          }
          break ;
        case GALGAS_typeKind::kEnum_integer:
          {
            const cEnumAssociatedValues_typeKind_integer * extractPtr_11475 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_type (var_expressionResult_7290, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 160)).readProperty_kind ().unsafePointer ()) ;
            const GALGAS_bigint extractedValue_10599_min = extractPtr_11475->mAssociatedValue0 ;
            const GALGAS_bigint extractedValue_10618_max = extractPtr_11475->mAssociatedValue1 ;
            const GALGAS_bool extractedValue_10633_unsigned = extractPtr_11475->mAssociatedValue2 ;
            const GALGAS_uint extractedValue_10658_expressionBitCount = extractPtr_11475->mAssociatedValue3 ;
            enumGalgasBool test_38 = kBoolTrue ;
            if (kBoolTrue == test_38) {
              test_38 = extractedValue_10633_unsigned.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 214)).boolEnum () ;
              if (kBoolTrue == test_38) {
                TC_Array <C_FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("an $uint").add_operation (var_sliceWidth_5519.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)).add_operation (GALGAS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)), fixItArray39  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)) ;
              }
            }
            if (kBoolFalse == test_38) {
              enumGalgasBool test_40 = kBoolTrue ;
              if (kBoolTrue == test_40) {
                test_40 = GALGAS_bool (kIsNotEqual, extractedValue_10658_expressionBitCount.objectCompare (var_sliceWidth_5519)).boolEnum () ;
                if (kBoolTrue == test_40) {
                  TC_Array <C_FixItDescription> fixItArray41 ;
                  inCompiler->emitSemanticError (enumerator_5465.current_mExpressionLocation (HERE), GALGAS_string ("an $uint").add_operation (var_sliceWidth_5519.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)).add_operation (GALGAS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)), fixItArray41  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 217)) ;
                }
              }
              if (kBoolFalse == test_40) {
                GALGAS_objectIR var_extendedResult_11080 ;
                {
                routine_getNewTempValue (var_resultType_4770, ioArgument_ioTemporaries, var_extendedResult_11080, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 220)) ;
                }
                {
                extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_11080, var_expressionResult_7290, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 221)) ;
                }
                GALGAS_objectIR var_shiftedResult_11282 ;
                {
                routine_getNewTempValue (var_resultType_4770, ioArgument_ioTemporaries, var_shiftedResult_11282, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 223)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_11282, var_extendedResult_11080, var_leftShiftAmount_5305, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 224)) ;
                }
                var_operandList_5405.addAssign_operation (var_shiftedResult_11282  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 226)) ;
              }
            }
          }
          break ;
        }
        enumerator_5465.gotoNextObject () ;
      }
      enumGalgasBool test_42 = kBoolTrue ;
      if (kBoolTrue == test_42) {
        test_42 = GALGAS_bool (kIsNotEqual, var_leftShiftAmount_5305.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_42) {
          const GALGAS_integerSliceExpressionAST temp_43 = object ;
          TC_Array <C_FixItDescription> fixItArray44 ;
          inCompiler->emitSemanticError (temp_43.readProperty_mLocation (), var_bitCount_5082.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (GALGAS_string (" bits required, "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (var_bitCount_5082.substract_operation (var_leftShiftAmount_5305, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)).add_operation (GALGAS_string (" bits defined"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)), fixItArray44  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 231)) ;
        }
      }
      outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_4770, var_accumulatedFieldStaticValues_5363  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 234)) ;
      cEnumerator_operandIRList enumerator_11836 (var_operandList_5405, kENUMERATION_UP) ;
      while (enumerator_11836.hasCurrentObject ()) {
        GALGAS_objectIR var_newResult_11923 ;
        {
        routine_getNewTempValue (var_resultType_4770, ioArgument_ioTemporaries, var_newResult_11923, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 236)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_11923, extensionGetter_type (var_newResult_11923, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 239)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 240)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-integer-slice.galgas", 242)), enumerator_11836.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 237)) ;
        }
        outArgument_outResult = var_newResult_11923 ;
        enumerator_11836.gotoNextObject () ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_integerSliceExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_integerSliceExpressionAST.mSlotID,
                                          extensionMethod_integerSliceExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_integerSliceExpressionAST_analyzeExpression (defineExtensionMethod_integerSliceExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalIntegerInExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring constinArgument_inConstantName,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                                             extensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalIntegerInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                                             extensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_literalIntegerInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalIntegerInExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_literalIntegerInExpressionAST temp_0 = object ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 62)), temp_0.readProperty_mLiteralInteger ().readProperty_bigint ()  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 62)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalIntegerInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                          extensionMethod_literalIntegerInExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_analyzeExpression (defineExtensionMethod_literalIntegerInExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringInExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                               const GALGAS_lstring constinArgument_inConstantName,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GALGAS_lstring::constructor_new (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), constinArgument_inConstantName.readProperty_location ()  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                                             extensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                                             extensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_literalStringInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringInExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_uint var_staticStringIndex_3581 ;
  {
  const GALGAS_literalStringInExpressionAST temp_0 = object ;
  extensionSetter_findOrAddStaticString (ioArgument_ioStaticEntityMap, temp_0.readProperty_mLiteralString ().readProperty_string (), var_staticStringIndex_3581, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 62)) ;
  }
  const GALGAS_literalStringInExpressionAST temp_1 = object ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalString (temp_1.readProperty_mLiteralString ().readProperty_string ().getter_utf_38_Length (SOURCE_FILE ("expression-literal-string.galgas", 63)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)), var_staticStringIndex_3581  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalStringInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                          extensionMethod_literalStringInExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalStringInExpressionAST_analyzeExpression (defineExtensionMethod_literalStringInExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBooleanInExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring constinArgument_inConstantName,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 41)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                                             extensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBooleanInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                                             extensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_literalBooleanInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBooleanInExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_literalBooleanInExpressionAST temp_0 = object ;
  GALGAS_bigint temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mValue ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)), temp_1  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalBooleanInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                          extensionMethod_literalBooleanInExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_analyzeExpression (defineExtensionMethod_literalBooleanInExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerInExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_registerInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inConstantName,
                                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerInExpressionAST * object = (const cPtr_registerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerInExpressionAST) ;
  {
  const GALGAS_registerInExpressionAST temp_0 = object ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mControlRegisterLValue ().readProperty_mRegisterGroupName () COMMA_SOURCE_FILE ("expression-control-register.galgas", 44)) ;
  }
  const GALGAS_registerInExpressionAST temp_1 = object ;
  extensionMethod_addDependenceEdgeForStaticExpression (temp_1.readProperty_mControlRegisterLValue (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 45)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_registerInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_registerInExpressionAST.mSlotID,
                                                             extensionMethod_registerInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_registerInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_registerInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_registerInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerInExpressionAST * object = (const cPtr_registerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerInExpressionAST) ;
  const GALGAS_registerInExpressionAST temp_0 = object ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 53)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_registerInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_registerInExpressionAST.mSlotID,
                                                             extensionMethod_registerInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_registerInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_registerInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerInExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_omnibusType var_registerType_4187 ;
  GALGAS_sliceMap var_sliceMap_4238 ;
  GALGAS_string var_llvmRegisterAddressName_4295 ;
  const GALGAS_registerInExpressionAST temp_0 = object ;
  GALGAS_uint joker_4210 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GALGAS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_registerType_4187, joker_4210, var_sliceMap_4238, var_llvmRegisterAddressName_4295, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 73)) ;
  {
  routine_getNewTempValue (var_registerType_4187, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-control-register.galgas", 90)) ;
  }
  {
  extensionSetter_appendLoadIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_llvmRegisterAddressName_4295, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 91)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_registerInExpressionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mFieldName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_llvmBinaryOperation var_accessOperator_4669 ;
      GALGAS_bigint var_accessRightOperand_4707 ;
      GALGAS_omnibusType var_resultType_4742 ;
      const GALGAS_registerInExpressionAST temp_3 = object ;
      var_sliceMap_4238.method_searchKey (temp_3.readProperty_mFieldName (), var_accessOperator_4669, var_accessRightOperand_4707, var_resultType_4742, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 94)) ;
      GALGAS_objectIR var_resultIR_4811 ;
      {
      routine_getNewTempValue (var_resultType_4742, ioArgument_ioTemporaries, var_resultIR_4811, inCompiler  COMMA_SOURCE_FILE ("expression-control-register.galgas", 100)) ;
      }
      {
      const GALGAS_registerInExpressionAST temp_4 = object ;
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultIR_4811, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 103)), temp_4.readProperty_mFieldName ().readProperty_location (), outArgument_outResult, var_accessOperator_4669, GALGAS_objectIR::constructor_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 107)), var_accessRightOperand_4707  COMMA_SOURCE_FILE ("expression-control-register.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 101)) ;
      }
      outArgument_outResult = var_resultIR_4811 ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_registerInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_registerInExpressionAST.mSlotID,
                                          extensionMethod_registerInExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_registerInExpressionAST_analyzeExpression (defineExtensionMethod_registerInExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerConstantExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                                             extensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_registerConstantExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerConstantExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantExpressionAST * object = (const cPtr_registerConstantExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantExpressionAST) ;
  const GALGAS_registerConstantExpressionAST temp_0 = object ;
  cEnumerator_registerIntegerFieldListAST enumerator_3044 (temp_0.readProperty_mFieldValues (), kENUMERATION_UP) ;
  while (enumerator_3044.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_3044.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 65)) ;
    enumerator_3044.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                                             extensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_registerConstantExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@registerConstantExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_controlRegisterMap var_controlRegisterMap_4307 ;
  const GALGAS_registerConstantExpressionAST temp_0 = object ;
  GALGAS_registerGroupKind joker_4278 ; // Joker input parameter
  constinArgument_inContext.readProperty_mControlRegisterGroupMap ().method_searchKey (temp_0.readProperty_mRegisterGroupName (), joker_4278, var_controlRegisterMap_4307, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 87)) ;
  GALGAS_omnibusType var_registerType_4469 ;
  GALGAS_sliceMap var_registerBitSliceMap_4523 ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_4574 ;
  GALGAS_uint var_registerBitCount_4608 ;
  GALGAS_uint var_powerOfTwoForArraySize_4647 ;
  GALGAS_uint var_elementArraySize_4680 ;
  const GALGAS_registerConstantExpressionAST temp_1 = object ;
  GALGAS_bool joker_4475_2 ; // Joker input parameter
  GALGAS_bool joker_4475_1 ; // Joker input parameter
  GALGAS_bigint joker_4580_2 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_4580_1 ; // Joker input parameter
  var_controlRegisterMap_4307.method_searchKey (temp_1.readProperty_mRegisterName (), var_registerType_4469, joker_4475_2, joker_4475_1, var_registerBitSliceMap_4523, var_registerFieldMap_4574, joker_4580_2, joker_4580_1, var_registerBitCount_4608, var_powerOfTwoForArraySize_4647, var_elementArraySize_4680, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 93)) ;
  GALGAS_bigint var_accumulatedFieldStaticValues_4799 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 105)) ;
  GALGAS_operandIRList var_operandList_4837 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-register-value-from-slices.galgas", 106)) ;
  const GALGAS_registerConstantExpressionAST temp_2 = object ;
  cEnumerator_registerIntegerFieldListAST enumerator_4889 (temp_2.readProperty_mFieldValues (), kENUMERATION_UP) ;
  while (enumerator_4889.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, enumerator_4889.current_mFieldName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_4889.current_mFieldName (HERE).readProperty_location (), GALGAS_string ("anonymous selector not allowed here"), fixItArray4  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 109)) ;
        var_operandList_4837.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_uint var_fieldBitIndex_5120 ;
      GALGAS_uint var_fieldBitCount_5153 ;
      var_registerFieldMap_4574.method_searchKey (enumerator_4889.current_mFieldName (HERE), var_fieldBitIndex_5120, var_fieldBitCount_5153, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 111)) ;
      GALGAS_lstring var_inferredTypeName_5188 = GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (var_fieldBitCount_5153.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 116)), enumerator_4889.current_mFieldName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 116)) ;
      GALGAS_omnibusType var_inferredType_5329 ;
      extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), var_inferredTypeName_5188, var_inferredType_5329, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 117)) ;
      GALGAS_objectIR var_expressionResult_5799 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_4889.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_inferredType_5329, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5799, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 119)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_5799, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 132)) ;
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = extensionGetter_type (var_expressionResult_5799, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 137)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas", 137)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_bigint var_value_6097 ;
          GALGAS_omnibusType joker_6070_1 ; // Joker input parameter
          var_expressionResult_5799.method_literalInteger (joker_6070_1, var_value_6097, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 138)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsStrictInf, var_value_6097.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 139)))).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_4889.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray7  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 140)) ;
            }
          }
          if (kBoolFalse == test_6) {
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = GALGAS_bool (kIsStrictInf, var_value_6097.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 141)).left_shift_operation (var_fieldBitCount_5153, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 141)))).boolEnum () ;
              if (kBoolTrue == test_8) {
                var_accumulatedFieldStaticValues_4799 = var_accumulatedFieldStaticValues_4799.operator_or (var_value_6097.left_shift_operation (var_fieldBitIndex_5120, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 142)) COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 142)) ;
              }
            }
            if (kBoolFalse == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_4889.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).left_shift_operation (var_fieldBitCount_5153, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)), fixItArray9  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = extensionGetter_type (var_expressionResult_5799, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)).boolEnum () ;
          if (kBoolTrue == test_10) {
            GALGAS_bool var_unsigned_6618 ;
            GALGAS_uint var_expressionBitCount_6657 ;
            GALGAS_bigint joker_6587_2 ; // Joker input parameter
            GALGAS_bigint joker_6587_1 ; // Joker input parameter
            extensionGetter_type (var_expressionResult_5799, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 147)).readProperty_kind ().method_integer (joker_6587_2, joker_6587_1, var_unsigned_6618, var_expressionBitCount_6657, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 147)) ;
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = var_unsigned_6618.operator_not (SOURCE_FILE ("expression-register-value-from-slices.galgas", 148)).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_4889.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray12  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 149)) ;
              }
            }
            if (kBoolFalse == test_11) {
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                test_13 = GALGAS_bool (kIsNotEqual, var_expressionBitCount_6657.objectCompare (var_fieldBitCount_5153)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (enumerator_4889.current_mExpressionLocation (HERE), GALGAS_string ("type error, $uint").add_operation (var_fieldBitCount_5153.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)).add_operation (GALGAS_string (" type required"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)), fixItArray14  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)) ;
                }
              }
              if (kBoolFalse == test_13) {
                GALGAS_objectIR var_partialResult_7026 = var_expressionResult_5799 ;
                enumGalgasBool test_15 = kBoolTrue ;
                if (kBoolTrue == test_15) {
                  test_15 = GALGAS_bool (kIsStrictInf, var_expressionBitCount_6657.objectCompare (var_registerBitCount_4608)).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    GALGAS_objectIR var_extendedResult_7180 ;
                    {
                    routine_getNewTempValue (var_registerType_4469, ioArgument_ioTemporaries, var_extendedResult_7180, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 156)) ;
                    }
                    {
                    extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_7180, var_partialResult_7026, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 157)) ;
                    }
                    var_partialResult_7026 = var_extendedResult_7180 ;
                  }
                }
                GALGAS_objectIR var_shiftedResult_7434 ;
                {
                routine_getNewTempValue (var_registerType_4469, ioArgument_ioTemporaries, var_shiftedResult_7434, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 161)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_7434, var_partialResult_7026, var_fieldBitIndex_5120, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 162)) ;
                }
                var_operandList_4837.addAssign_operation (var_shiftedResult_7434  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 164)) ;
              }
            }
          }
        }
      }
    }
    enumerator_4889.gotoNextObject () ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_registerType_4469, var_accumulatedFieldStaticValues_4799  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 170)) ;
  cEnumerator_operandIRList enumerator_7808 (var_operandList_4837, kENUMERATION_UP) ;
  while (enumerator_7808.hasCurrentObject ()) {
    GALGAS_objectIR var_newResult_7893 ;
    {
    routine_getNewTempValue (var_registerType_4469, ioArgument_ioTemporaries, var_newResult_7893, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 172)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_7893, extensionGetter_type (var_newResult_7893, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 175)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 176)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-register-value-from-slices.galgas", 178)), enumerator_7808.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 173)) ;
    }
    outArgument_outResult = var_newResult_7893 ;
    enumerator_7808.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_registerConstantExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_registerConstantExpressionAST.mSlotID,
                                          extensionMethod_registerConstantExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_registerConstantExpressionAST_analyzeExpression (defineExtensionMethod_registerConstantExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primaryInExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inConstantName,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_primaryInExpressionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mReceiverName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_primaryInExpressionAST temp_2 = object ;
      ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_2.readProperty_mReceiverName () COMMA_SOURCE_FILE ("expression-primary.galgas", 106)) ;
      }
    }
  }
  const GALGAS_primaryInExpressionAST temp_3 = object ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_4294 (temp_3.readProperty_mAccessList (), kENUMERATION_UP) ;
  while (enumerator_4294.hasCurrentObject ()) {
    switch (enumerator_4294.current_mAccess (HERE).enumValue ()) {
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
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_4535 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_4294.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_4442_indexExpression = extractPtr_4535->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_4442_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 113)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_5074 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_4294.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_4592_arguments = extractPtr_5074->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_4634 (extractedValue_4592_arguments, kENUMERATION_UP) ;
        while (enumerator_4634.hasCurrentObject ()) {
          switch (enumerator_4634.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4864 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4634.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_4762_typeName = extractPtr_4864->mAssociatedValue1 ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_bool (kIsNotEqual, extractedValue_4762_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_4762_typeName COMMA_SOURCE_FILE ("expression-primary.galgas", 120)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4977 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4634.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_4896_expression = extractPtr_4977->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_4896_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 122)) ;
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
          enumerator_4634.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_4294.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                             extensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primaryInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  const GALGAS_primaryInExpressionAST temp_0 = object ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_5587 (temp_0.readProperty_mAccessList (), kENUMERATION_UP) ;
  while (enumerator_5587.hasCurrentObject ()) {
    switch (enumerator_5587.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * extractPtr_5817 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) (enumerator_5587.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_5665_low = extractPtr_5817->mAssociatedValue0 ;
        const GALGAS_lbigint extractedValue_5679_high = extractPtr_5817->mAssociatedValue1 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsSupOrEqual, extractedValue_5679_high.readProperty_bigint ().objectCompare (extractedValue_5665_low.readProperty_bigint ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_5679_high.readProperty_bigint ().substract_operation (extractedValue_5665_low.readProperty_bigint (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)), extractedValue_5665_low.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)) ;
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
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_5971 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_5587.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_5894_indexExpression = extractPtr_5971->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_5894_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 144)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_6494 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_5587.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_6028_arguments = extractPtr_6494->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_6070 (extractedValue_6028_arguments, kENUMERATION_UP) ;
        while (enumerator_6070.hasCurrentObject ()) {
          switch (enumerator_6070.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_6300 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_6070.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_6198_typeName = extractPtr_6300->mAssociatedValue1 ;
              enumGalgasBool test_2 = kBoolTrue ;
              if (kBoolTrue == test_2) {
                test_2 = GALGAS_bool (kIsNotEqual, extractedValue_6198_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_2) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_6198_typeName COMMA_SOURCE_FILE ("expression-primary.galgas", 151)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_6397 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_6070.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_6332_expression = extractPtr_6397->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_6332_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 153)) ;
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
          enumerator_6070.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_5587.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                             extensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primaryInExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
    const GALGAS_primaryInExpressionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mReceiverName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 181)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_primaryInExpressionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 182)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_primaryInExpressionAST temp_5 = object ;
        callExtensionMethod_analyzePrimaryExpressionNoSelf ((const cPtr_primaryInExpressionAST *) temp_5.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 184)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-primary.galgas", 198)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_primaryInExpressionAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("'self' is not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 199)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      const GALGAS_primaryInExpressionAST temp_9 = object ;
      callExtensionMethod_analyzePrimaryExpressionWithSelf ((const cPtr_primaryInExpressionAST *) temp_9.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 201)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_primaryInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                          extensionMethod_primaryInExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_primaryInExpressionAST_analyzeExpression (defineExtensionMethod_primaryInExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'procAnalyzeAccesListInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  cEnumerator_primaryInExpressionAccessListAST enumerator_14035 (constinArgument_inAccessList, kENUMERATION_UP) ;
  while (enumerator_14035.hasCurrentObject ()) {
    switch (enumerator_14035.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * extractPtr_14332 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) (enumerator_14035.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_14109_low = extractPtr_14332->mAssociatedValue0 ;
        const GALGAS_lbigint extractedValue_14123_high = extractPtr_14332->mAssociatedValue1 ;
        {
        routine_handleSliceInExpression (constinArgument_inContext, ioArgument_ioResult, extractedValue_14109_low, extractedValue_14123_high, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 358)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_14631 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_14035.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_14373_propertyName = extractPtr_14631->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (constinArgument_inContext, ioArgument_ioResult, extractedValue_14373_propertyName, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 367)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_15239 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_14035.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_14684_indexExpression = extractPtr_15239->mAssociatedValue0 ;
        const GALGAS_location extractedValue_14705_endOfIndex = extractPtr_15239->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_14726_checkIndexExpression = extractPtr_15239->mAssociatedValue2 ;
        {
        routine_handleArrayAccessInExpression (ioArgument_ioResult, extractedValue_14684_indexExpression, extractedValue_14705_endOfIndex, extractedValue_14726_checkIndexExpression, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 377)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_15919 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_14035.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_15278_methodName = extractPtr_15919->mAssociatedValue0 ;
        const GALGAS_effectiveArgumentListAST extractedValue_15314_arguments = extractPtr_15919->mAssociatedValue1 ;
        const GALGAS_location extractedValue_15338_errorLocation = extractPtr_15919->mAssociatedValue2 ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 394)).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_15338_errorLocation, GALGAS_string ("a method cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 395)) ;
            ioArgument_ioResult.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_0) {
          {
          routine_handleFunctionCallInExpression (extractedValue_15278_methodName, ioArgument_ioResult, constinArgument_inSelfType, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_15314_arguments, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 397)) ;
          }
        }
      }
      break ;
    }
    enumerator_14035.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleSliceInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inLow.readProperty_bigint ().objectCompare (constinArgument_inHigh.readProperty_bigint ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLow.readProperty_location (), GALGAS_string ("low bound should be lower or equal to high bound"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 506)) ;
      ioArgument_ioResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      GALGAS_bool test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 507)) ;
      if (kBoolTrue != test_3.boolEnum ()) {
        test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("expression-primary.galgas", 507)) ;
      }
      test_2 = test_3.operator_not (SOURCE_FILE ("expression-primary.galgas", 507)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inLow.readProperty_location (), GALGAS_string ("Invalid, receiver is not an integer"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 508)) ;
        ioArgument_ioResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      {
      extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, ioArgument_ioResult, constinArgument_inLow.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)), ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)) ;
      }
      GALGAS_lstring var_resultIntegerName_19565 = GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (constinArgument_inHigh.readProperty_bigint ().substract_operation (constinArgument_inLow.readProperty_bigint (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)).getter_string (SOURCE_FILE ("expression-primary.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)), constinArgument_inLow.readProperty_location ()  COMMA_SOURCE_FILE ("expression-primary.galgas", 513)) ;
      GALGAS_omnibusType var_sliceType_19720 ;
      extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), var_resultIntegerName_19565, var_sliceType_19720, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 514)) ;
      {
      extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_19720, ioArgument_ioResult, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 515)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInExpression (const GALGAS_semanticContext constinArgument_inContext,
                                               GALGAS_objectIR & ioArgument_ioResult,
                                               const GALGAS_lstring constinArgument_inPropertyName,
                                               const GALGAS_mode constinArgument_inMode,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_type_20265 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 530)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_20405 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_type_20265, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 532)) ;
  GALGAS_propertyGetterKind var_accessKind_20529 ;
  GALGAS_propertyVisibility joker_20492 ; // Joker input parameter
  var_propertyGetterMap_20405.method_searchKey (constinArgument_inPropertyName, joker_20492, var_accessKind_20529, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 533)) ;
  switch (var_accessKind_20529.enumValue ()) {
  case GALGAS_propertyGetterKind::kNotBuilt:
    break ;
  case GALGAS_propertyGetterKind::kEnum_constantProperty:
    {
      const cEnumAssociatedValues_propertyGetterKind_constantProperty * extractPtr_20615 = (const cEnumAssociatedValues_propertyGetterKind_constantProperty *) (var_accessKind_20529.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_20591_value = extractPtr_20615->mAssociatedValue0 ;
      ioArgument_ioResult = extractedValue_20591_value ;
    }
    break ;
  case GALGAS_propertyGetterKind::kEnum_storedProperty:
    {
      const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_21016 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_accessKind_20529.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_20664_propertyType = extractPtr_21016->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_20684_propertyIndex = extractPtr_21016->mAssociatedValue1 ;
      GALGAS_string var_property_5F_llvmName_20745 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_20745, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 538)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 540)), extensionGetter_llvmName (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 541)), var_property_5F_llvmName_20745, extractedValue_20684_propertyIndex, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 539)) ;
      }
      ioArgument_ioResult = GALGAS_objectIR::constructor_reference (extractedValue_20664_propertyType, var_property_5F_llvmName_20745  COMMA_SOURCE_FILE ("expression-primary.galgas", 546)) ;
    }
    break ;
  case GALGAS_propertyGetterKind::kEnum_computedProperty:
    {
      const cEnumAssociatedValues_propertyGetterKind_computedProperty * extractPtr_21504 = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) (var_accessKind_20529.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapEntry extractedValue_21059_propertyTypeProxy = extractPtr_21504->mAssociatedValue0 ;
      const GALGAS_routineLLVMNameDict extractedValue_21074_modeDictionary = extractPtr_21504->mAssociatedValue1 ;
      {
      extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 548)) ;
      }
      GALGAS_string var_routineLLVMName_21206 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_21074_modeDictionary, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 549)) ;
      GALGAS_objectIR var_resultValueIR_21469 ;
      {
      extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, var_routineLLVMName_21206, extensionGetter_type (extractedValue_21059_propertyTypeProxy, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 554)), var_resultValueIR_21469, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 550)) ;
      }
      ioArgument_ioResult = var_resultValueIR_21469 ;
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  switch (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 580)).readProperty_subscript ().enumValue ()) {
  case GALGAS_subscript::kNotBuilt:
    break ;
  case GALGAS_subscript::kEnum_noSubscript:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is ").add_operation (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)).add_operation (GALGAS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)), fixItArray0  COMMA_SOURCE_FILE ("expression-primary.galgas", 582)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is literal string (dynamic array) and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 584)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_23481 = (const cEnumAssociatedValues_subscript_staticSubscript *) (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 580)).readProperty_subscript ().unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_22730_elementType = extractPtr_23481->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_22748_arraySize = extractPtr_23481->mAssociatedValue1 ;
      GALGAS_objectIR var_indexIR_23235 ;
      {
      routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_22748_arraySize, extractedValue_22730_elementType, ioArgument_ioInstructionGenerationList, var_indexIR_23235, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 587)) ;
      }
      GALGAS_objectIR var_result_23453 ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, extractedValue_22730_elementType, var_indexIR_23235, var_result_23453, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)) ;
      }
      ioArgument_ioResult = var_result_23453 ;
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleFunctionCallInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_omnibusType var_receiverType_24204 = extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 631)) ;
  GALGAS_lstring var_methodMangledName_24297 = extensionGetter_mangledName (constinArgument_inArguments, var_receiverType_24204.readProperty_omnibusTypeDescriptionName (), constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 633)) ;
  GALGAS_bool var_implementedPublic_24547 ;
  GALGAS_routineTypedSignature var_formalSignature_24572 ;
  GALGAS_unifiedTypeMapEntry var_formalReturnTypeProxy_24603 ;
  GALGAS_routineLLVMNameDict var_implementedModeDictionary_24666 ;
  GALGAS_bool var_implementedIsExported_24704 ;
  GALGAS_mode var_implementedMode_24736 ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_methodMangledName_24297, var_implementedPublic_24547, var_formalSignature_24572, var_formalReturnTypeProxy_24603, var_implementedModeDictionary_24666, var_implementedIsExported_24704, var_implementedMode_24736, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 636)) ;
  GALGAS_string var_functionLLVMName_24780 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_24666, constinArgument_inMode, constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 646)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, extensionGetter_type (var_formalReturnTypeProxy_24603, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 648)).readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-primary.galgas", 648)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inMethodName.readProperty_location (), GALGAS_string ("not a function (returns no value)"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 649)) ;
      ioArgument_ioObjectIR.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 652)) ;
    }
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_25307 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 654)) ;
    var_effectiveParameterListIR_25307.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 655)), ioArgument_ioObjectIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 655)) ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_24572, constinArgument_inArguments, constinArgument_inMethodName.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_25307, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 657)) ;
    }
    GALGAS_objectIR var_callReturnedResult_26077 ;
    {
    routine_getNewTempValue (extensionGetter_type (var_formalReturnTypeProxy_24603, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 673)), ioArgument_ioTemporaries, var_callReturnedResult_26077, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 673)) ;
    }
    GALGAS_lstring var_routineMangledName_26126 = function_routineMangledNameFromCall (extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 675)).readProperty_llvmBaseTypeName (), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 675)) ;
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (var_callReturnedResult_26077, var_routineMangledName_26126, var_functionLLVMName_24780, var_effectiveParameterListIR_25307  COMMA_SOURCE_FILE ("expression-primary.galgas", 676))  COMMA_SOURCE_FILE ("expression-primary.galgas", 676)) ;
    ioArgument_ioObjectIR = var_callReturnedResult_26077 ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneFunctionInExpressionAST * object = (const cPtr_standaloneFunctionInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneFunctionInExpressionAST) ;
  {
  const GALGAS_standaloneFunctionInExpressionAST temp_0 = object ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mStandaloneFunctionName () COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 37)) ;
  }
  const GALGAS_standaloneFunctionInExpressionAST temp_1 = object ;
  cEnumerator_effectiveArgumentListAST enumerator_2130 (temp_1.readProperty_mArguments (), kENUMERATION_UP) ;
  while (enumerator_2130.hasCurrentObject ()) {
    switch (enumerator_2130.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_2342 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2130.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2252_typeName = extractPtr_2342->mAssociatedValue1 ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, extractedValue_2252_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_2252_typeName COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 43)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_2451 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2130.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_2370_expression = extractPtr_2451->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_2370_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 45)) ;
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
    enumerator_2130.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST.mSlotID,
                                                             extensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneFunctionInExpressionAST * object = (const cPtr_standaloneFunctionInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneFunctionInExpressionAST) ;
  const GALGAS_standaloneFunctionInExpressionAST temp_0 = object ;
  cEnumerator_effectiveArgumentListAST enumerator_3063 (temp_0.readProperty_mArguments (), kENUMERATION_UP) ;
  while (enumerator_3063.hasCurrentObject ()) {
    switch (enumerator_3063.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_3275 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3063.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3185_typeName = extractPtr_3275->mAssociatedValue1 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, extractedValue_3185_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_3185_typeName COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 64)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_3368 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3063.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_3303_expression = extractPtr_3368->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_3303_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 66)) ;
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
    enumerator_3063.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST.mSlotID,
                                                             extensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
      const GALGAS_standaloneFunctionInExpressionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mStandaloneFunctionName ().readProperty_location (), GALGAS_string ("a routine cannot be called in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 92)) ;
    }
  }
  const GALGAS_standaloneFunctionInExpressionAST temp_3 = object ;
  const GALGAS_standaloneFunctionInExpressionAST temp_4 = object ;
  GALGAS_lstring var_routineLLVMName_4699 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), temp_3.readProperty_mStandaloneFunctionName (), temp_4.readProperty_mArguments (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 95)) ;
  const GALGAS_standaloneFunctionInExpressionAST temp_5 = object ;
  const GALGAS_standaloneFunctionInExpressionAST temp_6 = object ;
  GALGAS_lstring var_signature_4832 = extensionGetter_routineSignature (temp_5.readProperty_mArguments (), temp_6.readProperty_mStandaloneFunctionName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 97)) ;
  const GALGAS_standaloneFunctionInExpressionAST temp_7 = object ;
  const GALGAS_standaloneFunctionInExpressionAST temp_8 = object ;
  GALGAS_lstring var_requiredFunctionMangledName_4970 = GALGAS_lstring::constructor_new (temp_7.readProperty_mStandaloneFunctionName ().readProperty_string ().add_operation (var_signature_4832.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 99)), temp_8.readProperty_mStandaloneFunctionName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 99)) ;
  GALGAS_bool var_implementedPublic_5205 ;
  GALGAS_routineTypedSignature var_formalSignature_5230 ;
  GALGAS_unifiedTypeMapEntry var_formalReturnTypeProxy_5261 ;
  GALGAS_routineLLVMNameDict var_implementedModeDictionary_5324 ;
  GALGAS_bool var_isExported_5351 ;
  GALGAS_mode var_implementedMode_5383 ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_requiredFunctionMangledName_4970, var_implementedPublic_5205, var_formalSignature_5230, var_formalReturnTypeProxy_5261, var_implementedModeDictionary_5324, var_isExported_5351, var_implementedMode_5383, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 101)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_formalReturnTypeProxy_5261.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-standalone-function-call.galgas", 111)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (var_requiredFunctionMangledName_4970.readProperty_location (), GALGAS_string ("this function does not return any value"), fixItArray10  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 112)) ;
      outArgument_outFunctionCallReturnedValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_string var_functionLLVMName_5634 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_5324, constinArgument_inMode, var_requiredFunctionMangledName_4970, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 115)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_5840 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-standalone-function-call.galgas", 117)) ;
    {
    const GALGAS_standaloneFunctionInExpressionAST temp_11 = object ;
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_5230, temp_11.readProperty_mArguments (), var_requiredFunctionMangledName_4970.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_5840, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 118)) ;
    }
    {
    routine_getNewTempValue (extensionGetter_type (var_formalReturnTypeProxy_5261, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 134)), ioArgument_ioTemporaries, outArgument_outFunctionCallReturnedValue, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 134)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (outArgument_outFunctionCallReturnedValue, var_routineLLVMName_4699, var_functionLLVMName_5634, var_effectiveParameterListIR_5840  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 136))  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 136)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_standaloneFunctionInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST.mSlotID,
                                          extensionMethod_standaloneFunctionInExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_standaloneFunctionInExpressionAST_analyzeExpression (defineExtensionMethod_standaloneFunctionInExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorCallAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inConstantName,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCallAST * object = (const cPtr_constructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallAST) ;
  {
  const GALGAS_constructorCallAST temp_0 = object ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
  }
  const GALGAS_constructorCallAST temp_1 = object ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2252 (temp_1.readProperty_mParameterList (), kENUMERATION_UP) ;
  while (enumerator_2252.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) enumerator_2252.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 52)) ;
    enumerator_2252.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_constructorCallAST.mSlotID,
                                                             extensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constructorCallAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorCallAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCallAST * object = (const cPtr_constructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallAST) ;
  {
  const GALGAS_constructorCallAST temp_0 = object ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 61)) ;
  }
  const GALGAS_constructorCallAST temp_1 = object ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2907 (temp_1.readProperty_mParameterList (), kENUMERATION_UP) ;
  while (enumerator_2907.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_2907.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 63)) ;
    enumerator_2907.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_constructorCallAST.mSlotID,
                                                             extensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorCallAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_constructorKey_4022 = GALGAS_string ("(") ;
  const GALGAS_constructorCallAST temp_0 = object ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_4046 (temp_0.readProperty_mParameterList (), kENUMERATION_UP) ;
  while (enumerator_4046.hasCurrentObject ()) {
    var_constructorKey_4022.plusAssign_operation(GALGAS_string ("!").add_operation (enumerator_4046.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)) ;
    enumerator_4046.gotoNextObject () ;
  }
  var_constructorKey_4022.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 89)) ;
  const GALGAS_constructorCallAST temp_1 = object ;
  GALGAS_omnibusType var_resultType_4207 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)) ;
  const GALGAS_constructorCallAST temp_2 = object ;
  GALGAS_lstring var_typeName_4278 = GALGAS_lstring::constructor_new (var_resultType_4207.readProperty_omnibusTypeDescriptionName (), temp_2.readProperty_mErrorLocation ()  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 92)) ;
  GALGAS_constructorMap var_constructorMap_4428 ;
  constinArgument_inContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_4278, var_constructorMap_4428, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 93)) ;
  GALGAS_constructorSignature var_constructorSignature_4579 ;
  GALGAS_constructorValue var_initValue_4594 ;
  const GALGAS_constructorCallAST temp_3 = object ;
  var_constructorMap_4428.method_searchKey (GALGAS_lstring::constructor_new (var_constructorKey_4022, temp_3.readProperty_mErrorLocation ()  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)), var_constructorSignature_4579, var_initValue_4594, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)) ;
  switch (var_initValue_4594.enumValue ()) {
  case GALGAS_constructorValue::kNotBuilt:
    break ;
  case GALGAS_constructorValue::kEnum_arrayValue:
    {
      const cEnumAssociatedValues_constructorValue_arrayValue * extractPtr_7823 = (const cEnumAssociatedValues_constructorValue_arrayValue *) (var_initValue_4594.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4669_elementType = extractPtr_7823->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_4674_size = extractPtr_7823->mAssociatedValue1 ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_constructorKey_4022.objectCompare (GALGAS_string ("(!repeated)"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_constructorCallAST temp_5 = object ;
          GALGAS_expressionAST var_expression_4742 = temp_5.readProperty_mParameterList ().getter_mExpressionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 100)) ;
          GALGAS_objectIR var_expressionResult_5232 ;
          callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) var_expression_4742.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_4669_elementType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5232, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 101)) ;
          const GALGAS_constructorCallAST temp_6 = object ;
          GALGAS_objectIR var_result_5257 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_5232, extractedValue_4669_elementType, temp_6.readProperty_mParameterList ().getter_mSelectorAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 118)).readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 114)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = extensionGetter_isStatic (var_result_5257, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 121)).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_uint var_idx_5570 = ioArgument_ioStaticEntityMap.readProperty_mGlobalStructuredConstantList ().getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 122)) ;
              outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayRepeatedStaticValue (var_resultType_4207, extractedValue_4674_size, var_result_5257, var_idx_5570  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 123)) ;
              GALGAS_operandIRList var_operandIRList_5781 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 124)) ;
              cEnumerator_range enumerator_5814 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), extractedValue_4674_size.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 125))), kENUMERATION_UP) ;
              while (enumerator_5814.hasCurrentObject ()) {
                var_operandIRList_5781.addAssign_operation (var_result_5257  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 126)) ;
                enumerator_5814.gotoNextObject () ;
              }
              ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssign_operation (var_resultType_4207, var_operandIRList_5781  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 128)) ;
            }
          }
          if (kBoolFalse == test_7) {
            outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayRepeatedDynamicValue (var_resultType_4207, extractedValue_4674_size, var_result_5257  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 130)) ;
          }
        }
      }
      if (kBoolFalse == test_4) {
        GALGAS_string var_individualConstructor_6112 = GALGAS_string ("(") ;
        cEnumerator_range enumerator_6144 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), extractedValue_4674_size.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134))), kENUMERATION_UP) ;
        while (enumerator_6144.hasCurrentObject ()) {
          var_individualConstructor_6112.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 135)) ;
          enumerator_6144.gotoNextObject () ;
        }
        var_individualConstructor_6112.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 137)) ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsEqual, var_constructorKey_4022.objectCompare (var_individualConstructor_6112)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_operandIRList var_operandIRList_6324 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 139)) ;
            GALGAS_bool var_resultIsStatic_6356 = GALGAS_bool (true) ;
            const GALGAS_constructorCallAST temp_9 = object ;
            cEnumerator_functionCallEffectiveParameterListAST enumerator_6398 (temp_9.readProperty_mParameterList (), kENUMERATION_UP) ;
            while (enumerator_6398.hasCurrentObject ()) {
              GALGAS_objectIR var_expressionResult_6918 ;
              callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_6398.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_4669_elementType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6918, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 142)) ;
              GALGAS_objectIR var_result_6951 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_6918, extractedValue_4669_elementType, enumerator_6398.current_mSelector (HERE).readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 155)) ;
              var_operandIRList_6324.addAssign_operation (var_result_6951  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 162)) ;
              GALGAS_bool test_10 = var_resultIsStatic_6356 ;
              if (kBoolTrue == test_10.boolEnum ()) {
                test_10 = extensionGetter_isStatic (var_result_6951, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 163)) ;
              }
              var_resultIsStatic_6356 = test_10 ;
              enumerator_6398.gotoNextObject () ;
            }
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = var_resultIsStatic_6356.boolEnum () ;
              if (kBoolTrue == test_11) {
                GALGAS_uint var_idx_7367 = ioArgument_ioStaticEntityMap.readProperty_mGlobalStructuredConstantList ().getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 166)) ;
                outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayStaticValues (var_resultType_4207, var_operandIRList_6324, var_idx_7367  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 167)) ;
                ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssign_operation (var_resultType_4207, var_operandIRList_6324  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 168)) ;
              }
            }
            if (kBoolFalse == test_11) {
              outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayDynamicValues (var_resultType_4207, var_operandIRList_6324  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 170)) ;
            }
          }
        }
        if (kBoolFalse == test_8) {
          const GALGAS_constructorCallAST temp_12 = object ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mErrorLocation (), GALGAS_string ("invalid constructor"), fixItArray13  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 173)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_constructorValue::kEnum_null:
    {
      outArgument_outResult = GALGAS_objectIR::constructor_null (var_resultType_4207  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 177)) ;
    }
    break ;
  case GALGAS_constructorValue::kEnum_simple:
    {
      const cEnumAssociatedValues_constructorValue_simple * extractPtr_8159 = (const cEnumAssociatedValues_constructorValue_simple *) (var_initValue_4594.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_7900_value = extractPtr_8159->mAssociatedValue0 ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_constructorCallAST temp_15 = object ;
        test_14 = GALGAS_bool (kIsNotEqual, temp_15.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 179)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_constructorCallAST temp_16 = object ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mErrorLocation (), var_resultType_4207.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 180)), fixItArray17  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 180)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_14) {
        outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_4207, extractedValue_7900_value  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 182)) ;
      }
    }
    break ;
  case GALGAS_constructorValue::kEnum_structure:
    {
      const cEnumAssociatedValues_constructorValue_structure * extractPtr_9929 = (const cEnumAssociatedValues_constructorValue_structure *) (var_initValue_4594.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_8195_sortedOperandList = extractPtr_9929->mAssociatedValue0 ;
      GALGAS_sortedOperandIRList var_sortedOperandIRList_8226 = extractedValue_8195_sortedOperandList ;
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        const GALGAS_constructorCallAST temp_19 = object ;
        test_18 = GALGAS_bool (kIsNotEqual, temp_19.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 186)).objectCompare (var_constructorSignature_4579.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 186)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          const GALGAS_constructorCallAST temp_20 = object ;
          GALGAS_string temp_21 ;
          const enumGalgasBool test_22 = GALGAS_bool (kIsStrictSup, var_constructorSignature_4579.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 188)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_22) {
            temp_21 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_22) {
            temp_21 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_constructorCallAST temp_23 = object ;
          TC_Array <C_FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (temp_20.readProperty_mErrorLocation (), GALGAS_string ("this constructor call should name ").add_operation (var_constructorSignature_4579.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 187)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 188)).add_operation (temp_23.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 189)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 189)), fixItArray24  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_18) {
        const GALGAS_constructorCallAST temp_25 = object ;
        cEnumerator_constructorSignature enumerator_8649 (var_constructorSignature_4579, kENUMERATION_UP) ;
        cEnumerator_functionCallEffectiveParameterListAST enumerator_8718 (temp_25.readProperty_mParameterList (), kENUMERATION_UP) ;
        while (enumerator_8649.hasCurrentObject () && enumerator_8718.hasCurrentObject ()) {
          enumGalgasBool test_26 = kBoolTrue ;
          if (kBoolTrue == test_26) {
            test_26 = GALGAS_bool (kIsNotEqual, enumerator_8718.current_mSelector (HERE).readProperty_string ().objectCompare (enumerator_8649.current_mSelector (HERE))).boolEnum () ;
            if (kBoolTrue == test_26) {
              TC_Array <C_FixItDescription> fixItArray27 ;
              inCompiler->emitSemanticError (enumerator_8718.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '!").add_operation (enumerator_8649.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)), fixItArray27  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)) ;
            }
          }
          GALGAS_objectIR var_expressionResult_9393 ;
          callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_8718.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_8649.current_mType (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_9393, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 196)) ;
          GALGAS_objectIR var_result_9422 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_9393, enumerator_8649.current_mType (HERE), enumerator_8718.current_mSelector (HERE).readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 209)) ;
          {
          extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_result_9422, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 216)) ;
          }
          var_sortedOperandIRList_8226.addAssign_operation (var_result_9422, enumerator_8649.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 217)) ;
          enumerator_8649.gotoNextObject () ;
          enumerator_8718.gotoNextObject () ;
        }
        outArgument_outResult = GALGAS_objectIR::constructor_llvmStructureValue (var_resultType_4207, var_sortedOperandIRList_8226  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 219)) ;
      }
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constructorCallAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_constructorCallAST.mSlotID,
                                          extensionMethod_constructorCallAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constructorCallAST_analyzeExpression (defineExtensionMethod_constructorCallAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeInfixOperatorAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_compileTimeInfixOperatorAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_compileTimeInfixOperatorAST * object = (const cPtr_compileTimeInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeInfixOperatorAST) ;
  const GALGAS_compileTimeInfixOperatorAST temp_0 = object ;
  result_outLocation = temp_0.readProperty_mInfixOperatorLocation () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_compileTimeInfixOperatorAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST.mSlotID,
                                                  extensionGetter_compileTimeInfixOperatorAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_compileTimeInfixOperatorAST_locationForErrorSignaling (defineExtensionGetter_compileTimeInfixOperatorAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixOperatorAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_compileTimeInfixOperatorAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_compileTimeInfixOperatorAST * object = (const cPtr_compileTimeInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeInfixOperatorAST) ;
  const GALGAS_compileTimeInfixOperatorAST temp_0 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_1 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_2 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_3 = object ;
  GALGAS_lstring var_nodeName_5710 = GALGAS_lstring::constructor_new (extensionGetter_string (temp_0.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (temp_1.readProperty_mLeftTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)), temp_3.readProperty_mInfixOperatorLocation ()  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)) ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_4 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_5710, temp_4, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 184)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5710, temp_5.readProperty_mLeftTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 185)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_6 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5710, temp_6.readProperty_mRightTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 186)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_7 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5710, temp_7.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 187)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 188)), var_nodeName_5710 COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 188)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compileTimeInfixOperatorAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST.mSlotID,
                                               extensionMethod_compileTimeInfixOperatorAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compileTimeInfixOperatorAST_enterInPrecedenceGraph (defineExtensionMethod_compileTimeInfixOperatorAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeInfixOperatorAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_compileTimeInfixOperatorAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_compileTimeInfixOperatorAST * object = (const cPtr_compileTimeInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeInfixOperatorAST) ;
  const GALGAS_compileTimeInfixOperatorAST temp_0 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_1 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_2 = object ;
  result_outRepresentation = temp_0.readProperty_mLeftTypeName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (extensionGetter_string (temp_1.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_compileTimeInfixOperatorAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST.mSlotID,
                                                           extensionGetter_compileTimeInfixOperatorAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_compileTimeInfixOperatorAST_keyRepresentationForErrorSignaling (defineExtensionGetter_compileTimeInfixOperatorAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixOperatorAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_unifiedTypeMapEntry var_leftTypeProxy_7497 ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_0 = object ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mLeftTypeName (), var_leftTypeProxy_7497, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 212)) ;
  }
  GALGAS_omnibusType var_leftType_7513 = extensionGetter_type (var_leftTypeProxy_7497, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 213)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_1 = object ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_leftType_7513.ptr (), temp_1.readProperty_mLeftTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 214)) ;
  GALGAS_unifiedTypeMapEntry var_rightTypeProxy_7676 ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_2 = object ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mRightTypeName (), var_rightTypeProxy_7676, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 215)) ;
  }
  GALGAS_omnibusType var_rightType_7693 = extensionGetter_type (var_rightTypeProxy_7676, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 216)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_3 = object ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_rightType_7693.ptr (), temp_3.readProperty_mRightTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 217)) ;
  GALGAS_unifiedTypeMapEntry var_resultTypeProxy_7861 ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_4 = object ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mResultTypeName (), var_resultTypeProxy_7861, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 218)) ;
  }
  GALGAS_omnibusType var_resultType_7879 = extensionGetter_type (var_resultTypeProxy_7861, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 219)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_5 = object ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_resultType_7879.ptr (), temp_5.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 220)) ;
  GALGAS_ctCheckMap var_ctCheckMap_8040 = GALGAS_ctCheckMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-compile-time.galgas", 222)) ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_6 = object ;
  var_ctCheckMap_8040.setter_insertKey (temp_6.readProperty_mLeftOperandName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 223)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_7 = object ;
  var_ctCheckMap_8040.setter_insertKey (temp_7.readProperty_mRightOperandName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 224)) ;
  }
  const GALGAS_compileTimeInfixOperatorAST temp_8 = object ;
  callExtensionMethod_checkCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_8.readProperty_mExpression ().ptr (), var_ctCheckMap_8040, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 225)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_9 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_10 = object ;
  GALGAS_lstring var_key_8251 = function_infixOperatorMapKey (var_leftType_7513, extensionGetter_omnibusInfixOperator (temp_9.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 227)), temp_10.readProperty_mInfixOperatorLocation (), var_rightType_7693, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 227)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_11 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_12 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_13 = object ;
  GALGAS_compileTimeInfixOperatorUsage var_definition_8363 = GALGAS_compileTimeInfixOperatorUsage::constructor_new (temp_11.readProperty_mLeftOperandName (), temp_12.readProperty_mRightOperandName (), temp_13.readProperty_mExpression ()  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 228)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8251, var_resultType_7879, var_definition_8363, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 233)) ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_compileTimeInfixOperatorAST temp_15 = object ;
    GALGAS_bool test_16 = GALGAS_bool (kIsEqual, temp_15.readProperty_mInfixOperator ().objectCompare (GALGAS_compileTimeInfixOperatorEnumeration::constructor_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 235)))) ;
    if (kBoolTrue != test_16.boolEnum ()) {
      const GALGAS_compileTimeInfixOperatorAST temp_17 = object ;
      test_16 = GALGAS_bool (kIsEqual, temp_17.readProperty_mInfixOperator ().objectCompare (GALGAS_compileTimeInfixOperatorEnumeration::constructor_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 235)))) ;
    }
    test_14 = test_16.boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_compileTimeInfixOperatorAST temp_18 = object ;
      GALGAS_lstring var_equal_5F_key_8681 = function_infixOperatorMapKey (var_leftType_7513, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 236)), temp_18.readProperty_mInfixOperatorLocation (), var_rightType_7693, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 236)) ;
      const GALGAS_compileTimeInfixOperatorAST temp_19 = object ;
      GALGAS_lstring var_lessThan_5F_key_8784 = function_infixOperatorMapKey (var_leftType_7513, GALGAS_omnibusInfixOperator::constructor_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 237)), temp_19.readProperty_mInfixOperatorLocation (), var_rightType_7693, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 237)) ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = ioArgument_ioContext.readProperty_mInfixOperatorMap ().getter_hasKey (var_equal_5F_key_8681.readProperty_string () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)).operator_and (ioArgument_ioContext.readProperty_mInfixOperatorMap ().getter_hasKey (var_lessThan_5F_key_8784.readProperty_string () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)) COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)).boolEnum () ;
        if (kBoolTrue == test_20) {
          GALGAS_omnibusInfixOperatorUsage var_equalOperatorUsage_9061 ;
          GALGAS_omnibusType joker_9036 ; // Joker input parameter
          ioArgument_ioContext.readProperty_mInfixOperatorMap ().method_searchKey (var_equal_5F_key_8681, joker_9036, var_equalOperatorUsage_9061, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 239)) ;
          GALGAS_omnibusInfixOperatorUsage var_lessThanOperatorUsage_9149 ;
          GALGAS_omnibusType joker_9121 ; // Joker input parameter
          ioArgument_ioContext.readProperty_mInfixOperatorMap ().method_searchKey (var_lessThan_5F_key_8784, joker_9121, var_lessThanOperatorUsage_9149, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 240)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_compileTimeInfixOperatorUsage var_eou_9165 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_equalOperatorUsage_9061.ptr ())) ;
            if (NULL == var_eou_9165.ptr ()) {
              test_21 = kBoolFalse ;
            }
            if (kBoolTrue == test_21) {
              GALGAS_compileTimeInfixOperatorUsage var_ltou_9237 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_lessThanOperatorUsage_9149.ptr ())) ;
              if (NULL == var_ltou_9237.ptr ()) {
                test_21 = kBoolFalse ;
              }
              if (kBoolTrue == test_21) {
                GALGAS_compileTimeInfixInfEqualOperatorUsage var_infEqual_5F_definition_9330 = GALGAS_compileTimeInfixInfEqualOperatorUsage::constructor_new (var_eou_9165, var_ltou_9237  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 243)) ;
                const GALGAS_compileTimeInfixOperatorAST temp_22 = object ;
                GALGAS_lstring var_infEqual_5F_key_9411 = function_infixOperatorMapKey (var_leftType_7513, GALGAS_omnibusInfixOperator::constructor_infEqual (SOURCE_FILE ("infix-operator-compile-time.galgas", 244)), temp_22.readProperty_mInfixOperatorLocation (), var_rightType_7693, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 244)) ;
                {
                ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_infEqual_5F_key_9411, var_resultType_7879, var_infEqual_5F_definition_9330, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 245)) ;
                }
              }
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    const GALGAS_compileTimeInfixOperatorAST temp_24 = object ;
    test_23 = GALGAS_bool (kIsEqual, temp_24.readProperty_mInfixOperator ().objectCompare (GALGAS_compileTimeInfixOperatorEnumeration::constructor_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 250)))).boolEnum () ;
    if (kBoolTrue == test_23) {
      const GALGAS_compileTimeInfixOperatorAST temp_25 = object ;
      GALGAS_lstring var_addOpNoOVF_5F_key_9709 = function_infixOperatorMapKey (var_leftType_7513, GALGAS_omnibusInfixOperator::constructor_addOpNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 251)), temp_25.readProperty_mInfixOperatorLocation (), var_rightType_7693, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 251)) ;
      {
      ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_addOpNoOVF_5F_key_9709, var_resultType_7879, var_definition_8363, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 252)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compileTimeInfixOperatorAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST.mSlotID,
                                       extensionMethod_compileTimeInfixOperatorAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compileTimeInfixOperatorAST_enterInContext (defineExtensionMethod_compileTimeInfixOperatorAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_bigint var_result_11594 ;
  const GALGAS_compileTimeInfixOperatorUsage temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_compileTimeInfixOperatorUsage *) temp_0.ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_11594, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 293)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_11594  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 294)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compileTimeInfixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage.mSlotID,
                                     extensionMethod_compileTimeInfixOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compileTimeInfixOperatorUsage_generateCode (defineExtensionMethod_compileTimeInfixOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixInfEqualOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_bigint var_result_12586 ;
  const GALGAS_compileTimeInfixInfEqualOperatorUsage temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_compileTimeInfixOperatorUsage *) temp_0.readProperty_mEqualOperatorUsage ().ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_12586, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 316)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_result_12586.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 317)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_compileTimeInfixInfEqualOperatorUsage temp_2 = object ;
      callExtensionMethod_eval ((const cPtr_compileTimeInfixOperatorUsage *) temp_2.readProperty_mLessThanOperatorUsage ().ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_12586, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 318)) ;
    }
  }
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_12586  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 320)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compileTimeInfixInfEqualOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage.mSlotID,
                                     extensionMethod_compileTimeInfixInfEqualOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compileTimeInfixInfEqualOperatorUsage_generateCode (defineExtensionMethod_compileTimeInfixInfEqualOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmInfixOperatorAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_llvmInfixOperatorAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_llvmInfixOperatorAST * object = (const cPtr_llvmInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmInfixOperatorAST) ;
  const GALGAS_llvmInfixOperatorAST temp_0 = object ;
  result_outLocation = temp_0.readProperty_mInfixOperatorLocation () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_llvmInfixOperatorAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_llvmInfixOperatorAST.mSlotID,
                                                  extensionGetter_llvmInfixOperatorAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_llvmInfixOperatorAST_locationForErrorSignaling (defineExtensionGetter_llvmInfixOperatorAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendInfixOperatorDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendInfixOperatorDeclaration (const GALGAS_omnibusInfixOperator constinArgument_inInfixOperator,
                                             const GALGAS_string constinArgument_inLLVMOperation,
                                             const GALGAS_string constinArgument_inTypeName,
                                             const GALGAS_string constinArgument_inResultOmnibusTypeName,
                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionList var_llvmInstructionList_1755 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 36)) ;
  GALGAS_llvmGenerationInstructionElementList var_instructionElements_1824 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 37)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 38))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 38))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 38)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 40))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 40))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 40)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 41))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 41)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 42))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 42))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 42)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 43))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 43)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 44))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 44))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 44)) ;
  GALGAS_llvmGenerationInstructionElementList temp_0 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 45)) ;
  temp_0.plusAssign_operation (var_instructionElements_1824, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 45)) ;
  var_llvmInstructionList_1755.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_0  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 45))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 45)) ;
  GALGAS_abstractDeclarationAST var_declaration_2368 = GALGAS_llvmInfixOperatorAST::constructor_new (constinArgument_inInfixOperator, GALGAS_location::constructor_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 48)), GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 49)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 50)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 51)), GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 52)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 53)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 54)), constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 55)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 56)), var_llvmInstructionList_1755  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 46)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_2368.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 59)) ;
  var_llvmInstructionList_1755 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 61)) ;
  var_instructionElements_1824 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 62)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 63)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 65))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 65))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 65)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 66))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 66)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 67))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 67))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 67)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 68))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 68)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 69))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 69))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 69)) ;
  GALGAS_llvmGenerationInstructionElementList temp_1 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 70)) ;
  temp_1.plusAssign_operation (var_instructionElements_1824, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 70)) ;
  var_llvmInstructionList_1755.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_1  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 70))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 70)) ;
  var_declaration_2368 = GALGAS_llvmInfixOperatorAST::constructor_new (constinArgument_inInfixOperator, GALGAS_location::constructor_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 73)), GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 74)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 75)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 76)), GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 77)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 78)).getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 78)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 79)), constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 80)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 81)), var_llvmInstructionList_1755  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 71)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_2368.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 84)) ;
  var_llvmInstructionList_1755 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 86)) ;
  var_instructionElements_1824 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 87)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 88))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 88))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 88)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 90))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 90))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 90)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 91))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 91)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 92))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 92))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 92)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 93))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 93)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 94))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 94))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 94)) ;
  GALGAS_llvmGenerationInstructionElementList temp_2 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 95)) ;
  temp_2.plusAssign_operation (var_instructionElements_1824, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 95)) ;
  var_llvmInstructionList_1755.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_2  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 95))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 95)) ;
  var_declaration_2368 = GALGAS_llvmInfixOperatorAST::constructor_new (constinArgument_inInfixOperator, GALGAS_location::constructor_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 98)), GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 99)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 100)).getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 100)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 101)), GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 102)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 103)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 104)), constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 105)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 106)), var_llvmInstructionList_1755  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 96)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_2368.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 109)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInfixOperatorAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmInfixOperatorAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmInfixOperatorAST * object = (const cPtr_llvmInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmInfixOperatorAST) ;
  const GALGAS_llvmInfixOperatorAST temp_0 = object ;
  const GALGAS_llvmInfixOperatorAST temp_1 = object ;
  const GALGAS_llvmInfixOperatorAST temp_2 = object ;
  const GALGAS_llvmInfixOperatorAST temp_3 = object ;
  GALGAS_lstring var_nodeName_6567 = GALGAS_lstring::constructor_new (extensionGetter_string (temp_0.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (temp_1.readProperty_mLeftTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)), temp_3.readProperty_mInfixOperatorLocation ()  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)) ;
  {
  const GALGAS_llvmInfixOperatorAST temp_4 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6567, temp_4, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 162)) ;
  }
  {
  const GALGAS_llvmInfixOperatorAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6567, temp_5.readProperty_mLeftTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 163)) ;
  }
  {
  const GALGAS_llvmInfixOperatorAST temp_6 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6567, temp_6.readProperty_mRightTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 164)) ;
  }
  {
  const GALGAS_llvmInfixOperatorAST temp_7 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6567, temp_7.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 165)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmInfixOperatorAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_llvmInfixOperatorAST.mSlotID,
                                               extensionMethod_llvmInfixOperatorAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmInfixOperatorAST_enterInPrecedenceGraph (defineExtensionMethod_llvmInfixOperatorAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmInfixOperatorAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_llvmInfixOperatorAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_llvmInfixOperatorAST * object = (const cPtr_llvmInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmInfixOperatorAST) ;
  const GALGAS_llvmInfixOperatorAST temp_0 = object ;
  const GALGAS_llvmInfixOperatorAST temp_1 = object ;
  const GALGAS_llvmInfixOperatorAST temp_2 = object ;
  result_outRepresentation = temp_0.readProperty_mLeftTypeName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)).add_operation (extensionGetter_string (temp_1.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_llvmInfixOperatorAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_llvmInfixOperatorAST.mSlotID,
                                                           extensionGetter_llvmInfixOperatorAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_llvmInfixOperatorAST_keyRepresentationForErrorSignaling (defineExtensionGetter_llvmInfixOperatorAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInfixOperatorAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_unifiedTypeMapEntry var_leftTypeProxy_8267 ;
  {
  const GALGAS_llvmInfixOperatorAST temp_0 = object ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mLeftTypeName (), var_leftTypeProxy_8267, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 189)) ;
  }
  GALGAS_omnibusType var_leftType_8283 = extensionGetter_type (var_leftTypeProxy_8267, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 190)) ;
  GALGAS_unifiedTypeMapEntry var_rightTypeProxy_8381 ;
  {
  const GALGAS_llvmInfixOperatorAST temp_1 = object ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mRightTypeName (), var_rightTypeProxy_8381, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 191)) ;
  }
  GALGAS_omnibusType var_rightType_8398 = extensionGetter_type (var_rightTypeProxy_8381, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 192)) ;
  GALGAS_unifiedTypeMapEntry var_resultTypeProxy_8499 ;
  {
  const GALGAS_llvmInfixOperatorAST temp_2 = object ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_8499, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 193)) ;
  }
  GALGAS_omnibusType var_resultType_8517 = extensionGetter_type (var_resultTypeProxy_8499, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 194)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8283.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)).operator_and (callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8398.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)) COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_llvmInfixOperatorAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mInfixOperatorLocation (), GALGAS_string ("one of the two argument types should not be a compile time type"), fixItArray5  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 196)) ;
    }
  }
  const GALGAS_llvmInfixOperatorAST temp_6 = object ;
  callExtensionMethod_checkIsNotCompileTimeType ((const cPtr_omnibusType *) var_resultType_8517.ptr (), temp_6.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 198)) ;
  const GALGAS_llvmInfixOperatorAST temp_7 = object ;
  const GALGAS_llvmInfixOperatorAST temp_8 = object ;
  GALGAS_lstring var_key_8842 = function_infixOperatorMapKey (var_leftType_8283, temp_7.readProperty_mInfixOperator (), temp_8.readProperty_mInfixOperatorLocation (), var_rightType_8398, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 200)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8283.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 202)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 202)).operator_and (callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8398.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 202)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 202)) COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 202)).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_llvmInfixOperatorAST temp_10 = object ;
      const GALGAS_llvmInfixOperatorAST temp_11 = object ;
      const GALGAS_llvmInfixOperatorAST temp_12 = object ;
      const GALGAS_llvmInfixOperatorAST temp_13 = object ;
      GALGAS_llvmInfixOperatorUsage var_definition_9058 = GALGAS_llvmInfixOperatorUsage::constructor_new (function_infixOperatorFunctionName (var_leftType_8283, temp_10.readProperty_mInfixOperator (), var_rightType_8398, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 204)), temp_11.readProperty_mLeftOperandName (), temp_12.readProperty_mRightOperandName (), temp_13.readProperty_mInstructionList ()  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 203)) ;
      {
      ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8842, var_resultType_8517, var_definition_9058, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 209)) ;
      }
      GALGAS_assignmentGenerationVarMap var_varMap_9379 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-llvm.galgas", 210)) ;
      {
      const GALGAS_llvmInfixOperatorAST temp_14 = object ;
      const GALGAS_llvmInfixOperatorAST temp_15 = object ;
      var_varMap_9379.setter_insertKey (temp_14.readProperty_mLeftOperandName (), GALGAS_string ("%").add_operation (temp_15.readProperty_mLeftOperandName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 211)) ;
      }
      {
      const GALGAS_llvmInfixOperatorAST temp_16 = object ;
      const GALGAS_llvmInfixOperatorAST temp_17 = object ;
      var_varMap_9379.setter_insertKey (temp_16.readProperty_mRightOperandName (), GALGAS_string ("%").add_operation (temp_17.readProperty_mRightOperandName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 212)) ;
      }
      GALGAS_assignmentGenerationVarMap var_typeMap_9584 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-llvm.galgas", 213)) ;
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8283.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 214)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 214)).boolEnum () ;
        if (kBoolTrue == test_18) {
          {
          const GALGAS_llvmInfixOperatorAST temp_19 = object ;
          var_typeMap_9584.setter_insertKey (temp_19.readProperty_mLeftOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_leftType_8283.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 215)) ;
          }
        }
      }
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8398.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 217)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 217)).boolEnum () ;
        if (kBoolTrue == test_20) {
          {
          const GALGAS_llvmInfixOperatorAST temp_21 = object ;
          var_typeMap_9584.setter_insertKey (temp_21.readProperty_mRightOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_rightType_8398.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 218)) ;
          }
        }
      }
      {
      var_typeMap_9584.setter_insertKey (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 220)), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_resultType_8517.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 220)) ;
      }
      GALGAS_llvmGenerationInstructionList var_instructionList_9978 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 221)) ;
      var_instructionList_9978.addAssign_operation (GALGAS_llvmVarInstruction::constructor_new (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 222))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 222))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 222)) ;
      const GALGAS_llvmInfixOperatorAST temp_22 = object ;
      var_instructionList_9978.plusAssign_operation(temp_22.readProperty_mInstructionList (), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 223)) ;
      {
      extensionSetter_appendReturn (var_instructionList_9978, GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 224)), GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 224)) ;
      }
      GALGAS_stringlist var_generatedInstructions_10217 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 225)) ;
      GALGAS_allocaList var_allocaList_10253 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 226)) ;
      GALGAS_uint var_temporaryIndex_10287 = GALGAS_uint ((uint32_t) 0U) ;
      extensionMethod_generateIRCode (var_instructionList_9978, var_varMap_9379, var_typeMap_9584, var_generatedInstructions_10217, var_temporaryIndex_10287, var_allocaList_10253, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 228)) ;
      const GALGAS_llvmInfixOperatorAST temp_23 = object ;
      const GALGAS_llvmInfixOperatorAST temp_24 = object ;
      const GALGAS_llvmInfixOperatorAST temp_25 = object ;
      const GALGAS_llvmInfixOperatorAST temp_26 = object ;
      GALGAS_infixOperatorRoutineIR var_routine_10415 = GALGAS_infixOperatorRoutineIR::constructor_new (GALGAS_lstring::constructor_new (function_infixOperatorFunctionName (var_leftType_8283, temp_23.readProperty_mInfixOperator (), var_rightType_8398, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 230)), temp_24.readProperty_mInfixOperatorLocation ()  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 230)), GALGAS_bool (true), GALGAS_bool (false), var_leftType_8283, temp_25.readProperty_mLeftOperandName ().readProperty_string (), var_rightType_8398, temp_26.readProperty_mRightOperandName ().readProperty_string (), var_resultType_8517, var_generatedInstructions_10217, var_allocaList_10253  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 229)) ;
      ioArgument_ioRoutineListIR.addAssign_operation (var_routine_10415  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 241)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_llvmInfixOperatorAST temp_27 = object ;
    const GALGAS_llvmInfixOperatorAST temp_28 = object ;
    const GALGAS_llvmInfixOperatorAST temp_29 = object ;
    GALGAS_llvmInlineInfixOperatorUsage var_definition_10886 = GALGAS_llvmInlineInfixOperatorUsage::constructor_new (temp_27.readProperty_mLeftOperandName (), temp_28.readProperty_mRightOperandName (), temp_29.readProperty_mInstructionList ()  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 243)) ;
    {
    ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8842, var_resultType_8517, var_definition_10886, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 248)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmInfixOperatorAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_llvmInfixOperatorAST.mSlotID,
                                       extensionMethod_llvmInfixOperatorAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmInfixOperatorAST_enterInContext (defineExtensionMethod_llvmInfixOperatorAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInfixOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_objectIR var_leftOperand_12138 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_12138, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 277)) ;
  }
  GALGAS_objectIR var_rightOperand_12274 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_12274, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 282)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 287)) ;
  }
  GALGAS_procCallEffectiveParameterListIR var_argumentList_12546 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 288)) ;
  var_argumentList_12546.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("infix-operator-llvm.galgas", 289)), var_leftOperand_12138  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 289)) ;
  var_argumentList_12546.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("infix-operator-llvm.galgas", 290)), var_rightOperand_12274  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 290)) ;
  const GALGAS_llvmInfixOperatorUsage temp_0 = object ;
  const GALGAS_llvmInfixOperatorUsage temp_1 = object ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (outArgument_outResultValue, GALGAS_lstring::constructor_new (temp_0.readProperty_mInfixMangledFunctionName (), constinArgument_inOperatorLocation  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 293)), temp_1.readProperty_mInfixMangledFunctionName (), var_argumentList_12546  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 291))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 291)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmInfixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_llvmInfixOperatorUsage.mSlotID,
                                     extensionMethod_llvmInfixOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmInfixOperatorUsage_generateCode (defineExtensionMethod_llvmInfixOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInlineInfixOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_objectIR var_leftOperand_13697 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_13697, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 321)) ;
  }
  GALGAS_objectIR var_rightOperand_13833 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_13833, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 326)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 331)) ;
  }
  GALGAS_assignmentGenerationVarMap var_varMap_14093 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-llvm.galgas", 332)) ;
  {
  const GALGAS_llvmInlineInfixOperatorUsage temp_0 = object ;
  var_varMap_14093.setter_insertKey (temp_0.readProperty_mLeftOperandName (), extensionGetter_llvmName (var_leftOperand_13697, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 333)) ;
  }
  {
  const GALGAS_llvmInlineInfixOperatorUsage temp_1 = object ;
  var_varMap_14093.setter_insertKey (temp_1.readProperty_mRightOperandName (), extensionGetter_llvmName (var_rightOperand_13833, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 334)) ;
  }
  {
  var_varMap_14093.setter_insertKey (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 335)), extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 335)) ;
  }
  GALGAS_assignmentGenerationVarMap var_typeMap_14352 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-llvm.galgas", 336)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13697, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 337)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 337)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 337)).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GALGAS_llvmInlineInfixOperatorUsage temp_3 = object ;
      var_typeMap_14352.setter_insertKey (temp_3.readProperty_mLeftOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13697, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 338)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 338)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_13833, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 340)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 340)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 340)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_llvmInlineInfixOperatorUsage temp_5 = object ;
      var_typeMap_14352.setter_insertKey (temp_5.readProperty_mRightOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_13833, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 341)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 341)) ;
      }
    }
  }
  GALGAS_stringlist var_generatedInstructions_14686 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 343)) ;
  const GALGAS_llvmInlineInfixOperatorUsage temp_6 = object ;
  extensionMethod_generateIRCode (temp_6.readProperty_mInstructionList (), var_varMap_14093, var_typeMap_14352, var_generatedInstructions_14686, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 344)) ;
  cEnumerator_stringlist enumerator_14831 (var_generatedInstructions_14686, kENUMERATION_UP) ;
  while (enumerator_14831.hasCurrentObject ()) {
    {
    extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, enumerator_14831.current_mValue (HERE), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("infix-operator-llvm.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 346)) ;
    }
    enumerator_14831.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmInlineInfixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage.mSlotID,
                                     extensionMethod_llvmInlineInfixOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmInlineInfixOperatorUsage_generateCode (defineExtensionMethod_llvmInlineInfixOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@infixOperatorRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_infixOperatorRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorRoutineIR * object = (const cPtr_infixOperatorRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorRoutineIR) ;
  const GALGAS_infixOperatorRoutineIR temp_0 = object ;
  const GALGAS_infixOperatorRoutineIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mResultType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)) ;
  const GALGAS_infixOperatorRoutineIR temp_2 = object ;
  const GALGAS_infixOperatorRoutineIR temp_3 = object ;
  const GALGAS_infixOperatorRoutineIR temp_4 = object ;
  const GALGAS_infixOperatorRoutineIR temp_5 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mTargetType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (temp_3.readProperty_mTargetVarName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)).add_operation (temp_5.readProperty_mSourceVarName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)).add_operation (GALGAS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)) ;
  const GALGAS_infixOperatorRoutineIR temp_6 = object ;
  extensionMethod_generateAllocaList (temp_6.readProperty_mAllocaList (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 374)) ;
  const GALGAS_infixOperatorRoutineIR temp_7 = object ;
  cEnumerator_stringlist enumerator_16228 (temp_7.readProperty_mGeneratedInstructions (), kENUMERATION_UP) ;
  while (enumerator_16228.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_16228.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 376)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 376)) ;
    enumerator_16228.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 378)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_infixOperatorRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_infixOperatorRoutineIR.mSlotID,
                                           extensionMethod_infixOperatorRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_infixOperatorRoutineIR_llvmCodeGeneration (defineExtensionMethod_infixOperatorRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inlineInfixOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_objectIR var_leftOperand_2897 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_2897, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 76)) ;
  }
  GALGAS_objectIR var_rightOperand_3020 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_3020, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 78)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-map.galgas", 79)) ;
  }
  const GALGAS_inlineInfixOperatorUsage temp_0 = object ;
  GALGAS_string var_s_3200 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (temp_0.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_2897, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (extensionGetter_llvmName (var_leftOperand_2897, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)).add_operation (extensionGetter_llvmName (var_rightOperand_3020, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)) ;
  {
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_3200, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("infix-operator-map.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 82)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inlineInfixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_inlineInfixOperatorUsage.mSlotID,
                                     extensionMethod_inlineInfixOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inlineInfixOperatorUsage_generateCode (defineExtensionMethod_inlineInfixOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@omnibusInfixOperatorExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_omnibusInfixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_omnibusInfixOperatorExpressionAST * object = (const cPtr_omnibusInfixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_omnibusInfixOperatorExpressionAST) ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_0 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 68)) ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_1 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 69)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_omnibusInfixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_omnibusInfixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_omnibusInfixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_omnibusInfixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@omnibusInfixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_omnibusInfixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_omnibusInfixOperatorExpressionAST * object = (const cPtr_omnibusInfixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_omnibusInfixOperatorExpressionAST) ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 77)) ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_1 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 78)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_omnibusInfixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_omnibusInfixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_omnibusInfixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_omnibusInfixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@omnibusInfixOperatorExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_objectIR var_leftOperand_4650 ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperand_4650, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 99)) ;
  GALGAS_objectIR var_rightOperand_5111 ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (var_leftOperand_4650, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 116)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightOperand_5111, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 113)) ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_2 = object ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_3 = object ;
  extensionMethod_generateInfixOperatorCode (constinArgument_inContext.readProperty_mInfixOperatorMap (), var_leftOperand_4650, temp_2.readProperty_mInfixOperator (), temp_3.readProperty_mOperatorLocation (), var_rightOperand_5111, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 127)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_omnibusInfixOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST.mSlotID,
                                          extensionMethod_omnibusInfixOperatorExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_omnibusInfixOperatorExpressionAST_analyzeExpression (defineExtensionMethod_omnibusInfixOperatorExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimePrefixOperatorAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_compiletimePrefixOperatorAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_compiletimePrefixOperatorAST * object = (const cPtr_compiletimePrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compiletimePrefixOperatorAST) ;
  const GALGAS_compiletimePrefixOperatorAST temp_0 = object ;
  result_outLocation = temp_0.readProperty_mPrefixOperatorLocation () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_compiletimePrefixOperatorAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST.mSlotID,
                                                  extensionGetter_compiletimePrefixOperatorAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_compiletimePrefixOperatorAST_locationForErrorSignaling (defineExtensionGetter_compiletimePrefixOperatorAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compiletimePrefixOperatorAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_compiletimePrefixOperatorAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_compiletimePrefixOperatorAST * object = (const cPtr_compiletimePrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compiletimePrefixOperatorAST) ;
  const GALGAS_compiletimePrefixOperatorAST temp_0 = object ;
  const GALGAS_compiletimePrefixOperatorAST temp_1 = object ;
  const GALGAS_compiletimePrefixOperatorAST temp_2 = object ;
  GALGAS_lstring var_nodeName_3768 = GALGAS_lstring::constructor_new (extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)), temp_2.readProperty_mPrefixOperatorLocation ()  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)) ;
  {
  const GALGAS_compiletimePrefixOperatorAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3768, temp_3, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 101)) ;
  }
  {
  const GALGAS_compiletimePrefixOperatorAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3768, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 102)) ;
  }
  {
  const GALGAS_compiletimePrefixOperatorAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3768, temp_5.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 103)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 104)), var_nodeName_3768 COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 104)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compiletimePrefixOperatorAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST.mSlotID,
                                               extensionMethod_compiletimePrefixOperatorAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compiletimePrefixOperatorAST_enterInPrecedenceGraph (defineExtensionMethod_compiletimePrefixOperatorAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimePrefixOperatorAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_compiletimePrefixOperatorAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_compiletimePrefixOperatorAST * object = (const cPtr_compiletimePrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compiletimePrefixOperatorAST) ;
  const GALGAS_compiletimePrefixOperatorAST temp_0 = object ;
  const GALGAS_compiletimePrefixOperatorAST temp_1 = object ;
  result_outRepresentation = extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_compiletimePrefixOperatorAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST.mSlotID,
                                                           extensionGetter_compiletimePrefixOperatorAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_compiletimePrefixOperatorAST_keyRepresentationForErrorSignaling (defineExtensionGetter_compiletimePrefixOperatorAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compiletimePrefixOperatorAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_unifiedTypeMapEntry var_receiverTypeProxy_5479 ;
  {
  const GALGAS_compiletimePrefixOperatorAST temp_0 = object ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_receiverTypeProxy_5479, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 128)) ;
  }
  GALGAS_omnibusType var_receiverType_5499 = extensionGetter_type (var_receiverTypeProxy_5479, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 129)) ;
  const GALGAS_compiletimePrefixOperatorAST temp_1 = object ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_receiverType_5499.ptr (), temp_1.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 130)) ;
  GALGAS_unifiedTypeMapEntry var_resultTypeProxy_5676 ;
  {
  const GALGAS_compiletimePrefixOperatorAST temp_2 = object ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_5676, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 131)) ;
  }
  GALGAS_omnibusType var_resultType_5694 = extensionGetter_type (var_resultTypeProxy_5676, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 132)) ;
  const GALGAS_compiletimePrefixOperatorAST temp_3 = object ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_resultType_5694.ptr (), temp_3.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 133)) ;
  GALGAS_ctCheckMap var_ctCheckMap_5855 = GALGAS_ctCheckMap::constructor_emptyMap (SOURCE_FILE ("prefix-operator-compile-time.galgas", 135)) ;
  {
  const GALGAS_compiletimePrefixOperatorAST temp_4 = object ;
  var_ctCheckMap_5855.setter_insertKey (temp_4.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 136)) ;
  }
  const GALGAS_compiletimePrefixOperatorAST temp_5 = object ;
  callExtensionMethod_checkCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_5.readProperty_mExpression ().ptr (), var_ctCheckMap_5855, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 137)) ;
  const GALGAS_compiletimePrefixOperatorAST temp_6 = object ;
  const GALGAS_compiletimePrefixOperatorAST temp_7 = object ;
  GALGAS_lstring var_key_6012 = function_prefixOperatorMapKey (var_receiverType_5499, extensionGetter_prefixOperator (temp_6.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 139)), temp_7.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 139)) ;
  const GALGAS_compiletimePrefixOperatorAST temp_8 = object ;
  const GALGAS_compiletimePrefixOperatorAST temp_9 = object ;
  const GALGAS_compiletimePrefixOperatorAST temp_10 = object ;
  GALGAS_compileTimePrefixOperatorUsage var_definition_6120 = GALGAS_compileTimePrefixOperatorUsage::constructor_new (temp_8.readProperty_mPrefixOperatorLocation (), temp_9.readProperty_mReceiverName (), temp_10.readProperty_mExpression ()  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 140)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_6012, var_receiverType_5499, var_resultType_5694, var_definition_6120, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 145)) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    const GALGAS_compiletimePrefixOperatorAST temp_12 = object ;
    test_11 = GALGAS_bool (kIsEqual, temp_12.readProperty_mPrefixOperator ().objectCompare (GALGAS_compileTimePrefixOperatorEnumeration::constructor_minusOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 147)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_compiletimePrefixOperatorAST temp_13 = object ;
      GALGAS_lstring var_minusNoOvf_5F_key_6429 = function_prefixOperatorMapKey (var_receiverType_5499, GALGAS_prefixOperator::constructor_minusNoOvf (SOURCE_FILE ("prefix-operator-compile-time.galgas", 148)), temp_13.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 148)) ;
      {
      ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_minusNoOvf_5F_key_6429, var_receiverType_5499, var_resultType_5694, var_definition_6120, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 149)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compiletimePrefixOperatorAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST.mSlotID,
                                       extensionMethod_compiletimePrefixOperatorAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compiletimePrefixOperatorAST_enterInContext (defineExtensionMethod_compiletimePrefixOperatorAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimePrefixOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_bigint var_receiverValue_7690 ;
  GALGAS_omnibusType joker_7662_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_literalInteger (joker_7662_1, var_receiverValue_7690, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 175)) ;
  GALGAS_ctMap var_varMap_7711 = GALGAS_ctMap::constructor_emptyMap (SOURCE_FILE ("prefix-operator-compile-time.galgas", 176)) ;
  {
  const GALGAS_compileTimePrefixOperatorUsage temp_0 = object ;
  var_varMap_7711.setter_insertKey (temp_0.readProperty_mReceiverOperandName (), var_receiverValue_7690, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 177)) ;
  }
  GALGAS_bigint var_result_7866 ;
  const GALGAS_compileTimePrefixOperatorUsage temp_1 = object ;
  callExtensionMethod_computeCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_1.readProperty_mExpression ().ptr (), var_varMap_7711, var_result_7866, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 178)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_7866  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 179)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compileTimePrefixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage.mSlotID,
                                     extensionMethod_compileTimePrefixOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compileTimePrefixOperatorUsage_generateCode (defineExtensionMethod_compileTimePrefixOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmPrefixOperatorAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_llvmPrefixOperatorAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_llvmPrefixOperatorAST * object = (const cPtr_llvmPrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmPrefixOperatorAST) ;
  const GALGAS_llvmPrefixOperatorAST temp_0 = object ;
  result_outLocation = temp_0.readProperty_mPrefixOperatorLocation () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_llvmPrefixOperatorAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_llvmPrefixOperatorAST.mSlotID,
                                                  extensionGetter_llvmPrefixOperatorAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_llvmPrefixOperatorAST_locationForErrorSignaling (defineExtensionGetter_llvmPrefixOperatorAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPrefixOperatorDeclaration_minus'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPrefixOperatorDeclaration_5F_minus (const GALGAS_string constinArgument_inOmnibusReceiverTypeName,
                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionList var_llvmInstructionList_2291 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 58)) ;
  GALGAS_llvmGenerationInstructionElementList var_instructionElements_2360 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 59)) ;
  var_instructionElements_2360.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 60))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 60))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 60)) ;
  var_instructionElements_2360.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = sub ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 61))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 61)) ;
  var_instructionElements_2360.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 62))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 62))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 62)) ;
  var_instructionElements_2360.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" 0, ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 63)) ;
  var_instructionElements_2360.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 64)) ;
  GALGAS_llvmGenerationInstructionElementList temp_0 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 65)) ;
  temp_0.plusAssign_operation (var_instructionElements_2360, inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 65)) ;
  var_llvmInstructionList_2291.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_0  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 65))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 65)) ;
  GALGAS_abstractDeclarationAST var_declaration_2776 = GALGAS_llvmPrefixOperatorAST::constructor_new (GALGAS_llvmPrefixOperatorEnumeration::constructor_minusOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 67)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 68)), GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 69)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 70)), var_llvmInstructionList_2291, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 72))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 66)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_2776.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 74)) ;
  var_declaration_2776 = GALGAS_llvmPrefixOperatorAST::constructor_new (GALGAS_llvmPrefixOperatorEnumeration::constructor_minusOpNoOvf (SOURCE_FILE ("prefix-operator-llvm.galgas", 76)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 77)), GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 78)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 79)), var_llvmInstructionList_2291, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 81))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 75)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_2776.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 83)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPrefixOperatorDeclaration_bitWiseComplement'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPrefixOperatorDeclaration_5F_bitWiseComplement (const GALGAS_string constinArgument_inOmnibusReceiverTypeName,
                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionList var_llvmInstructionList_3653 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 93)) ;
  GALGAS_llvmGenerationInstructionElementList var_instructionElements_3722 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 94)) ;
  var_instructionElements_3722.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 95))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 95))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 95)) ;
  var_instructionElements_3722.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = xor ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 96))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 96)) ;
  var_instructionElements_3722.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 97))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 97))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 97)) ;
  var_instructionElements_3722.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 98))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 98)) ;
  var_instructionElements_3722.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 99))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 99))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 99)) ;
  var_instructionElements_3722.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (", -1")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 100))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 100)) ;
  GALGAS_llvmGenerationInstructionElementList temp_0 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 101)) ;
  temp_0.plusAssign_operation (var_instructionElements_3722, inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 101)) ;
  var_llvmInstructionList_3653.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_0  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 101))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 101)) ;
  GALGAS_abstractDeclarationAST var_declaration_4187 = GALGAS_llvmPrefixOperatorAST::constructor_new (GALGAS_llvmPrefixOperatorEnumeration::constructor_bitWiseComplement (SOURCE_FILE ("prefix-operator-llvm.galgas", 103)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 104)), GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 105)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 106)), var_llvmInstructionList_3653, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 108))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 102)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_4187.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 110)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmPrefixOperatorAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmPrefixOperatorAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmPrefixOperatorAST * object = (const cPtr_llvmPrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmPrefixOperatorAST) ;
  const GALGAS_llvmPrefixOperatorAST temp_0 = object ;
  const GALGAS_llvmPrefixOperatorAST temp_1 = object ;
  const GALGAS_llvmPrefixOperatorAST temp_2 = object ;
  GALGAS_lstring var_nodeName_6530 = GALGAS_lstring::constructor_new (extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)), temp_2.readProperty_mPrefixOperatorLocation ()  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)) ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6530, temp_3, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 175)) ;
  }
  {
  const GALGAS_llvmPrefixOperatorAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6530, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 176)) ;
  }
  {
  const GALGAS_llvmPrefixOperatorAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6530, temp_5.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 177)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmPrefixOperatorAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_llvmPrefixOperatorAST.mSlotID,
                                               extensionMethod_llvmPrefixOperatorAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmPrefixOperatorAST_enterInPrecedenceGraph (defineExtensionMethod_llvmPrefixOperatorAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmPrefixOperatorAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_llvmPrefixOperatorAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_llvmPrefixOperatorAST * object = (const cPtr_llvmPrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmPrefixOperatorAST) ;
  const GALGAS_llvmPrefixOperatorAST temp_0 = object ;
  const GALGAS_llvmPrefixOperatorAST temp_1 = object ;
  result_outRepresentation = extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_llvmPrefixOperatorAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_llvmPrefixOperatorAST.mSlotID,
                                                           extensionGetter_llvmPrefixOperatorAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_llvmPrefixOperatorAST_keyRepresentationForErrorSignaling (defineExtensionGetter_llvmPrefixOperatorAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmPrefixOperatorAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_unifiedTypeMapEntry var_receiverTypeProxy_8148 ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_0 = object ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_receiverTypeProxy_8148, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 201)) ;
  }
  GALGAS_omnibusType var_receiverType_8168 = extensionGetter_type (var_receiverTypeProxy_8148, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 202)) ;
  const GALGAS_llvmPrefixOperatorAST temp_1 = object ;
  callExtensionMethod_checkIsNotCompileTimeType ((const cPtr_omnibusType *) var_receiverType_8168.ptr (), temp_1.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 203)) ;
  GALGAS_unifiedTypeMapEntry var_resultTypeProxy_8348 ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_2 = object ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_8348, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 204)) ;
  }
  GALGAS_omnibusType var_resultType_8366 = extensionGetter_type (var_resultTypeProxy_8348, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 205)) ;
  const GALGAS_llvmPrefixOperatorAST temp_3 = object ;
  callExtensionMethod_checkIsNotCompileTimeType ((const cPtr_omnibusType *) var_resultType_8366.ptr (), temp_3.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 206)) ;
  const GALGAS_llvmPrefixOperatorAST temp_4 = object ;
  GALGAS_string var_prefixMangledFunctionName_8528 = function_prefixOperatorFunctionName (var_receiverType_8168, extensionGetter_prefixOperator (temp_4.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 208)) ;
  const GALGAS_llvmPrefixOperatorAST temp_5 = object ;
  const GALGAS_llvmPrefixOperatorAST temp_6 = object ;
  GALGAS_lstring var_key_8605 = function_prefixOperatorMapKey (var_receiverType_8168, extensionGetter_prefixOperator (temp_5.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 209)), temp_6.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 209)) ;
  const GALGAS_llvmPrefixOperatorAST temp_7 = object ;
  const GALGAS_llvmPrefixOperatorAST temp_8 = object ;
  GALGAS_llvmPrefixOperatorUsage var_definition_8713 = GALGAS_llvmPrefixOperatorUsage::constructor_new (var_prefixMangledFunctionName_8528, temp_7.readProperty_mReceiverName (), temp_8.readProperty_mInstructionList ()  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 210)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_8605, var_receiverType_8168, var_resultType_8366, var_definition_8713, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 215)) ;
  }
  GALGAS_assignmentGenerationVarMap var_varMap_8985 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("prefix-operator-llvm.galgas", 217)) ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_9 = object ;
  const GALGAS_llvmPrefixOperatorAST temp_10 = object ;
  var_varMap_8985.setter_insertKey (temp_9.readProperty_mReceiverName (), GALGAS_string ("%").add_operation (temp_10.readProperty_mReceiverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 218)) ;
  }
  GALGAS_assignmentGenerationVarMap var_typeMap_9101 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("prefix-operator-llvm.galgas", 219)) ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_11 = object ;
  var_typeMap_9101.setter_insertKey (temp_11.readProperty_mReceiverName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_receiverType_8168.ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 220)) ;
  }
  {
  var_typeMap_9101.setter_insertKey (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 221)), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_resultType_8366.ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 221)) ;
  }
  GALGAS_llvmGenerationInstructionList var_instructionList_9303 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 222)) ;
  var_instructionList_9303.addAssign_operation (GALGAS_llvmVarInstruction::constructor_new (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 223))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 223))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 223)) ;
  const GALGAS_llvmPrefixOperatorAST temp_12 = object ;
  var_instructionList_9303.plusAssign_operation(temp_12.readProperty_mInstructionList (), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 224)) ;
  {
  extensionSetter_appendReturn (var_instructionList_9303, GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 225)), GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 225)) ;
  }
  GALGAS_stringlist var_generatedInstructions_9534 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 226)) ;
  GALGAS_allocaList var_allocaList_9568 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 227)) ;
  GALGAS_uint var_temporaryIndex_9600 = GALGAS_uint ((uint32_t) 0U) ;
  extensionMethod_generateIRCode (var_instructionList_9303, var_varMap_8985, var_typeMap_9101, var_generatedInstructions_9534, var_temporaryIndex_9600, var_allocaList_9568, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 229)) ;
  const GALGAS_llvmPrefixOperatorAST temp_13 = object ;
  const GALGAS_llvmPrefixOperatorAST temp_14 = object ;
  GALGAS_prefixOperatorRoutineIR var_routine_9724 = GALGAS_prefixOperatorRoutineIR::constructor_new (GALGAS_lstring::constructor_new (var_prefixMangledFunctionName_8528, temp_13.readProperty_mPrefixOperatorLocation ()  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 231)), GALGAS_bool (true), GALGAS_bool (false), var_receiverType_8168, temp_14.readProperty_mReceiverName ().readProperty_string (), var_resultType_8366, var_generatedInstructions_9534, var_allocaList_9568  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 230)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (var_routine_9724  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 240)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmPrefixOperatorAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_llvmPrefixOperatorAST.mSlotID,
                                       extensionMethod_llvmPrefixOperatorAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmPrefixOperatorAST_enterInContext (defineExtensionMethod_llvmPrefixOperatorAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmPrefixOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_objectIR var_receiverOperand_11053 = constinArgument_inReceiverOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_receiverOperand_11053, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 267)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 272)) ;
  }
  GALGAS_procCallEffectiveParameterListIR var_argumentList_11331 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 273)) ;
  var_argumentList_11331.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("prefix-operator-llvm.galgas", 274)), var_receiverOperand_11053  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 274)) ;
  const GALGAS_llvmPrefixOperatorUsage temp_0 = object ;
  const GALGAS_llvmPrefixOperatorUsage temp_1 = object ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (outArgument_outResultValue, GALGAS_lstring::constructor_new (temp_0.readProperty_mPrefixMangledFunctionName (), constinArgument_inOperatorLocation  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 277)), temp_1.readProperty_mPrefixMangledFunctionName (), var_argumentList_11331  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 275))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 275)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmPrefixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage.mSlotID,
                                     extensionMethod_llvmPrefixOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmPrefixOperatorUsage_generateCode (defineExtensionMethod_llvmPrefixOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_prefixOperatorRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                        const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                        GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorRoutineIR * object = (const cPtr_prefixOperatorRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorRoutineIR) ;
  const GALGAS_prefixOperatorRoutineIR temp_0 = object ;
  const GALGAS_prefixOperatorRoutineIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mResultType ().ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)) ;
  const GALGAS_prefixOperatorRoutineIR temp_2 = object ;
  const GALGAS_prefixOperatorRoutineIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (temp_3.readProperty_mReceiverVarName (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (GALGAS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)) ;
  const GALGAS_prefixOperatorRoutineIR temp_4 = object ;
  extensionMethod_generateAllocaList (temp_4.readProperty_mAllocaList (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 304)) ;
  const GALGAS_prefixOperatorRoutineIR temp_5 = object ;
  cEnumerator_stringlist enumerator_12729 (temp_5.readProperty_mGeneratedInstructions (), kENUMERATION_UP) ;
  while (enumerator_12729.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_12729.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)) ;
    enumerator_12729.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 308)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_prefixOperatorRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_prefixOperatorRoutineIR.mSlotID,
                                           extensionMethod_prefixOperatorRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_prefixOperatorRoutineIR_llvmCodeGeneration (defineExtensionMethod_prefixOperatorRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                              const GALGAS_lstring constinArgument_inConstantName,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  const GALGAS_prefixOperatorExpressionAST temp_0 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 28)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  const GALGAS_prefixOperatorExpressionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 36)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_objectIR var_expressionResult_3314 ;
  const GALGAS_prefixOperatorExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3314, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 57)) ;
  GALGAS_bool var_currentlyInSafeMode_3363 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 71)) ;
  GALGAS_bool var_noPanicGeneration_3411 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()) ;
  const GALGAS_prefixOperatorExpressionAST temp_1 = object ;
  const GALGAS_prefixOperatorExpressionAST temp_2 = object ;
  extensionMethod_generatePrefixOperatorCode (constinArgument_inContext.readProperty_mPrefixOperatorMap (), var_expressionResult_3314, temp_1.readProperty_mOp (), temp_2.readProperty_mOperatorLocation (), var_currentlyInSafeMode_3363, var_noPanicGeneration_3411, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 73)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_prefixOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                          extensionMethod_prefixOperatorExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_analyzeExpression (defineExtensionMethod_prefixOperatorExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@checkInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  const GALGAS_checkInstructionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 41)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                                                              extensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@checkInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_instructionListIR var_instructionGenerationList_3028 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 60)) ;
  GALGAS_objectIR var_expressionResult_3434 ;
  const GALGAS_checkInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 64)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3028, var_expressionResult_3434, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 61)) ;
  GALGAS_implicitBooleanConversionResult var_booleanOperand_3670 ;
  const GALGAS_checkInstructionAST temp_1 = object ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_expressionResult_3434, temp_1.readProperty_mCheckMessage ().readProperty_location (), ioArgument_ioTemporaries, var_instructionGenerationList_3028, ioArgument_ioAllocaList, var_booleanOperand_3670, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 74)) ;
  switch (var_booleanOperand_3670.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * extractPtr_3964 = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) (var_booleanOperand_3670.unsafePointer ()) ;
      const GALGAS_bool extractedValue_3735_boolValue = extractPtr_3964->mAssociatedValue0 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = extractedValue_3735_boolValue.operator_not (SOURCE_FILE ("directive-check.galgas", 85)).boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            const GALGAS_checkInstructionAST temp_4 = object ;
            test_3 = GALGAS_bool (kIsNotEqual, temp_4.readProperty_mCheckMessage ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_checkInstructionAST temp_5 = object ;
              const GALGAS_checkInstructionAST temp_6 = object ;
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_5.readProperty_mCheckMessage ().readProperty_location (), GALGAS_string ("check failure: ").add_operation (temp_6.readProperty_mCheckMessage ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 87)), fixItArray7  COMMA_SOURCE_FILE ("directive-check.galgas", 87)) ;
            }
          }
          if (kBoolFalse == test_3) {
            const GALGAS_checkInstructionAST temp_8 = object ;
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (temp_8.readProperty_mCheckMessage ().readProperty_location (), GALGAS_string ("check failure"), fixItArray9  COMMA_SOURCE_FILE ("directive-check.galgas", 89)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
      const GALGAS_checkInstructionAST temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("expression is not static: use assert instruction"), fixItArray11  COMMA_SOURCE_FILE ("directive-check.galgas", 93)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_checkInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                                                    extensionMethod_checkInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_checkInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_checkInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const GALGAS_assertInstructionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 36)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                                                              extensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

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
      const GALGAS_assertInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)), fixItArray2  COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_3029 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 58)) ;
  GALGAS_objectIR var_expressionValue_3433 ;
  const GALGAS_assertInstructionAST temp_3 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_3.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 62)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3029, var_expressionValue_3433, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 59)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_type (var_expressionValue_3433, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 73)).readProperty_kind ().getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 73)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 73)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_assertInstructionAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("expression is not boolean"), fixItArray6  COMMA_SOURCE_FILE ("instruction-assert.galgas", 74)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = extensionGetter_isStatic (var_expressionValue_3433, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 77)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_assertInstructionAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GALGAS_string ("expression is static: use check directive"), fixItArray9  COMMA_SOURCE_FILE ("instruction-assert.galgas", 78)) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 81)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_assertInstructionAST temp_11 = object ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (temp_11.readProperty_mInstructionLocation (), var_instructionGenerationList_3029, var_expressionValue_3433  COMMA_SOURCE_FILE ("instruction-assert.galgas", 82))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 82)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assertInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                                                    extensionMethod_assertInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assertInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_assertInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                     GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  const GALGAS_assertInstructionIR temp_0 = object ;
  extensionMethod_instructionListLLVMCode (temp_0.readProperty_mInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 107)) ;
  GALGAS_string var_labelAssertOk_4972 = GALGAS_string ("assert.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-assert.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 108)) ;
  GALGAS_string var_labelAssertEr_5039 = GALGAS_string ("assert.not.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-assert.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)) ;
  const GALGAS_assertInstructionIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mExpressionValue (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (var_labelAssertOk_4972, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (var_labelAssertEr_5039, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelAssertEr_5039.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)) ;
  const GALGAS_assertInstructionIR temp_2 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_2.readProperty_mAssertInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)) ;
  const GALGAS_assertInstructionIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (temp_3.readProperty_mAssertInstructionLocation ().getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (function_panicCodeForAssertViolation (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelAssertOk_4972.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assertInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                            extensionMethod_assertInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assertInstructionIR_llvmInstructionCode (defineExtensionMethod_assertInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                         GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  const GALGAS_assertInstructionIR temp_0 = object ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 126)) ;
  const GALGAS_assertInstructionIR temp_1 = object ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (temp_1.readProperty_mAssertInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 127))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 127)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assertInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                                extensionMethod_assertInstructionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assertInstructionIR_enterAccessibleEntities (defineExtensionMethod_assertInstructionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  const GALGAS_assignmentInstructionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 40)) ;
  const GALGAS_assignmentInstructionAST temp_1 = object ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (temp_1.readProperty_mTargetAST (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 41)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                              extensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_omnibusType var_targetType_3150 ;
  const GALGAS_assignmentInstructionAST temp_0 = object ;
  extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inContext, constinArgument_inSelfType, temp_0.readProperty_mTargetAST (), var_targetType_3150, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 59)) ;
  GALGAS_objectIR var_sourceOperandPossibleReference_3604 ;
  const GALGAS_assignmentInstructionAST temp_1 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_3150, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_3604, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  GALGAS_instructionListListIR var_pendingStoreComputedPropertyInstructionGenerationList_3711 = GALGAS_instructionListListIR::constructor_emptyList (SOURCE_FILE ("instruction-assignment.galgas", 75)) ;
  GALGAS_LValueRepresentation var_lvalueIR_4186 ;
  const GALGAS_assignmentInstructionAST temp_2 = object ;
  extensionMethod_analyzeLValueInAssignment (temp_2.readProperty_mTargetAST (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_pendingStoreComputedPropertyInstructionGenerationList_3711, var_lvalueIR_4186, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 76)) ;
  {
  const GALGAS_assignmentInstructionAST temp_3 = object ;
  extensionSetter_appendAssignmentIR (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioAllocaList, var_lvalueIR_4186.readProperty_type (), var_lvalueIR_4186.readProperty_llvmName (), var_sourceOperandPossibleReference_3604, temp_3.readProperty_mInstructionLocation (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 90)) ;
  }
  cEnumerator_instructionListListIR enumerator_4574 (var_pendingStoreComputedPropertyInstructionGenerationList_3711, kENUMERATION_DOWN) ;
  while (enumerator_4574.hasCurrentObject ()) {
    ioArgument_ioInstructionGenerationList.plusAssign_operation(enumerator_4574.current_mInstructionList (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)) ;
    enumerator_4574.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assignmentInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                    extensionMethod_assignmentInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_assignmentInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValueInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_omnibusType var_currentType_8637 = constinArgument_inVariableType ;
  GALGAS_string var_currentLLVMName_8676 = constinArgument_inLLVMName ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
      {
      GALGAS_objectIR joker_8800 ; // Joker input parameter
      extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8800, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 198)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_9479 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_8833_name = extractPtr_9479->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_8863_nextOperand = extractPtr_9479->mAssociatedValue1 ;
      {
      GALGAS_objectIR joker_8943 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8943, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 200)) ;
      }
      {
      routine_handlePropertyAccessInAssignment (constinArgument_inSelfType, var_currentType_8637, var_currentLLVMName_8676, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_8833_name, extractedValue_8863_nextOperand, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 201)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_10229 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_9515_indexExpression = extractPtr_10229->mAssociatedValue0 ;
      const GALGAS_location extractedValue_9526_endOfIndex = extractPtr_10229->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_9547_checkIndexExpression = extractPtr_10229->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_9559_nextOperand = extractPtr_10229->mAssociatedValue3 ;
      {
      GALGAS_objectIR joker_9639 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9639, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 218)) ;
      }
      {
      routine_handleArrayAccessInAssignment (constinArgument_inSelfType, var_currentType_8637, var_currentLLVMName_8676, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_9515_indexExpression, extractedValue_9526_endOfIndex, extractedValue_9547_checkIndexExpression, extractedValue_9559_nextOperand, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 219)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_new (var_currentType_8637, var_currentLLVMName_8676  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 238)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_propertySetterMap var_propertySetterMap_11271 = extensionGetter_propertySetterMap (constinArgument_inContext, ioArgument_ioCurrentType, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 260)) ;
  GALGAS_propertySetterKind var_propertyAccess_11568 ;
  GALGAS_propertyVisibility joker_11527 ; // Joker input parameter
  var_propertySetterMap_11271.method_searchKey (constinArgument_inPropertyName, joker_11527, var_propertyAccess_11568, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 263)) ;
  switch (var_propertyAccess_11568.enumValue ()) {
  case GALGAS_propertySetterKind::kNotBuilt:
    break ;
  case GALGAS_propertySetterKind::kEnum_computedProperty:
    {
      const cEnumAssociatedValues_propertySetterKind_computedProperty * extractPtr_13606 = (const cEnumAssociatedValues_propertySetterKind_computedProperty *) (var_propertyAccess_11568.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapEntry extractedValue_11660_computedPropertyType = extractPtr_13606->mAssociatedValue0 ;
      const GALGAS_routineLLVMNameDict extractedValue_11681_getterModeDictionary = extractPtr_13606->mAssociatedValue1 ;
      const GALGAS_routineLLVMNameDict extractedValue_11702_setterModeDictionary = extractPtr_13606->mAssociatedValue2 ;
      GALGAS_string var_getterRoutineLLVMName_11761 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_11681_getterModeDictionary, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 267)) ;
      GALGAS_objectIR var_resultValueIR_12099 ;
      {
      extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, GALGAS_objectIR::constructor_reference (ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 270)), var_getterRoutineLLVMName_11761, extensionGetter_type (extractedValue_11660_computedPropertyType, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 272)), var_resultValueIR_12099, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 268)) ;
      }
      {
      extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, var_resultValueIR_12099, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 276)) ;
      }
      GALGAS_string var_setterRoutineLLVMName_12321 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_11702_setterModeDictionary, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 278)) ;
      GALGAS_instructionListIR var_pendingStoreComputedPropertyInstructionGenerationList_12487 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assignment.galgas", 279)) ;
      GALGAS_objectIR var_tempValueIR_12512 = var_resultValueIR_12099 ;
      {
      extensionSetter_appendLoadWhenReference (var_pendingStoreComputedPropertyInstructionGenerationList_12487, ioArgument_ioTemporaries, var_tempValueIR_12512, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 281)) ;
      }
      {
      extensionSetter_appendStoreComputedPropertyValue (var_pendingStoreComputedPropertyInstructionGenerationList_12487, GALGAS_objectIR::constructor_reference (ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 283)), var_setterRoutineLLVMName_12321, var_tempValueIR_12512, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 282)) ;
      }
      ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList.addAssign_operation (var_pendingStoreComputedPropertyInstructionGenerationList_12487  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 287)) ;
      ioArgument_ioCurrentType = extensionGetter_type (var_resultValueIR_12099, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 289)) ;
      ioArgument_ioCurrentLLVMName = extensionGetter_llvmName (var_resultValueIR_12099, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 290)) ;
      {
      routine_handleNextOperandInAssignment (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 291)) ;
      }
    }
    break ;
  case GALGAS_propertySetterKind::kEnum_storedProperty:
    {
      const cEnumAssociatedValues_propertySetterKind_storedProperty * extractPtr_14507 = (const cEnumAssociatedValues_propertySetterKind_storedProperty *) (var_propertyAccess_11568.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_13655_propertyType = extractPtr_14507->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_13667_index = extractPtr_14507->mAssociatedValue1 ;
      GALGAS_string var_newLLVMvariable_13727 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_13727, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 307)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, var_newLLVMvariable_13727, extractedValue_13667_index, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 308)) ;
      }
      ioArgument_ioCurrentType = extractedValue_13655_propertyType ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_13727 ;
      {
      routine_handleNextOperandInAssignment (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 317)) ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

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
  switch (ioArgument_ioCurrentType.readProperty_subscript ().enumValue ()) {
  case GALGAS_subscript::kNotBuilt:
    break ;
  case GALGAS_subscript::kEnum_noSubscript:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is ").add_operation (ioArgument_ioCurrentType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 358)).add_operation (GALGAS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 358)), fixItArray0  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 357)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is literal string and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 360)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_17196 = (const cEnumAssociatedValues_subscript_staticSubscript *) (ioArgument_ioCurrentType.readProperty_subscript ().unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_15847_elementType = extractPtr_17196->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_15865_arraySize = extractPtr_17196->mAssociatedValue1 ;
      GALGAS_objectIR var_indexIR_16351 ;
      {
      routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_15865_arraySize, extractedValue_15847_elementType, ioArgument_ioInstructionGenerationList, var_indexIR_16351, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 364)) ;
      }
      GALGAS_string var_newLLVMvariable_16414 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_16414, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 381)) ;
      }
      {
      extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, extractedValue_15847_elementType, var_newLLVMvariable_16414, var_indexIR_16351, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 382)) ;
      }
      ioArgument_ioCurrentType = extractedValue_15847_elementType ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_16414 ;
      {
      routine_handleNextOperandInAssignment (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 391)) ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValueInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_omnibusType var_currentType_18035 = constinArgument_inSelfType ;
  GALGAS_string var_currentLLVMName_18070 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 426)) ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_18713 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_18160_name = extractPtr_18713->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_18183_next = extractPtr_18713->mAssociatedValue1 ;
      {
      routine_handlePropertyAccessInAssignment (constinArgument_inSelfType, var_currentType_18035, var_currentLLVMName_18070, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_18160_name, extractedValue_18183_next, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 430)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_19384 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_18749_indexExpression = extractPtr_19384->mAssociatedValue0 ;
      const GALGAS_location extractedValue_18760_endOfIndex = extractPtr_19384->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_18781_checkIndexExpression = extractPtr_19384->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_18793_nextOperand = extractPtr_19384->mAssociatedValue3 ;
      {
      routine_handleArrayAccessInAssignment (constinArgument_inSelfType, var_currentType_18035, var_currentLLVMName_18070, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_18749_indexExpression, extractedValue_18760_endOfIndex, extractedValue_18781_checkIndexExpression, extractedValue_18793_nextOperand, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 447)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_new (var_currentType_18035, var_currentLLVMName_18070  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 466)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperandInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

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
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_20908 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_20351_name = extractPtr_20908->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_20374_next = extractPtr_20908->mAssociatedValue1 ;
      {
      routine_handlePropertyAccessInAssignment (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_20351_name, extractedValue_20374_next, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 489)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_21583 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_20944_indexExpression = extractPtr_21583->mAssociatedValue0 ;
      const GALGAS_location extractedValue_20955_endOfIndex = extractPtr_21583->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_20976_checkIndexExpression = extractPtr_21583->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_20988_nextOperand = extractPtr_21583->mAssociatedValue3 ;
      {
      routine_handleArrayAccessInAssignment (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_20944_indexExpression, extractedValue_20955_endOfIndex, extractedValue_20976_checkIndexExpression, extractedValue_20988_nextOperand, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 506)) ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_controlRegisterAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterAssignmentInstructionAST * object = (const cPtr_controlRegisterAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterAssignmentInstructionAST) ;
  const GALGAS_controlRegisterAssignmentInstructionAST temp_0 = object ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 59)) ;
  const GALGAS_controlRegisterAssignmentInstructionAST temp_1 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 60)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_controlRegisterAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST.mSlotID,
                                                              extensionMethod_controlRegisterAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_controlRegisterAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_controlRegisterAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterAssignmentInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_omnibusType var_registerType_4350 ;
  GALGAS_string var_llvmRegAddressName_4442 ;
  const GALGAS_controlRegisterAssignmentInstructionAST temp_0 = object ;
  GALGAS_uint joker_4373 ; // Joker input parameter
  GALGAS_sliceMap joker_4389 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GALGAS_bool (true), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_registerType_4350, joker_4373, joker_4389, var_llvmRegAddressName_4442, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 79)) ;
  GALGAS_objectIR var_sourceIR_4891 ;
  const GALGAS_controlRegisterAssignmentInstructionAST temp_1 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_registerType_4350, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceIR_4891, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 96)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceIR_4891, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 110)) ;
  }
  GALGAS_omnibusType var_t_5085 = extensionGetter_type (var_sourceIR_4891, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 115)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_t_5085.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 116)).operator_not (SOURCE_FILE ("instruction-assignment-control-register.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_controlRegisterAssignmentInstructionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mControlRegisterLValue ().readProperty_mRegisterGroupName ().readProperty_location (), GALGAS_string ("source expression is not copyable"), fixItArray4  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 117)) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_controlRegisterAssignmentInstructionAST temp_5 = object ;
    switch (temp_5.readProperty_mAssignmentKind ().enumValue ()) {
    case GALGAS_controlRegisterAssignmentOperatorKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterAssignmentOperatorKind::kEnum_assignment:
      {
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_4350, var_llvmRegAddressName_4442, var_sourceIR_4891, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 121)) ;
        }
      }
      break ;
    case GALGAS_controlRegisterAssignmentOperatorKind::kEnum_assignmentWithOperator:
      {
        const cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator * extractPtr_6937 = (const cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator *) (temp_5.readProperty_mAssignmentKind ().unsafePointer ()) ;
        const GALGAS_omnibusInfixOperator extractedValue_5451_infixOperator = extractPtr_6937->mAssociatedValue0 ;
        const GALGAS_location extractedValue_5468_operatorLocation = extractPtr_6937->mAssociatedValue1 ;
        GALGAS_objectIR var_registerValueIR_5568 ;
        {
        routine_getNewTempValue (var_registerType_4350, ioArgument_ioTemporaries, var_registerValueIR_5568, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 124)) ;
        }
        {
        extensionSetter_appendLoadIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerValueIR_5568, var_llvmRegAddressName_4442, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 125)) ;
        }
        GALGAS_lstring var_key_5720 = function_infixOperatorMapKey (var_registerType_4350, extractedValue_5451_infixOperator, extractedValue_5468_operatorLocation, extensionGetter_type (var_sourceIR_4891, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 127)) ;
        GALGAS_omnibusType var_resultType_5874 ;
        GALGAS_omnibusInfixOperatorUsage var_operatorUsage_5893 ;
        constinArgument_inContext.readProperty_mInfixOperatorMap ().method_searchKey (var_key_5720, var_resultType_5874, var_operatorUsage_5893, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 128)) ;
        GALGAS_objectIR var_operationResult_6139 ;
        callExtensionMethod_generateCode ((const cPtr_omnibusInfixOperatorUsage *) var_operatorUsage_5893.ptr (), var_registerValueIR_5568, extractedValue_5468_operatorLocation, var_sourceIR_4891, var_resultType_5874, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_operationResult_6139, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 129)) ;
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_4350, var_llvmRegAddressName_4442, var_operationResult_6139, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 158)) ;
        }
      }
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_controlRegisterAssignmentInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST.mSlotID,
                                                    extensionMethod_controlRegisterAssignmentInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_controlRegisterAssignmentInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_controlRegisterAssignmentInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sliceAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sliceAssignmentInstructionAST * object = (const cPtr_sliceAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_sliceAssignmentInstructionAST) ;
  {
  const GALGAS_sliceAssignmentInstructionAST temp_0 = object ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 84)) ;
  }
  const GALGAS_sliceAssignmentInstructionAST temp_1 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 85)) ;
  const GALGAS_sliceAssignmentInstructionAST temp_2 = object ;
  cEnumerator_sliceAssignmentListAST enumerator_3377 (temp_2.readProperty_mSliceAssignmentList (), kENUMERATION_UP) ;
  while (enumerator_3377.hasCurrentObject ()) {
    switch (enumerator_3377.current_mSliceKind (HERE).enumValue ()) {
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
        const cEnumAssociatedValues_sliceTargetAST_lValue * extractPtr_3613 = (const cEnumAssociatedValues_sliceTargetAST_lValue *) (enumerator_3377.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_LValueAST extractedValue_3547_target = extractPtr_3613->mAssociatedValue0 ;
        extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_3547_target, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 92)) ;
      }
      break ;
    }
    enumerator_3377.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST.mSlotID,
                                                              extensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sliceAssignmentInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_sliceAssignmentInstructionAST temp_0 = object ;
  GALGAS_omnibusType var_resultType_4544 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 113)) ;
  GALGAS_uint var_bitCount_4665 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_resultType_4544.readProperty_kind ().getter_isInteger (SOURCE_FILE ("instruction-slice-assignment.galgas", 116)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_sliceAssignmentInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 117)) ;
      var_bitCount_4665.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_bool var_unsigned_4854 ;
    GALGAS_bigint joker_4829_2 ; // Joker input parameter
    GALGAS_bigint joker_4829_1 ; // Joker input parameter
    var_resultType_4544.readProperty_kind ().method_integer (joker_4829_2, joker_4829_1, var_unsigned_4854, var_bitCount_4665, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 119)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_unsigned_4854.operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 120)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_sliceAssignmentInstructionAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type should be an unsigned integer type"), fixItArray6  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 121)) ;
        var_bitCount_4665.drop () ; // Release error dropped variable
      }
    }
  }
  GALGAS_objectIR var_sourceOperand_5430 ;
  const GALGAS_sliceAssignmentInstructionAST temp_7 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_7.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_resultType_4544, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperand_5430, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 125)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperand_5430, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 139)) ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_sourceOperand_5430.getter_isLiteralInteger (SOURCE_FILE ("instruction-slice-assignment.galgas", 141)).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_bigint var_value_5739 ;
      GALGAS_omnibusType joker_5712_1 ; // Joker input parameter
      var_sourceOperand_5430.method_literalInteger (joker_5712_1, var_value_5739, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 142)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsSupOrEqual, var_value_5739.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 143)).left_shift_operation (var_bitCount_4665, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 143)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_sliceAssignmentInstructionAST temp_10 = object ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mSourceExpressionLocation (), GALGAS_string ("static value too large"), fixItArray11  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 144)) ;
          var_sourceOperand_5430.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_9) {
        var_sourceOperand_5430 = GALGAS_objectIR::constructor_literalInteger (var_resultType_4544, var_value_5739  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 146)) ;
      }
    }
  }
  GALGAS_uint var_rightShiftAmount_6000 = var_bitCount_4665 ;
  const GALGAS_sliceAssignmentInstructionAST temp_12 = object ;
  cEnumerator_sliceAssignmentListAST enumerator_6042 (temp_12.readProperty_mSliceAssignmentList (), kENUMERATION_UP) ;
  while (enumerator_6042.hasCurrentObject ()) {
    GALGAS_objectIR var_sourceOperandForSlicing_6107 = var_sourceOperand_5430 ;
    GALGAS_lstring var_sliceTypeName_6178 ;
    GALGAS_uint var_sliceWidth_6203 ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsEqual, enumerator_6042.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_6042.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("anonymous selector not allowed here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 157)) ;
        var_sliceWidth_6203.drop () ; // Release error dropped variable
        var_sliceTypeName_6178.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_13) {
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsEqual, enumerator_6042.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GALGAS_string ("b"))).boolEnum () ;
        if (kBoolTrue == test_15) {
          var_sliceWidth_6203 = GALGAS_uint ((uint32_t) 1U) ;
          const GALGAS_sliceAssignmentInstructionAST temp_16 = object ;
          var_sliceTypeName_6178 = GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 160)), temp_16.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 160)) ;
        }
      }
      if (kBoolFalse == test_15) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = enumerator_6042.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("instruction-slice-assignment.galgas", 161)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 161)).boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_6042.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("the selector should be an unsigned integer value"), fixItArray18  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 162)) ;
            var_sliceWidth_6203.drop () ; // Release error dropped variable
            var_sliceTypeName_6178.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_17) {
          var_sliceWidth_6203 = enumerator_6042.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 164)) ;
          const GALGAS_sliceAssignmentInstructionAST temp_19 = object ;
          var_sliceTypeName_6178 = GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (var_sliceWidth_6203.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 165)), temp_19.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 165)) ;
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            test_20 = GALGAS_bool (kIsEqual, var_sliceWidth_6203.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_20) {
              TC_Array <C_FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (enumerator_6042.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("the bit slice width should be > 0"), fixItArray21  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 167)) ;
            }
          }
        }
      }
    }
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = GALGAS_bool (kIsSupOrEqual, var_rightShiftAmount_6000.objectCompare (var_sliceWidth_6203)).boolEnum () ;
      if (kBoolTrue == test_22) {
        var_rightShiftAmount_6000 = var_rightShiftAmount_6000.substract_operation (var_sliceWidth_6203, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 171)) ;
      }
    }
    if (kBoolFalse == test_22) {
      GALGAS_uint var_specifiedBitCount_7031 = var_bitCount_4665.add_operation (var_sliceWidth_6203, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 173)).substract_operation (var_rightShiftAmount_6000, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 173)) ;
      TC_Array <C_FixItDescription> fixItArray23 ;
      inCompiler->emitSemanticError (enumerator_6042.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_7031.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)).add_operation (GALGAS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)).add_operation (var_bitCount_4665.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)), fixItArray23  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)) ;
      var_rightShiftAmount_6000 = GALGAS_uint ((uint32_t) 0U) ;
    }
    GALGAS_omnibusType var_sliceType_7231 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_sliceTypeName_6178, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 177)) ;
    {
    extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, var_sourceOperandForSlicing_6107, var_rightShiftAmount_6000, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 179)) ;
    }
    {
    extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_7231, var_sourceOperandForSlicing_6107, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 180)) ;
    }
    switch (enumerator_6042.current_mSliceKind (HERE).enumValue ()) {
    case GALGAS_sliceTargetAST::kNotBuilt:
      break ;
    case GALGAS_sliceTargetAST::kEnum_discarded:
      {
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_varDeclaration:
      {
        const cEnumAssociatedValues_sliceTargetAST_varDeclaration * extractPtr_8515 = (const cEnumAssociatedValues_sliceTargetAST_varDeclaration *) (enumerator_6042.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_7643_varName = extractPtr_8515->mAssociatedValue0 ;
        GALGAS_lstring var_omnibusLocalVariableName_7713 = GALGAS_lstring::constructor_new (extractedValue_7643_varName.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 186)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 186)), extractedValue_7643_varName.readProperty_location ()  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 186)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 187)) ;
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_7643_varName, var_sliceType_7231, var_omnibusLocalVariableName_7713, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-slice-assignment.galgas", 188)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 188)) ;
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_7713.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 190)), var_sliceType_7231, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 190)) ;
        GALGAS_LValueRepresentation var_targetRef_8114 = GALGAS_LValueRepresentation::constructor_new (var_sliceType_7231, function_llvmNameForLocalVariable (var_omnibusLocalVariableName_7713.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 194))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 192)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioTemporaries, extractedValue_7643_varName.readProperty_location (), var_sourceOperandForSlicing_6107, var_targetRef_8114, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 197)) ;
        }
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_letDeclaration:
      {
        const cEnumAssociatedValues_sliceTargetAST_letDeclaration * extractPtr_9405 = (const cEnumAssociatedValues_sliceTargetAST_letDeclaration *) (enumerator_6042.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_8548_letName = extractPtr_9405->mAssociatedValue0 ;
        GALGAS_lstring var_omnibusLocalVariableName_8618 = GALGAS_lstring::constructor_new (extractedValue_8548_letName.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 206)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 206)), extractedValue_8548_letName.readProperty_location ()  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 206)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 207)) ;
        {
        extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_8548_letName, GALGAS_bool (false), var_sliceType_7231, var_omnibusLocalVariableName_8618, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 208)) ;
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_8618.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 210)), var_sliceType_7231, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 210)) ;
        GALGAS_LValueRepresentation var_targetRef_9002 = GALGAS_LValueRepresentation::constructor_new (var_sliceType_7231, function_llvmNameForLocalVariable (var_omnibusLocalVariableName_8618.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 214))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 212)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioTemporaries, extractedValue_8548_letName.readProperty_location (), var_sourceOperandForSlicing_6107, var_targetRef_9002, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 217)) ;
        }
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_lValue:
      {
        const cEnumAssociatedValues_sliceTargetAST_lValue * extractPtr_10163 = (const cEnumAssociatedValues_sliceTargetAST_lValue *) (enumerator_6042.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_LValueAST extractedValue_9440_target = extractPtr_10163->mAssociatedValue0 ;
        GALGAS_LValueRepresentation var_lvalueIR_9871 ;
        extensionMethod_analyzeLValue (extractedValue_9440_target, constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_9871, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 225)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioTemporaries, extractedValue_9440_target.readProperty_mIdentifier ().readProperty_location (), var_sourceOperandForSlicing_6107, var_lvalueIR_9871, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 239)) ;
        }
      }
      break ;
    }
    enumerator_6042.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sliceAssignmentInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST.mSlotID,
                                                    extensionMethod_sliceAssignmentInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sliceAssignmentInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_sliceAssignmentInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitbandInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitbandInstructionAST * object = (const cPtr_bitbandInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_bitbandInstructionAST) ;
  const GALGAS_bitbandInstructionAST temp_0 = object ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 51)) ;
  {
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("u1").getter_nowhere (SOURCE_FILE ("instruction-bit-banding.galgas", 52)) COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 52)) ;
  }
  const GALGAS_bitbandInstructionAST temp_1 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_1.readProperty_mBitExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 53)) ;
  const GALGAS_bitbandInstructionAST temp_2 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_2.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 54)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_bitbandInstructionAST.mSlotID,
                                                              extensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitbandInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_omnibusType var_requiredSourceExpressionType_3807 ;
  const GALGAS_bitbandInstructionAST temp_0 = object ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("u1"), temp_0.readProperty_mSourceExpressionLocation ()  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 75)), var_requiredSourceExpressionType_3807, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 74)) ;
  GALGAS_objectIR var_sourceExpressionOperand_4270 ;
  const GALGAS_bitbandInstructionAST temp_1 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_requiredSourceExpressionType_3807, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceExpressionOperand_4270, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 79)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceExpressionOperand_4270, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 93)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = GALGAS_bool (kIsEqual, extensionGetter_type (var_sourceExpressionOperand_4270, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 98)).readProperty_omnibusTypeDescriptionName ().objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 98)))) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = var_sourceExpressionOperand_4270.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 98)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_bigint var_value_4736 ;
      GALGAS_omnibusType joker_4709_1 ; // Joker input parameter
      var_sourceExpressionOperand_4270.method_literalInteger (joker_4709_1, var_value_4736, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 99)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        GALGAS_bool test_5 = GALGAS_bool (kIsStrictInf, var_value_4736.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 100)))) ;
        if (kBoolTrue != test_5.boolEnum ()) {
          test_5 = GALGAS_bool (kIsStrictSup, var_value_4736.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 100)))) ;
        }
        test_4 = test_5.boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_bitbandInstructionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSourceExpressionLocation (), GALGAS_string ("static value should be 0 or 1"), fixItArray7  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 101)) ;
        }
      }
      if (kBoolFalse == test_4) {
        var_sourceExpressionOperand_4270 = GALGAS_objectIR::constructor_literalInteger (var_requiredSourceExpressionType_3807, var_value_4736  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 103)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_sourceExpressionOperand_4270, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 105)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_requiredSourceExpressionType_3807.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_bitbandInstructionAST temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mSourceExpressionLocation (), GALGAS_string ("bit expression type should be $").add_operation (var_requiredSourceExpressionType_3807.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 106)), fixItArray10  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 106)) ;
      }
    }
  }
  GALGAS_uint var_registerBitCount_5736 ;
  GALGAS_string var_llvmRegisterAddressName_5809 ;
  const GALGAS_bitbandInstructionAST temp_11 = object ;
  GALGAS_omnibusType joker_5692 ; // Joker input parameter
  GALGAS_sliceMap joker_5751 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_11.readProperty_mControlRegisterLValue (), GALGAS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, joker_5692, var_registerBitCount_5736, joker_5751, var_llvmRegisterAddressName_5809, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 109)) ;
  GALGAS_omnibusType var_requiredBitExpressionType_6053 ;
  const GALGAS_bitbandInstructionAST temp_12 = object ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (var_registerBitCount_5736.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)).getter_significantBitCount (SOURCE_FILE ("instruction-bit-banding.galgas", 129)).getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)), temp_12.readProperty_mBitExpressionLocation ()  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)), var_requiredBitExpressionType_6053, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 128)) ;
  GALGAS_objectIR var_bitExpressionOperand_6504 ;
  const GALGAS_bitbandInstructionAST temp_13 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_13.readProperty_mBitExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_requiredBitExpressionType_6053, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_bitExpressionOperand_6504, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 133)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_bitExpressionOperand_6504, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 147)) ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    GALGAS_bool test_15 = GALGAS_bool (kIsEqual, extensionGetter_type (var_bitExpressionOperand_6504, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 152)).readProperty_omnibusTypeDescriptionName ().objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 152)))) ;
    if (kBoolTrue == test_15.boolEnum ()) {
      test_15 = var_bitExpressionOperand_6504.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 152)) ;
    }
    test_14 = test_15.boolEnum () ;
    if (kBoolTrue == test_14) {
      GALGAS_bigint var_value_6952 ;
      GALGAS_omnibusType joker_6925_1 ; // Joker input parameter
      var_bitExpressionOperand_6504.method_literalInteger (joker_6925_1, var_value_6952, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 153)) ;
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        GALGAS_bool test_17 = GALGAS_bool (kIsStrictInf, var_value_6952.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 154)))) ;
        if (kBoolTrue != test_17.boolEnum ()) {
          test_17 = GALGAS_bool (kIsSupOrEqual, var_value_6952.objectCompare (var_registerBitCount_5736.getter_bigint (SOURCE_FILE ("instruction-bit-banding.galgas", 154)))) ;
        }
        test_16 = test_17.boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_bitbandInstructionAST temp_18 = object ;
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mBitExpressionLocation (), GALGAS_string ("static value should be >= 0 and <").add_operation (var_registerBitCount_5736.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 155)), fixItArray19  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 155)) ;
        }
      }
      if (kBoolFalse == test_16) {
        var_bitExpressionOperand_6504 = GALGAS_objectIR::constructor_literalInteger (var_requiredBitExpressionType_6053, var_value_6952  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 157)) ;
      }
    }
  }
  if (kBoolFalse == test_14) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_bitExpressionOperand_6504, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 159)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_requiredBitExpressionType_6053.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (kBoolTrue == test_20) {
        const GALGAS_bitbandInstructionAST temp_21 = object ;
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (temp_21.readProperty_mBitExpressionLocation (), GALGAS_string ("bit expression type should be $").add_operation (var_requiredBitExpressionType_6053.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 160)), fixItArray22  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 160)) ;
      }
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_bitbandInstructionIR::constructor_new (var_llvmRegisterAddressName_5809, var_bitExpressionOperand_6504, var_sourceExpressionOperand_4270, constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterBaseAddress ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterRelocationAddress ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterOffsetMultiplier ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterBitMultiplier ().readProperty_bigint ()  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 163))  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 163)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bitbandInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_bitbandInstructionAST.mSlotID,
                                                    extensionMethod_bitbandInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bitbandInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_bitbandInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitbandInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bitbandInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitbandInstructionIR * object = (const cPtr_bitbandInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_bitbandInstructionIR) ;
  GALGAS_string var_idx_9623 = ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 205)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 206)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Bit band\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 207)) ;
  const GALGAS_bitbandInstructionIR temp_0 = object ;
  const GALGAS_bitbandInstructionIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byte.offset.").add_operation (var_idx_9623, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (GALGAS_string (" = sub i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (temp_0.readProperty_mRegisterAddressLLVMname (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (temp_1.readProperty_mBitbandRegisterBaseAddress ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)) ;
  const GALGAS_bitbandInstructionIR temp_2 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byte.offset.").add_operation (var_idx_9623, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GALGAS_string (".mul = mul i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (var_idx_9623, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (temp_2.readProperty_mBitbandRegisterOffsetMultiplier ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)) ;
  const GALGAS_bitbandInstructionIR temp_3 = object ;
  const GALGAS_bitbandInstructionIR temp_4 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %bit.offset.").add_operation (var_idx_9623, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GALGAS_string (".mul = mul i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mBitExpressionOperand (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (temp_4.readProperty_mBitbandRegisterBitMultiplier ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %offset.").add_operation (var_idx_9623, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GALGAS_string (" = add i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (var_idx_9623, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GALGAS_string (".mul, %bit.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (var_idx_9623, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GALGAS_string (".mul\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)) ;
  const GALGAS_bitbandInstructionIR temp_5 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %bit.word.addr.").add_operation (var_idx_9623, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GALGAS_string (" = add i32 %offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (var_idx_9623, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (temp_5.readProperty_mBitbandRegisterRelocationAddress ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr.").add_operation (var_idx_9623, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GALGAS_string (" = inttoptr i32 %bit.word.addr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (var_idx_9623, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GALGAS_string (" to i32*\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)) ;
  const GALGAS_bitbandInstructionIR temp_6 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value.").add_operation (var_idx_9623, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GALGAS_string (" = zext i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (extensionGetter_llvmName (temp_6.readProperty_mSourceExpressionOperand (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GALGAS_string (" to i32\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i32 %value.").add_operation (var_idx_9623, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GALGAS_string (", i32* %ptr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (var_idx_9623, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bitbandInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_bitbandInstructionIR.mSlotID,
                                            extensionMethod_bitbandInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bitbandInstructionIR_llvmInstructionCode (defineExtensionMethod_bitbandInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_varInstructionWithAssignmentAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_varInstructionWithAssignmentAST temp_2 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("instruction-var.galgas", 97)) ;
      }
    }
  }
  const GALGAS_varInstructionWithAssignmentAST temp_3 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 99)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                                                              extensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varDeclarationInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_varDeclarationInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varDeclarationInstructionAST * object = (const cPtr_varDeclarationInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationInstructionAST) ;
  {
  const GALGAS_varDeclarationInstructionAST temp_0 = object ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-var.galgas", 105)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_varDeclarationInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varDeclarationInstructionAST.mSlotID,
                                                              extensionMethod_varDeclarationInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_varDeclarationInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varDeclarationInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInstructionWithAssignmentAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_varInstructionWithAssignmentAST temp_0 = object ;
  GALGAS_omnibusType temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, temp_0.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 124)) ;
  }else if (kBoolFalse == test_2) {
    const GALGAS_varInstructionWithAssignmentAST temp_3 = object ;
    temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 125)) ;
  }
  GALGAS_omnibusType var_targetType_5077 = temp_1 ;
  GALGAS_objectIR var_sourcePossibleReference_5661 ;
  const GALGAS_varInstructionWithAssignmentAST temp_4 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_5077, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_5661, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)) ;
  const GALGAS_varInstructionWithAssignmentAST temp_5 = object ;
  GALGAS_objectIR var_result_5678 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_sourcePossibleReference_5661, var_targetType_5077, temp_5.readProperty_mVarName ().readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 141)) ;
  const GALGAS_varInstructionWithAssignmentAST temp_6 = object ;
  const GALGAS_varInstructionWithAssignmentAST temp_7 = object ;
  GALGAS_lstring var_omnibusLocalVariableName_5956 = GALGAS_lstring::constructor_new (temp_6.readProperty_mVarName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-var.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)), temp_7.readProperty_mVarName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-var.galgas", 149)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 150)) ;
  {
  const GALGAS_varInstructionWithAssignmentAST temp_8 = object ;
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, temp_8.readProperty_mVarName (), extensionGetter_type (var_result_5678, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)), var_omnibusLocalVariableName_5956, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 151)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_5956.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)), extensionGetter_type (var_result_5678, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 153)) ;
  {
  const GALGAS_varInstructionWithAssignmentAST temp_9 = object ;
  extensionSetter_appendAssignmentIR (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioAllocaList, extensionGetter_type (var_result_5678, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 159)), function_llvmNameForLocalVariable (var_omnibusLocalVariableName_5956.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 160)), var_sourcePossibleReference_5661, temp_9.readProperty_mVarName ().readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 155)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_varInstructionWithAssignmentAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                                                    extensionMethod_varInstructionWithAssignmentAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_instructionSemanticAnalysis (defineExtensionMethod_varInstructionWithAssignmentAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varDeclarationInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_varDeclarationInstructionAST temp_0 = object ;
  GALGAS_omnibusType var_targetType_7328 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 180)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_targetType_7328.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 182)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_varDeclarationInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GALGAS_string ("$").add_operation (var_targetType_7328.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)).add_operation (GALGAS_string (" type is a compile time type, and is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)), fixItArray3  COMMA_SOURCE_FILE ("instruction-var.galgas", 183)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_targetType_7328.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 184)).operator_not (SOURCE_FILE ("instruction-var.galgas", 184)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_varDeclarationInstructionAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mVarName ().readProperty_location (), GALGAS_string ("$").add_operation (var_targetType_7328.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 185)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 185)), fixItArray6  COMMA_SOURCE_FILE ("instruction-var.galgas", 185)) ;
      }
    }
  }
  const GALGAS_varDeclarationInstructionAST temp_7 = object ;
  const GALGAS_varDeclarationInstructionAST temp_8 = object ;
  GALGAS_lstring var_omnibusName_7753 = GALGAS_lstring::constructor_new (temp_7.readProperty_mVarName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-var.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)), temp_8.readProperty_mVarName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-var.galgas", 188)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 189)) ;
  {
  const GALGAS_varDeclarationInstructionAST temp_9 = object ;
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, temp_9.readProperty_mVarName (), var_targetType_7328, var_omnibusName_7753, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("instruction-var.galgas", 190)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 190)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_7753.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 192)), var_targetType_7328, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 192)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_varDeclarationInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_varDeclarationInstructionAST.mSlotID,
                                                    extensionMethod_varDeclarationInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_varDeclarationInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_varDeclarationInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@letInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_letInstructionWithAssignmentAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_letInstructionWithAssignmentAST temp_2 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
      }
    }
  }
  const GALGAS_letInstructionWithAssignmentAST temp_3 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                                                              extensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@letInstructionWithAssignmentAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_letInstructionWithAssignmentAST temp_0 = object ;
  GALGAS_omnibusType temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, temp_0.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 69)) ;
  }else if (kBoolFalse == test_2) {
    const GALGAS_letInstructionWithAssignmentAST temp_3 = object ;
    temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 70)) ;
  }
  GALGAS_omnibusType var_targetType_3262 = temp_1 ;
  GALGAS_objectIR var_expressionResult_3835 ;
  const GALGAS_letInstructionWithAssignmentAST temp_4 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_3262, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3835, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 73)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_3835, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 86)) ;
  }
  const GALGAS_letInstructionWithAssignmentAST temp_5 = object ;
  GALGAS_objectIR var_result_3986 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_3835, var_targetType_3262, temp_5.readProperty_mConstantName ().readProperty_location (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 91)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) extensionGetter_type (var_result_3986, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)).operator_not (SOURCE_FILE ("instruction-let.galgas", 99)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_letInstructionWithAssignmentAST temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mConstantName ().readProperty_location (), extensionGetter_omnibusTypeDescriptionName (var_result_3986, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)), fixItArray8  COMMA_SOURCE_FILE ("instruction-let.galgas", 100)) ;
      var_result_3986.drop () ; // Release error dropped variable
    }
  }
  const GALGAS_letInstructionWithAssignmentAST temp_9 = object ;
  const GALGAS_letInstructionWithAssignmentAST temp_10 = object ;
  GALGAS_lstring var_omnibusName_4408 = GALGAS_lstring::constructor_new (temp_9.readProperty_mConstantName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-let.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)), temp_10.readProperty_mConstantName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-let.galgas", 103)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, extensionGetter_omnibusTypeDescriptionName (var_result_3986, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_4408.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)), extensionGetter_type (var_result_3986, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-let.galgas", 106)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_result_3986, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)), function_llvmNameForLocalVariable (var_omnibusName_4408.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 109)), var_result_3986, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)) ;
      }
    }
  }
  {
  const GALGAS_letInstructionWithAssignmentAST temp_12 = object ;
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_12.readProperty_mConstantName (), GALGAS_bool (false), extensionGetter_type (var_result_3986, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)), var_omnibusName_4408, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_letInstructionWithAssignmentAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                                                    extensionMethod_letInstructionWithAssignmentAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_instructionSemanticAnalysis (defineExtensionMethod_letInstructionWithAssignmentAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enter_NOP_function'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enter_5F_NOP_5F_function (GALGAS_declarationListAST & ioArgument_ioDeclarationListAST,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-nop.galgas", 14)) ;
  temp_0.addAssign_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)).getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 14))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)) ;
  GALGAS_lstringlist var_attributeList_905 = temp_0 ;
  GALGAS_instructionListAST temp_1 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  temp_1.addAssign_operation (GALGAS_instructionNOP::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("instruction-nop.galgas", 15))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 15))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  GALGAS_instructionListAST var_instructionList_970 = temp_1 ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("instruction-nop.galgas", 18)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 20)), GALGAS_string ("nop").getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 21)), var_attributeList_905, GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("instruction-nop.galgas", 23)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 24)), var_instructionList_970, GALGAS_location::constructor_nowhere (SOURCE_FILE ("instruction-nop.galgas", 26))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 17))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@instructionNOP noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_instructionNOP_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * /* inObject */,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_instructionNOP_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_instructionNOP.mSlotID,
                                                              extensionMethod_instructionNOP_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_instructionNOP_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_instructionNOP_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@instructionNOP instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_instructionNOP_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_instructionNOP.mSlotID,
                                                    extensionMethod_instructionNOP_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_instructionNOP_instructionSemanticAnalysis (defineExtensionMethod_instructionNOP_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionAST * object = (const cPtr_panicInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionAST) ;
  const GALGAS_panicInstructionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mCodeExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 33)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_panicInstructionAST.mSlotID,
                                                              extensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

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
      const GALGAS_panicInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)), fixItArray2  COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)) ;
    }
  }
  GALGAS_instructionListIR var_unusedInstructionListIR_3048 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 56)) ;
  GALGAS_objectIR var_result_3444 ;
  const GALGAS_panicInstructionAST temp_3 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_3.readProperty_mCodeExpression ().ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("instruction-panic.galgas", 59)), constinArgument_inContext.readProperty_mPanicCodeType (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_3048, var_result_3444, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 57)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool test_5 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR_3048.getter_length (SOURCE_FILE ("instruction-panic.galgas", 72)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue != test_5.boolEnum ()) {
      test_5 = var_result_3444.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 73)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 73)) ;
    }
    GALGAS_bool test_6 = test_5 ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = GALGAS_bool (kIsNotEqual, extensionGetter_omnibusTypeDescriptionName (var_result_3444, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 74)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 74)))) ;
    }
    test_4 = test_6.boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_panicInstructionAST temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("throw expression should be a literal integer"), fixItArray8  COMMA_SOURCE_FILE ("instruction-panic.galgas", 75)) ;
    }
  }
  if (kBoolFalse == test_4) {
    GALGAS_bigint var_min_3808 ;
    GALGAS_bigint var_max_3821 ;
    GALGAS_bool joker_3823_2 ; // Joker input parameter
    GALGAS_uint joker_3823_1 ; // Joker input parameter
    constinArgument_inContext.readProperty_mPanicCodeType ().readProperty_kind ().method_integer (var_min_3808, var_max_3821, joker_3823_2, joker_3823_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 77)) ;
    GALGAS_bigint var_throwValue_3879 ;
    GALGAS_omnibusType joker_3855_1 ; // Joker input parameter
    var_result_3444.method_literalInteger (joker_3855_1, var_throwValue_3879, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 78)) ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      GALGAS_bool test_10 = GALGAS_bool (kIsStrictInf, var_throwValue_3879.objectCompare (var_min_3808)) ;
      if (kBoolTrue != test_10.boolEnum ()) {
        test_10 = GALGAS_bool (kIsStrictSup, var_throwValue_3879.objectCompare (var_max_3821)) ;
      }
      test_9 = test_10.boolEnum () ;
      if (kBoolTrue == test_9) {
        const GALGAS_panicInstructionAST temp_11 = object ;
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.readProperty_mPanicCodeType ().readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)), fixItArray12  COMMA_SOURCE_FILE ("instruction-panic.galgas", 80)) ;
      }
    }
    if (kBoolFalse == test_9) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 82)).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_panicInstructionAST temp_14 = object ;
          ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::constructor_new (temp_14.readProperty_mInstructionLocation (), var_throwValue_3879  COMMA_SOURCE_FILE ("instruction-panic.galgas", 83))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_panicInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_panicInstructionAST.mSlotID,
                                                    extensionMethod_panicInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_panicInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_panicInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_panicInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionIR * object = (const cPtr_panicInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionIR) ;
  const GALGAS_panicInstructionIR temp_0 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_0.readProperty_mThrowLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-panic.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)) ;
  const GALGAS_panicInstructionIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (temp_1.readProperty_mThrowLocation ().getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)) ;
  const GALGAS_panicInstructionIR temp_2 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (temp_2.readProperty_mPanicCode ().getter_string (SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_panicInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_panicInstructionIR.mSlotID,
                                            extensionMethod_panicInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_panicInstructionIR_llvmInstructionCode (defineExtensionMethod_panicInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_panicInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                        GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionIR * object = (const cPtr_panicInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionIR) ;
  const GALGAS_panicInstructionIR temp_0 = object ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (temp_0.readProperty_mThrowLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 118))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_panicInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_panicInstructionIR.mSlotID,
                                                extensionMethod_panicInstructionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_panicInstructionIR_enterAccessibleEntities (defineExtensionMethod_panicInstructionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  const GALGAS_ifInstructionAST temp_0 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mThenInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  const GALGAS_ifInstructionAST temp_1 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 90)) ;
  const GALGAS_ifInstructionAST temp_2 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_2.readProperty_mTestExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                              extensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_objectIR var_testResult_5118 ;
  const GALGAS_ifInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_mTestExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 113)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResult_5118, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 110)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResult_5118, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 123)) ;
  }
  GALGAS_implicitBooleanConversionResult var_booleanResult_5496 ;
  const GALGAS_ifInstructionAST temp_1 = object ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_testResult_5118, temp_1.readProperty_mTestExpressionEndLocation (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, var_booleanResult_5496, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 128)) ;
  switch (var_booleanResult_5496.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_ifInstructionAST temp_3 = object ;
        test_2 = temp_3.readProperty_mStaticIfExpression ().operator_not (SOURCE_FILE ("instruction-if.galgas", 139)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_ifInstructionAST temp_4 = object ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (temp_4.readProperty_mTestExpressionEndLocation (), GALGAS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
        }
      }
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_ifInstructionAST temp_7 = object ;
        test_6 = temp_7.readProperty_mStaticIfExpression ().boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_ifInstructionAST temp_8 = object ;
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (temp_8.readProperty_mTestExpressionEndLocation (), GALGAS_string ("'if' expression is not static"), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 144)) ;
        }
      }
    }
    break ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_6025 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 149)) ;
  const GALGAS_ifInstructionAST temp_10 = object ;
  const GALGAS_ifInstructionAST temp_11 = object ;
  extensionMethod_analyzeBranchInstructionList (temp_10.readProperty_mThenInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_11.readProperty_mEndOfThenInstructionList (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_6025, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 150)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_6528 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 163)) ;
  const GALGAS_ifInstructionAST temp_12 = object ;
  const GALGAS_ifInstructionAST temp_13 = object ;
  extensionMethod_analyzeBranchInstructionList (temp_12.readProperty_mElseInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_13.readProperty_mEndOfElseInstructionList (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_6528, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 164)) ;
  {
  const GALGAS_ifInstructionAST temp_14 = object ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_14.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 176)) ;
  }
  const GALGAS_ifInstructionAST temp_15 = object ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (extensionGetter_llvmName (var_booleanResult_5496, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 179)), temp_15.readProperty_mTestExpressionEndLocation (), var_thenInstructionGenerationList_6025, var_elseInstructionGenerationList_6528  COMMA_SOURCE_FILE ("instruction-if.galgas", 178))  COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                    extensionMethod_ifInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_ifInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  GALGAS_string var_labelTrue_8148 = GALGAS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)) ;
  GALGAS_string var_labelFalse_8215 = GALGAS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  GALGAS_string var_labelEnd_8281 = GALGAS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
  const GALGAS_ifInstructionIR temp_0 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (temp_0.readProperty_mLLVMTestName (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelTrue_8148, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelFalse_8215, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_8148.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  const GALGAS_ifInstructionIR temp_1 = object ;
  extensionMethod_instructionListLLVMCode (temp_1.readProperty_mThenInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8281, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 213)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_8215.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  const GALGAS_ifInstructionIR temp_2 = object ;
  extensionMethod_instructionListLLVMCode (temp_2.readProperty_mElseInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8281, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_8281.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                            extensionMethod_ifInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstructionIR_llvmInstructionCode (defineExtensionMethod_ifInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  const GALGAS_ifInstructionIR temp_0 = object ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mThenInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 228)) ;
  const GALGAS_ifInstructionIR temp_1 = object ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mElseInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 229)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                                extensionMethod_ifInstructionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstructionIR_enterAccessibleEntities (defineExtensionMethod_ifInstructionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionAST * object = (const cPtr_syncInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionAST) ;
  const GALGAS_syncInstructionAST temp_0 = object ;
  cEnumerator_syncInstructionBranchListAST enumerator_5557 (temp_0.readProperty_mBranchList (), kENUMERATION_UP) ;
  while (enumerator_5557.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5557.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 148)) ;
    enumerator_5557.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_syncInstructionAST.mSlotID,
                                                              extensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_guardedCommandIRList var_guardedCommandIRList_6611 = GALGAS_guardedCommandIRList::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 168)) ;
  const GALGAS_syncInstructionAST temp_0 = object ;
  cEnumerator_syncInstructionBranchListAST enumerator_6642 (temp_0.readProperty_mBranchList (), kENUMERATION_UP) ;
  while (enumerator_6642.hasCurrentObject ()) {
    switch (enumerator_6642.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandAST::kNotBuilt:
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolean * extractPtr_8062 = (const cEnumAssociatedValues_guardedCommandAST_boolean *) (enumerator_6642.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_6721_isContinue = extractPtr_8062->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_6732_expression = extractPtr_8062->mAssociatedValue1 ;
        const GALGAS_location extractedValue_6748_endOfExpression = extractPtr_8062->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_6811 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 172)) ;
        GALGAS_objectIR var_expressionResult_7273 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_6732_expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes.operator_or (GALGAS_routineAttributes::constructor_guard (SOURCE_FILE ("instruction-event.galgas", 175)) COMMA_SOURCE_FILE ("instruction-event.galgas", 175)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 176)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_6811, var_expressionResult_7273, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 173)) ;
        {
        extensionSetter_appendLoadWhenReference (var_guardInstructionGenerationList_6811, ioArgument_ioTemporaries, var_expressionResult_7273, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 186)) ;
        }
        GALGAS_implicitBooleanConversionResult var_booleanResult_7666 ;
        extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_expressionResult_7273, extractedValue_6748_endOfExpression, ioArgument_ioTemporaries, var_guardInstructionGenerationList_6811, ioArgument_ioAllocaList, var_booleanResult_7666, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 187)) ;
        switch (var_booleanResult_7666.enumValue ()) {
        case GALGAS_implicitBooleanConversionResult::kNotBuilt:
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticWarning (extractedValue_6748_endOfExpression, GALGAS_string ("guarded expression is a compile time value"), fixItArray1  COMMA_SOURCE_FILE ("instruction-event.galgas", 197)) ;
          }
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
          {
          }
          break ;
        }
        var_guardedCommandIRList_6611.addAssign_operation (GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_6721_isContinue, var_guardInstructionGenerationList_6811, extensionGetter_llvmName (var_booleanResult_7666, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 203))  COMMA_SOURCE_FILE ("instruction-event.galgas", 200))  COMMA_SOURCE_FILE ("instruction-event.galgas", 200)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolAndSync * extractPtr_13833 = (const cEnumAssociatedValues_guardedCommandAST_boolAndSync *) (enumerator_6642.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_8095_isContinue = extractPtr_13833->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_8099_exp = extractPtr_13833->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_8123_warnsOnStaticExpression = extractPtr_13833->mAssociatedValue2 ;
        const GALGAS_location extractedValue_8132_endOfExp = extractPtr_13833->mAssociatedValue3 ;
        const GALGAS_lbool extractedValue_8141_usesSelf = extractPtr_13833->mAssociatedValue4 ;
        const GALGAS_lstringlist extractedValue_8150_nameList = extractPtr_13833->mAssociatedValue5 ;
        const GALGAS_effectiveArgumentListAST extractedValue_8164_parameterList = extractPtr_13833->mAssociatedValue6 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_8229 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 206)) ;
        GALGAS_objectIR var_expressionResult_8701 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_8099_exp.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_guard (SOURCE_FILE ("instruction-event.galgas", 210)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 211)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_8229, var_expressionResult_8701, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 208)) ;
        {
        extensionSetter_appendLoadWhenReference (var_boolExpInstructionGenerationList_8229, ioArgument_ioTemporaries, var_expressionResult_8701, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 221)) ;
        }
        GALGAS_implicitBooleanConversionResult var_booleanResult_9091 ;
        extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_expressionResult_8701, extractedValue_8132_endOfExp, ioArgument_ioTemporaries, var_boolExpInstructionGenerationList_8229, ioArgument_ioAllocaList, var_booleanResult_9091, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 222)) ;
        switch (var_booleanResult_9091.enumValue ()) {
        case GALGAS_implicitBooleanConversionResult::kNotBuilt:
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
          {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = extractedValue_8123_warnsOnStaticExpression.boolEnum () ;
              if (kBoolTrue == test_2) {
                TC_Array <C_FixItDescription> fixItArray3 ;
                inCompiler->emitSemanticWarning (extractedValue_8132_endOfExp, GALGAS_string ("guarded expression is static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-event.galgas", 233)) ;
              }
            }
          }
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
          {
          }
          break ;
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_9831 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 248)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_9910 ;
        GALGAS_lstring var_guardMangledName_9946 ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = extractedValue_8141_usesSelf.readProperty_bool ().boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = constinArgument_inSelfType.readProperty_kind ().getter_isVoid (SOURCE_FILE ("instruction-event.galgas", 252)).boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (extractedValue_8141_usesSelf.readProperty_location (), GALGAS_string ("'self' is not available in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-event.galgas", 253)) ;
                var_guardEffectiveParameterListIR_9910.drop () ; // Release error dropped variable
                var_guardMangledName_9946.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_5) {
              GALGAS_lstringlist var_propertyList_10194 = extractedValue_8150_nameList ;
              GALGAS_lstring var_guardName_10254 ;
              {
              var_propertyList_10194.setter_popLast (var_guardName_10254, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 256)) ;
              }
              GALGAS_objectIR var_currentObject_10293 = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 257))  COMMA_SOURCE_FILE ("instruction-event.galgas", 257)) ;
              cEnumerator_lstringlist enumerator_10382 (var_propertyList_10194, kENUMERATION_UP) ;
              while (enumerator_10382.hasCurrentObject ()) {
                {
                routine_handlePropertyAccessInExpression (constinArgument_inContext, var_currentObject_10293, enumerator_10382.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 259)) ;
                }
                enumerator_10382.gotoNextObject () ;
              }
              {
              routine_analyzeGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObject_10293, var_guardName_10254, extractedValue_8164_parameterList, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_9831, var_guardEffectiveParameterListIR_9910, var_guardMangledName_9946, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 269)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsEqual, extractedValue_8150_nameList.getter_length (SOURCE_FILE ("instruction-event.galgas", 286)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (extractedValue_8150_nameList.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 287)).readProperty_location (), GALGAS_string ("Standalone guard are not handled"), fixItArray8  COMMA_SOURCE_FILE ("instruction-event.galgas", 287)) ;
              var_guardMangledName_9946.drop () ; // Release error dropped variable
              var_guardEffectiveParameterListIR_9910.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_7) {
            GALGAS_lstringlist var_propertyList_11662 = extractedValue_8150_nameList ;
            GALGAS_lstring var_globalReceiverName_11730 ;
            {
            var_propertyList_11662.setter_popFirst (var_globalReceiverName_11730, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 292)) ;
            }
            GALGAS_lstring var_guardName_11778 ;
            {
            var_propertyList_11662.setter_popLast (var_guardName_11778, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 293)) ;
            }
            GALGAS_objectIR var_currentObjectIR_11948 ;
            extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, var_globalReceiverName_11730, constinArgument_inMode, ioArgument_ioTemporaries.readProperty_mInitializedDriverSet (), var_currentObjectIR_11948, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 294)) ;
            cEnumerator_lstringlist enumerator_11984 (var_propertyList_11662, kENUMERATION_UP) ;
            while (enumerator_11984.hasCurrentObject ()) {
              {
              routine_handlePropertyAccessInExpression (constinArgument_inContext, var_currentObjectIR_11948, enumerator_11984.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 301)) ;
              }
              enumerator_11984.gotoNextObject () ;
            }
            {
            routine_analyzeGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObjectIR_11948, var_guardName_11778, extractedValue_8164_parameterList, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_9831, var_guardEffectiveParameterListIR_9910, var_guardMangledName_9946, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 311)) ;
            }
          }
        }
        switch (var_booleanResult_9091.enumValue ()) {
        case GALGAS_implicitBooleanConversionResult::kNotBuilt:
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
          {
            const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * extractPtr_13382 = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) (var_booleanResult_9091.unsafePointer ()) ;
            const GALGAS_bool extractedValue_12973_boolValue = extractPtr_13382->mAssociatedValue0 ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = extractedValue_12973_boolValue.boolEnum () ;
              if (kBoolTrue == test_9) {
                var_guardedCommandIRList_6611.addAssign_operation (GALGAS_guardedCommandIR::constructor_sync (extractedValue_8095_isContinue, var_guardMangledName_9946.readProperty_string (), var_guardInstructionGenerationList_9831, var_guardEffectiveParameterListIR_9910  COMMA_SOURCE_FILE ("instruction-event.galgas", 331))  COMMA_SOURCE_FILE ("instruction-event.galgas", 331)) ;
              }
            }
            if (kBoolFalse == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (var_guardMangledName_9946.readProperty_location (), GALGAS_string ("false guard not handled yet"), fixItArray10  COMMA_SOURCE_FILE ("instruction-event.galgas", 338)) ;
            }
          }
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
          {
            const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable * extractPtr_13823 = (const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable *) (var_booleanResult_9091.unsafePointer ()) ;
            const GALGAS_string extractedValue_13416_llvmName = extractPtr_13823->mAssociatedValue0 ;
            var_guardedCommandIRList_6611.addAssign_operation (GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_8095_isContinue, var_boolExpInstructionGenerationList_8229, extractedValue_13416_llvmName, var_guardMangledName_9946.readProperty_string (), var_guardInstructionGenerationList_9831, var_guardEffectiveParameterListIR_9910  COMMA_SOURCE_FILE ("instruction-event.galgas", 341))  COMMA_SOURCE_FILE ("instruction-event.galgas", 341)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_6642.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 377)) ;
  }
  GALGAS_syncInstructionBranchListIR var_syncInstructionBranchListIR_14988 = GALGAS_syncInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 378)) ;
  const GALGAS_syncInstructionAST temp_11 = object ;
  cEnumerator_syncInstructionBranchListAST enumerator_15030 (temp_11.readProperty_mBranchList (), kENUMERATION_UP) ;
  cEnumerator_guardedCommandIRList enumerator_15070 (var_guardedCommandIRList_6611, kENUMERATION_UP) ;
  while (enumerator_15030.hasCurrentObject () && enumerator_15070.hasCurrentObject ()) {
    GALGAS_instructionListIR var_branchInstructionGenerationList_15157 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 380)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_15030.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_15030.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_15157, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 381)) ;
    var_syncInstructionBranchListIR_14988.addAssign_operation (enumerator_15070.current_mGuardedCommand (HERE), var_branchInstructionGenerationList_15157  COMMA_SOURCE_FILE ("instruction-event.galgas", 393)) ;
    enumerator_15030.gotoNextObject () ;
    enumerator_15070.gotoNextObject () ;
  }
  {
  const GALGAS_syncInstructionAST temp_12 = object ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_12.readProperty_mEndOf_5F_on_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 395)) ;
  }
  const GALGAS_syncInstructionAST temp_13 = object ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (temp_13.readProperty_mInstructionLocation (), var_syncInstructionBranchListIR_14988  COMMA_SOURCE_FILE ("instruction-event.galgas", 397))  COMMA_SOURCE_FILE ("instruction-event.galgas", 397)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syncInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_syncInstructionAST.mSlotID,
                                                    extensionMethod_syncInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syncInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_syncInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeGuardCall'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_lstring var_guardMangledName_16769 = extensionGetter_mangledName (constinArgument_inEffectiveParameterList, extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 418)).readProperty_omnibusTypeDescriptionName (), constinArgument_inGuardName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 418)) ;
  GALGAS_bool var_isPublic_17013 ;
  GALGAS_routineTypedSignature var_formalSignature_17057 ;
  GALGAS_lstring var_guardRoutineUserLLVMName_17087 ;
  GALGAS_lstring joker_17089 ; // Joker input parameter
  constinArgument_inContext.readProperty_mGuardMap ().method_searchKey (var_guardMangledName_16769, var_isPublic_17013, var_formalSignature_17057, var_guardRoutineUserLLVMName_17087, joker_17089, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 420)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_isPublic_17013.operator_not (SOURCE_FILE ("instruction-event.galgas", 422)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.readProperty_location (), GALGAS_string ("this guard is not public"), fixItArray1  COMMA_SOURCE_FILE ("instruction-event.galgas", 423)) ;
      outArgument_outGuardMangledName.drop () ; // Release error dropped variable
      outArgument_outEffectiveParameterListIR.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outGuardMangledName = var_guardRoutineUserLLVMName_17087 ;
    GALGAS_procCallEffectiveParameterListIR temp_2 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 427)) ;
    temp_2.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-event.galgas", 427)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("instruction-event.galgas", 427)) ;
    outArgument_outEffectiveParameterListIR = temp_2 ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_17057, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.readProperty_location (), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 428)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syncInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionIR * object = (const cPtr_syncInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionIR) ;
  ioArgument_ioGenerationAdds.setter_setMUsesGuards (GALGAS_bool (true) COMMA_SOURCE_FILE ("instruction-event.galgas", 495)) ;
  GALGAS_string var_startLabel_20288 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-event.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 496)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 497)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_20288, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 499)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 499)) ;
  GALGAS_string var_startLabelName_20454 = var_startLabel_20288.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 500)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_20454.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 501)) ;
  GALGAS_string var_exitLabelName_20538 = var_startLabel_20288.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 502)) ;
  GALGAS_string var_selectLabelName_20583 = var_startLabel_20288.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 503)) ;
  GALGAS_string var_errorLabelName_20629 = var_startLabel_20288.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 504)) ;
  GALGAS_string var_currentStartBranchLabel_20683 = var_startLabelName_20454 ;
  const GALGAS_syncInstructionIR temp_0 = object ;
  cEnumerator_syncInstructionBranchListIR enumerator_20748 (temp_0.readProperty_mOnInstructionBranchListIR (), kENUMERATION_UP) ;
  GALGAS_uint index_20706 ((uint32_t) 0) ;
  while (enumerator_20748.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_20783 = GALGAS_string ("%").add_operation (var_startLabel_20288, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)).add_operation (index_20706.getter_string (SOURCE_FILE ("instruction-event.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)) ;
    GALGAS_bool var_isWhileGuardedCommand_20857 ;
    switch (enumerator_20748.current (HERE).readProperty_mGuardedCommand ().enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_21695 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_20748.current (HERE).readProperty_mGuardedCommand ().unsafePointer ()) ;
        const GALGAS_bool extractedValue_20928_isExitCommand = extractPtr_21695->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_20954_instructionGenerationList = extractPtr_21695->mAssociatedValue1 ;
        const GALGAS_string extractedValue_20976_boolGuardBoolLLVMName = extractPtr_21695->mAssociatedValue2 ;
        var_isWhileGuardedCommand_20857 = extractedValue_20928_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_20954_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 512)) ;
        GALGAS_string var_acceptedLabelName_21162 = var_startLabel_20288.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)).add_operation (index_20706.getter_string (SOURCE_FILE ("instruction-event.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)) ;
        GALGAS_string var_rejectedLabelName_21225 = var_startLabel_20288.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)).add_operation (index_20706.getter_string (SOURCE_FILE ("instruction-event.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extractedValue_20976_boolGuardBoolLLVMName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (var_acceptedLabelName_21162, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (var_rejectedLabelName_21225, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 515)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_21162.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 516)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 516)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 517)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_21225, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 518)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 518)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_21225.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 519)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_20783, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (extractedValue_20976_boolGuardBoolLLVMName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 520)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_23470 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_20748.current (HERE).readProperty_mGuardedCommand ().unsafePointer ()) ;
        const GALGAS_bool extractedValue_21731_isExitCommand = extractPtr_23470->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_21750_expInstructionList = extractPtr_23470->mAssociatedValue1 ;
        const GALGAS_string extractedValue_21768_boolGuardLLVMName = extractPtr_23470->mAssociatedValue2 ;
        const GALGAS_string extractedValue_21785_guardMangledName = extractPtr_23470->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_21806_guardInstructionList = extractPtr_23470->mAssociatedValue4 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_21829_effectiveParameterList = extractPtr_23470->mAssociatedValue5 ;
        var_isWhileGuardedCommand_20857 = extractedValue_21731_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_21750_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 523)) ;
        GALGAS_string var_testOkLabelName_22006 = var_startLabel_20288.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)).add_operation (index_20706.getter_string (SOURCE_FILE ("instruction-event.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)) ;
        GALGAS_string var_testExitLabelName_22077 = var_startLabel_20288.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)).add_operation (index_20706.getter_string (SOURCE_FILE ("instruction-event.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extractedValue_21768_boolGuardLLVMName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (var_testOkLabelName_22006, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (var_testExitLabelName_22077, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 526)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_22006.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 527)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 527)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_21806_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 528)) ;
        GALGAS_string var_guardAcceptationLabelName_22429 = var_startLabel_20288.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)).add_operation (index_20706.getter_string (SOURCE_FILE ("instruction-event.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_22429, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).add_operation (extractedValue_21785_guardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 530)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 531)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_22671 (extractedValue_21829_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_22671.hasCurrentObject ()) {
          switch (enumerator_22671.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22671.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)).add_operation (extensionGetter_llvmName (enumerator_22671.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 535)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22671.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)).add_operation (extensionGetter_llvmName (enumerator_22671.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 537)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22671.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)).add_operation (extensionGetter_llvmName (enumerator_22671.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 539)) ;
            }
            break ;
          }
          if (enumerator_22671.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 542)) ;
          }
          enumerator_22671.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 544)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_22077, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 545)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 545)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_22077.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 546)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_20783, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 547)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 547)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_22429, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)).add_operation (var_testOkLabelName_22006, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 548)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_20683, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 549)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_sync:
      {
        const cEnumAssociatedValues_guardedCommandIR_sync * extractPtr_24374 = (const cEnumAssociatedValues_guardedCommandIR_sync *) (enumerator_20748.current (HERE).readProperty_mGuardedCommand ().unsafePointer ()) ;
        const GALGAS_bool extractedValue_23499_isExitCommand = extractPtr_24374->mAssociatedValue0 ;
        const GALGAS_string extractedValue_23516_guardMangledName = extractPtr_24374->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_23537_guardInstructionList = extractPtr_24374->mAssociatedValue2 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_23560_effectiveParameterList = extractPtr_24374->mAssociatedValue3 ;
        var_isWhileGuardedCommand_20857 = extractedValue_23499_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_23537_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 552)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_20783, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)).add_operation (extractedValue_23516_guardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 553)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 554)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_23898 (extractedValue_23560_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_23898.hasCurrentObject ()) {
          switch (enumerator_23898.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23898.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)).add_operation (extensionGetter_llvmName (enumerator_23898.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 558)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23898.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)).add_operation (extensionGetter_llvmName (enumerator_23898.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 560)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23898.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)).add_operation (extensionGetter_llvmName (enumerator_23898.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 562)) ;
            }
            break ;
          }
          if (enumerator_23898.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 565)) ;
          }
          enumerator_23898.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 567)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_24408 = var_startLabel_20288.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)).add_operation (index_20706.getter_string (SOURCE_FILE ("instruction-event.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)) ;
    GALGAS_string var_rejectedLabelName_24468 = var_startLabel_20288.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)).add_operation (index_20706.getter_string (SOURCE_FILE ("instruction-event.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_20783, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (var_acceptedLabelName_24408, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (var_rejectedLabelName_24468, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 571)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_24408.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 572)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 572)) ;
    extensionMethod_instructionListLLVMCode (enumerator_20748.current (HERE).readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 573)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_isWhileGuardedCommand_20857.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = var_startLabelName_20454 ;
    }else if (kBoolFalse == test_2) {
      temp_1 = var_exitLabelName_20538 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 574)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 574)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 574)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_24468.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 575)) ;
    var_currentStartBranchLabel_20683 = var_rejectedLabelName_24468 ;
    enumerator_20748.gotoNextObject () ;
    index_20706.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 506)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_20583, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 578)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_20583, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (var_startLabelName_20454, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (var_errorLabelName_20629, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 579)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_20629.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 580)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_20538, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 582)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 582)) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_syncInstructionIR temp_4 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mSelectInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 584)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 584)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 584)) ;
    const GALGAS_syncInstructionIR temp_5 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).add_operation (temp_5.readProperty_mSelectInstructionLocation ().getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).getter_string (SOURCE_FILE ("instruction-event.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 585)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).getter_string (SOURCE_FILE ("instruction-event.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 586)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 587)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_20538.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 589)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syncInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_syncInstructionIR.mSlotID,
                                            extensionMethod_syncInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syncInstructionIR_llvmInstructionCode (defineExtensionMethod_syncInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syncInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                       GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionIR * object = (const cPtr_syncInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionIR) ;
  const GALGAS_syncInstructionIR temp_0 = object ;
  GALGAS_uint var_branchCount_26214 = temp_0.readProperty_mOnInstructionBranchListIR ().getter_length (SOURCE_FILE ("instruction-event.galgas", 598)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_26214)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_26214 ;
    }
  }
  const GALGAS_syncInstructionIR temp_2 = object ;
  cEnumerator_syncInstructionBranchListIR enumerator_26409 (temp_2.readProperty_mOnInstructionBranchListIR (), kENUMERATION_UP) ;
  while (enumerator_26409.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_26409.current (HERE).readProperty_mInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 603)) ;
    switch (enumerator_26409.current (HERE).readProperty_mGuardedCommand ().enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_26728 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_26409.current (HERE).readProperty_mGuardedCommand ().unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_26613_instructionGenerationList = extractPtr_26728->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_26613_instructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 606)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_sync:
      {
        const cEnumAssociatedValues_guardedCommandIR_sync * extractPtr_26960 = (const cEnumAssociatedValues_guardedCommandIR_sync *) (enumerator_26409.current (HERE).readProperty_mGuardedCommand ().unsafePointer ()) ;
        const GALGAS_string extractedValue_26762_guardMangledName = extractPtr_26960->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_26793_guardInstructionGenerationList = extractPtr_26960->mAssociatedValue2 ;
        extensionMethod_enterAccessibleEntities (extractedValue_26793_guardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 608)) ;
        ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_26762_guardMangledName  COMMA_SOURCE_FILE ("instruction-event.galgas", 609)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_27337 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_26409.current (HERE).readProperty_mGuardedCommand ().unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_27010_instructionGenerationList = extractPtr_27337->mAssociatedValue1 ;
        const GALGAS_string extractedValue_27029_guardMangledName = extractPtr_27337->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_27060_guardInstructionGenerationList = extractPtr_27337->mAssociatedValue4 ;
        extensionMethod_enterAccessibleEntities (extractedValue_27010_instructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 611)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_27060_guardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 612)) ;
        ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_27029_guardMangledName  COMMA_SOURCE_FILE ("instruction-event.galgas", 613)) ;
      }
      break ;
    }
    enumerator_26409.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-event.galgas", 616)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_syncInstructionIR temp_4 = object ;
      ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mSelectInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 617))  COMMA_SOURCE_FILE ("instruction-event.galgas", 617)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syncInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_syncInstructionIR.mSlotID,
                                                extensionMethod_syncInstructionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syncInstructionIR_enterAccessibleEntities (defineExtensionMethod_syncInstructionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  const GALGAS_whileInstructionAST temp_0 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 48)) ;
  const GALGAS_whileInstructionAST temp_1 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_1.readProperty_m_5F_while_5F_Expression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 49)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                                                              extensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_instructionListIR var_testInstructionGenerationList_3411 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 68)) ;
  GALGAS_objectIR var_testValue_3816 ;
  const GALGAS_whileInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_m_5F_while_5F_Expression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 72)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_3411, var_testValue_3816, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 69)) ;
  {
  extensionSetter_appendLoadWhenReference (var_testInstructionGenerationList_3411, ioArgument_ioTemporaries, var_testValue_3816, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 82)) ;
  }
  GALGAS_implicitBooleanConversionResult var_booleanResult_4192 ;
  const GALGAS_whileInstructionAST temp_1 = object ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_testValue_3816, temp_1.readProperty_mEndOf_5F_test_5F_expression (), ioArgument_ioTemporaries, var_testInstructionGenerationList_3411, ioArgument_ioAllocaList, var_booleanResult_4192, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)) ;
  switch (var_booleanResult_4192.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      const GALGAS_whileInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOf_5F_test_5F_expression (), GALGAS_string ("test expression type should not be a compile time expression"), fixItArray3  COMMA_SOURCE_FILE ("instruction-while.galgas", 97)) ;
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
    }
    break ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_4787 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 108)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 109)) ;
  }
  const GALGAS_whileInstructionAST temp_4 = object ;
  const GALGAS_whileInstructionAST temp_5 = object ;
  extensionMethod_analyzeBranchInstructionList (temp_4.readProperty_mWhileInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_5.readProperty_mEndOf_5F_while_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4787, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 110)) ;
  {
  const GALGAS_whileInstructionAST temp_6 = object ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_6.readProperty_mEndOf_5F_while_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 122)) ;
  }
  const GALGAS_whileInstructionAST temp_7 = object ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (temp_7.readProperty_mEndOf_5F_test_5F_expression ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 125)), var_testInstructionGenerationList_3411, extensionGetter_llvmName (var_booleanResult_4192, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 127)), var_instructionGenerationList_4787  COMMA_SOURCE_FILE ("instruction-while.galgas", 124))  COMMA_SOURCE_FILE ("instruction-while.galgas", 124)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_whileInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                                                    extensionMethod_whileInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_whileInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_whileInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_whileInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                    GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  const GALGAS_whileInstructionIR temp_0 = object ;
  GALGAS_string var_labelTest_6456 = GALGAS_string ("while.").add_operation (temp_0.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)) ;
  const GALGAS_whileInstructionIR temp_1 = object ;
  GALGAS_string var_labelLoop_6512 = GALGAS_string ("while.").add_operation (temp_1.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  const GALGAS_whileInstructionIR temp_2 = object ;
  GALGAS_string var_labelEnd_6567 = GALGAS_string ("while.").add_operation (temp_2.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6456, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6456.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
  const GALGAS_whileInstructionIR temp_3 = object ;
  extensionMethod_instructionListLLVMCode (temp_3.readProperty_mTestInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 155)) ;
  const GALGAS_whileInstructionIR temp_4 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (temp_4.readProperty_m_5F_while_5F_llvmName (), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (var_labelLoop_6512, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (var_labelEnd_6567, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 156)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6512.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 157)) ;
  const GALGAS_whileInstructionIR temp_5 = object ;
  extensionMethod_instructionListLLVMCode (temp_5.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 158)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6456, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6567.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 160)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_whileInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                            extensionMethod_whileInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_whileInstructionIR_llvmInstructionCode (defineExtensionMethod_whileInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_whileInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                        GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  const GALGAS_whileInstructionIR temp_0 = object ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mTestInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 169)) ;
  const GALGAS_whileInstructionIR temp_1 = object ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 170)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_whileInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                                extensionMethod_whileInstructionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_whileInstructionIR_enterAccessibleEntities (defineExtensionMethod_whileInstructionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  const GALGAS_forInstructionAST temp_0 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mDoInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 73)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                              extensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
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
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_objectIR var_iteratedObjectPointer_4133 ;
  {
  const GALGAS_forInstructionAST temp_0 = object ;
  extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, temp_0.readProperty_mIteratedObject (), var_iteratedObjectPointer_4133, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 92)) ;
  }
  GALGAS_omnibusType var_iteratedType_4168 = extensionGetter_type (var_iteratedObjectPointer_4133, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 94)) ;
  GALGAS_omnibusType var_iteratedElementType_4269 ;
  switch (var_iteratedType_4168.readProperty_subscript ().enumValue ()) {
  case GALGAS_subscript::kNotBuilt:
    break ;
  case GALGAS_subscript::kEnum_noSubscript:
    {
      const GALGAS_forInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mIteratedObject ().readProperty_location (), GALGAS_string ("this object is not enumerable"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)) ;
      var_iteratedElementType_4269.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      var_iteratedElementType_4269 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GALGAS_string ("u8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_4591 = (const cEnumAssociatedValues_subscript_staticSubscript *) (var_iteratedType_4168.readProperty_subscript ().unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4548_elementType = extractPtr_4591->mAssociatedValue0 ;
      var_iteratedElementType_4269 = extractedValue_4548_elementType ;
    }
    break ;
  }
  const GALGAS_forInstructionAST temp_3 = object ;
  const GALGAS_forInstructionAST temp_4 = object ;
  GALGAS_lstring var_omnibusName_4620 = GALGAS_lstring::constructor_new (temp_3.readProperty_mVarName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)), temp_4.readProperty_mVarName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 107)) ;
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_4620.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)), var_iteratedElementType_4269, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 110)) ;
  }
  {
  const GALGAS_forInstructionAST temp_5 = object ;
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_5.readProperty_mVarName (), GALGAS_bool (false), var_iteratedElementType_4269, var_omnibusName_4620, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 111)) ;
  }
  GALGAS_instructionListIR var_whileExpression_5F_GenerationList_5130 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 113)) ;
  GALGAS_objectIR var_whileExpressionResult_5550 ;
  const GALGAS_forInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_6.readProperty_mWhileExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 117)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_5130, var_whileExpressionResult_5550, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 114)) ;
  GALGAS_implicitBooleanConversionResult var_whileExpressionBooleanResult_5856 ;
  const GALGAS_forInstructionAST temp_7 = object ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_whileExpressionResult_5550, temp_7.readProperty_mEndOf_5F_whileExpression (), ioArgument_ioTemporaries, var_whileExpression_5F_GenerationList_5130, ioArgument_ioAllocaList, var_whileExpressionBooleanResult_5856, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 128)) ;
  switch (var_whileExpressionBooleanResult_5856.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * extractPtr_6042 = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) (var_whileExpressionBooleanResult_5856.unsafePointer ()) ;
      const GALGAS_bool extractedValue_5929_boolValue = extractPtr_6042->mAssociatedValue0 ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = extractedValue_5929_boolValue.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 138)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const GALGAS_forInstructionAST temp_9 = object ;
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mEndOf_5F_whileExpression (), GALGAS_string ("test expression is always false"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)) ;
        }
      }
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
    }
    break ;
  }
  GALGAS_instructionListIR var_doInstructionList_5F_GenerationList_6678 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 153)) ;
  const GALGAS_forInstructionAST temp_11 = object ;
  const GALGAS_forInstructionAST temp_12 = object ;
  extensionMethod_analyzeBranchInstructionList (temp_11.readProperty_mDoInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_12.readProperty_mEndOf_5F_for_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_6678, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)) ;
  {
  const GALGAS_forInstructionAST temp_13 = object ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_13.readProperty_mEndOf_5F_for_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)) ;
  }
  switch (var_iteratedType_4168.readProperty_subscript ().enumValue ()) {
  case GALGAS_subscript::kNotBuilt:
    break ;
  case GALGAS_subscript::kEnum_noSubscript:
    {
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      const GALGAS_forInstructionAST temp_14 = object ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnLiteralStringIR::constructor_new (var_omnibusName_4620.readProperty_string (), temp_14.readProperty_mIteratedObject ().readProperty_location (), var_iteratedObjectPointer_4133, var_iteratedType_4168, var_whileExpression_5F_GenerationList_5130, var_whileExpressionResult_5550, var_doInstructionList_5F_GenerationList_6678  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_8252 = (const cEnumAssociatedValues_subscript_staticSubscript *) (var_iteratedType_4168.readProperty_subscript ().unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_7610_elementType = extractPtr_8252->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_7615_size = extractPtr_8252->mAssociatedValue1 ;
      GALGAS_stringset var_invokedFunctionSet_7717 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-for-in-do.galgas", 182)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        const GALGAS_forInstructionAST temp_16 = object ;
        test_15 = ioArgument_ioTemporaries.readProperty_mStaticArrayMapForTemporaries ().getter_hasKey (temp_16.readProperty_mIteratedObject ().readProperty_string () COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 183)).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_forInstructionAST temp_17 = object ;
          ioArgument_ioTemporaries.readProperty_mStaticArrayMapForTemporaries ().method_searchKey (temp_17.readProperty_mIteratedObject (), var_invokedFunctionSet_7717, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 184)) ;
        }
      }
      const GALGAS_forInstructionAST temp_18 = object ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnArrayIR::constructor_new (var_omnibusName_4620.readProperty_string (), temp_18.readProperty_mIteratedObject (), var_iteratedObjectPointer_4133, var_whileExpression_5F_GenerationList_5130, extensionGetter_llvmName (var_whileExpressionBooleanResult_5856, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 191)), var_doInstructionList_5F_GenerationList_6678, extractedValue_7610_elementType, extractedValue_7615_size.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 194)), var_invokedFunctionSet_7717  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 186))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 186)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                    extensionMethod_forInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_forInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnArrayIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionOnArrayIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnArrayIR * object = (const cPtr_forInstructionOnArrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnArrayIR) ;
  const GALGAS_forInstructionOnArrayIR temp_0 = object ;
  GALGAS_string var_elementTypeLLVMName_10489 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)) ;
  const GALGAS_forInstructionOnArrayIR temp_1 = object ;
  GALGAS_string var_listTypeLLVMName_10547 = GALGAS_string ("[").add_operation (temp_1.readProperty_mArraySize ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (var_elementTypeLLVMName_10489, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)) ;
  const GALGAS_forInstructionOnArrayIR temp_2 = object ;
  GALGAS_string var_locationIndex_10627 = temp_2.readProperty_mIteratedObjectName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 255)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 255)) ;
  GALGAS_string var_startLabel_10708 = GALGAS_string ("for.label.start.").add_operation (var_locationIndex_10627, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 257)) ;
  GALGAS_string var_testLabel_10761 = GALGAS_string ("for.label.test.").add_operation (var_locationIndex_10627, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)) ;
  GALGAS_string var_whileLabel_10814 = GALGAS_string ("for.label.while.").add_operation (var_locationIndex_10627, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)) ;
  GALGAS_string var_nextLabel_10867 = GALGAS_string ("for.label.next.").add_operation (var_locationIndex_10627, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)) ;
  GALGAS_string var_loopVar_10917 = GALGAS_string ("for.loop.").add_operation (var_locationIndex_10627, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)) ;
  GALGAS_string var_loopLabel_10963 = GALGAS_string ("for.label.loop.").add_operation (var_locationIndex_10627, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)) ;
  GALGAS_string var_endLabel_11014 = GALGAS_string ("for.label.end.").add_operation (var_locationIndex_10627, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)) ;
  GALGAS_string var_indexVar_11067 = GALGAS_string ("for.index.").add_operation (var_locationIndex_10627, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 265)) ;
  GALGAS_string var_ptrVar_11112 = GALGAS_string ("for.ptr.").add_operation (var_locationIndex_10627, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 266)) ;
  GALGAS_string var_currentValue_11161 = GALGAS_string ("for.currentValue.").add_operation (var_locationIndex_10627, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_10708, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_10708.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_11112, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (GALGAS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (var_listTypeLLVMName_10547, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)) ;
  const GALGAS_forInstructionOnArrayIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_10547, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mIteratedObject (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10761, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_10761.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_11112, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_elementTypeLLVMName_10489, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_ptrVar_11112, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_startLabel_10708, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_ptrVar_11112, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (var_nextLabel_10867, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)) ;
  const GALGAS_forInstructionOnArrayIR temp_4 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_11067, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (temp_4.readProperty_mArraySize ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_startLabel_10708, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_indexVar_11067, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (var_nextLabel_10867, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_loopVar_10917, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GALGAS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (var_indexVar_11067, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_loopVar_10917, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_whileLabel_10814, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_endLabel_11014, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_10814.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)) ;
  const GALGAS_forInstructionOnArrayIR temp_5 = object ;
  extensionMethod_instructionListLLVMCode (temp_5.readProperty_mWhileInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)) ;
  const GALGAS_forInstructionOnArrayIR temp_6 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (temp_6.readProperty_mWhileExpressionBooleanResult_5F_llvmName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (var_loopLabel_10963, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (var_endLabel_11014, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_10963.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentValue_11161, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (var_elementTypeLLVMName_10489, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_10489.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (var_ptrVar_11112, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)) ;
  const GALGAS_forInstructionOnArrayIR temp_7 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeLLVMName_10489, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (var_currentValue_11161, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (var_elementTypeLLVMName_10489, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (function_llvmNameForLocalVariable (temp_7.readProperty_mEnumeratedValueName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)) ;
  const GALGAS_forInstructionOnArrayIR temp_8 = object ;
  extensionMethod_instructionListLLVMCode (temp_8.readProperty_mDoInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_10867, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_10867.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_11112, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (var_elementTypeLLVMName_10489, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_10489.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (var_ptrVar_11112, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_11067, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (GALGAS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (var_indexVar_11067, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (GALGAS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10761, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_11014.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionOnArrayIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionOnArrayIR.mSlotID,
                                            extensionMethod_forInstructionOnArrayIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionOnArrayIR_llvmInstructionCode (defineExtensionMethod_forInstructionOnArrayIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnArrayIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionOnArrayIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                             GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnArrayIR * object = (const cPtr_forInstructionOnArrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnArrayIR) ;
  const GALGAS_forInstructionOnArrayIR temp_0 = object ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 328)) ;
  const GALGAS_forInstructionOnArrayIR temp_1 = object ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mDoInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 329)) ;
  const GALGAS_forInstructionOnArrayIR temp_2 = object ;
  ioArgument_ioInvokedRoutineSet.plusAssign_operation(temp_2.readProperty_mInvokedFunctionSet (), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionOnArrayIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionOnArrayIR.mSlotID,
                                                extensionMethod_forInstructionOnArrayIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionOnArrayIR_enterAccessibleEntities (defineExtensionMethod_forInstructionOnArrayIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnLiteralStringIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionOnLiteralStringIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnLiteralStringIR * object = (const cPtr_forInstructionOnLiteralStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnLiteralStringIR) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_0 = object ;
  GALGAS_string var_startLabel_15057 = GALGAS_string ("for.label.start.").add_operation (temp_0.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_1 = object ;
  GALGAS_string var_testLabel_15127 = GALGAS_string ("for.label.test.").add_operation (temp_1.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_2 = object ;
  GALGAS_string var_loopLabel_15196 = GALGAS_string ("for.label.loop.").add_operation (temp_2.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_3 = object ;
  GALGAS_string var_whileLabel_15266 = GALGAS_string ("for.label.while.").add_operation (temp_3.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_4 = object ;
  GALGAS_string var_nextLabel_15336 = GALGAS_string ("for.label.next.").add_operation (temp_4.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_5 = object ;
  GALGAS_string var_endLabel_15404 = GALGAS_string ("for.label.end.").add_operation (temp_5.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_6 = object ;
  GALGAS_string var_ptrVar_15470 = GALGAS_string ("for.ptr.").add_operation (temp_6.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_7 = object ;
  GALGAS_string var_currentVar_15536 = GALGAS_string ("for.current.").add_operation (temp_7.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_8 = object ;
  GALGAS_string var_stringLLVMTypeName_15611 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_8.readProperty_mLiteralStringType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_15057, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_15057.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_9 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_15470, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string (".start = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (var_stringLLVMTypeName_15611, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (var_stringLLVMTypeName_15611, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (extensionGetter_llvmName (temp_9.readProperty_mStringElementIteratedObject (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_15127, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_15127.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_15470, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (var_stringLLVMTypeName_15611, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GALGAS_string (" [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (var_ptrVar_15470, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_15057.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (var_ptrVar_15470, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (var_nextLabel_15336, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_15536, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string (" = load i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (var_stringLLVMTypeName_15611, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (var_ptrVar_15470, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_15536, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (var_currentVar_15536, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_15536, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (var_endLabel_15404, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (var_whileLabel_15266, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_15266.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_10 = object ;
  extensionMethod_instructionListLLVMCode (temp_10.readProperty_mWhileInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_11 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_11.readProperty_mWhileExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (var_loopLabel_15196, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (var_endLabel_15404, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_15196.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 385)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8 %").add_operation (var_currentVar_15536, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_12 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * ").add_operation (function_llvmNameForLocalVariable (temp_12.readProperty_mVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_13 = object ;
  extensionMethod_instructionListLLVMCode (temp_13.readProperty_mDoInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_15336, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_15336.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_15470, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)).add_operation (GALGAS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (var_ptrVar_15470, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_15127, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_15404.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionOnLiteralStringIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR.mSlotID,
                                            extensionMethod_forInstructionOnLiteralStringIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionOnLiteralStringIR_llvmInstructionCode (defineExtensionMethod_forInstructionOnLiteralStringIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnLiteralStringIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionOnLiteralStringIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnLiteralStringIR * object = (const cPtr_forInstructionOnLiteralStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnLiteralStringIR) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_0 = object ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 408)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_1 = object ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mDoInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 409)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionOnLiteralStringIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR.mSlotID,
                                                extensionMethod_forInstructionOnLiteralStringIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionOnLiteralStringIR_enterAccessibleEntities (defineExtensionMethod_forInstructionOnLiteralStringIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_forLowerUpperBoundInstructionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_forLowerUpperBoundInstructionAST temp_2 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 67)) ;
      }
    }
  }
  const GALGAS_forLowerUpperBoundInstructionAST temp_3 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_3.readProperty_mDoInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 69)) ;
  const GALGAS_forLowerUpperBoundInstructionAST temp_4 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_4.readProperty_mLowerBoundExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 70)) ;
  const GALGAS_forLowerUpperBoundInstructionAST temp_5 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_5.readProperty_mUpperBoundExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 71)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST.mSlotID,
                                                              extensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forLowerUpperBoundInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
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
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  const GALGAS_forLowerUpperBoundInstructionAST temp_0 = object ;
  GALGAS_omnibusType var_type_4166 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)) ;
  switch (var_type_4166.readProperty_kind ().enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 93)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 95)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray8  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 100)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 102)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeBool:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 104)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_llvmType:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_13 = object ;
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 106)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_generic:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray16  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 108)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeInteger:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_17 = object ;
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray18  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 110)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_19 = object ;
      TC_Array <C_FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (temp_19.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray20  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 112)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_21 = object ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray22  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 114)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray24  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 116)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_8421 = (const cEnumAssociatedValues_typeKind_integer *) (var_type_4166.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_bigint extractedValue_5333_min = extractPtr_8421->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_5352_max = extractPtr_8421->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_5367_unsigned = extractPtr_8421->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_5389_bitCount = extractPtr_8421->mAssociatedValue3 ;
      GALGAS_objectIR var_lowerBoundExpressionResult_5854 ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_25 = object ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_25.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_4166, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResult_5854, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 119)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResult_5854, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 132)) ;
      }
      GALGAS_objectIR var_upperBoundExpressionResult_6419 ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_26 = object ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_26.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_4166, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResult_6419, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 136)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResult_6419, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 149)) ;
      }
      const GALGAS_forLowerUpperBoundInstructionAST temp_27 = object ;
      GALGAS_objectIR var_lowerBound_6598 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_lowerBoundExpressionResult_5854, var_type_4166, temp_27.readProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 154)) ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_28 = object ;
      GALGAS_objectIR var_upperBound_6867 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_upperBoundExpressionResult_6419, var_type_4166, temp_28.readProperty_mEndOf_5F_upperBoundExpression_5F_instruction (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 161)) ;
      {
      extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 169)) ;
      }
      const GALGAS_forLowerUpperBoundInstructionAST temp_29 = object ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_30 = object ;
      GALGAS_lstring var_enumeratedVarName_7237 = GALGAS_lstring::constructor_new (temp_29.readProperty_mVarName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), temp_30.readProperty_mVarName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)) ;
      ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_enumeratedVarName_7237.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)), var_type_4166, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)) ;
      enumGalgasBool test_31 = kBoolTrue ;
      if (kBoolTrue == test_31) {
        const GALGAS_forLowerUpperBoundInstructionAST temp_32 = object ;
        test_31 = GALGAS_bool (kIsNotEqual, temp_32.readProperty_mVarName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_31) {
          {
          const GALGAS_forLowerUpperBoundInstructionAST temp_33 = object ;
          extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_33.readProperty_mVarName (), GALGAS_bool (false), var_type_4166, var_enumeratedVarName_7237, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 175)) ;
          }
        }
      }
      GALGAS_instructionListIR var_instructionGenerationList_7671 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 178)) ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_34 = object ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_35 = object ;
      extensionMethod_analyzeBranchInstructionList (temp_34.readProperty_mDoInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_35.readProperty_mEndOf_5F_do_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_7671, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 179)) ;
      {
      const GALGAS_forLowerUpperBoundInstructionAST temp_36 = object ;
      extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_36.readProperty_mEndOf_5F_do_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 191)) ;
      }
      const GALGAS_forLowerUpperBoundInstructionAST temp_37 = object ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarName_7237.readProperty_string (), var_type_4166, extractedValue_5367_unsigned, temp_37.readProperty_mEndOf_5F_do_5F_instruction (), var_lowerBound_6598, var_upperBound_6867, var_instructionGenerationList_7671  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 193))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 193)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forLowerUpperBoundInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST.mSlotID,
                                                    extensionMethod_forLowerUpperBoundInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_forLowerUpperBoundInstructionAST_instructionSemanticAnalysis, NULL) ;

