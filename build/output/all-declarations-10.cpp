#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-10.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Overriding extension method '@sizeofTypeAST analyzeExpression'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_sizeofTypeAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                             const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                             const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
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
  const enumGalgasBool test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-sizeof.galgas", 136)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-sizeof.galgas", 137)), GALGAS_string ("sizeof () cannot be used in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 137)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_PLMType var_type_6232 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 139)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 139)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_resultTypeProxy_6330 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("$uint").add_operation (constinArgument_inContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE).getter_string (SOURCE_FILE ("expression-sizeof.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 142)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 140)) ;
    GALGAS_PLMType var_resultType_6485 = var_resultTypeProxy_6330.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 144)) ;
    {
    routine_getNewTempValue (var_resultType_6485, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 145)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_sizeofInstructionIR::constructor_new (outArgument_outResult, var_type_6232  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 146))  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 146)) ;
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
//                     Overriding extension method '@sizeofInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_sizeofInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                         GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_sizeofInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_sizeofInstructionIR.mSlotID,
                                                extensionMethod_sizeofInstructionIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_sizeofInstructionIR_enterAccessibleEntities (defineExtensionMethod_sizeofInstructionIR_enterAccessibleEntities, NULL) ;

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
  GALGAS_string var_typeName_7869 = extensionGetter_llvmTypeName (object->mProperty_mSourceType, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 176)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 177)).add_operation (GALGAS_string (".asPtr = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 177)).add_operation (var_typeName_7869, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 177)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 177)).add_operation (var_typeName_7869, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 177)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 177)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)).add_operation (GALGAS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)).add_operation (var_typeName_7869, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)).add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)).add_operation (GALGAS_string (".asPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)) ;
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
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2187 (object->mProperty_mParameterList, kENUMERATION_UP) ;
  while (enumerator_2187.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) enumerator_2187.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 52)) ;
    enumerator_2187.gotoNextObject () ;
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
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2819 (object->mProperty_mParameterList, kENUMERATION_UP) ;
  while (enumerator_2819.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_2819.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 63)) ;
    enumerator_2819.gotoNextObject () ;
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
                                                                  const GALGAS_PLMType constinArgument_inSelfType,
                                                                  const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                  const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                  const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                                  const GALGAS_mode constinArgument_inCurrentMode,
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
  GALGAS_string var_constructorKey_3986 = GALGAS_string ("(") ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_4029 (object->mProperty_mParameterList, kENUMERATION_UP) ;
  while (enumerator_4029.hasCurrentObject ()) {
    var_constructorKey_3986.plusAssign_operation(GALGAS_string ("!").add_operation (enumerator_4029.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 88)) ;
    enumerator_4029.gotoNextObject () ;
  }
  var_constructorKey_3986.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 90)) ;
  GALGAS_PLMType var_resultType_4166 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 92)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 92)) ;
  GALGAS_constructorMap var_constructorMap_4261 = var_resultType_4166.getter_constructorMap (HERE) ;
  GALGAS_constructorSignature var_constructorSignature_4383 ;
  GALGAS_constructorValue var_initValue_4398 ;
  var_constructorMap_4261.method_searchKey (GALGAS_lstring::constructor_new (var_constructorKey_3986, object->mProperty_mErrorLocation  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 94)), var_constructorSignature_4383, var_initValue_4398, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 94)) ;
  switch (var_initValue_4398.enumValue ()) {
  case GALGAS_constructorValue::kNotBuilt:
    break ;
  case GALGAS_constructorValue::kEnum_arrayValue:
    {
      const cEnumAssociatedValues_constructorValue_arrayValue * extractPtr_7648 = (const cEnumAssociatedValues_constructorValue_arrayValue *) (var_initValue_4398.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_elementType = extractPtr_7648->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_size = extractPtr_7648->mAssociatedValue1 ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_constructorKey_3986.objectCompare (GALGAS_string ("(!repeated)"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_expressionAST var_expression_4546 = object->mProperty_mParameterList.getter_mExpressionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 99)) ;
        GALGAS_objectIR var_expressionResult_5108 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) var_expression_4546.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, extractedValue_elementType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5108, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 100)) ;
        GALGAS_objectIR var_result_5133 = function_checkAssignmentCompatibility (var_expressionResult_5108, extractedValue_elementType, object->mProperty_mParameterList.getter_mSelectorAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 117)).getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 114)) ;
        const enumGalgasBool test_1 = extensionGetter_isStatic (var_result_5133, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 120)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_uint var_idx_5399 = ioArgument_ioStaticEntityMap.getter_mGlobalStructuredConstantList (HERE).getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 121)) ;
          outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayRepeatedStaticValue (var_resultType_4166, extractedValue_size, var_result_5133, var_idx_5399  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 122)) ;
          GALGAS_operandIRList var_operandIRList_5606 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 123)) ;
          cEnumerator_range enumerator_5639 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), extractedValue_size.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 124))), kENUMERATION_UP) ;
          while (enumerator_5639.hasCurrentObject ()) {
            var_operandIRList_5606.addAssign_operation (var_result_5133  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 125)) ;
            enumerator_5639.gotoNextObject () ;
          }
          ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssign_operation (var_resultType_4166, var_operandIRList_5606  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 127)) ;
        }else if (kBoolFalse == test_1) {
          outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayRepeatedDynamicValue (var_resultType_4166, extractedValue_size, var_result_5133  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 129)) ;
        }
      }else if (kBoolFalse == test_0) {
        GALGAS_string var_individualConstructor_5937 = GALGAS_string ("(") ;
        cEnumerator_range enumerator_5969 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), extractedValue_size.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 133))), kENUMERATION_UP) ;
        while (enumerator_5969.hasCurrentObject ()) {
          var_individualConstructor_5937.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134)) ;
          enumerator_5969.gotoNextObject () ;
        }
        var_individualConstructor_5937.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 136)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_constructorKey_3986.objectCompare (var_individualConstructor_5937)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_operandIRList var_operandIRList_6145 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 138)) ;
          GALGAS_bool var_resultIsStatic_6177 = GALGAS_bool (true) ;
          cEnumerator_functionCallEffectiveParameterListAST enumerator_6217 (object->mProperty_mParameterList, kENUMERATION_UP) ;
          while (enumerator_6217.hasCurrentObject ()) {
            GALGAS_objectIR var_expressionResult_6794 ;
            callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_6217.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, extractedValue_elementType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6794, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 141)) ;
            GALGAS_objectIR var_result_6827 = function_checkAssignmentCompatibility (var_expressionResult_6794, extractedValue_elementType, enumerator_6217.current_mSelector (HERE).getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 155)) ;
            var_operandIRList_6145.addAssign_operation (var_result_6827  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 161)) ;
            GALGAS_bool test_3 = var_resultIsStatic_6177 ;
            if (kBoolTrue == test_3.boolEnum ()) {
              test_3 = extensionGetter_isStatic (var_result_6827, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 162)) ;
            }
            var_resultIsStatic_6177 = test_3 ;
            enumerator_6217.gotoNextObject () ;
          }
          const enumGalgasBool test_4 = var_resultIsStatic_6177.boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_uint var_idx_7197 = ioArgument_ioStaticEntityMap.getter_mGlobalStructuredConstantList (HERE).getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 165)) ;
            outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayStaticValues (var_resultType_4166, var_operandIRList_6145, var_idx_7197  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 166)) ;
            ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssign_operation (var_resultType_4166, var_operandIRList_6145  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 167)) ;
          }else if (kBoolFalse == test_4) {
            outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayDynamicValues (var_resultType_4166, var_operandIRList_6145  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 169)) ;
          }
        }else if (kBoolFalse == test_2) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("invalid constructor"), fixItArray5  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 172)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_constructorValue::kEnum_null:
    {
      outArgument_outResult = GALGAS_objectIR::constructor_null (var_resultType_4166  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 176)) ;
    }
    break ;
  case GALGAS_constructorValue::kEnum_simple:
    {
      const cEnumAssociatedValues_constructorValue_simple * extractPtr_7970 = (const cEnumAssociatedValues_constructorValue_simple *) (var_initValue_4398.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_7970->mAssociatedValue0 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 178)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mErrorLocation, var_resultType_4166.getter_plmTypeDescriptionName (HERE).add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 179)), fixItArray7  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 179)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_6) {
        outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_4166, extractedValue_value  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 181)) ;
      }
    }
    break ;
  case GALGAS_constructorValue::kEnum_structure:
    {
      const cEnumAssociatedValues_constructorValue_structure * extractPtr_9685 = (const cEnumAssociatedValues_constructorValue_structure *) (var_initValue_4398.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_sortedOperandList = extractPtr_9685->mAssociatedValue0 ;
      GALGAS_sortedOperandIRList var_sortedOperandIRList_8037 = extractedValue_sortedOperandList ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 185)).objectCompare (var_constructorSignature_4383.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 185)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_string temp_9 ;
        const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_constructorSignature_4383.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 187)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_10) {
          temp_9 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_10) {
          temp_9 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("this constructor call should name ").add_operation (var_constructorSignature_4383.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 186)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 186)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 186)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 186)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 188)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 188)), fixItArray11  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 186)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_8) {
        cEnumerator_constructorSignature enumerator_8430 (var_constructorSignature_4383, kENUMERATION_UP) ;
        cEnumerator_functionCallEffectiveParameterListAST enumerator_8463 (object->mProperty_mParameterList, kENUMERATION_UP) ;
        while (enumerator_8430.hasCurrentObject () && enumerator_8463.hasCurrentObject ()) {
          const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_8463.current_mSelector (HERE).getter_string (HERE).objectCompare (enumerator_8430.current_mSelector (HERE))).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_8463.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-constructor-call.galgas", 193)), GALGAS_string ("the selector should be '!").add_operation (enumerator_8430.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 193)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 193)), fixItArray13  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 193)) ;
          }
          GALGAS_objectIR var_expressionResult_9193 ;
          callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_8463.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, enumerator_8430.current_mType (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_9193, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 195)) ;
          GALGAS_objectIR var_result_9222 = function_checkAssignmentCompatibility (var_expressionResult_9193, enumerator_8430.current_mType (HERE), enumerator_8463.current_mSelector (HERE).getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 209)) ;
          {
          extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_result_9222, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 215)) ;
          }
          var_sortedOperandIRList_8037.addAssign_operation (var_result_9222, enumerator_8430.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 216)) ;
          enumerator_8430.gotoNextObject () ;
          enumerator_8463.gotoNextObject () ;
        }
        outArgument_outResult = GALGAS_objectIR::constructor_llvmStructureValue (var_resultType_4166, var_sortedOperandIRList_8037  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 218)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mOptionalTypeName COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 46)) ;
    }
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_2247 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_2247.hasCurrentObject ()) {
    switch (enumerator_2247.current_mAccess (HERE).enumValue ()) {
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
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_2491 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_2247.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_2491->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 54)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_3005 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_2247.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_3005->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_2579 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_2579.hasCurrentObject ()) {
          switch (enumerator_2579.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_2795 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2579.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_2795->mAssociatedValue1 ;
              const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_1) {
                {
                ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 61)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_2908 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2579.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_2908->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 63)) ;
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
          enumerator_2579.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_2247.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_noteNode (object->mProperty_mOptionalTypeName COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 78)) ;
    }
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_3623 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_3623.hasCurrentObject ()) {
    switch (enumerator_3623.current_mAccess (HERE).enumValue ()) {
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
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_3826 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_3623.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_3826->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 85)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_4324 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_3623.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_4324->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_3914 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_3914.hasCurrentObject ()) {
          switch (enumerator_3914.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4130 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3914.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_4130->mAssociatedValue1 ;
              const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_1) {
                {
                ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 92)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4227 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3914.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_4227->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 94)) ;
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
          enumerator_3914.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_3623.gotoNextObject () ;
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
                                                                    const GALGAS_PLMType constinArgument_inSelfType,
                                                                    const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                    const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_mode constinArgument_inCurrentMode,
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
  GALGAS_PLMType var_inferredResultType_5435 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_inferredResultType_5435 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_inferredResultType_5435 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 126)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 126)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_inferredResultType_5435.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-typed-constant.galgas", 128)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("expression-typed-constant.galgas", 129)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 129)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_classConstantMap var_classConstantMap_5776 = var_inferredResultType_5435.getter_classConstantMap (HERE) ;
    GALGAS_bigint var_value_5883 ;
    GALGAS_lstring var_classTypeName_5902 ;
    var_classConstantMap_5776.method_searchKey (object->mProperty_mConstructorName, var_value_5883, var_classTypeName_5902, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 132)) ;
    GALGAS_PLMType var_resultType_5922 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_classTypeName_5902, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 133)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 133)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_5922, var_value_5883  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 134)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, object->mProperty_mAccessList.getter_length (SOURCE_FILE ("expression-typed-constant.galgas", 137)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_objectIR var_newTemporaryReference_6359 ;
    {
    routine_getNewTempReference (extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 140)), ioArgument_ioTemporaries, var_newTemporaryReference_6359, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 140)) ;
    }
    ioArgument_ioAllocaList.addAssign_operation (extensionGetter_llvmName (var_newTemporaryReference_6359, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), extensionGetter_type (var_newTemporaryReference_6359, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)) ;
    {
    extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_newTemporaryReference_6359, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 145)), extensionGetter_llvmName (var_newTemporaryReference_6359, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 146)), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 144)) ;
    }
    outArgument_outResult = var_newTemporaryReference_6359 ;
    {
    routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 151)) ;
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
                                                               const GALGAS_PLMType constinArgument_inSelfType,
                                                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                               const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                               const GALGAS_mode constinArgument_inCurrentMode,
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
  GALGAS_objectIR var_ifExpressionResult_5264 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResult_5264, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 101)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_ifExpressionResult_5264, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 115)) ;
  }
  const enumGalgasBool test_0 = extensionGetter_type (var_ifExpressionResult_5264, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 120)).getter_kind (HERE).getter_isBoolean (SOURCE_FILE ("expression-if.galgas", 120)).operator_not (SOURCE_FILE ("expression-if.galgas", 120)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mIfExpressionEndLocation, GALGAS_string ("'if' expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-if.galgas", 121)) ;
  }
  GALGAS_objectIR var_thenExpressionTempResult_6074 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionTempResult_6074, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 124)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_thenExpressionTempResult_6074, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 138)) ;
  }
  GALGAS_objectIR var_thenExpressionResult_6219 = function_checkAssignmentCompatibility (var_thenExpressionTempResult_6074, constinArgument_inOptionalTargetType, object->mProperty_mThenExpressionEndLocation, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 142)) ;
  GALGAS_objectIR var_elseExpressionTempResult_6932 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionTempResult_6932, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 149)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_elseExpressionTempResult_6932, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 163)) ;
  }
  GALGAS_objectIR var_elseExpressionResult_7077 = function_checkAssignmentCompatibility (var_elseExpressionTempResult_6932, extensionGetter_type (var_thenExpressionResult_6219, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 169)), object->mProperty_mElseExpressionEndLocation, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 167)) ;
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_ifExpressionResult_5264, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 174)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bigint var_value_7443 ;
    GALGAS_PLMType joker_7424_1 ; // Joker input parameter
    var_ifExpressionResult_5264.method_literalInteger (joker_7424_1, var_value_7443, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 175)) ;
    GALGAS_objectIR temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_7443.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 176)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = var_thenExpressionResult_6219 ;
    }else if (kBoolFalse == test_4) {
      temp_3 = var_elseExpressionResult_7077 ;
    }
    outArgument_outResult = temp_3 ;
  }else if (kBoolFalse == test_2) {
    {
    routine_getNewTempValue (extensionGetter_type (var_elseExpressionResult_7077, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 178)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 178)) ;
    }
    {
    extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_ifExpressionResult_5264, var_thenExpressionResult_6219, var_elseExpressionResult_7077, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 179)) ;
    }
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
//           Overriding extension method '@infixOperatorExpressionAST addDependenceEdgeForStaticExpression'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inConstantName,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 47)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 48)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_infixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@infixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 56)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 57)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_infixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@infixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_infixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_PLMType constinArgument_inSelfType,
                                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                          const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_objectIR & outArgument_outResult,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_objectIR var_leftOperand_4710 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperand_4710, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 98)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_4710, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 112)) ;
  }
  GALGAS_objectIR var_rightOperand_5335 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_4710, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 121)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightOperand_5335, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 117)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_5335, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 131)) ;
  }
  GALGAS_infixOperatorMap var_operatorMap_5497 = function_getInfixOperatorMap (object->mProperty_mOp, constinArgument_inContext, constinArgument_inCurrentMode, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 136)) ;
  GALGAS_PLMType var_resultType_5804 ;
  GALGAS_infixOperatorDescription var_binaryOperator_5857 ;
  extensionMethod_checkBinaryOperationWith (var_operatorMap_5497, extensionGetter_type (var_leftOperand_4710, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 139)), extensionGetter_type (var_rightOperand_5335, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 140)), object->mProperty_mOperatorLocation, var_resultType_5804, var_binaryOperator_5857, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 138)) ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_5857.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_leftOperand_4710, object->mProperty_mOperatorLocation, var_rightOperand_5335, var_resultType_5804, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 146)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_infixOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                          extensionMethod_infixOperatorExpressionAST_analyzeExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_analyzeExpression (defineExtensionMethod_infixOperatorExpressionAST_analyzeExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Function 'getInfixOperatorMap'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      result_outOperatorMap = constinArgument_inContext.getter_mEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_nonEqual:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mNonEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictInf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mStrictInfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_infEqual:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mInfEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictSup:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mStrictSupOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_supEqual:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mSupEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mAndOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mOrOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_xorOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_booleanXorOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mBooleanXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOp:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 188)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 189)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 189)), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 189)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_outOperatorMap = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_2) {
        result_outOperatorMap = constinArgument_inContext.getter_mAddOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOp:
    {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 199)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 200)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 200)), fixItArray4  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 200)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_outOperatorMap = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_5) {
        result_outOperatorMap = constinArgument_inContext.getter_mSubOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOp:
    {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 210)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 211)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 211)), fixItArray7  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 211)) ;
      }
      const enumGalgasBool test_8 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_8) {
        result_outOperatorMap = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_8) {
        result_outOperatorMap = constinArgument_inContext.getter_mMulOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOp:
    {
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 221)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 222)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 222)), fixItArray10  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 222)) ;
      }
      const enumGalgasBool test_11 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_11) {
        result_outOperatorMap = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_11) {
        result_outOperatorMap = constinArgument_inContext.getter_mDivOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOp:
    {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 232)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 233)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 233)), fixItArray13  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 233)) ;
      }
      const enumGalgasBool test_14 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_14) {
        result_outOperatorMap = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_14) {
        result_outOperatorMap = constinArgument_inContext.getter_mModOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_leftShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mLeftShiftOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_rightShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mRightShiftOperatorMap (HERE) ;
    }
    break ;
  }
//---
  return result_outOperatorMap ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_getInfixOperatorMap [5] = {
  & kTypeDescriptor_GALGAS_infixOperator,
  & kTypeDescriptor_GALGAS_semanticContext,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_getInfixOperatorMap ("getInfixOperatorMap",
                                                                     functionWithGenericHeader_getInfixOperatorMap,
                                                                     & kTypeDescriptor_GALGAS_infixOperatorMap,
                                                                     4,
                                                                     functionArgs_getInfixOperatorMap) ;

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
                                                                                           const GALGAS_PLMType constinArgument_inSelfType,
                                                                                           const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                           const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                                           const GALGAS_mode constinArgument_inCurrentMode,
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
  GALGAS_instructionListIR var_leftInstructionGenerationList_3009 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 51)) ;
  GALGAS_objectIR var_leftOperand_3490 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_3009, var_leftOperand_3490, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 52)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_3490, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 66)) ;
  }
  GALGAS_instructionListIR var_rightInstructionGenerationList_3677 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 71)) ;
  GALGAS_objectIR var_rightOperand_4159 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_3490, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 76)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_3677, var_rightOperand_4159, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 72)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_4159, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 86)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_leftOperand_3490, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 91)).getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 91)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 92)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_rightOperand_4159, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 95)).getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 95)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray3  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 96)) ;
  }
  GALGAS_bool test_4 = var_leftOperand_3490.getter_isLiteralInteger (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 99)) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = var_rightOperand_4159.getter_isLiteralInteger (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 99)) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_bigint var_leftStaticValue_4756 ;
    GALGAS_PLMType joker_4720 ; // Joker input parameter
    var_leftOperand_3490.method_literalInteger (joker_4720, var_leftStaticValue_4756, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 100)) ;
    GALGAS_bigint var_rightStaticValue_4834 ;
    GALGAS_PLMType joker_4797 ; // Joker input parameter
    var_rightOperand_4159.method_literalInteger (joker_4797, var_rightStaticValue_4834, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 101)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (extensionGetter_type (var_leftOperand_3490, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 102)), var_leftStaticValue_4756.operator_and (var_rightStaticValue_4834 COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 102))  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 102)) ;
  }else if (kBoolFalse == test_5) {
    {
    routine_getNewTempValue (extensionGetter_booleanType (constinArgument_inContext, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 105)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 105)) ;
    }
    {
    extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_leftOperand_3490, var_leftInstructionGenerationList_3009, var_rightOperand_4159, var_rightInstructionGenerationList_3677, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)) ;
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
  cEnumerator_integerSliceFieldListAST enumerator_2546 (object->mProperty_mSliceValues, kENUMERATION_UP) ;
  while (enumerator_2546.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) enumerator_2546.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 58)) ;
    enumerator_2546.gotoNextObject () ;
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
  cEnumerator_integerSliceFieldListAST enumerator_3227 (object->mProperty_mSliceValues, kENUMERATION_UP) ;
  while (enumerator_3227.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_3227.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 71)) ;
    const enumGalgasBool test_0 = enumerator_3227.current_mSliceWidth (HERE).getter_string (HERE).getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 72)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_sliceWidth_3374 = enumerator_3227.current_mSliceWidth (HERE).getter_string (HERE).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 73)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_sliceWidth_3374.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_3227.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 75)), GALGAS_string ("the bit slice width should be > 0"), fixItArray2  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 75)) ;
      }else if (kBoolFalse == test_1) {
        {
        extensionSetter_noteUINTType (ioArgument_ioGraph, var_sliceWidth_3374, enumerator_3227.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 77)) ;
        }
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3227.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string ("b"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        ioArgument_ioGraph.setter_noteNode (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 80)).getter_nowhere (SOURCE_FILE ("expression-integer-slice.galgas", 80)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 80)) ;
        }
      }
    }
    enumerator_3227.gotoNextObject () ;
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
                                                                         const GALGAS_PLMType constinArgument_inSelfType,
                                                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                         const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                                         const GALGAS_mode constinArgument_inCurrentMode,
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
  GALGAS_PLMType var_resultType_4783 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 104)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 104)) ;
  const enumGalgasBool test_0 = var_resultType_4783.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-integer-slice.galgas", 106)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 106)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 107)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 107)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_bool var_unsigned_5085 ;
    GALGAS_uint var_bitCount_5108 ;
    GALGAS_bigint joker_5060_2 ; // Joker input parameter
    GALGAS_bigint joker_5060_1 ; // Joker input parameter
    var_resultType_4783.getter_kind (HERE).method_integer (joker_5060_2, joker_5060_1, var_unsigned_5085, var_bitCount_5108, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 109)) ;
    const enumGalgasBool test_2 = var_unsigned_5085.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 110)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 111)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 111)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_uint var_leftShiftAmount_5326 = var_bitCount_5108 ;
      GALGAS_bigint var_accumulatedFieldStaticValues_5380 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 115)) ;
      GALGAS_operandIRList var_operandList_5418 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-integer-slice.galgas", 116)) ;
      cEnumerator_integerSliceFieldListAST enumerator_5495 (object->mProperty_mSliceValues, kENUMERATION_UP) ;
      while (enumerator_5495.hasCurrentObject ()) {
        GALGAS_uint var_sliceWidth_5523 ;
        GALGAS_lstring var_expressionTypeName_5559 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_5495.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_5495.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 121)), GALGAS_string ("anonymous selector not allowed here"), fixItArray5  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 121)) ;
          var_operandList_5418.drop () ; // Release error dropped variable
          var_sliceWidth_5523.drop () ; // Release error dropped variable
          var_expressionTypeName_5559.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_5495.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string ("b"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            var_sliceWidth_5523 = GALGAS_uint ((uint32_t) 1U) ;
            var_expressionTypeName_5559 = GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 124)), object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 124)) ;
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_7 = enumerator_5495.current_mSliceWidth (HERE).getter_string (HERE).getter_isDecimalUnsignedNumber (SOURCE_FILE ("expression-integer-slice.galgas", 125)).operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 125)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_5495.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 126)), GALGAS_string ("the selector should be an unsigned integer value"), fixItArray8  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 126)) ;
              var_operandList_5418.drop () ; // Release error dropped variable
              var_sliceWidth_5523.drop () ; // Release error dropped variable
              var_expressionTypeName_5559.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_7) {
              var_sliceWidth_5523 = enumerator_5495.current_mSliceWidth (HERE).getter_string (HERE).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 128)) ;
              var_expressionTypeName_5559 = GALGAS_lstring::constructor_new (GALGAS_string ("$uint").add_operation (var_sliceWidth_5523.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 129)), object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 129)) ;
              const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_sliceWidth_5523.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_5495.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 131)), GALGAS_string ("the bit slice width should be > 0"), fixItArray10  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 131)) ;
              }
            }
          }
        }
        const enumGalgasBool test_11 = GALGAS_bool (kIsSupOrEqual, var_leftShiftAmount_5326.objectCompare (var_sliceWidth_5523)).boolEnum () ;
        if (kBoolTrue == test_11) {
          var_leftShiftAmount_5326 = var_leftShiftAmount_5326.substract_operation (var_sliceWidth_5523, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 135)) ;
        }else if (kBoolFalse == test_11) {
          GALGAS_uint var_specifiedBitCount_6496 = var_bitCount_5108.add_operation (var_sliceWidth_5523, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)).substract_operation (var_leftShiftAmount_5326, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 137)) ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_5495.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("expression-integer-slice.galgas", 138)), GALGAS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_6496.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 138)).add_operation (GALGAS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 138)).add_operation (var_bitCount_5108.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 138)), fixItArray12  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 138)) ;
          var_leftShiftAmount_5326 = GALGAS_uint ((uint32_t) 0U) ;
        }
        GALGAS_PLMType var_expressionTargetType_6751 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_expressionTypeName_5559, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 142)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 142)) ;
        GALGAS_objectIR var_expressionResult_7386 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_5495.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_expressionTargetType_6751, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7386, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 143)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_7386, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 157)) ;
        }
        switch (extensionGetter_type (var_expressionResult_7386, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 162)).getter_kind (HERE).enumValue ()) {
        case GALGAS_typeKind::kNotBuilt:
          break ;
        case GALGAS_typeKind::kEnum_arrayType:
          {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_5495.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 164)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_dynamicArrayType:
          {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_5495.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray14  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 166)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_opaque:
          {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (enumerator_5495.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray15  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 168)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_enumeration:
          {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (enumerator_5495.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray16  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 170)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_structure:
          {
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_5495.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray17  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 172)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_syncTool:
          {
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_5495.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray18  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 174)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_boolean:
          {
            const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_expressionResult_7386, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 176)).getter_plmTypeDescriptionName (SOURCE_FILE ("expression-integer-slice.galgas", 176)).objectCompare (var_expressionTargetType_6751.getter_plmTypeDescriptionName (SOURCE_FILE ("expression-integer-slice.galgas", 176)))).boolEnum () ;
            if (kBoolTrue == test_19) {
              TC_Array <C_FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (enumerator_5495.current_mExpressionLocation (HERE), GALGAS_string ("an $").add_operation (var_expressionTargetType_6751.getter_plmTypeDescriptionName (SOURCE_FILE ("expression-integer-slice.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 178)).add_operation (GALGAS_string (" expression is required, found an $"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 178)).add_operation (extensionGetter_type (var_expressionResult_7386, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 179)).getter_plmTypeDescriptionName (SOURCE_FILE ("expression-integer-slice.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 178)).add_operation (GALGAS_string (" expression"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 179)), fixItArray20  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 177)) ;
            }
            const enumGalgasBool test_21 = var_expressionResult_7386.getter_isLiteralInteger (SOURCE_FILE ("expression-integer-slice.galgas", 181)).boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_bigint var_value_8806 ;
              GALGAS_PLMType joker_8779_1 ; // Joker input parameter
              var_expressionResult_7386.method_literalInteger (joker_8779_1, var_value_8806, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 182)) ;
              var_accumulatedFieldStaticValues_5380 = var_accumulatedFieldStaticValues_5380.operator_or (var_value_8806.left_shift_operation (var_leftShiftAmount_5326 COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 183)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 183)) ;
            }else if (kBoolFalse == test_21) {
              GALGAS_objectIR var_extendedResult_9065 ;
              {
              routine_getNewTempValue (var_resultType_4783, ioArgument_ioTemporaries, var_extendedResult_9065, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 186)) ;
              }
              {
              extensionSetter_appendBoolToUInt (ioArgument_ioInstructionGenerationList, var_extendedResult_9065, var_expressionResult_7386, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 187)) ;
              }
              GALGAS_objectIR var_shiftedResult_9271 ;
              {
              routine_getNewTempValue (var_resultType_4783, ioArgument_ioTemporaries, var_shiftedResult_9271, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 189)) ;
              }
              {
              extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_9271, var_extendedResult_9065, var_leftShiftAmount_5326, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 190)) ;
              }
              var_operandList_5418.addAssign_operation (var_shiftedResult_9271  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 192)) ;
            }
          }
          break ;
        case GALGAS_typeKind::kEnum_void:
          {
            TC_Array <C_FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_5495.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 195)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_literalString:
          {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_5495.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 197)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_pointer:
          {
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_5495.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 199)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_function:
          {
            TC_Array <C_FixItDescription> fixItArray25 ;
            inCompiler->emitSemanticError (enumerator_5495.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray25  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 201)) ;
          }
          break ;
        case GALGAS_typeKind::kEnum_staticInteger:
          {
            GALGAS_bigint var_value_10013 ;
            GALGAS_PLMType joker_9986_1 ; // Joker input parameter
            var_expressionResult_7386.method_literalInteger (joker_9986_1, var_value_10013, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 203)) ;
            const enumGalgasBool test_26 = GALGAS_bool (kIsStrictInf, var_value_10013.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 204)))).boolEnum () ;
            if (kBoolTrue == test_26) {
              TC_Array <C_FixItDescription> fixItArray27 ;
              inCompiler->emitSemanticError (enumerator_5495.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray27  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 205)) ;
            }else if (kBoolFalse == test_26) {
              const enumGalgasBool test_28 = GALGAS_bool (kIsStrictInf, var_value_10013.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 206)).left_shift_operation (var_sliceWidth_5523 COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 206)))).boolEnum () ;
              if (kBoolTrue == test_28) {
                var_accumulatedFieldStaticValues_5380 = var_accumulatedFieldStaticValues_5380.operator_or (var_value_10013.left_shift_operation (var_leftShiftAmount_5326 COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 207)) COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 207)) ;
              }else if (kBoolFalse == test_28) {
                TC_Array <C_FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (enumerator_5495.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)).left_shift_operation (var_sliceWidth_5523 COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)), fixItArray29  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 209)) ;
              }
            }
          }
          break ;
        case GALGAS_typeKind::kEnum_integer:
          {
            const cEnumAssociatedValues_typeKind_integer * extractPtr_11323 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_type (var_expressionResult_7386, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 162)).getter_kind (HERE).unsafePointer ()) ;
            const GALGAS_bigint extractedValue_min = extractPtr_11323->mAssociatedValue0 ;
            const GALGAS_bigint extractedValue_max = extractPtr_11323->mAssociatedValue1 ;
            const GALGAS_bool extractedValue_unsigned = extractPtr_11323->mAssociatedValue2 ;
            const GALGAS_uint extractedValue_expressionBitCount = extractPtr_11323->mAssociatedValue3 ;
            const enumGalgasBool test_30 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-integer-slice.galgas", 212)).boolEnum () ;
            if (kBoolTrue == test_30) {
              TC_Array <C_FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (enumerator_5495.current_mExpressionLocation (HERE), GALGAS_string ("an $uint").add_operation (var_sliceWidth_5523.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 213)).add_operation (GALGAS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 213)), fixItArray31  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 213)) ;
            }else if (kBoolFalse == test_30) {
              const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, extractedValue_expressionBitCount.objectCompare (var_sliceWidth_5523)).boolEnum () ;
              if (kBoolTrue == test_32) {
                TC_Array <C_FixItDescription> fixItArray33 ;
                inCompiler->emitSemanticError (enumerator_5495.current_mExpressionLocation (HERE), GALGAS_string ("an $uint").add_operation (var_sliceWidth_5523.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)).add_operation (GALGAS_string (" expression is required here"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)), fixItArray33  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 215)) ;
              }else if (kBoolFalse == test_32) {
                GALGAS_objectIR var_extendedResult_10928 ;
                {
                routine_getNewTempValue (var_resultType_4783, ioArgument_ioTemporaries, var_extendedResult_10928, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 218)) ;
                }
                {
                extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_10928, var_expressionResult_7386, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 219)) ;
                }
                GALGAS_objectIR var_shiftedResult_11130 ;
                {
                routine_getNewTempValue (var_resultType_4783, ioArgument_ioTemporaries, var_shiftedResult_11130, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 221)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_11130, var_extendedResult_10928, var_leftShiftAmount_5326, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 222)) ;
                }
                var_operandList_5418.addAssign_operation (var_shiftedResult_11130  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 224)) ;
              }
            }
          }
          break ;
        }
        enumerator_5495.gotoNextObject () ;
      }
      const enumGalgasBool test_34 = GALGAS_bool (kIsNotEqual, var_leftShiftAmount_5326.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_34) {
        TC_Array <C_FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticError (object->mProperty_mLocation, var_bitCount_5108.getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 229)).add_operation (GALGAS_string (" bits required, "), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 229)).add_operation (var_bitCount_5108.substract_operation (var_leftShiftAmount_5326, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 229)).getter_string (SOURCE_FILE ("expression-integer-slice.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 229)).add_operation (GALGAS_string (" bits defined"), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 229)), fixItArray35  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 229)) ;
      }
      outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_4783, var_accumulatedFieldStaticValues_5380  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 232)) ;
      cEnumerator_operandIRList enumerator_11695 (var_operandList_5418, kENUMERATION_UP) ;
      while (enumerator_11695.hasCurrentObject ()) {
        GALGAS_objectIR var_newResult_11766 ;
        {
        routine_getNewTempValue (var_resultType_4783, ioArgument_ioTemporaries, var_newResult_11766, inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 234)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_11766, extensionGetter_type (var_newResult_11766, inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 237)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 238)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-integer-slice.galgas", 240)), enumerator_11695.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-integer-slice.galgas", 235)) ;
        }
        outArgument_outResult = var_newResult_11766 ;
        enumerator_11695.gotoNextObject () ;
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
                                                                           const GALGAS_PLMType constinArgument_inSelfType,
                                                                           const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                           const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inCurrentMode,
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
  GALGAS_objectIR var_expressionResult_3412 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3412, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 58)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_3412, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 72)) ;
  }
  GALGAS_prefixOperatorMap var_prefixOperatorMap_3612 ;
  GALGAS_llvmBinaryOperation var_binaryOperator_3650 ;
  GALGAS_objectIR var_leftOperand_3674 ;
  switch (object->mProperty_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_prefixOperatorMap_3612 = constinArgument_inContext.getter_mUnsignedComplementOperatorMap (HERE) ;
      var_binaryOperator_3650 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 83)) ;
      switch (extensionGetter_type (var_expressionResult_3412, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 84)).getter_kind (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_arrayType:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray0  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 86)) ;
          var_leftOperand_3674.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_dynamicArrayType:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray1  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 88)) ;
          var_leftOperand_3674.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_opaque:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray2  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 90)) ;
          var_leftOperand_3674.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_boolean:
      case GALGAS_typeKind::kEnum_void:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 92)) ;
          var_leftOperand_3674.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 94)) ;
          var_leftOperand_3674.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray5  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 96)) ;
          var_leftOperand_3674.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray6  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 98)) ;
          var_leftOperand_3674.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_syncTool:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 100)) ;
          var_leftOperand_3674.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray8  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 102)) ;
          var_leftOperand_3674.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_pointer:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 104)) ;
          var_leftOperand_3674.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_staticInteger:
        {
          const enumGalgasBool test_10 = constinArgument_inOptionalTargetType.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 106)).boolEnum () ;
          if (kBoolTrue == test_10) {
            GALGAS_bigint var_minTarget_4870 ;
            GALGAS_bigint var_maxTarget_4889 ;
            GALGAS_bool joker_4891_2 ; // Joker input parameter
            GALGAS_uint joker_4891_1 ; // Joker input parameter
            constinArgument_inOptionalTargetType.getter_kind (HERE).method_integer (var_minTarget_4870, var_maxTarget_4889, joker_4891_2, joker_4891_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 107)) ;
            const enumGalgasBool test_11 = GALGAS_bool (kIsStrictInf, var_minTarget_4870.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 108)))).boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray12  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109)) ;
              var_leftOperand_3674.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_11) {
              var_leftOperand_3674 = GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 111)), var_maxTarget_4889  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 111)) ;
            }
          }else if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray13  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 114)) ;
            var_leftOperand_3674.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_5431 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_type (var_expressionResult_3412, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 84)).getter_kind (HERE).unsafePointer ()) ;
          const GALGAS_uint extractedValue_bitCount = extractPtr_5431->mAssociatedValue3 ;
          var_leftOperand_3674 = GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)).left_shift_operation (extractedValue_bitCount COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 117)) ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_prefixOperatorMap_3612 = constinArgument_inContext.getter_mNotOperatorMap (HERE) ;
      var_binaryOperator_3650 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 121)) ;
      var_leftOperand_3674 = GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 122)), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 122))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 122)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_prefixOperatorMap_3612 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      var_binaryOperator_3650 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 125)) ;
      var_leftOperand_3674 = GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 126)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 126))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 126)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_prefixOperatorMap_3612 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-prefix-operators.galgas", 129)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 131)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 131)), fixItArray15  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 130)) ;
      }
      const enumGalgasBool test_16 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_16) {
        var_binaryOperator_3650 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 134)) ;
        var_leftOperand_3674 = GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135)) ;
      }else if (kBoolFalse == test_16) {
        var_binaryOperator_3650 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 137)) ;
        var_leftOperand_3674 = GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 138)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 138))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 138)) ;
      }
    }
    break ;
  }
  var_prefixOperatorMap_3612.method_searchKey (GALGAS_lstring::constructor_new (extensionGetter_plmTypeDescriptionName (var_expressionResult_3412, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142)), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142)) ;
  GALGAS_PLMType var_resultType_6470 = extensionGetter_type (var_expressionResult_3412, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 143)) ;
  const enumGalgasBool test_17 = var_expressionResult_3412.getter_isLiteralInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 145)).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_bigint var_value_6613 ;
    GALGAS_PLMType joker_6586_1 ; // Joker input parameter
    var_expressionResult_3412.method_literalInteger (joker_6586_1, var_value_6613, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 146)) ;
    GALGAS_bigint var_result_6633 ;
    switch (object->mProperty_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result_6633 = var_value_6613.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 150)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        const enumGalgasBool test_18 = constinArgument_inOptionalTargetType.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 152)).boolEnum () ;
        if (kBoolTrue == test_18) {
          GALGAS_bigint var_minTarget_6838 ;
          GALGAS_bigint var_maxTarget_6857 ;
          GALGAS_bool joker_6859_2 ; // Joker input parameter
          GALGAS_uint joker_6859_1 ; // Joker input parameter
          constinArgument_inOptionalTargetType.getter_kind (HERE).method_integer (var_minTarget_6838, var_maxTarget_6857, joker_6859_2, joker_6859_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 153)) ;
          const enumGalgasBool test_19 = GALGAS_bool (kIsStrictInf, var_minTarget_6838.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 154)))).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray20  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 155)) ;
            var_result_6633.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_19) {
            var_result_6633 = var_value_6613.operator_xor (var_maxTarget_6857 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 157)) ;
          }
        }else if (kBoolFalse == test_18) {
          TC_Array <C_FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray21  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 160)) ;
          var_result_6633.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result_6633 = var_value_6613.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 163)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result_6633 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 165)).operator_xor (var_value_6613 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 165)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_6470, var_result_6633  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 167)) ;
  }else if (kBoolFalse == test_17) {
    {
    routine_getNewTempValue (var_resultType_6470, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 170)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 174)), object->mProperty_mOperatorLocation, var_leftOperand_3674, var_binaryOperator_3650, var_expressionResult_3412, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 172)) ;
    }
  }
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
//          Overriding extension method '@literalIntegerInExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                const GALGAS_lstring constinArgument_inConstantName,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) ;
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
  ioArgument_ioGraph.setter_noteNode (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
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
                                                                             const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                             const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
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
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)), object->mProperty_mLiteralInteger.getter_bigint (HERE)  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)) ;
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
  ioArgument_ioGraph.setter_noteNode (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
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
                                                                            const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                            const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                            const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                            const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                            const GALGAS_mode /* constinArgument_inCurrentMode */,
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
  GALGAS_uint var_staticStringIndex_3645 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioStaticEntityMap, object->mProperty_mLiteralString.getter_string (HERE), var_staticStringIndex_3645, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalString (object->mProperty_mLiteralString.getter_string (HERE).getter_utf_38_Length (SOURCE_FILE ("expression-literal-string.galgas", 64)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)), var_staticStringIndex_3645  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 41)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) ;
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
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 49)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)) ;
  }
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
                                                                             const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                             const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
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
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 70)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 70)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (extensionGetter_booleanType (constinArgument_inContext, inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 70)), temp_0  COMMA_SOURCE_FILE ("expression-true-false.galgas", 70)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mControlRegisterLValue.getter_mRegisterGroupName (HERE) COMMA_SOURCE_FILE ("expression-control-register.galgas", 43)) ;
  }
  extensionMethod_addDependenceEdgeForStaticExpression (object->mProperty_mControlRegisterLValue, constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 44)) ;
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
  extensionMethod_noteExpressionTypesInPrecedenceGraph (object->mProperty_mControlRegisterLValue, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 52)) ;
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
                                                                       const GALGAS_PLMType constinArgument_inSelfType,
                                                                       const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                       const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
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
  GALGAS_PLMType var_registerType_4261 ;
  GALGAS_sliceMap var_sliceMap_4312 ;
  GALGAS_string var_llvmRegisterAddressName_4369 ;
  GALGAS_uint joker_4284 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (object->mProperty_mControlRegisterLValue, GALGAS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_registerType_4261, joker_4284, var_sliceMap_4312, var_llvmRegisterAddressName_4369, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 73)) ;
  {
  routine_getNewTempValue (var_registerType_4261, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-control-register.galgas", 91)) ;
  }
  {
  extensionSetter_appendLoadIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_llvmRegisterAddressName_4369, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 92)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mFieldName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_llvmBinaryOperation var_accessOperator_4733 ;
    GALGAS_bigint var_accessRightOperand_4771 ;
    GALGAS_PLMType var_resultType_4802 ;
    var_sliceMap_4312.method_searchKey (object->mProperty_mFieldName, var_accessOperator_4733, var_accessRightOperand_4771, var_resultType_4802, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 95)) ;
    GALGAS_objectIR var_resultIR_4871 ;
    {
    routine_getNewTempValue (var_resultType_4802, ioArgument_ioTemporaries, var_resultIR_4871, inCompiler  COMMA_SOURCE_FILE ("expression-control-register.galgas", 101)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultIR_4871, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 104)), object->mProperty_mFieldName.getter_location (HERE), outArgument_outResult, var_accessOperator_4733, GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 108)), var_accessRightOperand_4771  COMMA_SOURCE_FILE ("expression-control-register.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 102)) ;
    }
    outArgument_outResult = var_resultIR_4871 ;
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
                                                                             const GALGAS_PLMType constinArgument_inSelfType,
                                                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                             const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inCurrentMode,
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
  GALGAS_controlRegisterMap var_controlRegisterMap_4300 ;
  GALGAS_registerGroupKind joker_4271 ; // Joker input parameter
  constinArgument_inContext.getter_mControlRegisterGroupMap (HERE).method_searchKey (object->mProperty_mRegisterGroupName, joker_4271, var_controlRegisterMap_4300, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 88)) ;
  GALGAS_PLMType var_registerType_4457 ;
  GALGAS_sliceMap var_registerBitSliceMap_4511 ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_4562 ;
  GALGAS_uint var_registerBitCount_4596 ;
  GALGAS_uint var_powerOfTwoForArraySize_4635 ;
  GALGAS_uint var_elementArraySize_4668 ;
  GALGAS_bool joker_4463_2 ; // Joker input parameter
  GALGAS_bool joker_4463_1 ; // Joker input parameter
  GALGAS_bigint joker_4568_2 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_4568_1 ; // Joker input parameter
  var_controlRegisterMap_4300.method_searchKey (object->mProperty_mRegisterName, var_registerType_4457, joker_4463_2, joker_4463_1, var_registerBitSliceMap_4511, var_registerFieldMap_4562, joker_4568_2, joker_4568_1, var_registerBitCount_4596, var_powerOfTwoForArraySize_4635, var_elementArraySize_4668, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 94)) ;
  GALGAS_bigint var_accumulatedFieldStaticValues_4783 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 106)) ;
  GALGAS_operandIRList var_operandList_4817 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-register-value-from-slices.galgas", 107)) ;
  cEnumerator_registerIntegerFieldListAST enumerator_4886 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_4886.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_4886.current_mFieldName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_4886.current_mFieldName (HERE).getter_location (SOURCE_FILE ("expression-register-value-from-slices.galgas", 110)), GALGAS_string ("anonymous selector not allowed here"), fixItArray1  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 110)) ;
      var_operandList_4817.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_0) {
      GALGAS_uint var_fieldBitIndex_5095 ;
      GALGAS_uint var_fieldBitCount_5128 ;
      var_registerFieldMap_4562.method_searchKey (enumerator_4886.current_mFieldName (HERE), var_fieldBitIndex_5095, var_fieldBitCount_5128, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 112)) ;
      GALGAS_lstring var_inferredTypeName_5163 = GALGAS_lstring::constructor_new (GALGAS_string ("$uint").add_operation (var_fieldBitCount_5128.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 117)), enumerator_4886.current_mFieldName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 117)) ;
      GALGAS_PLMType var_inferredType_5307 ;
      GALGAS_uint joker_5309_2 ; // Joker input parameter
      GALGAS_bool joker_5309_1 ; // Joker input parameter
      constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (var_inferredTypeName_5163, var_inferredType_5307, joker_5309_2, joker_5309_1, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 118)) ;
      GALGAS_objectIR var_expressionResult_5858 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_4886.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_inferredType_5307, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5858, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 120)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_5858, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 134)) ;
      }
      const enumGalgasBool test_2 = extensionGetter_type (var_expressionResult_5858, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 139)).getter_kind (HERE).getter_isStaticInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas", 139)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_bigint var_value_6151 ;
        GALGAS_PLMType joker_6124_1 ; // Joker input parameter
        var_expressionResult_5858.method_literalInteger (joker_6124_1, var_value_6151, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 140)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsStrictInf, var_value_6151.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 141)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_4886.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray4  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 142)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsStrictInf, var_value_6151.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 143)).left_shift_operation (var_fieldBitCount_5128 COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 143)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_accumulatedFieldStaticValues_4783 = var_accumulatedFieldStaticValues_4783.operator_or (var_value_6151.left_shift_operation (var_fieldBitIndex_5095 COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)) COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)) ;
          }else if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_4886.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)).left_shift_operation (var_fieldBitCount_5128 COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)).getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)), fixItArray6  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)) ;
          }
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_7 = extensionGetter_type (var_expressionResult_5858, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 148)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas", 148)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_bool var_unsigned_6672 ;
          GALGAS_uint var_expressionBitCount_6711 ;
          GALGAS_bigint joker_6641_2 ; // Joker input parameter
          GALGAS_bigint joker_6641_1 ; // Joker input parameter
          extensionGetter_type (var_expressionResult_5858, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 149)).getter_kind (HERE).method_integer (joker_6641_2, joker_6641_1, var_unsigned_6672, var_expressionBitCount_6711, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 149)) ;
          const enumGalgasBool test_8 = var_unsigned_6672.operator_not (SOURCE_FILE ("expression-register-value-from-slices.galgas", 150)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_4886.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray9  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)) ;
          }else if (kBoolFalse == test_8) {
            const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_expressionBitCount_6711.objectCompare (var_fieldBitCount_5128)).boolEnum () ;
            if (kBoolTrue == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (enumerator_4886.current_mExpressionLocation (HERE), GALGAS_string ("type error, $uint").add_operation (var_fieldBitCount_5128.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 153)).add_operation (GALGAS_string (" type required"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 153)), fixItArray11  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 153)) ;
            }else if (kBoolFalse == test_10) {
              GALGAS_objectIR var_partialResult_7080 = var_expressionResult_5858 ;
              const enumGalgasBool test_12 = GALGAS_bool (kIsStrictInf, var_expressionBitCount_6711.objectCompare (var_registerBitCount_4596)).boolEnum () ;
              if (kBoolTrue == test_12) {
                GALGAS_objectIR var_extendedResult_7234 ;
                {
                routine_getNewTempValue (var_registerType_4457, ioArgument_ioTemporaries, var_extendedResult_7234, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 158)) ;
                }
                {
                extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_7234, var_partialResult_7080, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 159)) ;
                }
                var_partialResult_7080 = var_extendedResult_7234 ;
              }
              GALGAS_objectIR var_shiftedResult_7488 ;
              {
              routine_getNewTempValue (var_registerType_4457, ioArgument_ioTemporaries, var_shiftedResult_7488, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 163)) ;
              }
              {
              extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_7488, var_partialResult_7080, var_fieldBitIndex_5095, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 164)) ;
              }
              var_operandList_4817.addAssign_operation (var_shiftedResult_7488  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 166)) ;
            }
          }
        }
      }
    }
    enumerator_4886.gotoNextObject () ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_registerType_4457, var_accumulatedFieldStaticValues_4783  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 172)) ;
  cEnumerator_operandIRList enumerator_7878 (var_operandList_4817, kENUMERATION_UP) ;
  while (enumerator_7878.hasCurrentObject ()) {
    GALGAS_objectIR var_newResult_7947 ;
    {
    routine_getNewTempValue (var_registerType_4457, ioArgument_ioTemporaries, var_newResult_7947, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 174)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_7947, extensionGetter_type (var_newResult_7947, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 177)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 178)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-register-value-from-slices.galgas", 180)), enumerator_7878.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 175)) ;
    }
    outArgument_outResult = var_newResult_7947 ;
    enumerator_7878.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mReceiverName COMMA_SOURCE_FILE ("expression-primary.galgas", 91)) ;
    }
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_3720 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_3720.hasCurrentObject ()) {
    switch (enumerator_3720.current_mAccess (HERE).enumValue ()) {
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
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_3939 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_3720.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_3939->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 98)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_4453 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_3720.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_4453->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_4027 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_4027.hasCurrentObject ()) {
          switch (enumerator_4027.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4243 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4027.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_4243->mAssociatedValue1 ;
              const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_1) {
                {
                ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("expression-primary.galgas", 105)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4356 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4027.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_4356->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 107)) ;
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
          enumerator_4027.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_3720.gotoNextObject () ;
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
  cEnumerator_primaryInExpressionAccessListAST enumerator_4982 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_4982.hasCurrentObject ()) {
    switch (enumerator_4982.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * extractPtr_5191 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) (enumerator_4982.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_low = extractPtr_5191->mAssociatedValue0 ;
        const GALGAS_lbigint extractedValue_high = extractPtr_5191->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsSupOrEqual, extractedValue_high.getter_bigint (HERE).objectCompare (extractedValue_low.getter_bigint (HERE))).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_high.getter_bigint (HERE).substract_operation (extractedValue_low.getter_bigint (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 125)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 125)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 125)), extractedValue_low.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 125)) ;
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
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_5344 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_4982.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_5344->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 129)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_5842 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_4982.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_5842->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_5432 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_5432.hasCurrentObject ()) {
          switch (enumerator_5432.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_5648 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_5432.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_5648->mAssociatedValue1 ;
              const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_1) {
                {
                ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("expression-primary.galgas", 136)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_5745 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_5432.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_5745->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 138)) ;
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
          enumerator_5432.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_4982.gotoNextObject () ;
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
                                                                      const GALGAS_PLMType constinArgument_inSelfType,
                                                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_PLMType constinArgument_inOptionalTargetType,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 167)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mReceiverName.getter_location (SOURCE_FILE ("expression-primary.galgas", 168)), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 168)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      const GALGAS_primaryInExpressionAST temp_3 = object ;
      callExtensionMethod_analyzePrimaryExpressionNoSelf ((const cPtr_primaryInExpressionAST *) temp_3.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 170)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-primary.galgas", 185)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mReceiverName.getter_location (SOURCE_FILE ("expression-primary.galgas", 186)), GALGAS_string ("'self' is not available in this context"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 186)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      const GALGAS_primaryInExpressionAST temp_6 = object ;
      callExtensionMethod_analyzePrimaryExpressionWithSelf ((const cPtr_primaryInExpressionAST *) temp_6.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 188)) ;
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

void routine_procAnalyzeAccesListInExpression (const GALGAS_PLMType constinArgument_inSelfType,
                                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                               const GALGAS_PLMType constinArgument_inOptionalTargetType,
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
  cEnumerator_primaryInExpressionAccessListAST enumerator_14169 (constinArgument_inAccessList, kENUMERATION_UP) ;
  while (enumerator_14169.hasCurrentObject ()) {
    switch (enumerator_14169.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * extractPtr_14548 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) (enumerator_14169.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_low = extractPtr_14548->mAssociatedValue0 ;
        const GALGAS_lbigint extractedValue_high = extractPtr_14548->mAssociatedValue1 ;
        {
        routine_handleSliceInExpression (constinArgument_inContext, ioArgument_ioResult, extractedValue_low, extractedValue_high, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 358)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_14772 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_14169.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_14772->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (ioArgument_ioResult, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 367)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_15399 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_14169.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_15399->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_15399->mAssociatedValue1 ;
        {
        routine_handleArrayAccessInExpression (ioArgument_ioResult, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 374)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_16151 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_14169.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_methodName = extractPtr_16151->mAssociatedValue0 ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_16151->mAssociatedValue1 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_16151->mAssociatedValue2 ;
        const enumGalgasBool test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 391)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("a method cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 392)) ;
          ioArgument_ioResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_0) {
          {
          routine_handleFunctionCallInExpression (extractedValue_methodName, ioArgument_ioResult, constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 394)) ;
          }
        }
      }
      break ;
    }
    enumerator_14169.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inLow.getter_bigint (HERE).objectCompare (constinArgument_inHigh.getter_bigint (HERE))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inLow.getter_location (SOURCE_FILE ("expression-primary.galgas", 505)), GALGAS_string ("low bound should be lower or equal to high bound"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 505)) ;
    ioArgument_ioResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_bool test_2 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 506)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 506)) ;
    if (kBoolTrue != test_2.boolEnum ()) {
      test_2 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 506)).getter_kind (HERE).getter_isStaticInteger (SOURCE_FILE ("expression-primary.galgas", 506)) ;
    }
    const enumGalgasBool test_3 = test_2.operator_not (SOURCE_FILE ("expression-primary.galgas", 506)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inLow.getter_location (SOURCE_FILE ("expression-primary.galgas", 507)), GALGAS_string ("Invalid, receiver is not an integer"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 507)) ;
      ioArgument_ioResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_3) {
      {
      extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, ioArgument_ioResult, constinArgument_inLow.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 510)), ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 510)) ;
      }
      GALGAS_lstring var_resultIntegerName_19971 = GALGAS_lstring::constructor_new (GALGAS_string ("$uint").add_operation (constinArgument_inHigh.getter_bigint (HERE).substract_operation (constinArgument_inLow.getter_bigint (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 512)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 512)).getter_string (SOURCE_FILE ("expression-primary.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 512)), constinArgument_inLow.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-primary.galgas", 512)) ;
      GALGAS_PLMType var_sliceType_20129 ;
      GALGAS_uint joker_20131_2 ; // Joker input parameter
      GALGAS_bool joker_20131_1 ; // Joker input parameter
      constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (var_resultIntegerName_19971, var_sliceType_20129, joker_20131_2, joker_20131_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)) ;
      {
      extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_20129, ioArgument_ioResult, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 514)) ;
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
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_type_20580 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 526)) ;
  GALGAS_propertyMap var_propertyMap_20629 = var_type_20580.getter_propertyMap (HERE) ;
  GALGAS_propertyAccessKind var_accessKind_20728 ;
  GALGAS_bool joker_20691 ; // Joker input parameter
  var_propertyMap_20629.method_searchKey (constinArgument_inPropertyName, joker_20691, var_accessKind_20728, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 528)) ;
  switch (var_accessKind_20728.enumValue ()) {
  case GALGAS_propertyAccessKind::kNotBuilt:
    break ;
  case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 531)), GALGAS_string ("a method cannot be used in this context"), fixItArray0  COMMA_SOURCE_FILE ("expression-primary.galgas", 531)) ;
      ioArgument_ioResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyAccessKind::kEnum_constantProperty:
    {
      const cEnumAssociatedValues_propertyAccessKind_constantProperty * extractPtr_20924 = (const cEnumAssociatedValues_propertyAccessKind_constantProperty *) (var_accessKind_20728.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_value = extractPtr_20924->mAssociatedValue0 ;
      ioArgument_ioResult = extractedValue_value ;
    }
    break ;
  case GALGAS_propertyAccessKind::kEnum_singleton:
    {
      const cEnumAssociatedValues_propertyAccessKind_singleton * extractPtr_20977 = (const cEnumAssociatedValues_propertyAccessKind_singleton *) (var_accessKind_20728.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_object = extractPtr_20977->mAssociatedValue0 ;
      ioArgument_ioResult = extractedValue_object ;
    }
    break ;
  case GALGAS_propertyAccessKind::kEnum_indexed:
    {
      const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_21368 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_accessKind_20728.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_propertyType = extractPtr_21368->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_propertyIndex = extractPtr_21368->mAssociatedValue1 ;
      GALGAS_string var_property_5F_llvmName_21097 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_21097, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 537)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 539)), extensionGetter_llvmName (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 540)), var_property_5F_llvmName_21097, extractedValue_propertyIndex, constinArgument_inPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 538)) ;
      }
      ioArgument_ioResult = GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_21097  COMMA_SOURCE_FILE ("expression-primary.galgas", 545)) ;
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
                                            const GALGAS_PLMType constinArgument_inSelfType,
                                            const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                            const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                            const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                            const GALGAS_semanticContext constinArgument_inContext,
                                            const GALGAS_mode constinArgument_inMode,
                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                            GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                            GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 568)).getter_kind (HERE).getter_isArrayType (SOURCE_FILE ("expression-primary.galgas", 568)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_PLMType var_elementType_22360 ;
    GALGAS_bigint var_arraySize_22388 ;
    extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 569)).getter_kind (HERE).method_arrayType (var_elementType_22360, var_arraySize_22388, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 569)) ;
    GALGAS_objectIR var_indexIR_22912 ;
    {
    routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, var_arraySize_22388, var_elementType_22360, ioArgument_ioInstructionGenerationList, var_indexIR_22912, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 570)) ;
    }
    GALGAS_objectIR var_result_23227 ;
    {
    extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, var_indexIR_22912, var_result_23227, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 589)) ;
    }
    ioArgument_ioResult = var_result_23227 ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver is not an array and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 597)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'handleFunctionCallInExpression'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_handleFunctionCallInExpression (const GALGAS_lstring constinArgument_inMethodName,
                                             GALGAS_objectIR & ioArgument_ioObjectIR,
                                             const GALGAS_PLMType constinArgument_inSelfType,
                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
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
  GALGAS_PLMType var_receiverType_24147 = extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 618)) ;
  GALGAS_propertyMap var_propertyMap_24198 = var_receiverType_24147.getter_propertyMap (HERE) ;
  GALGAS_lstring var_key_24235 = function_routineMangledNameFromCall (var_receiverType_24147.getter_llvmBaseTypeName (HERE), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 620)) ;
  GALGAS_propertyAccessKind var_propertyAccess_24397 ;
  GALGAS_bool joker_24356 ; // Joker input parameter
  var_propertyMap_24198.method_searchKey (var_key_24235, joker_24356, var_propertyAccess_24397, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 621)) ;
  switch (var_propertyAccess_24397.enumValue ()) {
  case GALGAS_propertyAccessKind::kNotBuilt:
    break ;
  case GALGAS_propertyAccessKind::kEnum_constantProperty:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 624)), GALGAS_string ("a constant cannot be used as method"), fixItArray0  COMMA_SOURCE_FILE ("expression-primary.galgas", 624)) ;
      ioArgument_ioObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
    {
      const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod * extractPtr_26794 = (const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod *) (var_propertyAccess_24397.unsafePointer ()) ;
      const GALGAS_routineDescriptor extractedValue_routineDescriptor = extractPtr_26794->mAssociatedValue0 ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_routineDescriptor.getter_returnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 627)).getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-primary.galgas", 627)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 628)), GALGAS_string ("not a function (returns no value)"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 628)) ;
        ioArgument_ioObjectIR.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_1) {
        GALGAS_calleeKindIR var_calleeKind_24831 = function_checkMode (constinArgument_inMode, extensionGetter_executionMode (extractedValue_routineDescriptor.getter_routineKind (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 633)), extractedValue_routineDescriptor.getter_routineKind (HERE), constinArgument_inMethodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 631)) ;
        {
        extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 638)) ;
        }
        GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_25294 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 640)) ;
        var_effectiveParameterListIR_25294.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 641)), ioArgument_ioObjectIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 641)) ;
        {
        routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_routineDescriptor.getter_signature (HERE), constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_25294, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 643)) ;
        }
        GALGAS_objectIR var_callReturnedResult_26191 ;
        {
        routine_getNewTempValue (extractedValue_routineDescriptor.getter_returnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 660)), ioArgument_ioTemporaries, var_callReturnedResult_26191, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 660)) ;
        }
        GALGAS_lstring var_routineMangledName_26244 = function_routineMangledNameFromCall (extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 662)).getter_llvmBaseTypeName (HERE), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 662)) ;
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), var_callReturnedResult_26191, var_routineMangledName_26244, var_routineMangledName_26244, var_calleeKind_24831, var_effectiveParameterListIR_25294  COMMA_SOURCE_FILE ("expression-primary.galgas", 663))  COMMA_SOURCE_FILE ("expression-primary.galgas", 663)) ;
        {
        ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_26244 COMMA_SOURCE_FILE ("expression-primary.galgas", 672)) ;
        }
        ioArgument_ioObjectIR = var_callReturnedResult_26191 ;
      }
    }
    break ;
  case GALGAS_propertyAccessKind::kEnum_singleton:
    {
      const cEnumAssociatedValues_propertyAccessKind_singleton * extractPtr_26909 = (const cEnumAssociatedValues_propertyAccessKind_singleton *) (var_propertyAccess_24397.unsafePointer ()) ;
      const GALGAS_location extractedValue_errorLocation = extractPtr_26909->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("a property cannot be used as method"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 677)) ;
      ioArgument_ioObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyAccessKind::kEnum_indexed:
    {
      const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_29135 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_24397.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_propertyType = extractPtr_29135->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_propertyIndex = extractPtr_29135->mAssociatedValue1 ;
      const enumGalgasBool test_4 = extractedValue_propertyType.getter_kind (HERE).getter_isFunction (SOURCE_FILE ("expression-primary.galgas", 679)).operator_not (SOURCE_FILE ("expression-primary.galgas", 679)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 680)), GALGAS_string ("an indexed property cannot be used as method"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 680)) ;
        ioArgument_ioObjectIR.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_4) {
        GALGAS_routineDescriptor var_descriptor_27175 ;
        extractedValue_propertyType.getter_kind (HERE).method_function (var_descriptor_27175, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 682)) ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_descriptor_27175.getter_returnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 684)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 685)), GALGAS_string ("not a function (returns no value)"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 685)) ;
          ioArgument_ioObjectIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_6) {
          GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_27698 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 695)) ;
          {
          routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_descriptor_27175.getter_signature (HERE), constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_27698, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 696)) ;
          }
          GALGAS_string var_property_5F_llvmName_28429 ;
          {
          extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_28429, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 713)) ;
          }
          {
          extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 715)), extensionGetter_llvmName (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 716)), var_property_5F_llvmName_28429, extractedValue_propertyIndex, constinArgument_inMethodName.getter_string (SOURCE_FILE ("expression-primary.galgas", 719)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 714)) ;
          }
          GALGAS_objectIR var_callReturnedResult_28809 ;
          {
          routine_getNewTempValue (var_descriptor_27175.getter_returnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 722)), ioArgument_ioTemporaries, var_callReturnedResult_28809, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 722)) ;
          }
          ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_indirectRoutineCallIR::constructor_new (GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_28429  COMMA_SOURCE_FILE ("expression-primary.galgas", 725)), extractedValue_propertyType, var_callReturnedResult_28809, var_effectiveParameterListIR_27698  COMMA_SOURCE_FILE ("expression-primary.galgas", 724))  COMMA_SOURCE_FILE ("expression-primary.galgas", 724)) ;
          ioArgument_ioObjectIR = var_callReturnedResult_28809 ;
        }
      }
    }
    break ;
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
  cEnumerator_effectiveArgumentListAST enumerator_2075 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_2075.hasCurrentObject ()) {
    switch (enumerator_2075.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_2267 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2075.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_2267->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 43)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_2376 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2075.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_2376->mAssociatedValue0 ;
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
    enumerator_2075.gotoNextObject () ;
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
  cEnumerator_effectiveArgumentListAST enumerator_2978 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_2978.hasCurrentObject ()) {
    switch (enumerator_2978.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_3170 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2978.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3170->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 64)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_3263 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2978.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_3263->mAssociatedValue0 ;
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
    enumerator_2978.gotoNextObject () ;
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
                                                                                 const GALGAS_PLMType constinArgument_inSelfType,
                                                                                 const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                 const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                 const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                                 const GALGAS_mode constinArgument_inCurrentMode,
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
  const enumGalgasBool test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-standalone-function-call.galgas", 92)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mStandaloneFunctionName.getter_location (HERE), GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 93)) ;
  }
  GALGAS_lstring var_routineMangledName_4668 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), object->mProperty_mStandaloneFunctionName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 96)) ;
  GALGAS_lstring var_signature_4791 = extensionGetter_routineSignature (object->mProperty_mArguments, object->mProperty_mStandaloneFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 98)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_5026 ;
  GALGAS_routineDescriptor var_routineDescriptor_5068 ;
  GALGAS_location joker_5074 ; // Joker input parameter
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), GALGAS_string::makeEmptyString (), object->mProperty_mStandaloneFunctionName, var_signature_4791, var_LLVMInvocationRoutineName_5026, var_routineDescriptor_5068, joker_5074, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 100)) ;
  GALGAS_routineKind var_routineKind_5143 = var_routineDescriptor_5068.getter_routineKind (HERE) ;
  GALGAS_mode var_calleeMode_5192 = extensionGetter_executionMode (var_routineKind_5143, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 110)) ;
  GALGAS_routineTypedSignature var_formalSignature_5244 = var_routineDescriptor_5068.getter_signature (HERE) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_routineDescriptor_5068.getter_returnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-standalone-function-call.galgas", 113)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mStandaloneFunctionName.getter_location (SOURCE_FILE ("expression-standalone-function-call.galgas", 114)), GALGAS_string ("not a function (returns no value)"), fixItArray3  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 114)) ;
    var_routineDescriptor_5068.drop () ; // Release error dropped variable
    outArgument_outFunctionCallReturnedValue.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    GALGAS_calleeKindIR var_calleeKind_5536 = function_checkMode (constinArgument_inCurrentMode, var_calleeMode_5192, var_routineKind_5143, object->mProperty_mStandaloneFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 117)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_5786 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-standalone-function-call.galgas", 124)) ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_5244, object->mProperty_mArguments, object->mProperty_mStandaloneFunctionName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_5786, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 125)) ;
    }
    {
    routine_getNewTempValue (var_routineDescriptor_5068.getter_returnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 142)), ioArgument_ioTemporaries, outArgument_outFunctionCallReturnedValue, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 142)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), outArgument_outFunctionCallReturnedValue, var_routineMangledName_4668, var_LLVMInvocationRoutineName_5026, var_calleeKind_5536, var_effectiveParameterListIR_5786  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 144))  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 144)) ;
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_4668 COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 153)) ;
    }
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
                                                                             const GALGAS_PLMType constinArgument_inSelfType,
                                                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inCurrentMode,
                                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                             GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList_3063 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 61)) ;
  GALGAS_objectIR var_expressionResult_3532 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 66)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3063, var_expressionResult_3532, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 62)) ;
  const enumGalgasBool test_0 = extensionGetter_type (var_expressionResult_3532, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 77)).getter_kind (HERE).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 77)).operator_not (SOURCE_FILE ("directive-check.galgas", 77)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("directive-check.galgas", 78)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionResult_3532, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 81)).operator_not (SOURCE_FILE ("directive-check.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not static: use assert instruction"), fixItArray3  COMMA_SOURCE_FILE ("directive-check.galgas", 82)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_bigint var_value_3920 ;
    GALGAS_PLMType joker_3897_1 ; // Joker input parameter
    var_expressionResult_3532.method_literalInteger (joker_3897_1, var_value_3920, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 84)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_3920.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 85)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mProperty_mCheckMessage.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mCheckMessage.getter_location (SOURCE_FILE ("directive-check.galgas", 87)), GALGAS_string ("check failure: ").add_operation (object->mProperty_mCheckMessage.getter_string (SOURCE_FILE ("directive-check.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 87)), fixItArray6  COMMA_SOURCE_FILE ("directive-check.galgas", 87)) ;
      }else if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mCheckMessage.getter_location (SOURCE_FILE ("directive-check.galgas", 89)), GALGAS_string ("check failure"), fixItArray7  COMMA_SOURCE_FILE ("directive-check.galgas", 89)) ;
      }
    }
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
                                                                              const GALGAS_PLMType constinArgument_inSelfType,
                                                                              const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                                              const GALGAS_mode constinArgument_inCurrentMode,
                                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                              GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                              GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assert.galgas", 55)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 56)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 56)), fixItArray1  COMMA_SOURCE_FILE ("instruction-assert.galgas", 56)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_3084 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 59)) ;
  GALGAS_objectIR var_expressionValue_3556 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 64)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3084, var_expressionValue_3556, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 60)) ;
  const enumGalgasBool test_2 = extensionGetter_type (var_expressionValue_3556, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 75)).getter_kind (HERE).getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 75)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 75)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assert.galgas", 76)) ;
  }
  const enumGalgasBool test_4 = extensionGetter_isStatic (var_expressionValue_3556, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 79)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is static: use check directive"), fixItArray5  COMMA_SOURCE_FILE ("instruction-assert.galgas", 80)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 83)).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_instructionGenerationList_3084, var_expressionValue_3556  COMMA_SOURCE_FILE ("instruction-assert.galgas", 84))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 84)) ;
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
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)) ;
  GALGAS_uint var_staticStringIndex_5195 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, object->mProperty_mAssertInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).getter_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 111)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-assert.galgas", 111)), var_staticStringIndex_5195, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)) ;
  }
  GALGAS_string var_labelAssertOk_5219 = GALGAS_string ("assert.ok.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)) ;
  GALGAS_string var_labelAssertEr_5286 = GALGAS_string ("assert.not.ok.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (var_labelAssertOk_5219, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (var_labelAssertEr_5286, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelAssertEr_5286.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 118)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_5195.getter_string (SOURCE_FILE ("instruction-assert.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 119)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 119)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 120)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 120)).add_operation (object->mProperty_mAssertInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 120)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 120)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 120)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 121)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 121)).add_operation (function_panicCodeForAssertViolation (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 121)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 121)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 121)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 122)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelAssertOk_5219.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 123)) ;
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
                                                                         GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                         GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 132)) ;
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
                                                                                  const GALGAS_PLMType constinArgument_inSelfType,
                                                                                  const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                  const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                                                  const GALGAS_mode constinArgument_inCurrentMode,
                                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                  GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                  GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                  GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_PLMType var_targetType_3166 ;
  extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inSelfType, object->mProperty_mTargetAST, var_targetType_3166, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 60)) ;
  GALGAS_objectIR var_sourceOperandPossibleReference_3683 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_targetType_3166, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_3683, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 62)) ;
  GALGAS_LValueRepresentation var_lvalueIR_4162 ;
  extensionMethod_analyzeLValue (object->mProperty_mTargetAST, constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_4162, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 77)) ;
  GALGAS_PLMType var_t_4200 = extensionGetter_type (var_sourceOperandPossibleReference_3683, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 92)) ;
  const enumGalgasBool test_0 = extensionGetter_copyable (var_t_4200, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 93)).operator_not (SOURCE_FILE ("instruction-assignment.galgas", 93)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTargetAST.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 94)), GALGAS_string ("source expression is not copyable"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 94)) ;
  }else if (kBoolFalse == test_0) {
    {
    extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, object->mProperty_mTargetAST.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 98)), var_sourceOperandPossibleReference_3683, var_lvalueIR_4162, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 96)) ;
    }
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
                                                                                                 const GALGAS_PLMType constinArgument_inSelfType,
                                                                                                 const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                 const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
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
  GALGAS_PLMType var_registerType_4424 ;
  GALGAS_string var_llvmRegAddressName_4516 ;
  GALGAS_uint joker_4447 ; // Joker input parameter
  GALGAS_sliceMap joker_4463 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (object->mProperty_mControlRegisterLValue, GALGAS_bool (true), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_registerType_4424, joker_4447, joker_4463, var_llvmRegAddressName_4516, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 80)) ;
  GALGAS_objectIR var_sourceIR_5026 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_registerType_4424, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceIR_5026, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 98)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceIR_5026, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 113)) ;
  }
  GALGAS_PLMType var_t_5220 = extensionGetter_type (var_sourceIR_5026, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 118)) ;
  const enumGalgasBool test_0 = extensionGetter_copyable (var_t_5220, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 119)).operator_not (SOURCE_FILE ("instruction-assignment-control-register.galgas", 119)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mControlRegisterLValue.getter_mRegisterGroupName (HERE).getter_location (SOURCE_FILE ("instruction-assignment-control-register.galgas", 120)), GALGAS_string ("source expression is not copyable"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 120)) ;
  }else if (kBoolFalse == test_0) {
    switch (object->mProperty_mAssignmentKind.enumValue ()) {
    case GALGAS_controlRegisterAssignmentOperatorKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterAssignmentOperatorKind::kEnum_assignment:
      {
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_4424, var_llvmRegAddressName_4516, var_sourceIR_5026, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 124)) ;
        }
      }
      break ;
    case GALGAS_controlRegisterAssignmentOperatorKind::kEnum_assignmentWithOperator:
      {
        const cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator * extractPtr_6590 = (const cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator *) (object->mProperty_mAssignmentKind.unsafePointer ()) ;
        const GALGAS_infixOperator extractedValue_infixOperator = extractPtr_6590->mAssociatedValue0 ;
        const GALGAS_location extractedValue_operatorLocation = extractPtr_6590->mAssociatedValue1 ;
        GALGAS_objectIR var_registerValueIR_5693 ;
        {
        routine_getNewTempValue (var_registerType_4424, ioArgument_ioTemporaries, var_registerValueIR_5693, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 127)) ;
        }
        {
        extensionSetter_appendLoadIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerValueIR_5693, var_llvmRegAddressName_4516, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 128)) ;
        }
        GALGAS_infixOperatorMap var_operatorMap_5853 = function_getInfixOperatorMap (extractedValue_infixOperator, constinArgument_inContext, constinArgument_inMode, extractedValue_operatorLocation, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 130)) ;
        GALGAS_PLMType var_resultType_6140 ;
        GALGAS_infixOperatorDescription var_binaryOperator_6197 ;
        extensionMethod_checkBinaryOperationWith (var_operatorMap_5853, extensionGetter_type (var_registerValueIR_5693, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 132)), extensionGetter_type (var_sourceIR_5026, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 133)), extractedValue_operatorLocation, var_resultType_6140, var_binaryOperator_6197, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 131)) ;
        GALGAS_objectIR var_operationResult_6433 ;
        callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_6197.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_registerValueIR_5693, extractedValue_operatorLocation, var_sourceIR_5026, var_resultType_6140, var_operationResult_6433, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 138)) ;
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_4424, var_llvmRegAddressName_4516, var_operationResult_6433, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 148)) ;
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
  cEnumerator_sliceAssignmentListAST enumerator_3323 (object->mProperty_mSliceAssignmentList, kENUMERATION_UP) ;
  while (enumerator_3323.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_3323.current_mSliceWidth (HERE).getter_string (HERE).getter_isDecimalUnsignedNumber (SOURCE_FILE ("instruction-slice-assignment.galgas", 87)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_sliceWidth_3406 = enumerator_3323.current_mSliceWidth (HERE).getter_string (HERE).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 88)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_sliceWidth_3406.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_3323.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 90)), GALGAS_string ("the bit slice width should be > 0"), fixItArray2  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 90)) ;
      }else if (kBoolFalse == test_1) {
        {
        extensionSetter_noteUINTType (ioArgument_ioGraph, var_sliceWidth_3406, enumerator_3323.current_mSliceWidth (HERE).getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 92)) ;
        }
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3323.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string ("b"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        ioArgument_ioGraph.setter_noteNode (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 97)).getter_nowhere (SOURCE_FILE ("instruction-slice-assignment.galgas", 97)) COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 97)) ;
        }
      }
    }
    switch (enumerator_3323.current_mSliceKind (HERE).enumValue ()) {
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
        const cEnumAssociatedValues_sliceTargetAST_lValue * extractPtr_4075 = (const cEnumAssociatedValues_sliceTargetAST_lValue *) (enumerator_3323.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_LValueAST extractedValue_target = extractPtr_4075->mAssociatedValue0 ;
        extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_target, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 104)) ;
      }
      break ;
    }
    enumerator_3323.gotoNextObject () ;
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
                                                                                       const GALGAS_PLMType constinArgument_inSelfType,
                                                                                       const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                                       const GALGAS_mode constinArgument_inCurrentMode,
                                                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                       GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                       GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sliceAssignmentInstructionAST * object = (const cPtr_sliceAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_sliceAssignmentInstructionAST) ;
  GALGAS_PLMType var_resultType_5086 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 126)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 126)) ;
  GALGAS_uint var_bitCount_5221 ;
  const enumGalgasBool test_0 = var_resultType_5086.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("instruction-slice-assignment.galgas", 129)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 129)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 130)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray1  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 130)) ;
    var_bitCount_5221.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_bool var_unsigned_5405 ;
    GALGAS_bigint joker_5380_2 ; // Joker input parameter
    GALGAS_bigint joker_5380_1 ; // Joker input parameter
    var_resultType_5086.getter_kind (HERE).method_integer (joker_5380_2, joker_5380_1, var_unsigned_5405, var_bitCount_5221, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 132)) ;
    const enumGalgasBool test_2 = var_unsigned_5405.operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 133)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 134)), GALGAS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 134)) ;
      var_bitCount_5221.drop () ; // Release error dropped variable
    }
  }
  GALGAS_objectIR var_sourceOperand_6044 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_resultType_5086, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperand_6044, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 138)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperand_6044, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 153)) ;
  }
  const enumGalgasBool test_4 = var_sourceOperand_6044.getter_isLiteralInteger (SOURCE_FILE ("instruction-slice-assignment.galgas", 155)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_bigint var_value_6353 ;
    GALGAS_PLMType joker_6326_1 ; // Joker input parameter
    var_sourceOperand_6044.method_literalInteger (joker_6326_1, var_value_6353, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 156)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsSupOrEqual, var_value_6353.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 157)).left_shift_operation (var_bitCount_5221 COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 157)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mSourceExpressionLocation, GALGAS_string ("static value too large"), fixItArray6  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 158)) ;
      var_sourceOperand_6044.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_5) {
      var_sourceOperand_6044 = GALGAS_objectIR::constructor_literalInteger (var_resultType_5086, var_value_6353  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 160)) ;
    }
  }
  GALGAS_uint var_rightShiftAmount_6609 = var_bitCount_5221 ;
  GALGAS_bigint var_accumulatedFieldStaticValues_6659 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 165)) ;
  cEnumerator_sliceAssignmentListAST enumerator_6720 (object->mProperty_mSliceAssignmentList, kENUMERATION_UP) ;
  while (enumerator_6720.hasCurrentObject ()) {
    GALGAS_objectIR var_sourceOperandForSlicing_6755 = var_sourceOperand_6044 ;
    GALGAS_lstring var_sliceTypeName_6822 ;
    GALGAS_uint var_sliceWidth_6843 ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_6720.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (enumerator_6720.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 172)), GALGAS_string ("anonymous selector not allowed here"), fixItArray8  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 172)) ;
      var_sliceWidth_6843.drop () ; // Release error dropped variable
      var_sliceTypeName_6822.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_7) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_6720.current_mSliceWidth (HERE).getter_string (HERE).objectCompare (GALGAS_string ("b"))).boolEnum () ;
      if (kBoolTrue == test_9) {
        var_sliceWidth_6843 = GALGAS_uint ((uint32_t) 1U) ;
        var_sliceTypeName_6822 = GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 175)), object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 175)) ;
      }else if (kBoolFalse == test_9) {
        const enumGalgasBool test_10 = enumerator_6720.current_mSliceWidth (HERE).getter_string (HERE).getter_isDecimalUnsignedNumber (SOURCE_FILE ("instruction-slice-assignment.galgas", 176)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 176)).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_6720.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 177)), GALGAS_string ("the selector should be an unsigned integer value"), fixItArray11  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 177)) ;
          var_sliceWidth_6843.drop () ; // Release error dropped variable
          var_sliceTypeName_6822.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_10) {
          var_sliceWidth_6843 = enumerator_6720.current_mSliceWidth (HERE).getter_string (HERE).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 179)) ;
          var_sliceTypeName_6822 = GALGAS_lstring::constructor_new (GALGAS_string ("$uint").add_operation (var_sliceWidth_6843.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 180)), object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 180)) ;
          const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, var_sliceWidth_6843.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_6720.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 182)), GALGAS_string ("the bit slice width should be > 0"), fixItArray13  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 182)) ;
          }
        }
      }
    }
    const enumGalgasBool test_14 = GALGAS_bool (kIsSupOrEqual, var_rightShiftAmount_6609.objectCompare (var_sliceWidth_6843)).boolEnum () ;
    if (kBoolTrue == test_14) {
      var_rightShiftAmount_6609 = var_rightShiftAmount_6609.substract_operation (var_sliceWidth_6843, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 186)) ;
    }else if (kBoolFalse == test_14) {
      GALGAS_uint var_specifiedBitCount_7665 = var_bitCount_5221.add_operation (var_sliceWidth_6843, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 188)).substract_operation (var_rightShiftAmount_6609, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 188)) ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (enumerator_6720.current_mSliceWidth (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 189)), GALGAS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_7665.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 189)).add_operation (GALGAS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 189)).add_operation (var_bitCount_5221.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 189)), fixItArray15  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 189)) ;
      var_rightShiftAmount_6609 = GALGAS_uint ((uint32_t) 0U) ;
    }
    GALGAS_PLMType var_sliceType_7865 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_sliceTypeName_6822, inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 192)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 192)) ;
    {
    extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, var_sourceOperandForSlicing_6755, var_rightShiftAmount_6609, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 194)) ;
    }
    {
    extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_7865, var_sourceOperandForSlicing_6755, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 195)) ;
    }
    switch (enumerator_6720.current_mSliceKind (HERE).enumValue ()) {
    case GALGAS_sliceTargetAST::kNotBuilt:
      break ;
    case GALGAS_sliceTargetAST::kEnum_discarded:
      {
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_varDeclaration:
      {
        const cEnumAssociatedValues_sliceTargetAST_varDeclaration * extractPtr_9112 = (const cEnumAssociatedValues_sliceTargetAST_varDeclaration *) (enumerator_6720.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_varName = extractPtr_9112->mAssociatedValue0 ;
        GALGAS_lstring var_plmLocalVariableName_8366 = GALGAS_lstring::constructor_new (extractedValue_varName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 201)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 201)), extractedValue_varName.getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 201))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 201)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 202)) ;
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_varName, var_sliceType_7865, var_plmLocalVariableName_8366, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-slice-assignment.galgas", 203)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 203)) ;
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmLocalVariableName_8366.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 205)), var_sliceType_7865, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 205)) ;
        GALGAS_LValueRepresentation var_targetRef_8757 = GALGAS_LValueRepresentation::constructor_new (var_sliceType_7865, function_llvmNameForLocalVariable (var_plmLocalVariableName_8366.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 209))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 207)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, extractedValue_varName.getter_location (HERE), var_sourceOperandForSlicing_6755, var_targetRef_8757, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 212)) ;
        }
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_letDeclaration:
      {
        const cEnumAssociatedValues_sliceTargetAST_letDeclaration * extractPtr_9942 = (const cEnumAssociatedValues_sliceTargetAST_letDeclaration *) (enumerator_6720.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_letName = extractPtr_9942->mAssociatedValue0 ;
        GALGAS_lstring var_plmLocalVariableName_9211 = GALGAS_lstring::constructor_new (extractedValue_letName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 220)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 220)), extractedValue_letName.getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 220))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 220)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 221)) ;
        {
        extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_letName, GALGAS_bool (false), var_sliceType_7865, var_plmLocalVariableName_9211, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 222)) ;
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmLocalVariableName_9211.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 224)), var_sliceType_7865, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 224)) ;
        GALGAS_LValueRepresentation var_targetRef_9585 = GALGAS_LValueRepresentation::constructor_new (var_sliceType_7865, function_llvmNameForLocalVariable (var_plmLocalVariableName_9211.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 228))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 226)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, extractedValue_letName.getter_location (HERE), var_sourceOperandForSlicing_6755, var_targetRef_9585, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 231)) ;
        }
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_lValue:
      {
        const cEnumAssociatedValues_sliceTargetAST_lValue * extractPtr_10733 = (const cEnumAssociatedValues_sliceTargetAST_lValue *) (enumerator_6720.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_LValueAST extractedValue_target = extractPtr_10733->mAssociatedValue0 ;
        GALGAS_LValueRepresentation var_lvalueIR_10483 ;
        extensionMethod_analyzeLValue (extractedValue_target, constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_10483, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 238)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, extractedValue_target.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("instruction-slice-assignment.galgas", 255)), var_sourceOperandForSlicing_6755, var_lvalueIR_10483, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 253)) ;
        }
      }
      break ;
    }
    enumerator_6720.gotoNextObject () ;
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
  extensionMethod_noteExpressionTypesInPrecedenceGraph (object->mProperty_mControlRegisterLValue, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 51)) ;
  {
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("$uint1").getter_nowhere (SOURCE_FILE ("instruction-bit-banding.galgas", 52)) COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 52)) ;
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mBitExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 53)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 54)) ;
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
                                                                               const GALGAS_PLMType constinArgument_inSelfType,
                                                                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
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
  GALGAS_PLMType var_requiredSourceExpressionType_3804 ;
  GALGAS_uint joker_3810_2 ; // Joker input parameter
  GALGAS_bool joker_3810_1 ; // Joker input parameter
  constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint1"), object->mProperty_mSourceExpressionLocation  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 76)), var_requiredSourceExpressionType_3804, joker_3810_2, joker_3810_1, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 75)) ;
  GALGAS_objectIR var_sourceExpressionOperand_4336 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_requiredSourceExpressionType_3804, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceExpressionOperand_4336, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 81)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceExpressionOperand_4336, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 96)) ;
  }
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, extensionGetter_type (var_sourceExpressionOperand_4336, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 101)).getter_plmTypeDescriptionName (HERE).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 101)))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = var_sourceExpressionOperand_4336.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 101)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_bigint var_value_4802 ;
    GALGAS_PLMType joker_4775_1 ; // Joker input parameter
    var_sourceExpressionOperand_4336.method_literalInteger (joker_4775_1, var_value_4802, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 102)) ;
    GALGAS_bool test_2 = GALGAS_bool (kIsStrictInf, var_value_4802.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 103)))) ;
    if (kBoolTrue != test_2.boolEnum ()) {
      test_2 = GALGAS_bool (kIsStrictSup, var_value_4802.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 103)))) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mSourceExpressionLocation, GALGAS_string ("static value should be 0 or 1"), fixItArray4  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 104)) ;
    }else if (kBoolFalse == test_3) {
      var_sourceExpressionOperand_4336 = GALGAS_objectIR::constructor_literalInteger (var_requiredSourceExpressionType_3804, var_value_4802  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 106)) ;
    }
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_sourceExpressionOperand_4336, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 108)).getter_plmTypeDescriptionName (HERE).objectCompare (var_requiredSourceExpressionType_3804.getter_plmTypeDescriptionName (HERE))).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mSourceExpressionLocation, GALGAS_string ("bit expression type should be $").add_operation (var_requiredSourceExpressionType_3804.getter_plmTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 109)), fixItArray6  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 109)) ;
    }
  }
  GALGAS_uint var_registerBitCount_5842 ;
  GALGAS_string var_llvmRegisterAddressName_5915 ;
  GALGAS_PLMType joker_5798 ; // Joker input parameter
  GALGAS_sliceMap joker_5857 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (object->mProperty_mControlRegisterLValue, GALGAS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, joker_5798, var_registerBitCount_5842, joker_5857, var_llvmRegisterAddressName_5915, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 112)) ;
  GALGAS_PLMType var_requiredBitExpressionType_6157 ;
  GALGAS_uint joker_6163_2 ; // Joker input parameter
  GALGAS_bool joker_6163_1 ; // Joker input parameter
  constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("$uint").add_operation (var_registerBitCount_5842.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 133)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 133)).getter_significantBitCount (SOURCE_FILE ("instruction-bit-banding.galgas", 133)).getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 133)), object->mProperty_mBitExpressionLocation  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 133)), var_requiredBitExpressionType_6157, joker_6163_2, joker_6163_1, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 132)) ;
  GALGAS_objectIR var_bitExpressionOperand_6677 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mBitExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_requiredBitExpressionType_6157, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_bitExpressionOperand_6677, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 138)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_bitExpressionOperand_6677, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 153)) ;
  }
  GALGAS_bool test_7 = GALGAS_bool (kIsEqual, extensionGetter_type (var_bitExpressionOperand_6677, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 158)).getter_plmTypeDescriptionName (HERE).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 158)))) ;
  if (kBoolTrue == test_7.boolEnum ()) {
    test_7 = var_bitExpressionOperand_6677.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 158)) ;
  }
  const enumGalgasBool test_8 = test_7.boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_bigint var_value_7125 ;
    GALGAS_PLMType joker_7098_1 ; // Joker input parameter
    var_bitExpressionOperand_6677.method_literalInteger (joker_7098_1, var_value_7125, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 159)) ;
    GALGAS_bool test_9 = GALGAS_bool (kIsStrictInf, var_value_7125.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 160)))) ;
    if (kBoolTrue != test_9.boolEnum ()) {
      test_9 = GALGAS_bool (kIsSupOrEqual, var_value_7125.objectCompare (var_registerBitCount_5842.getter_bigint (SOURCE_FILE ("instruction-bit-banding.galgas", 160)))) ;
    }
    const enumGalgasBool test_10 = test_9.boolEnum () ;
    if (kBoolTrue == test_10) {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (object->mProperty_mBitExpressionLocation, GALGAS_string ("static value should be >= 0 and <").add_operation (var_registerBitCount_5842.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 161)), fixItArray11  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 161)) ;
    }else if (kBoolFalse == test_10) {
      var_bitExpressionOperand_6677 = GALGAS_objectIR::constructor_literalInteger (var_requiredBitExpressionType_6157, var_value_7125  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 163)) ;
    }
  }else if (kBoolFalse == test_8) {
    const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_bitExpressionOperand_6677, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 165)).getter_plmTypeDescriptionName (HERE).objectCompare (var_requiredBitExpressionType_6157.getter_plmTypeDescriptionName (HERE))).boolEnum () ;
    if (kBoolTrue == test_12) {
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (object->mProperty_mBitExpressionLocation, GALGAS_string ("bit expression type should be $").add_operation (var_requiredBitExpressionType_6157.getter_plmTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 166)), fixItArray13  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 166)) ;
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_bitbandInstructionIR::constructor_new (var_llvmRegisterAddressName_5915, var_bitExpressionOperand_6677, var_sourceExpressionOperand_4336, constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterBaseAddress (HERE).getter_bigint (HERE), constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterRelocationAddress (HERE).getter_bigint (HERE), constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterOffsetMultiplier (HERE).getter_bigint (HERE), constinArgument_inContext.getter_mTargetParameters (HERE).getter_mBitbandRegisterBitMultiplier (HERE).getter_bigint (HERE)  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 169))  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 169)) ;
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
  GALGAS_string var_idx_9694 = ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 211)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Bit band\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byte.offset.").add_operation (var_idx_9694, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GALGAS_string (" = sub i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (object->mProperty_mRegisterAddressLLVMname, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (object->mProperty_mBitbandRegisterBaseAddress.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byte.offset.").add_operation (var_idx_9694, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GALGAS_string (".mul = mul i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (var_idx_9694, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (object->mProperty_mBitbandRegisterOffsetMultiplier.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %bit.offset.").add_operation (var_idx_9694, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)).add_operation (GALGAS_string (".mul = mul i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)).add_operation (extensionGetter_llvmName (object->mProperty_mBitExpressionOperand, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)).add_operation (object->mProperty_mBitbandRegisterBitMultiplier.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %offset.").add_operation (var_idx_9694, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 217)).add_operation (GALGAS_string (" = add i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 217)).add_operation (var_idx_9694, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 217)).add_operation (GALGAS_string (".mul, %bit.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 217)).add_operation (var_idx_9694, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 217)).add_operation (GALGAS_string (".mul\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 217)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %bit.word.addr.").add_operation (var_idx_9694, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 218)).add_operation (GALGAS_string (" = add i32 %offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 218)).add_operation (var_idx_9694, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 218)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 218)).add_operation (object->mProperty_mBitbandRegisterRelocationAddress.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 218)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 218)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr.").add_operation (var_idx_9694, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 219)).add_operation (GALGAS_string (" = inttoptr i32 %bit.word.addr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 219)).add_operation (var_idx_9694, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 219)).add_operation (GALGAS_string (" to i32*\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 219)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value.").add_operation (var_idx_9694, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 220)).add_operation (GALGAS_string (" = zext i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 220)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceExpressionOperand, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 220)).add_operation (GALGAS_string (" to i32\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 220)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i32 %value.").add_operation (var_idx_9694, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 221)).add_operation (GALGAS_string (", i32* %ptr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 221)).add_operation (var_idx_9694, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 221)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 221)) ;
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
//                     Overriding extension method '@bitbandInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_bitbandInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                          GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_bitbandInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_bitbandInstructionIR.mSlotID,
                                                extensionMethod_bitbandInstructionIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_bitbandInstructionIR_enterAccessibleEntities (defineExtensionMethod_bitbandInstructionIR_enterAccessibleEntities, NULL) ;

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_noteNode (object->mProperty_mOptionalTypeName COMMA_SOURCE_FILE ("instruction-var.galgas", 68)) ;
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 70)) ;
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
//               Overriding extension method '@varInstructionAST noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  {
  ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varInstructionAST.mSlotID,
                                                              extensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@varInstructionWithAssignmentAST instructionSemanticAnalysis'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_varInstructionWithAssignmentAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                                         const GALGAS_PLMType constinArgument_inSelfType,
                                                                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                         GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                         GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 96)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 97)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 97)) ;
  }
  GALGAS_PLMType var_targetType_4153 = temp_0 ;
  GALGAS_objectIR var_sourcePossibleReference_4818 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_targetType_4153, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_4818, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 100)) ;
  GALGAS_objectIR var_result_4835 = function_checkAssignmentCompatibility (var_sourcePossibleReference_4818, var_targetType_4153, object->mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 114)) ;
  GALGAS_lstring var_plmLocalVariableName_5066 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 121)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 121)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 121))  COMMA_SOURCE_FILE ("instruction-var.galgas", 121)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 122)) ;
  {
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, object->mProperty_mVarName, extensionGetter_type (var_result_4835, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 123)), var_plmLocalVariableName_5066, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 123)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 123)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmLocalVariableName_5066.getter_string (SOURCE_FILE ("instruction-var.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 125)), extensionGetter_type (var_result_4835, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 125)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 125)) ;
  {
  extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 129)), var_sourcePossibleReference_4818, GALGAS_LValueRepresentation::constructor_new (extensionGetter_type (var_result_4835, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 131)), function_llvmNameForLocalVariable (var_plmLocalVariableName_5066.getter_string (SOURCE_FILE ("instruction-var.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 131))  COMMA_SOURCE_FILE ("instruction-var.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 127)) ;
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
//                    Overriding extension method '@varInstructionAST instructionSemanticAnalysis'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_varInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                           const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                           const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                           const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                           GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_PLMType var_targetType_6433 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 149)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)) ;
  const enumGalgasBool test_0 = extensionGetter_instanciable (var_targetType_6433, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)).operator_not (SOURCE_FILE ("instruction-var.galgas", 151)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 152)), var_targetType_6433.getter_plmTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 152)), fixItArray1  COMMA_SOURCE_FILE ("instruction-var.galgas", 152)) ;
  }
  GALGAS_lstring var_plmName_6685 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 155)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 155)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 155))  COMMA_SOURCE_FILE ("instruction-var.galgas", 155)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 156)) ;
  {
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, object->mProperty_mVarName, var_targetType_6433, var_plmName_6685, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("instruction-var.galgas", 157)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 157)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmName_6685.getter_string (SOURCE_FILE ("instruction-var.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 159)), var_targetType_6433, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 159)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_varInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_varInstructionAST.mSlotID,
                                                    extensionMethod_varInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_varInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_varInstructionAST_instructionSemanticAnalysis, NULL) ;

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_noteNode (object->mProperty_mOptionalTypeName COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
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
                                                                                         const GALGAS_PLMType constinArgument_inSelfType,
                                                                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                         GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                         GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 70)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 71)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 71)) ;
  }
  GALGAS_PLMType var_targetType_3279 = temp_0 ;
  GALGAS_objectIR var_expressionResult_3933 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_targetType_3279, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3933, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 74)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_3933, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 88)) ;
  }
  GALGAS_objectIR var_result_4084 = function_checkAssignmentCompatibility (var_expressionResult_3933, var_targetType_3279, object->mProperty_mConstantName.getter_location (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 93)) ;
  const enumGalgasBool test_2 = extensionGetter_instanciable (extensionGetter_type (var_result_4084, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 101)).operator_not (SOURCE_FILE ("instruction-let.galgas", 101)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 102)), extensionGetter_plmTypeDescriptionName (var_result_4084, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 102)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 102)), fixItArray3  COMMA_SOURCE_FILE ("instruction-let.galgas", 102)) ;
    var_result_4084.drop () ; // Release error dropped variable
  }
  GALGAS_lstring var_plmName_4468 = GALGAS_lstring::constructor_new (object->mProperty_mConstantName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-let.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)), object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 105))  COMMA_SOURCE_FILE ("instruction-let.galgas", 105)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 106)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_plmTypeDescriptionName (var_result_4084, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmName_4468.getter_string (SOURCE_FILE ("instruction-let.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)), extensionGetter_type (var_result_4084, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-let.galgas", 108)) ;
    {
    extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_result_4084, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 110)), function_llvmNameForLocalVariable (var_plmName_4468.getter_string (SOURCE_FILE ("instruction-let.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 111)), var_result_4084, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 109)) ;
    }
  }
  {
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, object->mProperty_mConstantName, GALGAS_bool (false), extensionGetter_type (var_result_4084, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 115)), var_plmName_4468, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 115)) ;
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
//               Overriding extension method '@letInstructionNOP noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_letInstructionNOP_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * /* inObject */,
                                                                                     GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_letInstructionNOP_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_letInstructionNOP.mSlotID,
                                                              extensionMethod_letInstructionNOP_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_letInstructionNOP_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_letInstructionNOP_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@letInstructionNOP instructionSemanticAnalysis'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_letInstructionNOP_instructionSemanticAnalysis (const cPtr_instructionAST * /* inObject */,
                                                                           const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                           const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                           const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                           const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                           const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                           GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                           GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                           GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_appendNOP (ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 48)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_letInstructionNOP_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_letInstructionNOP.mSlotID,
                                                    extensionMethod_letInstructionNOP_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_letInstructionNOP_instructionSemanticAnalysis (defineExtensionMethod_letInstructionNOP_instructionSemanticAnalysis, NULL) ;

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
                                                                             const GALGAS_PLMType constinArgument_inSelfType,
                                                                             const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inCurrentMode,
                                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                             GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionAST * object = (const cPtr_panicInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-panic.galgas", 53)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 54)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 54)), fixItArray1  COMMA_SOURCE_FILE ("instruction-panic.galgas", 54)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR_3103 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 57)) ;
  GALGAS_objectIR var_result_3567 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("instruction-panic.galgas", 60)), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext.getter_mPanicCodeType (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_3103, var_result_3567, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 58)) ;
  GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR_3103.getter_length (SOURCE_FILE ("instruction-panic.galgas", 74)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = var_result_3567.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 75)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 75)) ;
  }
  GALGAS_bool test_3 = test_2 ;
  if (kBoolTrue != test_3.boolEnum ()) {
    test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_plmTypeDescriptionName (var_result_3567, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 76)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 76)))) ;
  }
  const enumGalgasBool test_4 = test_3.boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("throw expression should be a literal integer"), fixItArray5  COMMA_SOURCE_FILE ("instruction-panic.galgas", 77)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_min_3926 ;
    GALGAS_bigint var_max_3939 ;
    GALGAS_bool joker_3941_2 ; // Joker input parameter
    GALGAS_uint joker_3941_1 ; // Joker input parameter
    constinArgument_inContext.getter_mPanicCodeType (HERE).getter_kind (HERE).method_integer (var_min_3926, var_max_3939, joker_3941_2, joker_3941_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 79)) ;
    GALGAS_bigint var_throwValue_3997 ;
    GALGAS_PLMType joker_3973_1 ; // Joker input parameter
    var_result_3567.method_literalInteger (joker_3973_1, var_throwValue_3997, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 80)) ;
    GALGAS_bool test_6 = GALGAS_bool (kIsStrictInf, var_throwValue_3997.objectCompare (var_min_3926)) ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = GALGAS_bool (kIsStrictSup, var_throwValue_3997.objectCompare (var_max_3939)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.getter_mPanicCodeType (HERE).getter_plmTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)), fixItArray8  COMMA_SOURCE_FILE ("instruction-panic.galgas", 82)) ;
    }else if (kBoolFalse == test_7) {
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 84)).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_throwValue_3997  COMMA_SOURCE_FILE ("instruction-panic.galgas", 85))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 85)) ;
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
                                                                    GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionIR * object = (const cPtr_panicInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionIR) ;
  GALGAS_uint var_staticStringIndex_5315 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, object->mProperty_mThrowLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 110)).getter_lastPathComponent (SOURCE_FILE ("instruction-panic.galgas", 110)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-panic.galgas", 110)), var_staticStringIndex_5315, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_5315.getter_string (SOURCE_FILE ("instruction-panic.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).add_operation (object->mProperty_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)).add_operation (object->mProperty_mPanicCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)) ;
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

static void extensionMethod_panicInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                        GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                        GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
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
                                                                          const GALGAS_PLMType constinArgument_inSelfType,
                                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_objectIR var_testResult_5148 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 115)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResult_5148, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 111)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResult_5148, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 125)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_testResult_5148, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 130)).getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 130)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (extensionGetter_plmTypeDescriptionName (var_testResult_5148, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 131)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 131)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 131)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_bool test_2 = object->mProperty_mStaticIfExpression ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_isStatic (var_testResult_5148, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 132)).operator_not (SOURCE_FILE ("instruction-if.galgas", 132)) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is not static"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 133)) ;
    }else if (kBoolFalse == test_3) {
      GALGAS_bool test_5 = extensionGetter_isStatic (var_testResult_5148, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 134)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = object->mProperty_mStaticIfExpression.operator_not (SOURCE_FILE ("instruction-if.galgas", 134)) ;
      }
      const enumGalgasBool test_6 = test_5.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticWarning (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 135)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 135)), fixItArray7  COMMA_SOURCE_FILE ("instruction-if.galgas", 135)) ;
      }
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_5908 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 139)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mThenInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_5908, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_6470 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 154)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mElseInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_6470, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 155)) ;
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 168)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult_5148, object->mProperty_mTestExpressionEndLocation, var_thenInstructionGenerationList_5908, var_elseInstructionGenerationList_6470  COMMA_SOURCE_FILE ("instruction-if.galgas", 170))  COMMA_SOURCE_FILE ("instruction-if.galgas", 170)) ;
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
  GALGAS_string var_labelTrue_8072 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196)).getter_string (SOURCE_FILE ("instruction-if.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 196)) ;
  GALGAS_string var_labelFalse_8135 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)).getter_string (SOURCE_FILE ("instruction-if.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)) ;
  GALGAS_string var_labelEnd_8197 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)).getter_string (SOURCE_FILE ("instruction-if.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)).add_operation (var_labelTrue_8072, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)).add_operation (var_labelFalse_8135, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 199)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_8072.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 201)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8197, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 203)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_8135.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 205)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8197, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_8197.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
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
                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 218)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
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
  cEnumerator_syncInstructionBranchListAST enumerator_5027 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_5027.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5027.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 142)) ;
    enumerator_5027.gotoNextObject () ;
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
                                                                            const GALGAS_PLMType constinArgument_inSelfType,
                                                                            const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                            const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
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
  GALGAS_guardedCommandIRList var_guardedCommandIRList_6129 = GALGAS_guardedCommandIRList::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 163)) ;
  cEnumerator_syncInstructionBranchListAST enumerator_6200 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_6200.hasCurrentObject ()) {
    switch (enumerator_6200.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandAST::kNotBuilt:
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolean * extractPtr_7442 = (const cEnumAssociatedValues_guardedCommandAST_boolean *) (enumerator_6200.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isContinue = extractPtr_7442->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_7442->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_7442->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_6344 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 167)) ;
        GALGAS_objectIR var_sourceOperand_6869 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes.operator_or (GALGAS_routineAttributes::constructor_guard (SOURCE_FILE ("instruction-sync.galgas", 170)) COMMA_SOURCE_FILE ("instruction-sync.galgas", 170)), constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 172)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_6344, var_sourceOperand_6869, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 168)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_plmTypeDescriptionName (var_sourceOperand_6869, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 182)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 182)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("instruction-sync.galgas", 183)) ;
        }else if (kBoolFalse == test_0) {
          const enumGalgasBool test_2 = extensionGetter_isStatic (var_sourceOperand_6869, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 184)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-sync.galgas", 185)) ;
          }
        }
        {
        extensionSetter_appendLoadWhenReference (var_guardInstructionGenerationList_6344, ioArgument_ioTemporaries, var_sourceOperand_6869, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 187)) ;
        }
        var_guardedCommandIRList_6129.addAssign_operation (GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_isContinue, var_guardInstructionGenerationList_6344, var_sourceOperand_6869  COMMA_SOURCE_FILE ("instruction-sync.galgas", 191))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 191)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolAndSync * extractPtr_13170 = (const cEnumAssociatedValues_guardedCommandAST_boolAndSync *) (enumerator_6200.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isContinue = extractPtr_13170->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_13170->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_warnsOnStaticExpression = extractPtr_13170->mAssociatedValue2 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_13170->mAssociatedValue3 ;
        const GALGAS_lbool extractedValue_usesSelf = extractPtr_13170->mAssociatedValue4 ;
        const GALGAS_lstringlist extractedValue_nameList = extractPtr_13170->mAssociatedValue5 ;
        const GALGAS_effectiveArgumentListAST extractedValue_parameterList = extractPtr_13170->mAssociatedValue6 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_7605 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 197)) ;
        GALGAS_objectIR var_boolExpressionResult_8151 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_guard (SOURCE_FILE ("instruction-sync.galgas", 201)), constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 203)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_7605, var_boolExpressionResult_8151, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 199)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_plmTypeDescriptionName (var_boolExpressionResult_8151, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 213)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 213)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_endOfExp, GALGAS_string ("guarded expression should be boolean"), fixItArray5  COMMA_SOURCE_FILE ("instruction-sync.galgas", 214)) ;
        }else if (kBoolFalse == test_4) {
          GALGAS_bool test_6 = extractedValue_warnsOnStaticExpression ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = extensionGetter_isStatic (var_boolExpressionResult_8151, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 215)) ;
          }
          const enumGalgasBool test_7 = test_6.boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExp, GALGAS_string ("guarded expression is static"), fixItArray8  COMMA_SOURCE_FILE ("instruction-sync.galgas", 216)) ;
          }
        }
        {
        extensionSetter_appendLoadWhenReference (var_boolExpInstructionGenerationList_7605, ioArgument_ioTemporaries, var_boolExpressionResult_8151, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 218)) ;
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_8664 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 223)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_8739 ;
        GALGAS_lstring var_guardMangledName_8771 ;
        const enumGalgasBool test_9 = extractedValue_usesSelf.getter_bool (HERE).boolEnum () ;
        if (kBoolTrue == test_9) {
          const enumGalgasBool test_10 = constinArgument_inSelfType.getter_kind (HERE).getter_isVoid (SOURCE_FILE ("instruction-sync.galgas", 227)).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_usesSelf.getter_location (SOURCE_FILE ("instruction-sync.galgas", 228)), GALGAS_string ("'self' is not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-sync.galgas", 228)) ;
            var_guardEffectiveParameterListIR_8739.drop () ; // Release error dropped variable
            var_guardMangledName_8771.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_10) {
            GALGAS_lstringlist var_propertyList_9019 = extractedValue_nameList ;
            GALGAS_lstring var_guardName_9079 ;
            {
            var_propertyList_9019.setter_popLast (var_guardName_9079, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 231)) ;
            }
            GALGAS_objectIR var_currentObject_9114 = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 232))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 232)) ;
            cEnumerator_lstringlist enumerator_9220 (var_propertyList_9019, kENUMERATION_UP) ;
            while (enumerator_9220.hasCurrentObject ()) {
              {
              routine_handlePropertyAccessInExpression (var_currentObject_9114, enumerator_9220.current_mValue (HERE), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 234)) ;
              }
              enumerator_9220.gotoNextObject () ;
            }
            {
            routine_analyzeGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObject_9114, var_guardName_9079, extractedValue_parameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_8664, var_guardEffectiveParameterListIR_8739, var_guardMangledName_8771, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 241)) ;
            }
          }
        }else if (kBoolFalse == test_9) {
          const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, extractedValue_nameList.getter_length (SOURCE_FILE ("instruction-sync.galgas", 259)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_12) {
            {
            routine_analyzeStandaloneGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_nameList.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 263)), extractedValue_parameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_8664, var_guardEffectiveParameterListIR_8739, var_guardMangledName_8771, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 260)) ;
            }
          }else if (kBoolFalse == test_12) {
            GALGAS_lstringlist var_propertyList_10961 = extractedValue_nameList ;
            GALGAS_lstring var_globalReceiverName_11029 ;
            {
            var_propertyList_10961.setter_popFirst (var_globalReceiverName_11029, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 278)) ;
            }
            GALGAS_lstring var_guardName_11077 ;
            {
            var_propertyList_10961.setter_popLast (var_guardName_11077, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 279)) ;
            }
            GALGAS_objectIR var_currentObjectIR_11260 ;
            extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, var_globalReceiverName_11029, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries.getter_mInitializedDriverSet (HERE), var_currentObjectIR_11260, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 280)) ;
            cEnumerator_lstringlist enumerator_11313 (var_propertyList_10961, kENUMERATION_UP) ;
            while (enumerator_11313.hasCurrentObject ()) {
              {
              routine_handlePropertyAccessInExpression (var_currentObjectIR_11260, enumerator_11313.current_mValue (HERE), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 287)) ;
              }
              enumerator_11313.gotoNextObject () ;
            }
            {
            routine_analyzeGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObjectIR_11260, var_guardName_11077, extractedValue_parameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_8664, var_guardEffectiveParameterListIR_8739, var_guardMangledName_8771, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 294)) ;
            }
          }
        }
        const enumGalgasBool test_13 = var_boolExpressionResult_8151.getter_isLiteralInteger (SOURCE_FILE ("instruction-sync.galgas", 312)).boolEnum () ;
        if (kBoolTrue == test_13) {
          GALGAS_bigint var_value_12332 ;
          GALGAS_PLMType joker_12305_1 ; // Joker input parameter
          var_boolExpressionResult_8151.method_literalInteger (joker_12305_1, var_value_12332, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 313)) ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, var_value_12332.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 314)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            var_guardedCommandIRList_6129.addAssign_operation (GALGAS_guardedCommandIR::constructor_sync (extractedValue_isContinue, var_guardMangledName_8771.getter_string (HERE), var_guardInstructionGenerationList_8664, var_guardEffectiveParameterListIR_8739  COMMA_SOURCE_FILE ("instruction-sync.galgas", 315))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 315)) ;
          }else if (kBoolFalse == test_14) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_guardMangledName_8771.getter_location (SOURCE_FILE ("instruction-sync.galgas", 322)), GALGAS_string ("false guard not handled yet"), fixItArray15  COMMA_SOURCE_FILE ("instruction-sync.galgas", 322)) ;
          }
        }else if (kBoolFalse == test_13) {
          var_guardedCommandIRList_6129.addAssign_operation (GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_isContinue, var_boolExpInstructionGenerationList_7605, var_boolExpressionResult_8151, var_guardMangledName_8771.getter_string (HERE), var_guardInstructionGenerationList_8664, var_guardEffectiveParameterListIR_8739  COMMA_SOURCE_FILE ("instruction-sync.galgas", 325))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 325)) ;
        }
      }
      break ;
    }
    enumerator_6200.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 337)) ;
  }
  GALGAS_syncInstructionBranchListIR var_syncInstructionBranchListIR_13331 = GALGAS_syncInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 338)) ;
  cEnumerator_syncInstructionBranchListAST enumerator_13389 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  cEnumerator_guardedCommandIRList enumerator_13433 (var_guardedCommandIRList_6129, kENUMERATION_UP) ;
  while (enumerator_13389.hasCurrentObject () && enumerator_13433.hasCurrentObject ()) {
    GALGAS_instructionListIR var_branchInstructionGenerationList_13491 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 340)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_13389.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, enumerator_13389.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_13491, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 341)) ;
    var_syncInstructionBranchListIR_13331.addAssign_operation (enumerator_13433.current_mGuardedCommand (HERE), var_branchInstructionGenerationList_13491  COMMA_SOURCE_FILE ("instruction-sync.galgas", 354)) ;
    enumerator_13389.gotoNextObject () ;
    enumerator_13433.gotoNextObject () ;
  }
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_on_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 356)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_syncInstructionBranchListIR_13331  COMMA_SOURCE_FILE ("instruction-sync.galgas", 358))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 358)) ;
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

void routine_analyzeGuardCall (const GALGAS_PLMType constinArgument_inSelfType,
                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                               const GALGAS_objectIR constinArgument_inReceiver,
                               const GALGAS_lstring constinArgument_inGuardName,
                               const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
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
  GALGAS_guardMapForContext var_guardMap_15221 = extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 380)).getter_guardMap (SOURCE_FILE ("instruction-sync.galgas", 380)) ;
  GALGAS_lstring var_guardMangledName_15275 = function_routineMangledNameFromCall (extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 381)).getter_llvmBaseTypeName (HERE), constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 381)) ;
  GALGAS_bool var_isPublic_15435 ;
  GALGAS_routineTypedSignature var_formalSignature_15479 ;
  var_guardMap_15221.method_searchKey (var_guardMangledName_15275, var_isPublic_15435, var_formalSignature_15479, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 382)) ;
  const enumGalgasBool test_0 = var_isPublic_15435.operator_not (SOURCE_FILE ("instruction-sync.galgas", 384)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 385)), GALGAS_string ("this guard is not public"), fixItArray1  COMMA_SOURCE_FILE ("instruction-sync.galgas", 385)) ;
    outArgument_outGuardMangledName.drop () ; // Release error dropped variable
    outArgument_outEffectiveParameterListIR.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outGuardMangledName = function_routineMangledNameFromCall (extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 388)).getter_plmTypeDescriptionName (HERE), constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 387)) ;
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outGuardMangledName COMMA_SOURCE_FILE ("instruction-sync.galgas", 393)) ;
    }
    GALGAS_procCallEffectiveParameterListIR temp_2 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 395)) ;
    temp_2.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-sync.galgas", 395)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("instruction-sync.galgas", 395)) ;
    outArgument_outEffectiveParameterListIR = temp_2 ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_15479, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 396)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'analyzeStandaloneGuardCall'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeStandaloneGuardCall (const GALGAS_PLMType constinArgument_inSelfType,
                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                         const GALGAS_lstring constinArgument_inGuardName,
                                         const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
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
  outArgument_outGuardMangledName = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 433)) ;
  GALGAS_bool var_isPublic_17740 ;
  GALGAS_routineTypedSignature var_formalSignature_17788 ;
  constinArgument_inContext.getter_mGuardMapForContext (HERE).method_searchKey (outArgument_outGuardMangledName, var_isPublic_17740, var_formalSignature_17788, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 438)) ;
  const enumGalgasBool test_0 = var_isPublic_17740.operator_not (SOURCE_FILE ("instruction-sync.galgas", 444)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_declarationFile_17872 = constinArgument_inContext.getter_mGuardMapForContext (HERE).getter_locationForKey (outArgument_outGuardMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 445)).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 445)) ;
    GALGAS_string var_invocationFile_17979 = constinArgument_inGuardName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 446)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_invocationFile_17979.objectCompare (var_declarationFile_17872)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 448)), GALGAS_string ("this guard is not public"), fixItArray2  COMMA_SOURCE_FILE ("instruction-sync.galgas", 448)) ;
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outGuardMangledName COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)) ;
  }
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 454)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_17788, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 455)) ;
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
  GALGAS_string var_startLabel_21170 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-sync.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 524)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_21170, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)) ;
  GALGAS_string var_startLabelName_21334 = var_startLabel_21170.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_21334.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)) ;
  GALGAS_string var_exitLabelName_21418 = var_startLabel_21170.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)) ;
  GALGAS_string var_selectLabelName_21463 = var_startLabel_21170.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 530)) ;
  GALGAS_string var_errorLabelName_21509 = var_startLabel_21170.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 531)) ;
  GALGAS_string var_currentStartBranchLabel_21563 = var_startLabelName_21334 ;
  cEnumerator_syncInstructionBranchListIR enumerator_21623 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  GALGAS_uint index_21586 ((uint32_t) 0) ;
  while (enumerator_21623.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_21658 = GALGAS_string ("%").add_operation (var_startLabel_21170, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 534)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 534)).add_operation (index_21586.getter_string (SOURCE_FILE ("instruction-sync.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 534)) ;
    GALGAS_bool var_isWhileGuardedCommand_21728 ;
    switch (enumerator_21623.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_22566 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_21623.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isExitCommand = extractPtr_22566->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_22566->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_result = extractPtr_22566->mAssociatedValue2 ;
        var_isWhileGuardedCommand_21728 = extractedValue_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 539)) ;
        GALGAS_string var_acceptedLabelName_22028 = var_startLabel_21170.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)).add_operation (index_21586.getter_string (SOURCE_FILE ("instruction-sync.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)) ;
        GALGAS_string var_rejectedLabelName_22091 = var_startLabel_21170.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 541)).add_operation (index_21586.getter_string (SOURCE_FILE ("instruction-sync.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 541)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 541)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 542)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 542)).add_operation (var_acceptedLabelName_22028, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 542)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 542)).add_operation (var_rejectedLabelName_22091, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 542)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 542)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_22028.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 543)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_22091, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 545)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 545)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_22091.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 546)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_21658, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 547)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 547)).add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 547)).add_operation (GALGAS_string (", 0 ; assignment\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 547)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_24293 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_21623.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isExitCommand = extractPtr_24293->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_expInstructionList = extractPtr_24293->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_expResult = extractPtr_24293->mAssociatedValue2 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_24293->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_24293->mAssociatedValue4 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_24293->mAssociatedValue5 ;
        var_isWhileGuardedCommand_21728 = extractedValue_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 550)) ;
        GALGAS_string var_testOkLabelName_22869 = var_startLabel_21170.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 551)).add_operation (index_21586.getter_string (SOURCE_FILE ("instruction-sync.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 551)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 551)) ;
        GALGAS_string var_testExitLabelName_22940 = var_startLabel_21170.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 552)).add_operation (index_21586.getter_string (SOURCE_FILE ("instruction-sync.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 552)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 552)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_expResult, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 553)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 553)).add_operation (var_testOkLabelName_22869, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 553)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 553)).add_operation (var_testExitLabelName_22940, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 553)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 553)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_22869.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 554)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 555)) ;
        GALGAS_string var_guardAcceptationLabelName_23295 = var_startLabel_21170.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 556)).add_operation (index_21586.getter_string (SOURCE_FILE ("instruction-sync.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 556)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 556)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_23295, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 557)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 557)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 557)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 557)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 558)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_23521 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_23521.hasCurrentObject ()) {
          switch (enumerator_23521.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23521.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 562)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 562)).add_operation (extensionGetter_llvmName (enumerator_23521.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 562)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 562)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23521.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 564)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 564)).add_operation (extensionGetter_llvmName (enumerator_23521.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 564)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 564)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23521.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 566)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 566)).add_operation (extensionGetter_llvmName (enumerator_23521.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 566)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 566)) ;
            }
            break ;
          }
          if (enumerator_23521.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 569)) ;
          }
          enumerator_23521.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 571)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_22940, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 572)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 572)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 572)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_22940.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 573)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 573)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_21658, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 574)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 574)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 574)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_23295, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 575)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 575)).add_operation (var_testOkLabelName_22869, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 575)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 575)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_21563, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 576)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 576)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 576)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_sync:
      {
        const cEnumAssociatedValues_guardedCommandIR_sync * extractPtr_25154 = (const cEnumAssociatedValues_guardedCommandIR_sync *) (enumerator_21623.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isExitCommand = extractPtr_25154->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_25154->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_25154->mAssociatedValue2 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_25154->mAssociatedValue3 ;
        var_isWhileGuardedCommand_21728 = extractedValue_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 579)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_21658, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 580)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 580)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 580)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 581)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_24705 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_24705.hasCurrentObject ()) {
          switch (enumerator_24705.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24705.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 585)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 585)).add_operation (extensionGetter_llvmName (enumerator_24705.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 585)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24705.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 587)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 587)).add_operation (extensionGetter_llvmName (enumerator_24705.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 587)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 587)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24705.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 589)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 589)).add_operation (extensionGetter_llvmName (enumerator_24705.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 589)) ;
            }
            break ;
          }
          if (enumerator_24705.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 592)) ;
          }
          enumerator_24705.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 594)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_25188 = var_startLabel_21170.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 596)).add_operation (index_21586.getter_string (SOURCE_FILE ("instruction-sync.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 596)) ;
    GALGAS_string var_rejectedLabelName_25248 = var_startLabel_21170.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 597)).add_operation (index_21586.getter_string (SOURCE_FILE ("instruction-sync.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 597)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_21658, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 598)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 598)).add_operation (var_acceptedLabelName_25188, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 598)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 598)).add_operation (var_rejectedLabelName_25248, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 598)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 598)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 598)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_25188.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 599)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 599)) ;
    extensionMethod_instructionListLLVMCode (enumerator_21623.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 600)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = var_isWhileGuardedCommand_21728.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = var_startLabelName_21334 ;
    }else if (kBoolFalse == test_1) {
      temp_0 = var_exitLabelName_21418 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 601)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 601)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 601)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_25248.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 602)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 602)) ;
    var_currentStartBranchLabel_21563 = var_rejectedLabelName_25248 ;
    enumerator_21623.gotoNextObject () ;
    index_21586.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 533)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_21463, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 605)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 605)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 605)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 605)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_21463, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 606)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 606)).add_operation (var_startLabelName_21334, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 606)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 606)).add_operation (var_errorLabelName_21509, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 606)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 606)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_21509.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 607)) ;
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_21418, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 609)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 609)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 609)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_staticStringIndex_26440 ;
    {
    extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, object->mProperty_mSelectInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 612)).getter_lastPathComponent (SOURCE_FILE ("instruction-sync.galgas", 612)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-sync.galgas", 612)), var_staticStringIndex_26440, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 611)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_26440.getter_string (SOURCE_FILE ("instruction-sync.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 615)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 615)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 616)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 616)).add_operation (object->mProperty_mSelectInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 616)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 616)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 616)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 617)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 617)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 617)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 617)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 617)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 617)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 617)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 618)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_21418.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 620)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 620)) ;
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
                                                                       GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                       GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionIR * object = (const cPtr_syncInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionIR) ;
  GALGAS_uint var_branchCount_27123 = object->mProperty_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-sync.galgas", 629)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_27123)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_27123 ;
  }
  cEnumerator_syncInstructionBranchListIR enumerator_27308 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  while (enumerator_27308.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_27308.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 634)) ;
    switch (enumerator_27308.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_27629 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_27308.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_27629->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 637)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_sync:
      {
        const cEnumAssociatedValues_guardedCommandIR_sync * extractPtr_27873 = (const cEnumAssociatedValues_guardedCommandIR_sync *) (enumerator_27308.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_27873->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_27873->mAssociatedValue2 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 639)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 640)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_28263 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_27308.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_28263->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_28263->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_28263->mAssociatedValue4 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 642)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 643)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 644)) ;
      }
      break ;
    }
    enumerator_27308.gotoNextObject () ;
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
                                                                             const GALGAS_PLMType constinArgument_inSelfType,
                                                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inCurrentMode,
                                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                             GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList_3417 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 68)) ;
  GALGAS_objectIR var_testValue_3890 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_m_5F_while_5F_Expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 73)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_3417, var_testValue_3890, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 69)) ;
  {
  extensionSetter_appendLoadWhenReference (var_testInstructionGenerationList_3417, ioArgument_ioTemporaries, var_testValue_3890, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 83)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_testValue_3890, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 88)).getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 88)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_plmTypeDescriptionName (var_testValue_3890, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 89)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 89)), fixItArray1  COMMA_SOURCE_FILE ("instruction-while.galgas", 89)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_isStatic (var_testValue_3890, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 90)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-while.galgas", 91)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_4388 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 94)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 95)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4388, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 96)) ;
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 109)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 112)), var_testInstructionGenerationList_3417, var_testValue_3890, var_instructionGenerationList_4388  COMMA_SOURCE_FILE ("instruction-while.galgas", 111))  COMMA_SOURCE_FILE ("instruction-while.galgas", 111)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_whileInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                                                    extensionMethod_whileInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_whileInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_whileInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@whileInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_whileInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                    GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  GALGAS_string var_labelTest_6052 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 137)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 137)) ;
  GALGAS_string var_labelLoop_6103 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 138)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 138)) ;
  GALGAS_string var_labelEnd_6153 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 139)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 139)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6052, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 140)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6052.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 141)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 142)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_m_5F_while_5F_Expression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)).add_operation (var_labelLoop_6103, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)).add_operation (var_labelEnd_6153, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 143)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6103.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 144)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6052, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 146)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6153.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 147)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_whileInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                            extensionMethod_whileInstructionIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_whileInstructionIR_llvmInstructionCode (defineExtensionMethod_whileInstructionIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@whileInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_whileInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                        GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_whileInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                                extensionMethod_whileInstructionIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_whileInstructionIR_enterAccessibleEntities (defineExtensionMethod_whileInstructionIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@forInstructionAST noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 73)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                              extensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@forInstructionAST instructionSemanticAnalysis'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_forInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                           const GALGAS_PLMType constinArgument_inSelfType,
                                                                           const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                           GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_objectIR var_iteratedObjectPointer_4115 ;
  {
  extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, object->mProperty_mIteratedObject, var_iteratedObjectPointer_4115, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 93)) ;
  }
  GALGAS_PLMType var_iteratedTypeKind_4154 = extensionGetter_type (var_iteratedObjectPointer_4115, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 95)) ;
  GALGAS_PLMType var_iteratedElementType_4247 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_4154.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 98)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_iteratedElementType_4247 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("$uint8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 99)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = var_iteratedTypeKind_4154.getter_kind (HERE).getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 100)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bigint joker_4525_1 ; // Joker input parameter
      var_iteratedTypeKind_4154.getter_kind (HERE).method_arrayType (var_iteratedElementType_4247, joker_4525_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIteratedObject.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 103)), GALGAS_string ("this object is not enumerable"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 103)) ;
      var_iteratedElementType_4247.drop () ; // Release error dropped variable
    }
  }
  GALGAS_lstring var_plmName_4642 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 106))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 107)) ;
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmName_4642.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)), var_iteratedElementType_4247, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 110)) ;
  }
  {
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, object->mProperty_mVarName, GALGAS_bool (false), var_iteratedElementType_4247, var_plmName_4642, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 111)) ;
  }
  GALGAS_instructionListIR var_whileExpression_5F_GenerationList_5090 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 113)) ;
  GALGAS_objectIR var_whileExpressionResult_5578 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mWhileExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 118)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_5090, var_whileExpressionResult_5578, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 114)) ;
  const enumGalgasBool test_3 = extensionGetter_type (var_whileExpressionResult_5578, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 129)).getter_kind (HERE).getter_isBoolean (SOURCE_FILE ("instruction-for-in-do.galgas", 129)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 129)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression should be boolean"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 130)) ;
  }else if (kBoolFalse == test_3) {
    GALGAS_bool test_5 = object->mProperty_mStaticWhileExpression ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = extensionGetter_isStatic (var_whileExpressionResult_5578, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 131)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 131)) ;
    }
    const enumGalgasBool test_6 = test_5.boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is not static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 132)) ;
    }else if (kBoolFalse == test_6) {
      GALGAS_bool test_8 = extensionGetter_isStatic (var_whileExpressionResult_5578, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 133)) ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = object->mProperty_mStaticWhileExpression.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 133)) ;
      }
      const enumGalgasBool test_9 = test_8.boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)) ;
      }
    }
  }
  GALGAS_instructionListIR var_doInstructionList_5F_GenerationList_6164 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 137)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_for_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_6164, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 138)) ;
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_for_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 151)) ;
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_4154.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 153)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnStringIR::constructor_new (var_plmName_4642.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 155)), object->mProperty_mIteratedObject.getter_location (HERE), var_iteratedObjectPointer_4115, var_whileExpression_5F_GenerationList_5090, var_whileExpressionResult_5578, var_doInstructionList_5F_GenerationList_6164  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)) ;
  }else if (kBoolFalse == test_11) {
    const enumGalgasBool test_12 = var_iteratedTypeKind_4154.getter_kind (HERE).getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 162)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_PLMType var_elementType_7138 ;
      GALGAS_bigint var_size_7153 ;
      var_iteratedTypeKind_4154.getter_kind (HERE).method_arrayType (var_elementType_7138, var_size_7153, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 163)) ;
      GALGAS_stringset var_invokedFunctionSet_7188 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-for-in-do.galgas", 164)) ;
      const enumGalgasBool test_13 = ioArgument_ioTemporaries.getter_mStaticArrayMapForTemporaries (HERE).getter_hasKey (object->mProperty_mIteratedObject.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 166)) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)).boolEnum () ;
      if (kBoolTrue == test_13) {
        ioArgument_ioTemporaries.getter_mStaticArrayMapForTemporaries (HERE).method_searchKey (object->mProperty_mIteratedObject, var_invokedFunctionSet_7188, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnArrayIR::constructor_new (var_plmName_4642.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 170)), object->mProperty_mIteratedObject, var_iteratedObjectPointer_4115, var_whileExpression_5F_GenerationList_5090, var_whileExpressionResult_5578, var_doInstructionList_5F_GenerationList_6164, var_elementType_7138, var_size_7153.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)), var_invokedFunctionSet_7188  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_forInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                    extensionMethod_forInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_forInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_forInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@forInstructionOnArrayIR llvmInstructionCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_forInstructionOnArrayIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnArrayIR * object = (const cPtr_forInstructionOnArrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnArrayIR) ;
  GALGAS_string var_elementTypeLLVMName_9868 = extensionGetter_llvmTypeName (object->mProperty_mElementType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 236)) ;
  GALGAS_string var_listTypeLLVMName_9921 = GALGAS_string ("[").add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 237)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 237)).add_operation (var_elementTypeLLVMName_9868, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 237)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 237)) ;
  GALGAS_string var_locationIndex_9996 = object->mProperty_mIteratedObjectName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 238)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 238)) ;
  GALGAS_string var_startLabel_10072 = GALGAS_string ("for.label.start.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 240)) ;
  GALGAS_string var_testLabel_10125 = GALGAS_string ("for.label.test.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 241)) ;
  GALGAS_string var_whileLabel_10178 = GALGAS_string ("for.label.while.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 242)) ;
  GALGAS_string var_nextLabel_10231 = GALGAS_string ("for.label.next.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 243)) ;
  GALGAS_string var_loopVar_10281 = GALGAS_string ("for.loop.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 244)) ;
  GALGAS_string var_loopLabel_10327 = GALGAS_string ("for.label.loop.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 245)) ;
  GALGAS_string var_endLabel_10378 = GALGAS_string ("for.label.end.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 246)) ;
  GALGAS_string var_indexVar_10431 = GALGAS_string ("for.index.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 248)) ;
  GALGAS_string var_ptrVar_10476 = GALGAS_string ("for.ptr.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 249)) ;
  GALGAS_string var_currentValue_10525 = GALGAS_string ("for.currentValue.").add_operation (var_locationIndex_9996, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_10072, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_10072.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 256)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10476, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)).add_operation (GALGAS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)).add_operation (var_listTypeLLVMName_9921, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_9921, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10125, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_10125.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10476, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (var_elementTypeLLVMName_9868, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (GALGAS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (var_ptrVar_10476, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (var_startLabel_10072, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (var_ptrVar_10476, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 268)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 268)).add_operation (var_nextLabel_10231, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 268)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_10431, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GALGAS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (var_startLabel_10072, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (var_indexVar_10431, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (var_nextLabel_10231, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_loopVar_10281, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (GALGAS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (var_indexVar_10431, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_loopVar_10281, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (var_whileLabel_10178, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (var_endLabel_10378, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_10178.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)).add_operation (var_loopLabel_10327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)).add_operation (var_endLabel_10378, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_10327.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 283)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentValue_10525, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (var_elementTypeLLVMName_9868, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_9868.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)).add_operation (var_ptrVar_10476, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeLLVMName_9868, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_currentValue_10525, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_elementTypeLLVMName_9868, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (function_llvmNameForLocalVariable (object->mProperty_mEnumeratedValueName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_10231, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_10231.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10476, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)).add_operation (var_elementTypeLLVMName_9868, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_9868.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)).add_operation (var_ptrVar_10476, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_10431, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (GALGAS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (var_indexVar_10431, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (GALGAS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10125, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_10378.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_forInstructionOnArrayIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionOnArrayIR.mSlotID,
                                            extensionMethod_forInstructionOnArrayIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_forInstructionOnArrayIR_llvmInstructionCode (defineExtensionMethod_forInstructionOnArrayIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@forInstructionOnArrayIR enterAccessibleEntities'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_forInstructionOnArrayIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                             GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnArrayIR * object = (const cPtr_forInstructionOnArrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnArrayIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)) ;
  ioArgument_ioAccessibleEntities.mProperty_mRoutineSet.plusAssign_operation(object->mProperty_mInvokedFunctionSet, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)) ;
  ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mIteratedObjectName.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 314))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_forInstructionOnArrayIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionOnArrayIR.mSlotID,
                                                extensionMethod_forInstructionOnArrayIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_forInstructionOnArrayIR_enterAccessibleEntities (defineExtensionMethod_forInstructionOnArrayIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@forInstructionOnStringIR llvmInstructionCode'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_forInstructionOnStringIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_string & ioArgument_ioLLVMcode,
                                                                          const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                          GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnStringIR * object = (const cPtr_forInstructionOnStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnStringIR) ;
  GALGAS_string var_startLabel_14321 = GALGAS_string ("for.label.start.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 337)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 337)) ;
  GALGAS_string var_testLabel_14386 = GALGAS_string ("for.label.test.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)) ;
  GALGAS_string var_loopLabel_14450 = GALGAS_string ("for.label.loop.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)) ;
  GALGAS_string var_whileLabel_14515 = GALGAS_string ("for.label.while.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 340)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 340)) ;
  GALGAS_string var_nextLabel_14580 = GALGAS_string ("for.label.next.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)) ;
  GALGAS_string var_endLabel_14643 = GALGAS_string ("for.label.end.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)) ;
  GALGAS_string var_ptrVar_14704 = GALGAS_string ("for.ptr.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)) ;
  GALGAS_string var_currentVar_14765 = GALGAS_string ("for.current.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 344)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 344)) ;
  GALGAS_string var_stringLLVMTypeName_14835 = extensionGetter_llvmTypeName (function_literalStringType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_14321, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 347)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 347)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14321.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (GALGAS_string (".start = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (var_stringLLVMTypeName_14835, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (var_stringLLVMTypeName_14835, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_14386, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_14386.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (var_stringLLVMTypeName_14835, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string (" [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (var_ptrVar_14704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14321.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (var_ptrVar_14704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (var_nextLabel_14580, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_14765, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (GALGAS_string (" = load i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (var_stringLLVMTypeName_14835, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (var_ptrVar_14704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_14765, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (var_currentVar_14765, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_14765, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (var_endLabel_14643, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (var_whileLabel_14515, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_14515.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (var_loopLabel_14450, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (var_endLabel_14643, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_14450.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8 %").add_operation (var_currentVar_14765, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * ").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_14580, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_14580.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)).add_operation (GALGAS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (var_ptrVar_14704, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_14386, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_14643.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_forInstructionOnStringIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionOnStringIR.mSlotID,
                                            extensionMethod_forInstructionOnStringIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_forInstructionOnStringIR_llvmInstructionCode (defineExtensionMethod_forInstructionOnStringIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@forInstructionOnStringIR enterAccessibleEntities'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_forInstructionOnStringIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                              GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnStringIR * object = (const cPtr_forInstructionOnStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnStringIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 392)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_forInstructionOnStringIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionOnStringIR.mSlotID,
                                                extensionMethod_forInstructionOnStringIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_forInstructionOnStringIR_enterAccessibleEntities (defineExtensionMethod_forInstructionOnStringIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@forLowerUpperBoundInstructionAST noteInstructionTypesInPrecedenceGraph'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 67)) ;
    }
  }
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 69)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 70)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 71)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST.mSlotID,
                                                              extensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@forLowerUpperBoundInstructionAST instructionSemanticAnalysis'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_forLowerUpperBoundInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                                          const GALGAS_PLMType constinArgument_inSelfType,
                                                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  GALGAS_PLMType var_type_4122 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 91)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 91)) ;
  switch (var_type_4122.getter_kind (HERE).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 94)), GALGAS_string ("an integer type is required here"), fixItArray0  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 94)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 96)), GALGAS_string ("an integer type is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 96)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 98)), GALGAS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 98)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 101)), GALGAS_string ("an integer type is required here"), fixItArray3  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 101)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 103)), GALGAS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 103)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 105)), GALGAS_string ("an integer type is required here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 105)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 107)), GALGAS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 107)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 109)), GALGAS_string ("an integer type is required here"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 109)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_pointer:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 111)), GALGAS_string ("an integer type is required here"), fixItArray8  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 111)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 113)), GALGAS_string ("an integer type is required here"), fixItArray9  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 113)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_8244 = (const cEnumAssociatedValues_typeKind_integer *) (var_type_4122.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_8244->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_8244->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8244->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_8244->mAssociatedValue3 ;
      GALGAS_objectIR var_lowerBoundExpressionResult_5668 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_type_4122, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResult_5668, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 116)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResult_5668, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 130)) ;
      }
      GALGAS_objectIR var_upperBoundExpressionResult_6303 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, var_type_4122, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResult_6303, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 134)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResult_6303, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 148)) ;
      }
      GALGAS_objectIR var_lowerBound_6482 = function_checkAssignmentCompatibility (var_lowerBoundExpressionResult_5668, var_type_4122, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 153)) ;
      GALGAS_objectIR var_upperBound_6706 = function_checkAssignmentCompatibility (var_upperBoundExpressionResult_6303, var_type_4122, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 159)) ;
      {
      extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 166)) ;
      }
      GALGAS_lstring var_enumeratedVarName_7031 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 169)) ;
      ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_enumeratedVarName_7031.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170)), var_type_4122, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170)) ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, object->mProperty_mVarName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_10) {
        {
        extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, object->mProperty_mVarName, GALGAS_bool (false), var_type_4122, var_enumeratedVarName_7031, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)) ;
        }
      }
      GALGAS_instructionListIR var_instructionGenerationList_7439 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 175)) ;
      extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_7439, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 176)) ;
      {
      extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 189)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarName_7031.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 192)), var_type_4122, extractedValue_unsigned, object->mProperty_mEndOf_5F_do_5F_instruction, var_lowerBound_6482, var_upperBound_6706, var_instructionGenerationList_7439  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 191))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 191)) ;
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_forLowerUpperBoundInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST.mSlotID,
                                                    extensionMethod_forLowerUpperBoundInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_forLowerUpperBoundInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@forLowerUpperBoundInstructionIR llvmInstructionCode'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionIR * object = (const cPtr_forLowerUpperBoundInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionIR) ;
  GALGAS_string var_llvmType_9308 = extensionGetter_llvmTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)) ;
  GALGAS_string var_llvmVarName_9349 = function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 228)) ;
  GALGAS_string var_testLabel_9404 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)) ;
  GALGAS_string var_loopLabel_9467 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)) ;
  GALGAS_string var_endLabel_9529 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)) ;
  GALGAS_string var_testResult_9593 = GALGAS_string ("%for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)) ;
  GALGAS_string var_loadedVarName_9668 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)) ;
  GALGAS_string var_currentVarName_9745 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)) ;
  GALGAS_string var_nextVarName_9820 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9308, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (extensionGetter_llvmName (object->mProperty_mLowerExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (var_llvmType_9308, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (var_llvmVarName_9349, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9404, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_9404.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_9668, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (var_llvmType_9308, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (var_llvmType_9308, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (var_llvmVarName_9349, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_9593, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_9308, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (var_loadedVarName_9668, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (extensionGetter_llvmName (object->mProperty_mUpperExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_9593, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (var_loopLabel_9467, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (var_endLabel_9529, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_9467.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_9745, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)).add_operation (var_llvmType_9308, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)).add_operation (var_llvmType_9308, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)).add_operation (var_llvmVarName_9349, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_9820, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (var_llvmType_9308, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (var_currentVarName_9745, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9308, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_nextVarName_9820, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmType_9308, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmVarName_9349, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9404, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_9529.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR.mSlotID,
                                            extensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (defineExtensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@forLowerUpperBoundInstructionIR enterAccessibleEntities'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionIR * object = (const cPtr_forLowerUpperBoundInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 263)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR.mSlotID,
                                                extensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (defineExtensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@procedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  cEnumerator_accessInAssignmentListAST enumerator_3212 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_3212.hasCurrentObject ()) {
    switch (enumerator_3212.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_3386 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_3212.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_3386->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 75)) ;
      }
      break ;
    }
    enumerator_3212.gotoNextObject () ;
  }
  cEnumerator_effectiveArgumentListAST enumerator_3423 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_3423.hasCurrentObject ()) {
    switch (enumerator_3423.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_3615 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3423.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3615->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 83)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_3708 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3423.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_3708->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 85)) ;
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
    enumerator_3423.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_procedureCallInstructionAST.mSlotID,
                                                              extensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//     Overriding extension method '@standAloneProcedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  cEnumerator_effectiveArgumentListAST enumerator_4073 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_4073.hasCurrentObject ()) {
    switch (enumerator_4073.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4265 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4073.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_4265->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 102)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4358 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4073.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_4358->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 104)) ;
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
    enumerator_4073.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST.mSlotID,
                                                              extensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@standAloneProcedureCallInstructionAST instructionSemanticAnalysis'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_standAloneProcedureCallInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                                               const GALGAS_PLMType constinArgument_inSelfType,
                                                                                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                                                               const GALGAS_mode constinArgument_inCurrentMode,
                                                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                               GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  GALGAS_lstring var_calledRoutineSignature_6274 = extensionGetter_routineSignature (object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 151)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_6517 ;
  GALGAS_routineDescriptor var_routineDescriptor_6563 ;
  GALGAS_location var_keyLocation_6601 ;
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), GALGAS_string::makeEmptyString (), object->mProperty_mSandAloneRoutineName, var_calledRoutineSignature_6274, var_LLVMInvocationRoutineName_6517, var_routineDescriptor_6563, var_keyLocation_6601, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 153)) ;
  GALGAS_lstring var_routineMangledName_6669 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), object->mProperty_mSandAloneRoutineName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 162)) ;
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_6669 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 168)) ;
  }
  GALGAS_calleeKindIR var_routineKindIR_6930 = function_checkMode (constinArgument_inCurrentMode, extensionGetter_executionMode (var_routineDescriptor_6563.getter_routineKind (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 172)), var_routineDescriptor_6563.getter_routineKind (HERE), object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 170)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_7217 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 177)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_routineDescriptor_6563.getter_signature (HERE), object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_7217, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 178)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_objectIR::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 198)), var_routineMangledName_6669, var_LLVMInvocationRoutineName_6517, var_routineKindIR_6930, var_effectiveParameterListIR_7217  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 196))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 196)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_standAloneProcedureCallInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST.mSlotID,
                                                    extensionMethod_standAloneProcedureCallInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_standAloneProcedureCallInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_standAloneProcedureCallInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@procedureCallInstructionAST instructionSemanticAnalysis'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_procedureCallInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                                     const GALGAS_PLMType constinArgument_inSelfType,
                                                                                     const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                     GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  GALGAS_PLMType var_currentType_8903 ;
  GALGAS_string var_currentLLVMAddressVar_8935 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 225)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 226)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 226)) ;
      var_currentType_8903.drop () ; // Release error dropped variable
      var_currentLLVMAddressVar_8935.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      var_currentType_8903 = constinArgument_inSelfType ;
      var_currentLLVMAddressVar_8935 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 229)) ;
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_entity_9305 ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, object->mProperty_mIdentifier, var_entity_9305, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 232)) ;
    switch (var_entity_9305.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
        const cEnumAssociatedValues_valuedObject_task * extractPtr_9452 = (const cEnumAssociatedValues_valuedObject_task *) (var_entity_9305.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_9452->mAssociatedValue0 ;
        var_currentType_8903 = extractedValue_type ;
        var_currentLLVMAddressVar_8935 = function_llvmNameForGlobalVariable (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 236)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
        const cEnumAssociatedValues_valuedObject_driver * extractPtr_9742 = (const cEnumAssociatedValues_valuedObject_driver *) (var_entity_9305.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_9742->mAssociatedValue0 ;
        const GALGAS_bool extractedValue_instancied = extractPtr_9742->mAssociatedValue1 ;
        const enumGalgasBool test_3 = extractedValue_instancied.boolEnum () ;
        if (kBoolTrue == test_3) {
          var_currentType_8903 = extractedValue_type ;
          var_currentLLVMAddressVar_8935 = function_llvmNameForGlobalVariable (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 240)) ;
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 242)), GALGAS_string ("the driver should be instancied"), fixItArray4  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 242)) ;
          var_currentType_8903.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_8935.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_registerGroup:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 245)), GALGAS_string ("a control register constant cannot be used in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 245)) ;
        var_currentType_8903.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_8935.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 249)), GALGAS_string ("a global constant cannot be used in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 249)) ;
        var_currentType_8903.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_8935.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_10223 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_9305.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_10223->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_10223->mAssociatedValue1 ;
        var_currentType_8903 = extractedValue_type ;
        var_currentLLVMAddressVar_8935 = function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 254)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_10372 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_9305.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_10372->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_10372->mAssociatedValue1 ;
        var_currentType_8903 = extractedValue_type ;
        var_currentLLVMAddressVar_8935 = function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 257)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
        const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_10531 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_entity_9305.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_10531->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_10531->mAssociatedValue1 ;
        var_currentType_8903 = extractedValue_type ;
        var_currentLLVMAddressVar_8935 = function_llvmNameForGlobalSyncInstance (extractedValue_plmName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 260)) ;
      }
      break ;
    }
  }
  GALGAS_propertyMap var_currentObjectPropertyMap_10622 = var_currentType_8903.getter_propertyMap (HERE) ;
  GALGAS_accessInAssignmentListAST var_accessList_10737 = object->mProperty_mAccessList ;
  GALGAS_accessInAssignmentAST var_lastAccess_10791 ;
  {
  var_accessList_10737.setter_popLast (var_lastAccess_10791, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 267)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_10846 (var_accessList_10737, kENUMERATION_UP) ;
  while (enumerator_10846.hasCurrentObject ()) {
    switch (enumerator_10846.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_12114 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_10846.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_12114->mAssociatedValue0 ;
        GALGAS_bool var_isPublic_11010 ;
        GALGAS_propertyAccessKind var_propertyAccess_11058 ;
        var_currentObjectPropertyMap_10622.method_searchKey (extractedValue_propertyName, var_isPublic_11010, var_propertyAccess_11058, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 272)) ;
        switch (var_propertyAccess_11058.enumValue ()) {
        case GALGAS_propertyAccessKind::kNotBuilt:
          break ;
        case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
          {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 279)), GALGAS_string ("a method cannot be used in this context"), fixItArray7  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 279)) ;
            var_currentType_8903.drop () ; // Release error dropped variable
            var_currentLLVMAddressVar_8935.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 281)), GALGAS_string ("a context property cannot be used in this context"), fixItArray8  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 281)) ;
            var_currentType_8903.drop () ; // Release error dropped variable
            var_currentLLVMAddressVar_8935.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_singleton:
          {
            const cEnumAssociatedValues_propertyAccessKind_singleton * extractPtr_11601 = (const cEnumAssociatedValues_propertyAccessKind_singleton *) (var_propertyAccess_11058.unsafePointer ()) ;
            const GALGAS_objectIR extractedValue_object = extractPtr_11601->mAssociatedValue0 ;
            var_currentType_8903 = extensionGetter_type (extractedValue_object, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 285)) ;
            var_currentLLVMAddressVar_8935 = extensionGetter_llvmName (extractedValue_object, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 286)) ;
            var_currentObjectPropertyMap_10622 = extensionGetter_type (extractedValue_object, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 287)).getter_propertyMap (HERE) ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_indexed:
          {
            const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_12097 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_11058.unsafePointer ()) ;
            const GALGAS_PLMType extractedValue_propertyType = extractPtr_12097->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_12097->mAssociatedValue1 ;
            GALGAS_string var_llvmPropertyName_11735 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmPropertyName_11735, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 289)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_8903, var_currentLLVMAddressVar_8935, var_llvmPropertyName_11735, extractedValue_propertyIndex, extractedValue_propertyName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 290)) ;
            }
            var_currentType_8903 = extractedValue_propertyType ;
            var_currentLLVMAddressVar_8935 = var_llvmPropertyName_11735 ;
            var_currentObjectPropertyMap_10622 = var_currentType_8903.getter_propertyMap (HERE) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_12278 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_10846.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_12278->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_12278->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("not handled yet"), fixItArray9  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 302)) ;
        var_currentType_8903.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_8935.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_10846.gotoNextObject () ;
  }
  switch (var_lastAccess_10791.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_12435 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_10791.unsafePointer ()) ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_12435->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("a property is required here"), fixItArray10  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 308)) ;
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_17730 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_10791.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_methodName = extractPtr_17730->mAssociatedValue0 ;
      GALGAS_propertyMap var_propertyMap_12495 = var_currentObjectPropertyMap_10622 ;
      GALGAS_lstring var_key_12541 = function_routineMangledNameFromCall (var_currentType_8903.getter_llvmBaseTypeName (HERE), extractedValue_methodName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 311)) ;
      GALGAS_propertyAccessKind var_propertyAccess_12701 ;
      GALGAS_bool joker_12660 ; // Joker input parameter
      var_propertyMap_12495.method_searchKey (var_key_12541, joker_12660, var_propertyAccess_12701, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 312)) ;
      switch (var_propertyAccess_12701.enumValue ()) {
      case GALGAS_propertyAccessKind::kNotBuilt:
        break ;
      case GALGAS_propertyAccessKind::kEnum_constantProperty:
        {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 315)), GALGAS_string ("a constant cannot be used as method"), fixItArray11  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 315)) ;
        }
        break ;
      case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
        {
          const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod * extractPtr_15474 = (const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod *) (var_propertyAccess_12701.unsafePointer ()) ;
          const GALGAS_routineDescriptor extractedValue_routineDescriptor = extractPtr_15474->mAssociatedValue0 ;
          GALGAS_procCallEffectiveParameterListIR temp_12 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 320)) ;
          temp_12.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-procedure-call.galgas", 319)), GALGAS_objectIR::constructor_reference (var_currentType_8903, var_currentLLVMAddressVar_8935  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 320))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 320)) ;
          GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_12996 = temp_12 ;
          GALGAS_routineKind var_routineKind_13183 = extractedValue_routineDescriptor.getter_routineKind (HERE) ;
          GALGAS_mode var_calleeMode_13236 = extensionGetter_executionMode (var_routineKind_13183, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 325)) ;
          GALGAS_routineTypedSignature var_formalSignature_13292 = extractedValue_routineDescriptor.getter_signature (HERE) ;
          GALGAS_bool test_13 = GALGAS_bool (kIsEqual, object->mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = extractedValue_routineDescriptor.getter_canMutateProperties (HERE) ;
          }
          GALGAS_bool test_14 = test_13 ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = constinArgument_inRoutineAttributes.getter_mutating (SOURCE_FILE ("instruction-procedure-call.galgas", 329)).operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 329)) ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 330)), GALGAS_string ("cannot mutate properties, current method is not declared with @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 331)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 331)), fixItArray16  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 330)) ;
          }
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, extractedValue_routineDescriptor.getter_returnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 334)))).boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 335)), GALGAS_string ("not a procedure (returns a value)"), fixItArray18  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 335)) ;
          }else if (kBoolFalse == test_17) {
            GALGAS_calleeKindIR var_calleeKind_13994 = function_checkMode (constinArgument_inCurrentMode, var_calleeMode_13236, var_routineKind_13183, extractedValue_methodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 338)) ;
            {
            routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_13292, object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_12996, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 345)) ;
            }
            GALGAS_lstring var_routineMangledName_14923 = function_routineMangledNameFromCall (var_currentType_8903.getter_llvmBaseTypeName (HERE), extractedValue_methodName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 362)) ;
            ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 365)), GALGAS_objectIR::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 366)), var_routineMangledName_14923, var_routineMangledName_14923, var_calleeKind_13994, var_effectiveParameterListIR_12996  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 364))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 364)) ;
            {
            ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_14923 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 373)) ;
            }
          }
        }
        break ;
      case GALGAS_propertyAccessKind::kEnum_singleton:
        {
          const cEnumAssociatedValues_propertyAccessKind_singleton * extractPtr_15580 = (const cEnumAssociatedValues_propertyAccessKind_singleton *) (var_propertyAccess_12701.unsafePointer ()) ;
          const GALGAS_location extractedValue_errorLocation = extractPtr_15580->mAssociatedValue1 ;
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("a property cannot be used as method"), fixItArray19  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 376)) ;
        }
        break ;
      case GALGAS_propertyAccessKind::kEnum_indexed:
        {
          const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_17722 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_12701.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_propertyType = extractPtr_17722->mAssociatedValue0 ;
          const GALGAS_uint extractedValue_propertyIndex = extractPtr_17722->mAssociatedValue1 ;
          const enumGalgasBool test_20 = extractedValue_propertyType.getter_kind (HERE).getter_isFunction (SOURCE_FILE ("instruction-procedure-call.galgas", 378)).operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 378)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 379)), GALGAS_string ("an indexed property cannot be used as method"), fixItArray21  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 379)) ;
          }else if (kBoolFalse == test_20) {
            GALGAS_routineDescriptor var_descriptor_15841 ;
            extractedValue_propertyType.getter_kind (HERE).method_function (var_descriptor_15841, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 381)) ;
            const enumGalgasBool test_22 = GALGAS_bool (kIsNotEqual, var_descriptor_15841.getter_returnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 383)))).boolEnum () ;
            if (kBoolTrue == test_22) {
              TC_Array <C_FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 384)), GALGAS_string ("a function returns a value and cannot be called as a procedure"), fixItArray23  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 384)) ;
            }else if (kBoolFalse == test_22) {
              GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_16392 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 394)) ;
              {
              routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_descriptor_15841.getter_signature (HERE), object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_16392, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 395)) ;
              }
              GALGAS_string var_property_5F_llvmName_17163 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_17163, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 412)) ;
              }
              {
              extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_8903, var_currentLLVMAddressVar_8935, var_property_5F_llvmName_17163, extractedValue_propertyIndex, extractedValue_methodName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 413)) ;
              }
              ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_indirectRoutineCallIR::constructor_new (GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_17163  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 422)), extractedValue_propertyType, GALGAS_objectIR::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 424)), var_effectiveParameterListIR_16392  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 421))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 421)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_procedureCallInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_procedureCallInstructionAST.mSlotID,
                                                    extensionMethod_procedureCallInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_procedureCallInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_procedureCallInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@switchInstructionAST noteInstructionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 68)) ;
  cEnumerator_switchCaseListAST enumerator_2891 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_2891.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2891.current_mCaseInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 70)) ;
    enumerator_2891.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                              extensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@switchInstructionAST instructionSemanticAnalysis'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_switchInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                              const GALGAS_PLMType constinArgument_inSelfType,
                                                                              const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                                              const GALGAS_mode constinArgument_inCurrentMode,
                                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                              GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                              GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_instructionListIR var_switchExpressionGenerationList_4009 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 91)) ;
  GALGAS_objectIR var_switchValueIR_4472 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("instruction-switch.galgas", 94)), constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 96)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_switchExpressionGenerationList_4009, var_switchValueIR_4472, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 92)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_switchValueIR_4472, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 106)) ;
  }
  GALGAS_classConstantMap var_enumConstantMap_4626 = extensionGetter_type (var_switchValueIR_4472, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 111)).getter_classConstantMap (HERE) ;
  const enumGalgasBool test_0 = extensionGetter_type (var_switchValueIR_4472, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)).getter_kind (HERE).getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 112)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 112)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_plmTypeDescriptionName (var_switchValueIR_4472, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 116)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 116)), fixItArray1  COMMA_SOURCE_FILE ("instruction-switch.galgas", 115)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_switchValueIR_4472, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 119)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 120)) ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 123)) ;
  }
  GALGAS_stringset var_usedEnumerationValues_5203 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 124)) ;
  GALGAS_switchCaseListIR var_switchCaseListIR_5245 = GALGAS_switchCaseListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 125)) ;
  cEnumerator_switchCaseListAST enumerator_5309 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_5309.hasCurrentObject ()) {
    GALGAS_uintlist var_caseIdentifierIndexList_5350 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 127)) ;
    cEnumerator_lstringlist enumerator_5392 (enumerator_5309.current_mCaseIdentifiers (HERE), kENUMERATION_UP) ;
    while (enumerator_5392.hasCurrentObject ()) {
      GALGAS_bigint var_constantIdx_5462 ;
      GALGAS_lstring joker_5464 ; // Joker input parameter
      var_enumConstantMap_4626.method_searchKey (enumerator_5392.current_mValue (HERE), var_constantIdx_5462, joker_5464, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 129)) ;
      var_caseIdentifierIndexList_5350.addAssign_operation (var_constantIdx_5462.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 130))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 130)) ;
      const enumGalgasBool test_4 = var_usedEnumerationValues_5203.getter_hasKey (enumerator_5392.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 131)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 131)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        fixItArray5.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_5392.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 132)), GALGAS_string ("duplicated enumeration constant"), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
      }
      var_usedEnumerationValues_5203.addAssign_operation (enumerator_5392.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 134))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
      enumerator_5392.gotoNextObject () ;
    }
    GALGAS_instructionListIR var_instructionGenerationList_5748 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 136)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_5309.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_switch_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_5748, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 137)) ;
    var_switchCaseListIR_5245.addAssign_operation (var_caseIdentifierIndexList_5350, var_instructionGenerationList_5748  COMMA_SOURCE_FILE ("instruction-switch.galgas", 150)) ;
    enumerator_5309.gotoNextObject () ;
  }
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)) ;
  }
  cEnumerator_classConstantMap enumerator_6488 (var_enumConstantMap_4626, kENUMERATION_UP) ;
  while (enumerator_6488.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_usedEnumerationValues_5203.getter_hasKey (enumerator_6488.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 155)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 155)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 155)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("missing '").add_operation (enumerator_6488.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)).add_operation (GALGAS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)) ;
    }
    enumerator_6488.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_switchInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 161)), var_switchExpressionGenerationList_4009, var_switchValueIR_4472, var_switchCaseListIR_5245  COMMA_SOURCE_FILE ("instruction-switch.galgas", 160))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_switchInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                    extensionMethod_switchInstructionAST_instructionSemanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_switchInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_switchInstructionAST_instructionSemanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@switchInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_switchInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                     GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionIR * object = (const cPtr_switchInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionIR) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)) ;
  GALGAS_string var_labelOtherwise_8157 = GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)).add_operation (GALGAS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (extensionGetter_llvmName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %").add_operation (var_labelOtherwise_8157, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (GALGAS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)) ;
  cEnumerator_switchCaseListIR enumerator_8407 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8358 ((uint32_t) 0) ;
  while (enumerator_8407.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_8470 (enumerator_8407.current_mCaseIdentifierIndexes (HERE), kENUMERATION_UP) ;
    while (enumerator_8470.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)).add_operation (enumerator_8470.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)).add_operation (index_8358.getter_string (SOURCE_FILE ("instruction-switch.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)) ;
      enumerator_8470.gotoNextObject () ;
    }
    enumerator_8407.gotoNextObject () ;
    index_8358.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ]\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
  cEnumerator_switchCaseListIR enumerator_8753 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8710 ((uint32_t) 0) ;
  while (enumerator_8753.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)).add_operation (index_8710.getter_string (SOURCE_FILE ("instruction-switch.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)) ;
    extensionMethod_instructionListLLVMCode (enumerator_8753.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelOtherwise_8157, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)) ;
    enumerator_8753.gotoNextObject () ;
    index_8710.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 207)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_8157.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_switchInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_switchInstructionIR.mSlotID,
                                            extensionMethod_switchInstructionIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_switchInstructionIR_llvmInstructionCode (defineExtensionMethod_switchInstructionIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@switchInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_switchInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                         GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionIR * object = (const cPtr_switchInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 222)) ;
  cEnumerator_switchCaseListIR enumerator_9500 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  while (enumerator_9500.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_9500.current_mCaseInstructionList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 224)) ;
    enumerator_9500.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_switchInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_switchInstructionIR.mSlotID,
                                                extensionMethod_switchInstructionIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_switchInstructionIR_enterAccessibleEntities (defineExtensionMethod_switchInstructionIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'handleArraySubscriptNew'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'analyzeVariableInLValue'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
                                      const GALGAS_accessInAssignmentListAST constinArgument_inAccessList,
                                      GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_PLMType var_currentType_7798 = constinArgument_inVariableType ;
  GALGAS_string var_currentLLVMName_7837 = constinArgument_inLLVMName ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("lvalue.galgas", 193)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = constinArgument_inIsReadAccess.boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      GALGAS_objectIR joker_7988 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_7988, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 195)) ;
      }
    }else if (kBoolFalse == test_1) {
      {
      GALGAS_objectIR joker_8074 ; // Joker input parameter
      extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8074, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 197)) ;
      }
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inIsReadAccess.boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      GALGAS_objectIR joker_8192 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8192, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 201)) ;
      }
    }else if (kBoolFalse == test_2) {
      {
      GALGAS_objectIR joker_8282 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8282, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 203)) ;
      }
    }
    cEnumerator_accessInAssignmentListAST enumerator_8325 (constinArgument_inAccessList, kENUMERATION_UP) ;
    while (enumerator_8325.hasCurrentObject ()) {
      switch (enumerator_8325.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_9406 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_8325.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_9406->mAssociatedValue0 ;
          GALGAS_propertyMap var_propertyMap_8431 = var_currentType_7798.getter_propertyMap (HERE) ;
          GALGAS_propertyAccessKind var_propertyAccess_8545 ;
          GALGAS_bool joker_8504 ; // Joker input parameter
          var_propertyMap_8431.method_searchKey (extractedValue_propertyName, joker_8504, var_propertyAccess_8545, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 209)) ;
          switch (var_propertyAccess_8545.enumValue ()) {
          case GALGAS_propertyAccessKind::kNotBuilt:
            break ;
          case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 212)), GALGAS_string ("a method cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("lvalue.galgas", 212)) ;
              var_currentType_7798.drop () ; // Release error dropped variable
              var_currentLLVMName_7837.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_singleton:
            {
              const cEnumAssociatedValues_propertyAccessKind_singleton * extractPtr_8835 = (const cEnumAssociatedValues_propertyAccessKind_singleton *) (var_propertyAccess_8545.unsafePointer ()) ;
              const GALGAS_objectIR extractedValue_object = extractPtr_8835->mAssociatedValue0 ;
              var_currentType_7798 = extensionGetter_type (extractedValue_object, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 214)) ;
              var_currentLLVMName_7837 = extensionGetter_llvmName (extractedValue_object, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 215)) ;
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_constantProperty:
            {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 217)), GALGAS_string ("a constant property cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("lvalue.galgas", 217)) ;
              var_currentType_7798.drop () ; // Release error dropped variable
              var_currentLLVMName_7837.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_indexed:
            {
              const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_9394 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_8545.unsafePointer ()) ;
              const GALGAS_PLMType extractedValue_propertyType = extractPtr_9394->mAssociatedValue0 ;
              const GALGAS_uint extractedValue_index = extractPtr_9394->mAssociatedValue1 ;
              GALGAS_string var_newLLVMvariable_9095 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_9095, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 219)) ;
              }
              {
              extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_7798, var_currentLLVMName_7837, var_newLLVMvariable_9095, extractedValue_index, extractedValue_propertyName.getter_string (SOURCE_FILE ("lvalue.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 220)) ;
              }
              var_currentType_7798 = extractedValue_propertyType ;
              var_currentLLVMName_7837 = var_newLLVMvariable_9095 ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_10727 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_8325.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_10727->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfIndex = extractPtr_10727->mAssociatedValue1 ;
          const enumGalgasBool test_5 = var_currentType_7798.getter_kind (HERE).getter_isArrayType (SOURCE_FILE ("lvalue.galgas", 231)).boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_PLMType var_elementType_9599 ;
            GALGAS_bigint var_arraySize_9627 ;
            var_currentType_7798.getter_kind (HERE).method_arrayType (var_elementType_9599, var_arraySize_9627, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 232)) ;
            GALGAS_objectIR var_indexIR_10242 ;
            {
            routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, var_arraySize_9627, var_elementType_9599, ioArgument_ioInstructionGenerationList, var_indexIR_10242, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 233)) ;
            }
            GALGAS_string var_newLLVMvariable_10315 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_10315, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 250)) ;
            }
            {
            extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, var_currentType_7798, var_currentLLVMName_7837, var_elementType_9599, var_newLLVMvariable_10315, var_indexIR_10242, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 251)) ;
            }
            var_currentType_7798 = var_elementType_9599 ;
            var_currentLLVMName_7837 = var_newLLVMvariable_10315 ;
          }else if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("cannot subscript, not an array"), fixItArray6  COMMA_SOURCE_FILE ("lvalue.galgas", 261)) ;
            var_currentType_7798.drop () ; // Release error dropped variable
            var_currentLLVMName_7837.drop () ; // Release error dropped variable
          }
        }
        break ;
      }
      enumerator_8325.gotoNextObject () ;
    }
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_new (var_currentType_7798, var_currentLLVMName_7837  COMMA_SOURCE_FILE ("lvalue.galgas", 266)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'analyzeSelfAssignmentTarget'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
                                          const GALGAS_accessInAssignmentListAST constinArgument_inAccessList,
                                          GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_bool test_0 = constinArgument_inSelfType.getter_kind (HERE).getter_isStructure (SOURCE_FILE ("lvalue.galgas", 286)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = constinArgument_inSelfType.getter_kind (HERE).getter_isSyncTool (SOURCE_FILE ("lvalue.galgas", 286)) ;
  }
  const enumGalgasBool test_1 = test_0.operator_not (SOURCE_FILE ("lvalue.galgas", 286)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_inSelfLocation, GALGAS_string ("'self' is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("lvalue.galgas", 287)) ;
    outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_PLMType var_currentType_11831 = constinArgument_inSelfType ;
    GALGAS_string var_currentLLVMName_11868 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 290)) ;
    cEnumerator_accessInAssignmentListAST enumerator_11922 (constinArgument_inAccessList, kENUMERATION_UP) ;
    while (enumerator_11922.hasCurrentObject ()) {
      switch (enumerator_11922.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_13003 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_11922.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_13003->mAssociatedValue0 ;
          GALGAS_propertyMap var_propertyMap_12028 = var_currentType_11831.getter_propertyMap (HERE) ;
          GALGAS_propertyAccessKind var_propertyAccess_12142 ;
          GALGAS_bool joker_12101 ; // Joker input parameter
          var_propertyMap_12028.method_searchKey (extractedValue_propertyName, joker_12101, var_propertyAccess_12142, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 295)) ;
          switch (var_propertyAccess_12142.enumValue ()) {
          case GALGAS_propertyAccessKind::kNotBuilt:
            break ;
          case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 298)), GALGAS_string ("a method cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("lvalue.galgas", 298)) ;
              var_currentType_11831.drop () ; // Release error dropped variable
              var_currentLLVMName_11868.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_constantProperty:
            {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 300)), GALGAS_string ("a constant property cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("lvalue.galgas", 300)) ;
              var_currentType_11831.drop () ; // Release error dropped variable
              var_currentLLVMName_11868.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_singleton:
            {
              const cEnumAssociatedValues_propertyAccessKind_singleton * extractPtr_12570 = (const cEnumAssociatedValues_propertyAccessKind_singleton *) (var_propertyAccess_12142.unsafePointer ()) ;
              const GALGAS_objectIR extractedValue_object = extractPtr_12570->mAssociatedValue0 ;
              var_currentType_11831 = extensionGetter_type (extractedValue_object, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 302)) ;
              var_currentLLVMName_11868 = extensionGetter_llvmName (extractedValue_object, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 303)) ;
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_indexed:
            {
              const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_12991 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_12142.unsafePointer ()) ;
              const GALGAS_PLMType extractedValue_propertyType = extractPtr_12991->mAssociatedValue0 ;
              const GALGAS_uint extractedValue_index = extractPtr_12991->mAssociatedValue1 ;
              GALGAS_string var_newLLVMvariable_12692 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_12692, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 305)) ;
              }
              {
              extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_11831, var_currentLLVMName_11868, var_newLLVMvariable_12692, extractedValue_index, extractedValue_propertyName.getter_string (SOURCE_FILE ("lvalue.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 306)) ;
              }
              var_currentType_11831 = extractedValue_propertyType ;
              var_currentLLVMName_11868 = var_newLLVMvariable_12692 ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_14324 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_11922.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_14324->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfIndex = extractPtr_14324->mAssociatedValue1 ;
          const enumGalgasBool test_5 = var_currentType_11831.getter_kind (HERE).getter_isArrayType (SOURCE_FILE ("lvalue.galgas", 317)).boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_PLMType var_elementType_13196 ;
            GALGAS_bigint var_arraySize_13224 ;
            var_currentType_11831.getter_kind (HERE).method_arrayType (var_elementType_13196, var_arraySize_13224, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 318)) ;
            GALGAS_objectIR var_indexIR_13839 ;
            {
            routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, var_arraySize_13224, var_elementType_13196, ioArgument_ioInstructionGenerationList, var_indexIR_13839, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 319)) ;
            }
            GALGAS_string var_newLLVMvariable_13912 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_13912, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 336)) ;
            }
            {
            extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, var_currentType_11831, var_currentLLVMName_11868, var_elementType_13196, var_newLLVMvariable_13912, var_indexIR_13839, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 337)) ;
            }
            var_currentType_11831 = var_elementType_13196 ;
            var_currentLLVMName_11868 = var_newLLVMvariable_13912 ;
          }else if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("cannot subscript, not an array"), fixItArray6  COMMA_SOURCE_FILE ("lvalue.galgas", 347)) ;
            var_currentType_11831.drop () ; // Release error dropped variable
            var_currentLLVMName_11868.drop () ; // Release error dropped variable
          }
        }
        break ;
      }
      enumerator_11922.gotoNextObject () ;
    }
    outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_new (var_currentType_11831, var_currentLLVMName_11868  COMMA_SOURCE_FILE ("lvalue.galgas", 351)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'analyzeEffectiveParameters'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_9483.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 220)).getter_plmTypeDescriptionName (HERE).objectCompare (enumerator_9512.current_mParameterType (HERE).getter_plmTypeDescriptionName (HERE))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_9512.current_mSelector (HERE).getter_location (SOURCE_FILE ("effective-parameters.galgas", 221)), GALGAS_string ("the actual parameter type is $").add_operation (enumerator_9512.current_mParameterType (HERE).getter_plmTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 221)).add_operation (GALGAS_string (", and is incompatible with the formal type $"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 221)).add_operation (enumerator_9483.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 222)), fixItArray8  COMMA_SOURCE_FILE ("effective-parameters.galgas", 221)) ;
      }
      GALGAS_string var_requiredPassingMode_9864 = extensionGetter_requiredActualPassingModeForSelector (enumerator_9483.current_mFormalArgumentPassingMode (HERE), enumerator_9483.current_mSelector (HERE).getter_string (SOURCE_FILE ("effective-parameters.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 224)) ;
      GALGAS_string var_testedPassingMode_9985 = extensionGetter_passingModeForActualSelector (enumerator_9512.current_mEffectiveParameterPassingMode (HERE), enumerator_9512.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 225)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_9864.objectCompare (var_testedPassingMode_9985)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_9512.current_mSelector (HERE).getter_location (SOURCE_FILE ("effective-parameters.galgas", 227)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_9864, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)), fixItArray10  COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)) ;
      }
      enumerator_9483.gotoNextObject () ;
      enumerator_9512.gotoNextObject () ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Once function 'llvmAttributeFunction'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_llvmAttributeFunction (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (" nounwind minsize optsize ") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_llvmAttributeFunction = false ;
static GALGAS_string gOnceFunctionResult_llvmAttributeFunction ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmAttributeFunction (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmAttributeFunction) {
    gOnceFunctionResult_llvmAttributeFunction = onceFunction_llvmAttributeFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmAttributeFunction = true ;
  }
  return gOnceFunctionResult_llvmAttributeFunction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_llvmAttributeFunction (void) {
  gOnceFunctionResult_llvmAttributeFunction.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmAttributeFunction (NULL,
                                                                   releaseOnceFunctionResult_llvmAttributeFunction) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmAttributeFunction [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmAttributeFunction (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_llvmAttributeFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmAttributeFunction ("llvmAttributeFunction",
                                                                       functionWithGenericHeader_llvmAttributeFunction,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_llvmAttributeFunction) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Once function 'staticAttribute'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_staticAttribute (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("static") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_staticAttribute = false ;
static GALGAS_string gOnceFunctionResult_staticAttribute ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_staticAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticAttribute) {
    gOnceFunctionResult_staticAttribute = onceFunction_staticAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticAttribute = true ;
  }
  return gOnceFunctionResult_staticAttribute ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_staticAttribute (void) {
  gOnceFunctionResult_staticAttribute.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_staticAttribute (NULL,
                                                             releaseOnceFunctionResult_staticAttribute) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_staticAttribute [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_staticAttribute (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_staticAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_staticAttribute ("staticAttribute",
                                                                 functionWithGenericHeader_staticAttribute,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_staticAttribute) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'registerGroupNameFromPLMname'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_registerGroupNameFromPLMname (const GALGAS_lstring & constinArgument_inName,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("registers ").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 18)), constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 18)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_registerGroupNameFromPLMname [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_registerGroupNameFromPLMname ("registerGroupNameFromPLMname",
                                                                              functionWithGenericHeader_registerGroupNameFromPLMname,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              1,
                                                                              functionArgs_registerGroupNameFromPLMname) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'setupNameForInvocationGraph'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_setupNameForInvocationGraph (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                     const GALGAS_luint & constinArgument_inPriority,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_1160 = GALGAS_string ("setup ").add_operation (constinArgument_inReceiverTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 26)) ;
  var_s_1160.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inPriority.getter_uint (HERE).getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 27)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_1160, constinArgument_inPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 28)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_setupNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_luint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_setupNameForInvocationGraph (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_luint operand1 = GALGAS_luint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  return function_setupNameForInvocationGraph (operand0,
                                               operand1,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_setupNameForInvocationGraph ("setupNameForInvocationGraph",
                                                                             functionWithGenericHeader_setupNameForInvocationGraph,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             2,
                                                                             functionArgs_setupNameForInvocationGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'panicNameForInvocationGraph'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_panicNameForInvocationGraph (const GALGAS_string & constinArgument_inName,
                                                     const GALGAS_lbigint & constinArgument_inPriority,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_1488 = GALGAS_string ("panic ").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 34)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 34)).add_operation (constinArgument_inPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 34)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_1488, constinArgument_inPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 35)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_panicNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lbigint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_panicNameForInvocationGraph ("panicNameForInvocationGraph",
                                                                             functionWithGenericHeader_panicNameForInvocationGraph,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             2,
                                                                             functionArgs_panicNameForInvocationGraph) ;

