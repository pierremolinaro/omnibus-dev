#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inlineInfix_compileTimeInt_integer_operatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_generateCode (const cPtr_omnibusInfixOperatorUsage * inObject,
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
  const cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * object = (const cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage *) inObject ;
  macroValidSharedObject (object, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage) ;
  GALGAS_bigint var_minValue_15415 ;
  GALGAS_bigint var_maxValue_15434 ;
  GALGAS_bool joker_15436_2 ; // Joker input parameter
  GALGAS_uint joker_15436_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 365)).readProperty_kind ().method_integer (var_minValue_15415, var_maxValue_15434, joker_15436_2, joker_15436_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 365)) ;
  GALGAS_bigint var_value_15492 ;
  GALGAS_omnibusType joker_15473_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_15473_1, var_value_15492, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 366)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, var_value_15492.objectCompare (var_minValue_15415)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("left operand is a compile time integer with an invalid value, lower than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 370)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 369)).add_operation (GALGAS_string (" minimum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 370)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 368)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_value_15492.objectCompare (var_maxValue_15434)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("left operand is a compile time integer with an invalid value, greater than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 373)).add_operation (GALGAS_string (" maximum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 372)) ;
      }
    }
  }
  GALGAS_objectIR var_rightOperand_15958 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_15958, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 378)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 379)) ;
  }
  const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage temp_4 = object ;
  GALGAS_string var_s_16138 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (temp_4.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_15958, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)).add_operation (extensionGetter_llvmName (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)).add_operation (extensionGetter_llvmName (var_rightOperand_15958, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 381)) ;
  {
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_16138, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-integer.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 382)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage.mSlotID,
                                     extensionMethod_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_generateCode (defineExtensionMethod_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerBuiltinFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerBuiltinFunctionIR * object = (const cPtr_integerBuiltinFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_integerBuiltinFunctionIR) ;
  const GALGAS_integerBuiltinFunctionIR temp_0 = object ;
  const GALGAS_integerBuiltinFunctionIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (temp_0.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 401)) ;
  const GALGAS_integerBuiltinFunctionIR temp_2 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (temp_2.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 402)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 402)) ;
  const GALGAS_integerBuiltinFunctionIR temp_3 = object ;
  const GALGAS_integerBuiltinFunctionIR temp_4 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (temp_3.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)).add_operation (temp_4.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 403)) ;
  const GALGAS_integerBuiltinFunctionIR temp_5 = object ;
  const GALGAS_integerBuiltinFunctionIR temp_6 = object ;
  const GALGAS_integerBuiltinFunctionIR temp_7 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (temp_5.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (temp_6.readProperty_mIntrinsicName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)).add_operation (temp_7.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 404)) ;
  const GALGAS_integerBuiltinFunctionIR temp_8 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (temp_8.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 405)).add_operation (GALGAS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 405)) ;
  const GALGAS_integerBuiltinFunctionIR temp_9 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (temp_9.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 406)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 406)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 407)) ;
  const GALGAS_integerBuiltinFunctionIR temp_10 = object ;
  const GALGAS_integerBuiltinFunctionIR temp_11 = object ;
  const GALGAS_integerBuiltinFunctionIR temp_12 = object ;
  const GALGAS_integerBuiltinFunctionIR temp_13 = object ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (temp_10.readProperty_mLLVMTypeName ().add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (temp_11.readProperty_mIntrinsicName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (temp_12.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (temp_13.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 409))  COMMA_SOURCE_FILE ("type-integer.galgas", 408)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_integerBuiltinFunctionIR.mSlotID,
                                           extensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_integerBuiltinFunctionIR_llvmCodeGeneration (defineExtensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@literalStringDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_literalStringDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-static-string.galgas", 11)) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_literalStringDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                                  extensionGetter_literalStringDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_literalStringDeclarationAST_locationForErrorSignaling (defineExtensionGetter_literalStringDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  GALGAS_lstring var_literalStringTypeName_1182 = function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 21)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 21)) ;
  {
  const GALGAS_literalStringDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName_1182, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1182, GALGAS_string ("u8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 23)) COMMA_SOURCE_FILE ("type-static-string.galgas", 23)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                               extensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalStringDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@literalStringDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                                           extensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalStringDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
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
  GALGAS_omnibusType var_selfType_2633 = function_literalStringType (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 47)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 49)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 49)), var_selfType_2633, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 48)) ;
  }
  GALGAS_lstring var_key_2795 = function_assignmentOperatorKey (var_selfType_2633, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-static-string.galgas", 53)), var_selfType_2633, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 53)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2795, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-static-string.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 54)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalStringDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                       extensionMethod_literalStringDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalStringDeclarationAST_enterInContext (defineExtensionMethod_literalStringDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeOpaqueDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  {
  const GALGAS_typeOpaqueDeclarationAST temp_0 = object ;
  const GALGAS_typeOpaqueDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mOpaqueTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 58)) ;
  }
  const GALGAS_typeOpaqueDeclarationAST temp_2 = object ;
  const GALGAS_typeOpaqueDeclarationAST temp_3 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_2.readProperty_mSizeExpression ().ptr (), temp_3.readProperty_mOpaqueTypeName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 60)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                               extensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeOpaqueDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  const GALGAS_typeOpaqueDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("opaque ").add_operation (temp_0.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                                           extensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeOpaqueDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  const GALGAS_typeOpaqueDeclarationAST temp_0 = object ;
  result_outLocation = temp_0.readProperty_mOpaqueTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                                  extensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_typeOpaqueDeclarationAST_locationForErrorSignaling (defineExtensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeOpaqueDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typeOpaqueDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                     GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                     GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                     GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                     GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                     GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  GALGAS_omnibusTypeAttributes var_opaqueTypeAttributes_4322 = GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("type-opaque-declaration.galgas", 89)) ;
  GALGAS_bool var_copyable_4345 = GALGAS_bool (false) ;
  const GALGAS_typeOpaqueDeclarationAST temp_0 = object ;
  cEnumerator_lstringlist enumerator_4370 (temp_0.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_4370.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, enumerator_4370.current_mValue (HERE).readProperty_string ().objectCompare (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 92)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_opaqueTypeAttributes_4322.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 93)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4370.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 94)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_opaqueTypeAttributes_4322 = var_opaqueTypeAttributes_4322.operator_or (GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 96)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 96)) ;
        }
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_4370.current_mValue (HERE).readProperty_string ().objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 98)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_copyable_4345.boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_4370.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 100)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_copyable_4345 = GALGAS_bool (true) ;
            var_opaqueTypeAttributes_4322 = var_opaqueTypeAttributes_4322.operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 103)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 103)) ;
          }
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_4370.current_mValue (HERE).readProperty_location (), GALGAS_string ("only @").add_operation (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GALGAS_string (" attributes are allowed here"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), fixItArray7  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 106)) ;
      }
    }
    enumerator_4370.gotoNextObject () ;
  }
  GALGAS_objectIR var_sizeExpressionIR_5339 ;
  {
  const GALGAS_typeOpaqueDeclarationAST temp_8 = object ;
  const GALGAS_typeOpaqueDeclarationAST temp_9 = object ;
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_8.readProperty_mSizeExpression (), temp_9.readProperty_mSizeExpressionLocation (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 117)), var_sizeExpressionIR_5339, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 112)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_sizeExpressionIR_5339.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_typeOpaqueDeclarationAST temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mSizeExpressionLocation (), GALGAS_string ("array size expression is not a literal integer"), fixItArray12  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_10) {
    GALGAS_constructorMap var_constructorMap_5529 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 123)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = var_opaqueTypeAttributes_4322.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 124)).boolEnum () ;
      if (kBoolTrue == test_13) {
        {
        var_constructorMap_5529.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 125)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 125)), GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)) ;
        }
        {
        const GALGAS_typeOpaqueDeclarationAST temp_14 = object ;
        ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_14.readProperty_mOpaqueTypeName (), var_constructorMap_5529, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 126)) ;
        }
      }
    }
    GALGAS_bigint var_bitSize_5814 ;
    GALGAS_omnibusType joker_5793_1 ; // Joker input parameter
    var_sizeExpressionIR_5339.method_literalInteger (joker_5793_1, var_bitSize_5814, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 128)) ;
    const GALGAS_typeOpaqueDeclarationAST temp_15 = object ;
    const GALGAS_typeOpaqueDeclarationAST temp_16 = object ;
    GALGAS_omnibusType var_opaqueType_5834 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-opaque-declaration.galgas", 130)), var_opaqueTypeAttributes_4322, temp_15.readProperty_mOpaqueTypeName ().readProperty_string (), GALGAS_typeKind::constructor_opaque (var_bitSize_5814  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 133)), temp_16.readProperty_mOpaqueTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 129)) ;
    {
    const GALGAS_typeOpaqueDeclarationAST temp_17 = object ;
    extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_17.readProperty_mOpaqueTypeName (), var_opaqueType_5834, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 136)) ;
    }
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = var_copyable_4345.boolEnum () ;
    if (kBoolTrue == test_18) {
      const GALGAS_typeOpaqueDeclarationAST temp_19 = object ;
      inCompiler->printMessage (GALGAS_string ("OPAQUE ").add_operation (temp_19.readProperty_mOpaqueTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)).add_operation (GALGAS_string (" is copyable\n"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typeOpaqueDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                       extensionMethod_typeOpaqueDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typeOpaqueDeclarationAST_enterInContext (defineExtensionMethod_typeOpaqueDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@controlRegisterGroupDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = object ;
  result_outRepresentation = function_registerGroupNameFromOmnibusName (temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 305)).readProperty_string () ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                                           extensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@controlRegisterGroupDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = object ;
  result_result = temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 311)).readProperty_location () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                                  extensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling (defineExtensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterGroupDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nodeName_12628 = function_registerGroupNameFromOmnibusName (temp_0.readProperty_mRegisterGroupList ().getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)) ;
  {
  const GALGAS_controlRegisterGroupDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_12628, temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)) ;
  }
  const GALGAS_controlRegisterGroupDeclarationAST temp_2 = object ;
  cEnumerator_controlRegisterDeclarationList enumerator_12834 (temp_2.readProperty_mRegisters (), kENUMERATION_UP) ;
  while (enumerator_12834.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12628, enumerator_12834.current (HERE).readProperty_mRegisterTypeName () COMMA_SOURCE_FILE ("declaration-control-register.galgas", 323)) ;
    }
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12628, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) ;
    }
    GALGAS_stringlist var_split_13092 = enumerator_12834.current (HERE).readProperty_mRegisterTypeName ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("u") COMMA_SOURCE_FILE ("declaration-control-register.galgas", 326)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GALGAS_bool test_4 = GALGAS_bool (kIsEqual, var_split_13092.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 327)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (kIsEqual, var_split_13092.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)).objectCompare (GALGAS_string::makeEmptyString ())) ;
      }
      GALGAS_bool test_5 = test_4 ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = var_split_13092.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("declaration-control-register.galgas", 327)) ;
      }
      test_3 = test_5.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_uint var_n_13287 = var_split_13092.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsStrictSup, var_n_13287.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_lstring var_bitSizeTypeName_13386 = GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (var_n_13287.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_significantBitCount (SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)), enumerator_12834.current (HERE).readProperty_mRegisterTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)) ;
            {
            ioArgument_ioGraph.setter_addEdge (var_nodeName_12628, var_bitSizeTypeName_13386 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 331)) ;
            }
          }
        }
      }
    }
    cEnumerator_controlRegisterBitSliceList enumerator_13595 (enumerator_12834.current (HERE).readProperty_mRegisterBitSliceList (), kENUMERATION_UP) ;
    while (enumerator_13595.hasCurrentObject ()) {
      switch (enumerator_13595.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_13835 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_13595.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_13713_count = extractPtr_13835->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsSupOrEqual, extractedValue_13713_count.readProperty_bigint ().objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 339)))).boolEnum () ;
            if (kBoolTrue == test_7) {
              {
              extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_13713_count.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)), extractedValue_13713_count.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)) ;
              }
            }
          }
        }
        break ;
      }
      enumerator_13595.gotoNextObject () ;
    }
    GALGAS_lstring var_rootNode_13909 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 345)), var_nodeName_12628.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 345)) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12628, var_rootNode_13909 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 346)) ;
    }
    cEnumerator_controlRegisterNameListAST enumerator_14122 (enumerator_12834.current (HERE).readProperty_mRegisterArrayList (), kENUMERATION_UP) ;
    while (enumerator_14122.hasCurrentObject ()) {
      switch (enumerator_14122.current (HERE).readProperty_mControlRegisterKind ().enumValue ()) {
      case GALGAS_controlRegisterKind::kNotBuilt:
        break ;
      case GALGAS_controlRegisterKind::kEnum_scalar:
        {
        }
        break ;
      case GALGAS_controlRegisterKind::kEnum_registerArray:
        {
          const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_14439 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_14122.current (HERE).readProperty_mControlRegisterKind ().unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_14239_arraySize = extractPtr_14439->mAssociatedValue0 ;
          const GALGAS_expressionAST extractedValue_14273_arrayElementSize = extractPtr_14439->mAssociatedValue2 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_14239_arraySize.ptr (), var_nodeName_12628, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 352)) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_14273_arrayElementSize.ptr (), var_nodeName_12628, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 353)) ;
        }
        break ;
      }
      enumerator_14122.gotoNextObject () ;
    }
    enumerator_12834.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                               extensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'controlRegisterType'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_controlRegisterType (const GALGAS_lstring constinArgument_inRegisterTypeName,
                                  GALGAS_semanticContext & ioArgument_ioContext,
                                  GALGAS_omnibusType & outArgument_outRegisterType,
                                  GALGAS_uint & outArgument_outRegisterBitCount,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterBitCount.drop () ; // Release 'out' argument
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), constinArgument_inRegisterTypeName, outArgument_outRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 402)) ;
  switch (outArgument_outRegisterType.readProperty_kind ().enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_16510 = (const cEnumAssociatedValues_typeKind_integer *) (outArgument_outRegisterType.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_uint extractedValue_16473_bitCount = extractPtr_16510->mAssociatedValue3 ;
      outArgument_outRegisterBitCount = extractedValue_16473_bitCount ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 407)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 409)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 411)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeBool:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 413)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeInteger:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 415)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 417)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 421)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 423)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 425)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 427)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_generic:
    {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray11  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 429)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_llvmType:
    {
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.readProperty_location (), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray12  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 431)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterSliceMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildControlRegisterSliceMap (const GALGAS_controlRegisterBitSliceList constinArgument_inRegisterBitSliceList,
                                           const GALGAS_location constinArgument_inEndOfBitSliceLocation,
                                           GALGAS_semanticContext & /* ioArgument_ioContext */,
                                           GALGAS_omnibusType & ioArgument_ioRegisterType,
                                           const GALGAS_uint constinArgument_inRegisterBitCount,
                                           GALGAS_controlRegisterFieldMap & outArgument_outRegisterFieldMap,
                                           GALGAS_sliceMap & outArgument_outRegisterBitSliceMap,
                                           GALGAS_controlRegisterFieldList & outArgument_outControlRegisterFieldList,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterFieldMap.drop () ; // Release 'out' argument
  outArgument_outRegisterBitSliceMap.drop () ; // Release 'out' argument
  outArgument_outControlRegisterFieldList.drop () ; // Release 'out' argument
  outArgument_outRegisterFieldMap = GALGAS_controlRegisterFieldMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 448)) ;
  outArgument_outRegisterBitSliceMap = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 449)) ;
  outArgument_outControlRegisterFieldList = GALGAS_controlRegisterFieldList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 450)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inRegisterBitSliceList.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 451)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_shiftCount_18794 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_controlRegisterBitSliceList enumerator_18827 (constinArgument_inRegisterBitSliceList, kENUMERATION_DOWN) ;
      while (enumerator_18827.hasCurrentObject ()) {
        switch (enumerator_18827.current_mRegisterBitSlice (HERE).enumValue ()) {
        case GALGAS_controlRegisterBitSlice::kNotBuilt:
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_19049 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_18827.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lbigint extractedValue_18926_count = extractPtr_19049->mAssociatedValue0 ;
            var_shiftCount_18794 = var_shiftCount_18794.add_operation (extractedValue_18926_count.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (extractedValue_18926_count.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)), GALGAS_string ("\xE2""\x80""\x94""")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)) ;
          }
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_19570 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_18827.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_19084_name = extractPtr_19570->mAssociatedValue0 ;
            const GALGAS_lbigint extractedValue_19099_count = extractPtr_19570->mAssociatedValue1 ;
            GALGAS_uint var_bitCount_19123 = extractedValue_19099_count.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (var_bitCount_19123, extractedValue_19084_name.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 460)) ;
            {
            outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_19084_name, var_shiftCount_18794, var_bitCount_19123, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 461)) ;
            }
            GALGAS_bigint var_mask_19359 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_bitCount_19123, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_shiftCount_18794, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)) ;
            {
            outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_19084_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("declaration-control-register.galgas", 470)), var_mask_19359, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 468)) ;
            }
            var_shiftCount_18794 = var_shiftCount_18794.add_operation (var_bitCount_19123, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 474)) ;
          }
          break ;
        }
        enumerator_18827.gotoNextObject () ;
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_18794)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfBitSliceLocation, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount_18794.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 479)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterGroupDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_controlRegisterGroupDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                                               GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                               GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                               GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                               GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                               GALGAS_controlRegisterUserAccesMapAST & ioArgument_ioControlRegisterUserAccesMapAST,
                                                                               GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  GALGAS_controlRegisterMap var_regMap_24386 = GALGAS_controlRegisterMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 596)) ;
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = object ;
  cEnumerator_controlRegisterDeclarationList enumerator_24420 (temp_0.readProperty_mRegisters (), kENUMERATION_UP) ;
  while (enumerator_24420.hasCurrentObject ()) {
    extensionMethod_buildControlRegisterMapForGroup (enumerator_24420.current (HERE), ioArgument_ioContext, var_regMap_24386, ioArgument_ioStaticEntityMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 598)) ;
    enumerator_24420.gotoNextObject () ;
  }
  const GALGAS_controlRegisterGroupDeclarationAST temp_1 = object ;
  cEnumerator_registerGroupListAST enumerator_24598 (temp_1.readProperty_mRegisterGroupList (), kENUMERATION_UP) ;
  while (enumerator_24598.hasCurrentObject ()) {
    GALGAS_controlRegisterMap var_registerMap_24641 = var_regMap_24386 ;
    cEnumerator_controlRegisterMap enumerator_24712 (var_regMap_24386, kENUMERATION_UP) ;
    while (enumerator_24712.hasCurrentObject ()) {
      GALGAS_string var_key_24729 = GALGAS_string ("#").add_operation (enumerator_24598.current (HERE).readProperty_mRegisterGroupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (enumerator_24712.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = ioArgument_ioControlRegisterUserAccesMapAST.getter_hasKey (var_key_24729 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 609)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          var_registerMap_24641.setter_setMUserAccessForKey (GALGAS_bool (true), enumerator_24712.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 610)) ;
          }
          {
          ioArgument_ioControlRegisterUserAccesMapAST.setter_removeKey (var_key_24729.getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 611)) ;
          }
        }
      }
      enumerator_24712.gotoNextObject () ;
    }
    switch (enumerator_24598.current (HERE).readProperty_mControlRegisterGroupKind ().enumValue ()) {
    case GALGAS_controlRegisterGroupKindAST::kNotBuilt:
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_single:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_single * extractPtr_25263 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_single *) (enumerator_24598.current (HERE).readProperty_mControlRegisterGroupKind ().unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_25080_baseAddress = extractPtr_25263->mAssociatedValue0 ;
        GALGAS_registerGroupKind var_groupKind_25103 = GALGAS_registerGroupKind::constructor_single (extractedValue_25080_baseAddress.readProperty_bigint ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 617)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24598.current (HERE).readProperty_mRegisterGroupName (), var_groupKind_25103, var_registerMap_24641, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 618)) ;
        }
      }
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_groupArray:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray * extractPtr_26561 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray *) (enumerator_24598.current (HERE).readProperty_mControlRegisterGroupKind ().unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_25304_groupSizeExpression = extractPtr_26561->mAssociatedValue0 ;
        const GALGAS_location extractedValue_25332_groupSizeExpressionLocation = extractPtr_26561->mAssociatedValue1 ;
        const GALGAS_lbigintlist extractedValue_25346_baseAddresses = extractPtr_26561->mAssociatedValue2 ;
        GALGAS_objectIR var_groupArraySizeExpressionResult_25655 ;
        {
        routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_25304_groupSizeExpression, extractedValue_25332_groupSizeExpressionLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 625)), var_groupArraySizeExpressionResult_25655, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 620)) ;
        }
        GALGAS_bigint var_groupSize_25691 ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_groupArraySizeExpressionResult_25655.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 629)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 629)).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_25332_groupSizeExpressionLocation, GALGAS_string ("control register group size is not a static integer expression"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 630)) ;
            var_groupSize_25691.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_3) {
          GALGAS_omnibusType joker_25968_1 ; // Joker input parameter
          var_groupArraySizeExpressionResult_25655.method_literalInteger (joker_25968_1, var_groupSize_25691, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 634)) ;
        }
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsNotEqual, var_groupSize_25691.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 636)).objectCompare (extractedValue_25346_baseAddresses.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 636)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_25332_groupSizeExpressionLocation, GALGAS_string ("the group size is ").add_operation (var_groupSize_25691.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GALGAS_string (", but "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (extractedValue_25346_baseAddresses.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 638)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GALGAS_string (" base addresses are defined"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 637)) ;
          }
        }
        GALGAS_registerGroupKind var_groupKind_26238 = GALGAS_registerGroupKind::constructor_arrayGroup (extractedValue_25346_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 640)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24598.current (HERE).readProperty_mRegisterGroupName (), var_groupKind_26238, var_registerMap_24641, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 641)) ;
        }
        ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_new (enumerator_24598.current (HERE).readProperty_mRegisterGroupName (), extractedValue_25346_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 642))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 642)) ;
      }
      break ;
    }
    enumerator_24598.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                       extensionMethod_controlRegisterGroupDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_controlRegisterGroupDeclarationAST_enterInContext (defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedControlRegisterArrayGroupDeclaration semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedControlRegisterArrayGroupDeclaration * object = (const cPtr_decoratedControlRegisterArrayGroupDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
  const GALGAS_decoratedControlRegisterArrayGroupDeclaration temp_0 = object ;
  const GALGAS_decoratedControlRegisterArrayGroupDeclaration temp_1 = object ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mControlRegisterGroupArrayList.addAssign_operation (temp_0.readProperty_mGroupName (), temp_1.readProperty_mBaseAddresses ()  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 666)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration.mSlotID,
                                         extensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis (defineExtensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterMapHTMLFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildControlRegisterMapHTMLFile (const GALGAS_controlRegisterGroupMap constinArgument_inControlRegisterGroupMap,
                                              const GALGAS_lstring constinArgument_inSourceFile,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_byAddressFilePath_29929 = constinArgument_inSourceFile.readProperty_string ().add_operation (GALGAS_string (".control-registers-sorted-by-address.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 727)) ;
  GALGAS_string var_byNameFilePath_30018 = constinArgument_inSourceFile.readProperty_string ().add_operation (GALGAS_string (".control-registers-sorted-by-name.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 728)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_controlRegisterByAddress var_controlRegisterByAddress_30215 = GALGAS_controlRegisterByAddress::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 730)) ;
      GALGAS_controlRegisterByName var_controlRegisterByName_30273 = GALGAS_controlRegisterByName::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 731)) ;
      GALGAS_uint var_controlRegisterCount_30313 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_controlRegisterGroupMap enumerator_30380 (constinArgument_inControlRegisterGroupMap, kENUMERATION_UP) ;
      while (enumerator_30380.hasCurrentObject ()) {
        switch (enumerator_30380.current_mGroupKind (HERE).enumValue ()) {
        case GALGAS_registerGroupKind::kNotBuilt:
          break ;
        case GALGAS_registerGroupKind::kEnum_single:
          {
            const cEnumAssociatedValues_registerGroupKind_single * extractPtr_30725 = (const cEnumAssociatedValues_registerGroupKind_single *) (enumerator_30380.current_mGroupKind (HERE).unsafePointer ()) ;
            const GALGAS_bigint extractedValue_30479_groupBaseAddress = extractPtr_30725->mAssociatedValue0 ;
            {
            routine_buildControlRegisterMaps (enumerator_30380.current_mControlRegisterMap (HERE), extractedValue_30479_groupBaseAddress, enumerator_30380.current_lkey (HERE).readProperty_string (), var_controlRegisterByAddress_30215, var_controlRegisterByName_30273, var_controlRegisterCount_30313, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 736)) ;
            }
          }
          break ;
        case GALGAS_registerGroupKind::kEnum_arrayGroup:
          {
            const cEnumAssociatedValues_registerGroupKind_arrayGroup * extractPtr_31115 = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) (enumerator_30380.current_mGroupKind (HERE).unsafePointer ()) ;
            const GALGAS_lbigintlist extractedValue_30775_baseAddresses = extractPtr_31115->mAssociatedValue0 ;
            cEnumerator_lbigintlist enumerator_30800 (extractedValue_30775_baseAddresses, kENUMERATION_UP) ;
            GALGAS_uint index_30790 ((uint32_t) 0) ;
            while (enumerator_30800.hasCurrentObject ()) {
              {
              routine_buildControlRegisterMaps (enumerator_30380.current_mControlRegisterMap (HERE), enumerator_30800.current_mValue (HERE).readProperty_bigint (), enumerator_30380.current_lkey (HERE).readProperty_string ().add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (index_30790.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)), var_controlRegisterByAddress_30215, var_controlRegisterByName_30273, var_controlRegisterCount_30313, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 746)) ;
              }
              enumerator_30800.gotoNextObject () ;
              index_30790.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 745)) ;
            }
          }
          break ;
        }
        enumerator_30380.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_31156 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 758)), var_controlRegisterCount_30313, var_controlRegisterByAddress_30215 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 757))) ;
      GALGAS_bool joker_31403 ; // Joker input parameter
      var_typeDumpString_31156.method_writeToFileWhenDifferentContents (var_byAddressFilePath_29929, joker_31403, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 762)) ;
      var_typeDumpString_31156 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 764)), var_controlRegisterCount_30313, var_controlRegisterByName_30273 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763))) ;
      GALGAS_bool joker_31662 ; // Joker input parameter
      var_typeDumpString_31156.method_writeToFileWhenDifferentContents (var_byNameFilePath_30018, joker_31662, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 768)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byAddressFilePath_29929, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 770)) ;
    }
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byNameFilePath_30018, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 771)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterMaps'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildControlRegisterMaps (const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                       const GALGAS_bigint constinArgument_inGroupBaseAddress,
                                       const GALGAS_string constinArgument_inGroupName,
                                       GALGAS_controlRegisterByAddress & ioArgument_ioControlRegisterByAddress,
                                       GALGAS_controlRegisterByName & ioArgument_ioControlRegisterByName,
                                       GALGAS_uint & ioArgument_ioControlRegisterCount,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_controlRegisterMap enumerator_32335 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
  while (enumerator_32335.hasCurrentObject ()) {
    GALGAS_bigint var_registerAddress_32387 = constinArgument_inGroupBaseAddress.add_operation (enumerator_32335.current_mAddressOffset (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 786)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_32335.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 788)) ;
        GALGAS_string var_registerName_32542 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)).add_operation (enumerator_32335.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)) ;
        GALGAS_string var_s_32585 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_32542, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 790)).add_operation (GALGAS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 791)).add_operation (enumerator_32335.current_mType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (var_registerAddress_32387.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsStrictSup, enumerator_32335.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 794)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_s_32585.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)).add_operation (function_fieldIndexColumns (enumerator_32335.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GALGAS_string ("</tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)) ;
            cEnumerator_controlRegisterFieldList enumerator_33069 (enumerator_32335.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
            while (enumerator_33069.hasCurrentObject ()) {
              var_s_32585.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_33069.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (enumerator_33069.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)) ;
              enumerator_33069.gotoNextObject () ;
            }
            var_s_32585.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 801)) ;
          }
        }
        var_s_32585.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 803)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_32387, var_s_32585  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 804)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_32387, var_s_32585, var_registerName_32542  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 805)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (enumerator_32335.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 807)) ;
      cEnumerator_uintlist enumerator_33512 (function_arrayIndexListFor (enumerator_32335.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 808)), kENUMERATION_UP) ;
      while (enumerator_33512.hasCurrentObject ()) {
        GALGAS_bigint var_address_33580 = var_registerAddress_32387.add_operation (enumerator_33512.current_mValue (HERE).multiply_operation (enumerator_32335.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)).getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 809)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)) ;
        GALGAS_string var_registerName_33656 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_32335.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_33512.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 810)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)) ;
        GALGAS_string var_s_33731 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_33656, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 811)).add_operation (GALGAS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 812)).add_operation (enumerator_32335.current_mType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (var_address_33580.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsStrictSup, enumerator_32335.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 816)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_s_33731.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)).add_operation (function_fieldIndexColumns (enumerator_32335.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)).add_operation (GALGAS_string ("</tr><tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)) ;
            cEnumerator_controlRegisterFieldList enumerator_34214 (enumerator_32335.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
            while (enumerator_34214.hasCurrentObject ()) {
              var_s_33731.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_34214.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (enumerator_34214.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)) ;
              enumerator_34214.gotoNextObject () ;
            }
            var_s_33731.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 822)) ;
          }
        }
        var_s_33731.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 824)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_32387, var_s_33731  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 825)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_32387, var_s_33731, var_registerName_33656  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 826)) ;
        enumerator_33512.gotoNextObject () ;
      }
    }
    enumerator_32335.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'controlRegisterDumpGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_controlRegisterDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_controlRegisterDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_controlRegisterDumpGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (C_Compiler * /* inCompiler */,
                                                                                    const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                    const GALGAS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                    const GALGAS_controlRegisterByName & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ", sorted by name</title>\n"
    "<style type=\"text/css\">body {\n"
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
    "table.fields {\n"
    "\xC2""\xA0""\xC2""\xA0""border-collapse: collapse ;\n"
    "  border-spacing: 1px 1px;\n"
    "}\n"
    "\n"
    "td.fields {\n"
    "  border: 1px solid #333333 ;\n"
    "  text-align: center ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "}\n"
    "\n"
    "td.address {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.name {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.type {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
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
    "<h1>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ", sorted by name</h1>\n"
    "<p>This document lists all " ;
  result << in_CONTROL_5F_REGISTER_5F_COUNT.getter_string (SOURCE_FILE ("controlRegisterByNameDump.html.galgasTemplate", 78)).stringValue () ;
  result << " defined control registers, sorted by name.</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">Address</td><td class=\"resul"
    "t_title\">Value</td></tr>\n" ;
  GALGAS_uint index_1561_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME.isValid ()) {
    cEnumerator_controlRegisterByName enumerator_1561 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME, kENUMERATION_UP) ;
    while (enumerator_1561.hasCurrentObject ()) {
      result << enumerator_1561.current_mHTML (HERE).stringValue () ;
      index_1561_.increment () ;
      enumerator_1561.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByAddress'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                                       const GALGAS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                                       const GALGAS_controlRegisterByAddress & in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
    "<title>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ", sorted by address</title>\n"
    "<style type=\"text/css\">body {\n"
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
    "table.fields {\n"
    "\xC2""\xA0""\xC2""\xA0""border-collapse: collapse ;\n"
    "  border-spacing: 1px 1px;\n"
    "}\n"
    "\n"
    "td.fields {\n"
    "  border: 1px solid #333333 ;\n"
    "  text-align: center ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "}\n"
    "\n"
    "td.address {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.name {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
    "}\n"
    "\n"
    "td.type {\n"
    "  font-family: Courier ;\n"
    "  padding : 4px ;\n"
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
    "<h1>Control Registers of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ", sorted by address</h1>\n"
    "<p>This document lists all " ;
  result << in_CONTROL_5F_REGISTER_5F_COUNT.getter_string (SOURCE_FILE ("controlRegisterByAddressDump.html.galgasTemplate", 78)).stringValue () ;
  result << " defined control registers, sorted by address.</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">Address</td><td class=\"resul"
    "t_title\">Value</td></tr>\n" ;
  GALGAS_uint index_1567_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS.isValid ()) {
    cEnumerator_controlRegisterByAddress enumerator_1567 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS, kENUMERATION_UP) ;
    while (enumerator_1567.hasCurrentObject ()) {
      result << enumerator_1567.current_mHTML (HERE).stringValue () ;
      index_1567_.increment () ;
      enumerator_1567.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'fieldIndexColumns'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_fieldIndexColumns (const GALGAS_uint & constinArgument_inBitCount,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_range enumerator_35431 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 852))), kENUMERATION_DOWN) ;
  while (enumerator_35431.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("<td class=\"fields\">").add_operation (enumerator_35431.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 853)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)) ;
    enumerator_35431.gotoNextObject () ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_fieldIndexColumns [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_fieldIndexColumns (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_fieldIndexColumns (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_fieldIndexColumns ("fieldIndexColumns",
                                                                   functionWithGenericHeader_fieldIndexColumns,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_fieldIndexColumns) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'arrayIndexListFor'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintlist function_arrayIndexListFor (const GALGAS_uint & constinArgument_inSize,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist result_result ; // Returned variable
  result_result = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 860)) ;
  cEnumerator_range enumerator_35716 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inSize.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 861))), kENUMERATION_UP) ;
  while (enumerator_35716.hasCurrentObject ()) {
    result_result.addAssign_operation (enumerator_35716.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 862)) ;
    enumerator_35716.gotoNextObject () ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_arrayIndexListFor [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_arrayIndexListFor (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_arrayIndexListFor (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_arrayIndexListFor ("arrayIndexListFor",
                                                                   functionWithGenericHeader_arrayIndexListFor,
                                                                   & kTypeDescriptor_GALGAS_uintlist,
                                                                   1,
                                                                   functionArgs_arrayIndexListFor) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@globalConstantDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_globalConstantDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  const GALGAS_globalConstantDeclarationAST temp_0 = object ;
  result_outLocation = temp_0.readProperty_mConstantName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_globalConstantDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                                  extensionGetter_globalConstantDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_globalConstantDeclarationAST_locationForErrorSignaling (defineExtensionGetter_globalConstantDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@globalConstantDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  {
  const GALGAS_globalConstantDeclarationAST temp_0 = object ;
  const GALGAS_globalConstantDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mConstantName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 67)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_globalConstantDeclarationAST temp_3 = object ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.readProperty_mConstantTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GALGAS_globalConstantDeclarationAST temp_4 = object ;
      const GALGAS_globalConstantDeclarationAST temp_5 = object ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mConstantName (), temp_5.readProperty_mConstantTypeName () COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 70)) ;
      }
    }
  }
  const GALGAS_globalConstantDeclarationAST temp_6 = object ;
  const GALGAS_globalConstantDeclarationAST temp_7 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), temp_7.readProperty_mConstantName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 73)) ;
  {
  const GALGAS_globalConstantDeclarationAST temp_8 = object ;
  ioArgument_ioGraph.setter_addEdge (temp_8.readProperty_mConstantName (), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 74)) COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 74)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                               extensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@globalConstantDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  const GALGAS_globalConstantDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (temp_0.readProperty_mConstantName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 80)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                                           extensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@globalConstantDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_globalConstantDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_semanticContext & ioArgument_ioContext,
                                                                         GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                         GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                         GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                         GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                         GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                         GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                         GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  GALGAS_bool var_displayValue_4579 = GALGAS_bool (false) ;
  const GALGAS_globalConstantDeclarationAST temp_0 = object ;
  cEnumerator_lstringlist enumerator_4604 (temp_0.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_4604.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_4604.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("display"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4604.current_mValue (HERE).readProperty_location (), GALGAS_string ("attribute should be @display"), fixItArray2  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 100)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_displayValue_4579.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_4604.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 102)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_displayValue_4579 = GALGAS_bool (true) ;
      }
    }
    enumerator_4604.gotoNextObject () ;
  }
  GALGAS_objectIR var_expressionResult_5160 ;
  {
  const GALGAS_globalConstantDeclarationAST temp_5 = object ;
  const GALGAS_globalConstantDeclarationAST temp_6 = object ;
  const GALGAS_globalConstantDeclarationAST temp_7 = object ;
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_5.readProperty_mSourceExpression (), temp_6.readProperty_mConstantName ().readProperty_location (), temp_7.readProperty_mConstantTypeName (), var_expressionResult_5160, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 108)) ;
  }
  {
  const GALGAS_globalConstantDeclarationAST temp_8 = object ;
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (temp_8.readProperty_mConstantName (), var_expressionResult_5160, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 117)) ;
  }
  {
  const GALGAS_globalConstantDeclarationAST temp_9 = object ;
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_9.readProperty_mConstantName (), var_expressionResult_5160, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 118)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_displayValue_4579.boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_globalConstantDeclarationAST temp_11 = object ;
      inCompiler->printMessage (GALGAS_string ("Global constant '").add_operation (temp_11.readProperty_mConstantName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (GALGAS_string ("' = "), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (extensionGetter_llvmValue (var_expressionResult_5160, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_globalConstantDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                       extensionMethod_globalConstantDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_enterInContext (defineExtensionMethod_globalConstantDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildGlobalConstantMapHTMLFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildGlobalConstantMapHTMLFile (GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                             const GALGAS_lstring constinArgument_inSourceFile,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_6131 = constinArgument_inSourceFile.readProperty_string ().add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 134)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_emitGlobalConstantHTMLDumpFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringset var_firstLetterSet_6286 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 136)) ;
      cEnumerator_globalConstantMap enumerator_6307 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
      while (enumerator_6307.hasCurrentObject ()) {
        var_firstLetterSet_6286.addAssign_operation (enumerator_6307.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 138))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)) ;
        enumerator_6307.gotoNextObject () ;
      }
      GALGAS_string var_tableOfTypeString_6443 = GALGAS_string::makeEmptyString () ;
      GALGAS_char var_currentFirstLetter_6481 = GALGAS_char (TO_UNICODE (32)) ;
      cEnumerator_globalConstantMap enumerator_6508 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
      while (enumerator_6508.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_6481.objectCompare (enumerator_6508.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 143)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_currentFirstLetter_6481 = enumerator_6508.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 144)) ;
            var_tableOfTypeString_6443.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_6481.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 145)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (var_currentFirstLetter_6481.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)) ;
          }
        }
        var_tableOfTypeString_6443.plusAssign_operation(function_linkForGlobalConstant (enumerator_6508.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)) ;
        enumerator_6508.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_6928 = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 150)), inArgument_inGlobalConstantMap, var_firstLetterSet_6286, var_tableOfTypeString_6443 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 149))) ;
      GALGAS_bool joker_7172 ; // Joker input parameter
      var_typeDumpString_6928.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_6131, joker_7172, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 155)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_6131, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 157)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'constantDumpGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_constantDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_constantDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_constantDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_constantDumpGenerationTemplate_0,
  0,
  gWrapperAllDirectories_constantDumpGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'constantDumpGenerationTemplate dump'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_constantDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const GALGAS_globalConstantMap & in_GLOBAL_5F_CONSTANT_5F_MAP,
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
    "<h1>Global Constants of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</h1>\n"
    "<p>This document lists all " ;
  result << in_GLOBAL_5F_CONSTANT_5F_MAP.getter_count (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 53)).stringValue () ;
  result << " defined global constants, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_1008_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1008 (in_FIRST_5F_LETTER_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1008.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_1008.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_uint (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 56)).stringValue () ;
      result << "\">" ;
      result << enumerator_1008.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_1008.hasNextObject ()) {
        result << " - " ;
      }
      index_1008_.increment () ;
      enumerator_1008.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Constant Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">LLVM Type</td><td class=\"result_titl"
    "e\">Value</td></tr>\n" ;
  GALGAS_uint index_1393_ (0) ;
  if (in_GLOBAL_5F_CONSTANT_5F_MAP.isValid ()) {
    cEnumerator_globalConstantMap enumerator_1393 (in_GLOBAL_5F_CONSTANT_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1393.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td><a name=\"" ;
      result << enumerator_1393.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "\">" ;
      result << enumerator_1393.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "</a></td><td>..<'$" ;
      result << extensionGetter_omnibusTypeDescriptionName (enumerator_1393.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmTypeName (enumerator_1393.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmName (enumerator_1393.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td></tr>\n" ;
      index_1393_.increment () ;
      enumerator_1393.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'linkForGlobalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_linkForGlobalConstant (const GALGAS_string & constinArgument_inConstantName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)).add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_linkForGlobalConstant [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_linkForGlobalConstant (C_Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_linkForGlobalConstant (operand0,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_linkForGlobalConstant ("linkForGlobalConstant",
                                                                       functionWithGenericHeader_linkForGlobalConstant,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       1,
                                                                       functionArgs_linkForGlobalConstant) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncToolInstanceDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  {
  const GALGAS_syncToolInstanceDeclarationAST temp_0 = object ;
  const GALGAS_syncToolInstanceDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mSyncInstanceName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 46)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_syncToolInstanceDeclarationAST temp_3 = object ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.readProperty_mSyncTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GALGAS_syncToolInstanceDeclarationAST temp_4 = object ;
      const GALGAS_syncToolInstanceDeclarationAST temp_5 = object ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mSyncInstanceName (), temp_5.readProperty_mSyncTypeName () COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 48)) ;
      }
    }
  }
  const GALGAS_syncToolInstanceDeclarationAST temp_6 = object ;
  const GALGAS_syncToolInstanceDeclarationAST temp_7 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), temp_7.readProperty_mSyncInstanceName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 50)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                               extensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncToolInstanceDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  const GALGAS_syncToolInstanceDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("sync ").add_operation (temp_0.readProperty_mSyncInstanceName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                                           extensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncToolInstanceDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  const GALGAS_syncToolInstanceDeclarationAST temp_0 = object ;
  result_outLocation = temp_0.readProperty_mSyncInstanceName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                                  extensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling (defineExtensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncToolInstanceDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syncToolInstanceDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                           GALGAS_semanticContext & ioArgument_ioContext,
                                                                           GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                           GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                           GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                           GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                           GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                           GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                           GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  GALGAS_omnibusType var_optionalSyncType_4330 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_syncToolInstanceDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSyncTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_optionalSyncType_4330 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 92)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_syncToolInstanceDeclarationAST temp_2 = object ;
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_2.readProperty_mSyncTypeName (), var_optionalSyncType_4330, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 94)) ;
  }
  GALGAS_objectIR var_expressionResult_4797 ;
  {
  const GALGAS_syncToolInstanceDeclarationAST temp_3 = object ;
  const GALGAS_syncToolInstanceDeclarationAST temp_4 = object ;
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_3.readProperty_mSourceExpression (), temp_4.readProperty_mSyncInstanceName ().readProperty_location (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-sync-instance.galgas", 102)), var_expressionResult_4797, inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 97)) ;
  }
  const GALGAS_syncToolInstanceDeclarationAST temp_5 = object ;
  GALGAS_objectIR var_result_4859 = function_checkAssignmentCompatibility (ioArgument_ioContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_4797, var_optionalSyncType_4330, temp_5.readProperty_mSyncInstanceName ().readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 106)) ;
  {
  const GALGAS_syncToolInstanceDeclarationAST temp_6 = object ;
  ioArgument_ioContext.mProperty_mGlobalSyncInstanceMap.setter_insertKey (temp_6.readProperty_mSyncInstanceName (), extensionGetter_type (var_result_4859, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 116)), var_result_4859, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 114)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = extensionGetter_type (var_result_4859, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).readProperty_kind ().getter_isSyncTool (SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).operator_not (SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_syncToolInstanceDeclarationAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mSyncInstanceName ().readProperty_location (), GALGAS_string ("the type is not a synchronization tool type"), fixItArray9  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)) ;
    }
  }
  {
  const GALGAS_syncToolInstanceDeclarationAST temp_10 = object ;
  extensionSetter_insertGlobalSyncInstance (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_10.readProperty_mSyncInstanceName (), extensionGetter_type (var_result_4859, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)) ;
  }
  const GALGAS_syncToolInstanceDeclarationAST temp_11 = object ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedSyncInstance::constructor_new (temp_11.readProperty_mSyncInstanceName (), var_result_4859  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 126))  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 126)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syncToolInstanceDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                       extensionMethod_syncToolInstanceDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syncToolInstanceDeclarationAST_enterInContext (defineExtensionMethod_syncToolInstanceDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedSyncInstance semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_decoratedSyncInstance_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedSyncInstance * object = (const cPtr_decoratedSyncInstance *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedSyncInstance) ;
  {
  const GALGAS_decoratedSyncInstance temp_0 = object ;
  const GALGAS_decoratedSyncInstance temp_1 = object ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalSyncInstanceMap.setter_insertKey (temp_0.readProperty_mSyncInstanceName (), temp_1.readProperty_mExpressionGeneratedCode (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 145)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_decoratedSyncInstance_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedSyncInstance.mSlotID,
                                         extensionMethod_decoratedSyncInstance_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_decoratedSyncInstance_semanticAnalysis (defineExtensionMethod_decoratedSyncInstance_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@implementedDriverAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_implementedDriverAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  {
  const GALGAS_implementedDriverAST temp_0 = object ;
  const GALGAS_implementedDriverAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mDriverName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 165)) ;
  }
  {
  const GALGAS_implementedDriverAST temp_2 = object ;
  const GALGAS_implementedDriverAST temp_3 = object ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mDriverName (), function_omnibusTypeSpecificNameForDriver (temp_3.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 166)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 166)) ;
  }
  const GALGAS_implementedDriverAST temp_4 = object ;
  cEnumerator_lstringlist enumerator_6191 (temp_4.readProperty_mDriverDependanceList (), kENUMERATION_UP) ;
  while (enumerator_6191.hasCurrentObject ()) {
    {
    const GALGAS_implementedDriverAST temp_5 = object ;
    ioArgument_ioGraph.setter_addEdge (temp_5.readProperty_mDriverName (), enumerator_6191.current_mValue (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 168)) ;
    }
    enumerator_6191.gotoNextObject () ;
  }
  {
  const GALGAS_implementedDriverAST temp_6 = object ;
  ioArgument_ioGraph.setter_addEdge (temp_6.readProperty_mDriverName (), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 170)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 170)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_implementedDriverAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                               extensionMethod_implementedDriverAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_implementedDriverAST_enterInPrecedenceGraph (defineExtensionMethod_implementedDriverAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@implementedDriverAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  const GALGAS_implementedDriverAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("driver ").add_operation (temp_0.readProperty_mDriverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 176)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                                           extensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_implementedDriverAST_keyRepresentationForErrorSignaling (defineExtensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@implementedDriverAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_implementedDriverAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  const GALGAS_implementedDriverAST temp_0 = object ;
  result_outLocation = temp_0.readProperty_mDriverName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_implementedDriverAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                                  extensionGetter_implementedDriverAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_implementedDriverAST_locationForErrorSignaling (defineExtensionGetter_implementedDriverAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'omnibusTypeSpecificNameForDriver'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_omnibusTypeSpecificNameForDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("driver.").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 190)), constinArgument_inDriverName.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 190)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_omnibusTypeSpecificNameForDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_omnibusTypeSpecificNameForDriver (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_omnibusTypeSpecificNameForDriver (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusTypeSpecificNameForDriver ("omnibusTypeSpecificNameForDriver",
                                                                                  functionWithGenericHeader_omnibusTypeSpecificNameForDriver,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_omnibusTypeSpecificNameForDriver) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmDriverNameFromName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmDriverNameFromName (const GALGAS_lstring & constinArgument_inDriverName,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("driver$").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 196)), constinArgument_inDriverName.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 196)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmDriverNameFromName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmDriverNameFromName ("llvmDriverNameFromName",
                                                                        functionWithGenericHeader_llvmDriverNameFromName,
                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                        1,
                                                                        functionArgs_llvmDriverNameFromName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmBootRoutineNameFromDriver'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmBootRoutineNameFromDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("boot.").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 202)), constinArgument_inDriverName.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 202)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmBootRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmBootRoutineNameFromDriver (C_Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GALGAS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmBootRoutineNameFromDriver (operand0,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmBootRoutineNameFromDriver ("llvmBootRoutineNameFromDriver",
                                                                               functionWithGenericHeader_llvmBootRoutineNameFromDriver,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               1,
                                                                               functionArgs_llvmBootRoutineNameFromDriver) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmStartupRoutineNameFromDriver'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmStartupRoutineNameFromDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("startup.").add_operation (constinArgument_inDriverName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 208)), constinArgument_inDriverName.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 208)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmStartupRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmStartupRoutineNameFromDriver (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmStartupRoutineNameFromDriver (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmStartupRoutineNameFromDriver ("llvmStartupRoutineNameFromDriver",
                                                                                  functionWithGenericHeader_llvmStartupRoutineNameFromDriver,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmStartupRoutineNameFromDriver) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'retainRequiredDrivers'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_retainRequiredDrivers (GALGAS_ast & ioArgument_ioAST,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist var_driverWithNoDependenceList_9344 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 233)) ;
  cEnumerator_driverDeclarationListAST enumerator_9368 (ioArgument_ioAST.readProperty_mDriverDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_9368.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_9368.current_mDriver (HERE).readProperty_mDriverDependanceList ().getter_length (SOURCE_FILE ("declaration-driver.galgas", 235)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_driverWithNoDependenceList_9344.addAssign_operation (enumerator_9368.current_mDriver (HERE).readProperty_mDriverName ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 236)) ;
      }
    }
    enumerator_9368.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_driverWithNoDependenceList_9344.getter_length (SOURCE_FILE ("declaration-driver.galgas", 239)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_9615 (var_driverWithNoDependenceList_9344, kENUMERATION_UP) ;
      while (enumerator_9615.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_9615.current_mValue (HERE).readProperty_location (), GALGAS_string ("almost one driver can have no dependence"), fixItArray2  COMMA_SOURCE_FILE ("declaration-driver.galgas", 241)) ;
        enumerator_9615.gotoNextObject () ;
      }
    }
  }
  GALGAS_instanciedDriverMap var_instanciedDriverMap_9811 = GALGAS_instanciedDriverMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 245)) ;
  cEnumerator_driverInstanciationListAST enumerator_9839 (ioArgument_ioAST.readProperty_mRequiredDriverListAST (), kENUMERATION_UP) ;
  while (enumerator_9839.hasCurrentObject ()) {
    GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_9947 = GALGAS_driverInstanciationArgumentMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 247)) ;
    cEnumerator_driverInstanciationArgumentListAST enumerator_9982 (enumerator_9839.current_mDriverInstanciationArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_9982.hasCurrentObject ()) {
      {
      var_driverInstanciationArgumentMap_9947.setter_insertKey (enumerator_9982.current_mSelector (HERE), enumerator_9982.current_mExpression (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 249)) ;
      }
      enumerator_9982.gotoNextObject () ;
    }
    {
    var_instanciedDriverMap_9811.setter_insertKey (enumerator_9839.current_mDriverName (HERE), var_driverInstanciationArgumentMap_9947, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 251)) ;
    }
    enumerator_9839.gotoNextObject () ;
  }
  GALGAS_stringset var_validDriverNames_10272 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 254)) ;
  cEnumerator_driverDeclarationListAST enumerator_10351 (ioArgument_ioAST.readProperty_mDriverDeclarationListAST (), kENUMERATION_UP) ;
  while (enumerator_10351.hasCurrentObject ()) {
    var_validDriverNames_10272.addAssign_operation (enumerator_10351.current_mDriver (HERE).readProperty_mDriverName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 256)) ;
    GALGAS_bool var_driverIsInstancied_10473 = var_instanciedDriverMap_9811.getter_hasKey (enumerator_10351.current_mDriver (HERE).readProperty_mDriverName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-driver.galgas", 257)) ;
    GALGAS_structurePropertyListAST var_driverPropertyListAST_10640 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 259)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_driverIsInstancied_10473.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_10774 ;
        var_instanciedDriverMap_9811.method_searchKey (enumerator_10351.current_mDriver (HERE).readProperty_mDriverName (), var_driverInstanciationArgumentMap_10774, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 261)) ;
        GALGAS_stringset var_validArgumentSet_10873 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 263)) ;
        cEnumerator_structurePropertyListAST enumerator_10964 (enumerator_10351.current_mDriver (HERE).readProperty_mPropertyListAST (), kENUMERATION_UP) ;
        while (enumerator_10964.hasCurrentObject ()) {
          GALGAS_propertyKindAST var_driverPropertyKind_11048 ;
          switch (enumerator_10964.current_mPropertyKind (HERE).enumValue ()) {
          case GALGAS_propertyKindAST::kNotBuilt:
            break ;
          case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
            {
              GALGAS_expressionAST var_initExpression_11206 ;
              var_driverInstanciationArgumentMap_10774.method_searchKey (enumerator_10964.current_mPropertyName (HERE), var_initExpression_11206, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 268)) ;
              var_validArgumentSet_10873.addAssign_operation (enumerator_10964.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 269)) ;
              var_driverPropertyKind_11048 = GALGAS_propertyKindAST::constructor_initializedStoredProperty (var_initExpression_11206  COMMA_SOURCE_FILE ("declaration-driver.galgas", 270)) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
            {
              GALGAS_expressionAST var_initExpression_11480 ;
              var_driverInstanciationArgumentMap_10774.method_searchKey (enumerator_10964.current_mPropertyName (HERE), var_initExpression_11480, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 272)) ;
              var_validArgumentSet_10873.addAssign_operation (enumerator_10964.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 273)) ;
              var_driverPropertyKind_11048 = GALGAS_propertyKindAST::constructor_initializedConstantProperty (var_initExpression_11480  COMMA_SOURCE_FILE ("declaration-driver.galgas", 274)) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
            {
              var_driverPropertyKind_11048 = enumerator_10964.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
            {
              var_driverPropertyKind_11048 = enumerator_10964.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
            {
              var_driverPropertyKind_11048 = enumerator_10964.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
            {
              var_driverPropertyKind_11048 = enumerator_10964.current_mPropertyKind (HERE) ;
            }
            break ;
          }
          var_driverPropertyListAST_10640.addAssign_operation (enumerator_10964.current_mPropertyName (HERE), enumerator_10964.current_mPropertyAttributeList (HERE), GALGAS_propertyVisibility::constructor_isPrivate (SOURCE_FILE ("declaration-driver.galgas", 287)), enumerator_10964.current_mPropertyTypeName (HERE), var_driverPropertyKind_11048  COMMA_SOURCE_FILE ("declaration-driver.galgas", 284)) ;
          enumerator_10964.gotoNextObject () ;
        }
        cEnumerator_stringset enumerator_12270 (var_driverInstanciationArgumentMap_10774.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 292)).substract_operation (var_validArgumentSet_10873, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 292)), kENUMERATION_UP) ;
        while (enumerator_12270.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_driverInstanciationArgumentMap_10774.getter_locationForKey (enumerator_12270.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 293)), GALGAS_string ("invalid selector"), fixItArray4  COMMA_SOURCE_FILE ("declaration-driver.galgas", 293)) ;
          enumerator_12270.gotoNextObject () ;
        }
      }
    }
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (function_omnibusTypeSpecificNameForDriver (enumerator_10351.current_mDriver (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 298)), function_omnibusTypeSpecificNameForDriver (enumerator_10351.current_mDriver (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 299)), function_llvmDriverNameFromName (enumerator_10351.current_mDriver (HERE).readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 300)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 301)), GALGAS_bool (false), var_driverPropertyListAST_10640, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 297))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 297)) ;
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_implementedDriverAST::constructor_new (enumerator_10351.current_mDriver (HERE).readProperty_mDriverName (), enumerator_10351.current_mDriver (HERE).readProperty_mDriverDependanceList (), var_driverIsInstancied_10473, enumerator_10351.current_mDriver (HERE).readProperty_mBootLocation (), enumerator_10351.current_mDriver (HERE).readProperty_mBootInstructionList (), enumerator_10351.current_mDriver (HERE).readProperty_mBootEndLocation (), enumerator_10351.current_mDriver (HERE).readProperty_mStartupLocation (), enumerator_10351.current_mDriver (HERE).readProperty_mStartupInstructionList (), enumerator_10351.current_mDriver (HERE).readProperty_mStartupEndLocation ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 306))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 306)) ;
    enumerator_10351.gotoNextObject () ;
  }
  ioArgument_ioAST.setter_setMDriverDeclarationListAST (GALGAS_driverDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 318)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 318)) ;
  cEnumerator_stringset enumerator_13391 (var_instanciedDriverMap_9811.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 320)).substract_operation (var_validDriverNames_10272, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 320)), kENUMERATION_UP) ;
  while (enumerator_13391.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (var_instanciedDriverMap_9811.getter_locationForKey (enumerator_13391.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 321)), GALGAS_string ("undefined driver"), fixItArray5  COMMA_SOURCE_FILE ("declaration-driver.galgas", 321)) ;
    enumerator_13391.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@implementedDriverAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_implementedDriverAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                 GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                                 GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                 GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                 GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  GALGAS_omnibusType var_driverType_14601 ;
  const GALGAS_implementedDriverAST temp_0 = object ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 340)), var_driverType_14601, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 339)) ;
  {
  const GALGAS_implementedDriverAST temp_1 = object ;
  const GALGAS_implementedDriverAST temp_2 = object ;
  extensionSetter_insertDriver (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_1.readProperty_mDriverName (), temp_2.readProperty_mIsInstancied (), var_driverType_14601, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 343)) ;
  }
  const GALGAS_implementedDriverAST temp_3 = object ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedRequiredDriver::constructor_new (temp_3.readProperty_mDriverName ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 345))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 345)) ;
  const GALGAS_implementedDriverAST temp_4 = object ;
  const GALGAS_implementedDriverAST temp_5 = object ;
  const GALGAS_implementedDriverAST temp_6 = object ;
  const GALGAS_implementedDriverAST temp_7 = object ;
  const GALGAS_implementedDriverAST temp_8 = object ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_omnibusTypeSpecificNameForDriver (temp_4.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 348)), GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-driver.galgas", 349)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-driver.galgas", 351)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-driver.galgas", 354)), function_llvmBootRoutineNameFromDriver (temp_5.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 355)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 356)), GALGAS_bool (true), temp_6.readProperty_mBootInstructionList (), temp_7.readProperty_mBootEndLocation (), GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), temp_8.readProperty_mBootLocation ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 360))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 347)) ;
  const GALGAS_implementedDriverAST temp_9 = object ;
  const GALGAS_implementedDriverAST temp_10 = object ;
  const GALGAS_implementedDriverAST temp_11 = object ;
  const GALGAS_implementedDriverAST temp_12 = object ;
  const GALGAS_implementedDriverAST temp_13 = object ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_omnibusTypeSpecificNameForDriver (temp_9.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 363)), GALGAS_mode::constructor_startupMode (SOURCE_FILE ("declaration-driver.galgas", 364)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-driver.galgas", 366)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-driver.galgas", 369)), function_llvmStartupRoutineNameFromDriver (temp_10.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 370)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 371)), GALGAS_bool (true), temp_11.readProperty_mStartupInstructionList (), temp_12.readProperty_mStartupEndLocation (), GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), temp_13.readProperty_mStartupLocation ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 375))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 362)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_implementedDriverAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                       extensionMethod_implementedDriverAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_implementedDriverAST_enterInContext (defineExtensionMethod_implementedDriverAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedRequiredDriver semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_decoratedRequiredDriver_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedRequiredDriver * object = (const cPtr_decoratedRequiredDriver *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedRequiredDriver) ;
  GALGAS_omnibusType var_driverType_16937 ;
  const GALGAS_decoratedRequiredDriver temp_0 = object ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 394)), var_driverType_16937, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 393)) ;
  const GALGAS_decoratedRequiredDriver temp_1 = object ;
  GALGAS_lstring var_typeName_16956 = GALGAS_lstring::constructor_new (var_driverType_16937.readProperty_omnibusTypeDescriptionName (), temp_1.readProperty_mDriverName ().readProperty_location ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 397)) ;
  GALGAS_constructorMap var_constructorMap_17103 ;
  constinArgument_inContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_16956, var_constructorMap_17103, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 398)) ;
  GALGAS_constructorValue var_constructorValue_17198 ;
  const GALGAS_decoratedRequiredDriver temp_2 = object ;
  GALGAS_constructorSignature joker_17175 ; // Joker input parameter
  var_constructorMap_17103.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("()"), temp_2.readProperty_mDriverName ().readProperty_location ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 399)), joker_17175, var_constructorValue_17198, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 399)) ;
  GALGAS_sortedOperandIRList var_sortedOperandList_17270 ;
  var_constructorValue_17198.method_structure (var_sortedOperandList_17270, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 400)) ;
  GALGAS_operandIRList var_initialValueList_17309 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 401)) ;
  cEnumerator_sortedOperandIRList enumerator_17336 (var_sortedOperandList_17270, kENUMERATION_UP) ;
  while (enumerator_17336.hasCurrentObject ()) {
    var_initialValueList_17309.addAssign_operation (enumerator_17336.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 403)) ;
    enumerator_17336.gotoNextObject () ;
  }
  const GALGAS_decoratedRequiredDriver temp_3 = object ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mDriverList.addAssign_operation (temp_3.readProperty_mDriverName (), var_driverType_16937, var_initialValueList_17309  COMMA_SOURCE_FILE ("declaration-driver.galgas", 405)) ;
  const GALGAS_decoratedRequiredDriver temp_4 = object ;
  ioArgument_ioTemporaries.mProperty_mInitializedDriverSet.addAssign_operation (temp_4.readProperty_mDriverName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-driver.galgas", 410)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_decoratedRequiredDriver_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedRequiredDriver.mSlotID,
                                         extensionMethod_decoratedRequiredDriver_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_decoratedRequiredDriver_semanticAnalysis (defineExtensionMethod_decoratedRequiredDriver_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListAST enterExtension'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_staticListAST_enterExtension (const cPtr_abstractDeclarationAST * inObject,
                                                          GALGAS_extendStaticArrayDeclarationDictAST & ioArgument_ioExtendStaticArrayDeclarationAST,
                                                          GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_staticListAST temp_1 = object ;
    test_0 = ioArgument_ioExtendStaticArrayDeclarationAST.getter_hasKey (temp_1.readProperty_mStaticListName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 161)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_staticListValueListAST var_elements_6322 ;
      {
      const GALGAS_staticListAST temp_2 = object ;
      ioArgument_ioExtendStaticArrayDeclarationAST.setter_removeKey (temp_2.readProperty_mStaticListName ().readProperty_string (), var_elements_6322, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 162)) ;
      }
      const GALGAS_staticListAST temp_3 = object ;
      const GALGAS_staticListAST temp_4 = object ;
      const GALGAS_staticListAST temp_5 = object ;
      outArgument_outNewDeclaration = GALGAS_staticListAST::constructor_new (temp_3.readProperty_mStaticListName (), temp_4.readProperty_mPropertyList (), temp_5.readProperty_mValueList ().add_operation (var_elements_6322, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 166))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 163)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_staticListAST temp_6 = object ;
    outArgument_outNewDeclaration = temp_6 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_staticListAST_enterExtension (void) {
  enterExtensionMethod_enterExtension (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                       extensionMethod_staticListAST_enterExtension) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_staticListAST_enterExtension (defineExtensionMethod_staticListAST_enterExtension, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_staticListAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  {
  const GALGAS_staticListAST temp_0 = object ;
  const GALGAS_staticListAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mStaticListName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 179)) ;
  }
  {
  const GALGAS_staticListAST temp_2 = object ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mStaticListName (), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 180)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 180)) ;
  }
  const GALGAS_staticListAST temp_3 = object ;
  cEnumerator_staticListPropertyListAST enumerator_7170 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_7170.hasCurrentObject ()) {
    switch (enumerator_7170.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_7327 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_7170.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_7258_propertyTypeName = extractPtr_7327->mAssociatedValue0 ;
        {
        const GALGAS_staticListAST temp_4 = object ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mStaticListName (), extractedValue_7258_propertyTypeName COMMA_SOURCE_FILE ("declaration-static-list.galgas", 185)) ;
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_7643 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_7170.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentListAST extractedValue_7389_formalArgs = extractPtr_7643->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_7409_returnType = extractPtr_7643->mAssociatedValue2 ;
        cEnumerator_routineFormalArgumentListAST enumerator_7452 (extractedValue_7389_formalArgs, kENUMERATION_UP) ;
        while (enumerator_7452.hasCurrentObject ()) {
          {
          ioArgument_ioGraph.setter_noteNode (enumerator_7452.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 188)) ;
          }
          enumerator_7452.gotoNextObject () ;
        }
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsNotEqual, extractedValue_7409_returnType.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            const GALGAS_staticListAST temp_6 = object ;
            ioArgument_ioGraph.setter_addEdge (temp_6.readProperty_mStaticListName (), extractedValue_7409_returnType COMMA_SOURCE_FILE ("declaration-static-list.galgas", 191)) ;
            }
          }
        }
      }
      break ;
    }
    enumerator_7170.gotoNextObject () ;
  }
  const GALGAS_staticListAST temp_7 = object ;
  cEnumerator_staticListValueListAST enumerator_7733 (temp_7.readProperty_mValueList (), kENUMERATION_UP) ;
  while (enumerator_7733.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_7775 (enumerator_7733.current_mElement (HERE), kENUMERATION_UP) ;
    while (enumerator_7775.hasCurrentObject ()) {
      switch (enumerator_7775.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_7937 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_7775.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_7851_exp = extractPtr_7937->mAssociatedValue0 ;
          const GALGAS_staticListAST temp_8 = object ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_7851_exp.ptr (), temp_8.readProperty_mStaticListName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 200)) ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_8131 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_7775.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_routineFormalArgumentListAST extractedValue_8001_formalArgs = extractPtr_8131->mAssociatedValue1 ;
          cEnumerator_routineFormalArgumentListAST enumerator_8046 (extractedValue_8001_formalArgs, kENUMERATION_UP) ;
          while (enumerator_8046.hasCurrentObject ()) {
            {
            ioArgument_ioGraph.setter_noteNode (enumerator_8046.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 203)) ;
            }
            enumerator_8046.gotoNextObject () ;
          }
        }
        break ;
      }
      enumerator_7775.gotoNextObject () ;
    }
    enumerator_7733.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_staticListAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                               extensionMethod_staticListAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_staticListAST_enterInPrecedenceGraph (defineExtensionMethod_staticListAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@staticListAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_staticListAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  const GALGAS_staticListAST temp_0 = object ;
  result_result = temp_0.readProperty_mStaticListName ().readProperty_location () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_staticListAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                                  extensionGetter_staticListAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_staticListAST_locationForErrorSignaling (defineExtensionGetter_staticListAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@staticListAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_staticListAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  const GALGAS_staticListAST temp_0 = object ;
  result_result = GALGAS_string ("staticlist ").add_operation (temp_0.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 219)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_staticListAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                                           extensionGetter_staticListAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_staticListAST_keyRepresentationForErrorSignaling (defineExtensionGetter_staticListAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_omnibusNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist ").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 229)), constinArgument_inStaticListName.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 229)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_omnibusNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_omnibusNameForStaticListType (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_omnibusNameForStaticListType (operand0,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusNameForStaticListType ("omnibusNameForStaticListType",
                                                                              functionWithGenericHeader_omnibusNameForStaticListType,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              1,
                                                                              functionArgs_omnibusNameForStaticListType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist-").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 235)), constinArgument_inStaticListName.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 235)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForStaticListType (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmNameForStaticListType (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListType ("llvmNameForStaticListType",
                                                                           functionWithGenericHeader_llvmNameForStaticListType,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           1,
                                                                           functionArgs_llvmNameForStaticListType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListElementType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_omnibusNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist element ").add_operation (constinArgument_inStaticListName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 241)), constinArgument_inStaticListName.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 241)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_omnibusNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_omnibusNameForStaticListElementType (C_Compiler * inCompiler,
                                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_omnibusNameForStaticListElementType (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusNameForStaticListElementType ("omnibusNameForStaticListElementType",
                                                                                     functionWithGenericHeader_omnibusNameForStaticListElementType,
                                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                                     1,
                                                                                     functionArgs_omnibusNameForStaticListElementType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListElementType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist-element-type-").add_operation (constinArgument_inStaticListName.readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 247)), constinArgument_inStaticListName.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 247)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListElementType ("llvmNameForStaticListElementType",
                                                                                  functionWithGenericHeader_llvmNameForStaticListElementType,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmNameForStaticListElementType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_staticListAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                          GALGAS_semanticContext & ioArgument_ioContext,
                                                          GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                          GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                          GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                          GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                          GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  GALGAS_propertyList var_propertyList_11465 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 278)) ;
  GALGAS_stringset var_propertyNameSet_11548 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 280)) ;
  const GALGAS_staticListAST temp_0 = object ;
  GALGAS_lstring var_omnibusElementTypeName_11582 = function_omnibusNameForStaticListElementType (temp_0.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 281)) ;
  GALGAS_unifiedTypeMapEntry var_elementTypeProxy_11724 ;
  {
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusElementTypeName_11582, var_elementTypeProxy_11724, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 282)) ;
  }
  const GALGAS_staticListAST temp_1 = object ;
  cEnumerator_staticListPropertyListAST enumerator_11845 (temp_1.readProperty_mPropertyList (), kENUMERATION_UP) ;
  GALGAS_uint index_11826 ((uint32_t) 0) ;
  while (enumerator_11845.hasCurrentObject ()) {
    switch (enumerator_11845.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_12501 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_11845.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_11949_propertyTypeName = extractPtr_12501->mAssociatedValue0 ;
        GALGAS_omnibusType var_propertyType_11975 = extensionGetter_type (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), extractedValue_11949_propertyTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 287)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_propertyNameSet_11548.getter_hasKey (enumerator_11845.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-static-list.galgas", 288)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_11845.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("duplicated property name"), fixItArray3  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 289)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_propertyNameSet_11548.addAssign_operation (enumerator_11845.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 291)) ;
          var_propertyList_11465.addAssign_operation (enumerator_11845.current_mPropertyName (HERE).readProperty_string (), var_propertyType_11975  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 292)) ;
          {
          const GALGAS_staticListAST temp_4 = object ;
          extensionSetter_insertGetter (ioArgument_ioContext, function_omnibusNameForStaticListElementType (temp_4.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 294)), enumerator_11845.current_mPropertyName (HERE), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("declaration-static-list.galgas", 296)), GALGAS_propertyGetterKind::constructor_storedProperty (var_propertyType_11975, index_11826  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 293)) ;
          }
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_14256 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_11845.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_12531_mode = extractPtr_14256->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentListAST extractedValue_12572_formalArgs = extractPtr_14256->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_12596_returnTypeName = extractPtr_14256->mAssociatedValue2 ;
        const GALGAS_staticListAST temp_5 = object ;
        GALGAS_lstring var_routineLLVMName_12652 = function_routineMangledNameFromAST (function_llvmNameForStaticListElementType (temp_5.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 303)).readProperty_string (), enumerator_11845.current_mPropertyName (HERE), extractedValue_12572_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 302)) ;
        GALGAS_routineTypedSignature var_signature_12894 ;
        {
        routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_12572_formalArgs, var_signature_12894, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 308)) ;
        }
        GALGAS_unifiedTypeMapEntry temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, extractedValue_12596_returnTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 310)) ;
        }else if (kBoolFalse == test_7) {
          temp_6 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), extractedValue_12596_returnTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 312)) ;
        }
        GALGAS_unifiedTypeMapEntry var_returnTypeProxy_12942 = temp_6 ;
        GALGAS_omnibusType var_propertyType_13133 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 316)), GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("declaration-static-list.galgas", 317)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_function (extractedValue_12531_mode, var_signature_12894, var_returnTypeProxy_12942  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 319)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 315)) ;
        var_propertyList_11465.addAssign_operation (enumerator_11845.current_mPropertyName (HERE).readProperty_string (), var_propertyType_13133  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 327)) ;
        const GALGAS_staticListAST temp_8 = object ;
        GALGAS_lstring var_routineMangledName_13552 = GALGAS_lstring::constructor_new (function_omnibusNameForStaticListElementType (temp_8.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 330)).readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 330)).add_operation (enumerator_11845.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 330)).add_operation (extensionGetter_routineSignature (extractedValue_12572_formalArgs, enumerator_11845.current_mPropertyName (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 330)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 330)), enumerator_11845.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 329)) ;
        {
        GALGAS_routineLLVMNameDict temp_9 = GALGAS_routineLLVMNameDict::constructor_emptyDict (SOURCE_FILE ("declaration-static-list.galgas", 338)) ;
        temp_9.addAssign_operation (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-static-list.galgas", 338)), var_routineLLVMName_12652.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 338)) ;
        ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_13552, GALGAS_bool (true), var_signature_12894, var_returnTypeProxy_12942, temp_9, GALGAS_bool (false), GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-static-list.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 333)) ;
        }
        ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_staticListIndirectRoutineIR::constructor_new (var_routineLLVMName_12652, GALGAS_bool (true), GALGAS_bool (true), var_elementTypeProxy_11724, var_signature_12894, var_returnTypeProxy_12942, index_11826  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 343))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 343)) ;
      }
      break ;
    }
    enumerator_11845.gotoNextObject () ;
    index_11826.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 284)) ;
  }
  {
  const GALGAS_staticListAST temp_10 = object ;
  ioArgument_ioContext.mProperty_mStaticListMap.setter_insertKey (temp_10.readProperty_mStaticListName (), var_propertyList_11465, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 354)) ;
  }
  const GALGAS_staticListAST temp_11 = object ;
  const GALGAS_staticListAST temp_12 = object ;
  GALGAS_omnibusType var_elementType_14466 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 357)), GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("declaration-static-list.galgas", 358)), function_omnibusNameForStaticListElementType (temp_11.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 359)).readProperty_string (), GALGAS_typeKind::constructor_structure (var_propertyList_11465  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 360)), function_llvmNameForStaticListElementType (temp_12.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 361)).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 356)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusElementTypeName_11582, var_elementType_14466, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 363)) ;
  }
  GALGAS_stringlist var_stringValueList_14969 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 365)) ;
  const GALGAS_staticListAST temp_13 = object ;
  cEnumerator_staticListValueListAST enumerator_14991 (temp_13.readProperty_mValueList (), kENUMERATION_UP) ;
  while (enumerator_14991.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (kIsNotEqual, var_propertyList_11465.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 367)).objectCompare (enumerator_14991.current_mElement (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 367)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GALGAS_staticListAST temp_15 = object ;
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mStaticListName ().readProperty_location (), var_propertyList_11465.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 369)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 369)).add_operation (GALGAS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 369)).add_operation (enumerator_14991.current_mElement (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 370)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 369)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 370)), fixItArray16  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 368)) ;
      }
    }
    if (kBoolFalse == test_14) {
      GALGAS_string var_staticValue_15247 = GALGAS_string ("{") ;
      cEnumerator_extendStaticListElementAST enumerator_15281 (enumerator_14991.current_mElement (HERE), kENUMERATION_UP) ;
      cEnumerator_propertyList enumerator_15310 (var_propertyList_11465, kENUMERATION_UP) ;
      while (enumerator_15281.hasCurrentObject () && enumerator_15310.hasCurrentObject ()) {
        switch (enumerator_15281.current_mExpression (HERE).enumValue ()) {
        case GALGAS_extendStaticListExpressionAST::kNotBuilt:
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_15983 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_15281.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_15397_exp = extractPtr_15983->mAssociatedValue0 ;
            enumGalgasBool test_17 = kBoolTrue ;
            if (kBoolTrue == test_17) {
              test_17 = enumerator_15310.current_mType (HERE).readProperty_kind ().getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 376)).boolEnum () ;
              if (kBoolTrue == test_17) {
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (enumerator_15281.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray18  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 377)) ;
              }
            }
            if (kBoolFalse == test_17) {
              GALGAS_objectIR var_expressionResult_15827 ;
              {
              routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_15397_exp, enumerator_15281.current_mEndOfExpression (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 384)), var_expressionResult_15827, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 379)) ;
              }
              var_staticValue_15247.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15310.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 388)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 388)).add_operation (extensionGetter_llvmName (var_expressionResult_15827, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 388)) ;
            }
          }
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_function:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_18213 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_15281.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_16034_functionName = extractPtr_18213->mAssociatedValue0 ;
            const GALGAS_routineFormalArgumentListAST extractedValue_16075_formalArgs = extractPtr_18213->mAssociatedValue1 ;
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = enumerator_15310.current_mType (HERE).readProperty_kind ().getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 391)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 391)).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <C_FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (enumerator_15281.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray20  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 392)) ;
              }
            }
            if (kBoolFalse == test_19) {
              GALGAS_mode var_mode_16283 ;
              GALGAS_routineTypedSignature var_functionSignature_16330 ;
              GALGAS_unifiedTypeMapEntry var_functionReturnTypeProxy_16389 ;
              enumerator_15310.current_mType (HERE).readProperty_kind ().method_function (var_mode_16283, var_functionSignature_16330, var_functionReturnTypeProxy_16389, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 394)) ;
              GALGAS_lstring var_argumentSignature_16437 = extensionGetter_routineSignature (extractedValue_16075_formalArgs, extractedValue_16034_functionName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 399)) ;
              GALGAS_lstring var_functionMangledName_16519 = GALGAS_lstring::constructor_new (extractedValue_16034_functionName.readProperty_string ().add_operation (var_argumentSignature_16437.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 400)), extractedValue_16034_functionName.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 400)) ;
              GALGAS_bool var_candidateIsPublic_16715 ;
              GALGAS_routineTypedSignature var_candidateSignature_16753 ;
              GALGAS_unifiedTypeMapEntry var_candidateReturnTypeProxy_16797 ;
              GALGAS_routineLLVMNameDict var_implementedModeDictionary_16870 ;
              GALGAS_bool var_implementedIsExported_16918 ;
              GALGAS_mode var_candidateMode_16958 ;
              ioArgument_ioContext.readProperty_mRoutineMap ().method_searchKey (var_functionMangledName_16519, var_candidateIsPublic_16715, var_candidateSignature_16753, var_candidateReturnTypeProxy_16797, var_implementedModeDictionary_16870, var_implementedIsExported_16918, var_candidateMode_16958, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 401)) ;
              GALGAS_string var_routineLLVMName_17030 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_16870, var_mode_16283, extractedValue_16034_functionName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 411)) ;
              enumGalgasBool test_21 = kBoolTrue ;
              if (kBoolTrue == test_21) {
                GALGAS_bool test_22 = GALGAS_bool (kIsEqual, var_functionReturnTypeProxy_16389.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 412)))) ;
                if (kBoolTrue == test_22.boolEnum ()) {
                  test_22 = GALGAS_bool (kIsNotEqual, var_candidateReturnTypeProxy_16797.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 412)))) ;
                }
                test_21 = test_22.boolEnum () ;
                if (kBoolTrue == test_21) {
                  TC_Array <C_FixItDescription> fixItArray23 ;
                  inCompiler->emitSemanticError (extractedValue_16034_functionName.readProperty_location (), GALGAS_string ("this function should return an $").add_operation (extensionGetter_key (var_candidateReturnTypeProxy_16797, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 413)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 413)), fixItArray23  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 413)) ;
                }
              }
              if (kBoolFalse == test_21) {
                enumGalgasBool test_24 = kBoolTrue ;
                if (kBoolTrue == test_24) {
                  GALGAS_bool test_25 = GALGAS_bool (kIsNotEqual, var_functionReturnTypeProxy_16389.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 414)))) ;
                  if (kBoolTrue == test_25.boolEnum ()) {
                    test_25 = GALGAS_bool (kIsEqual, var_candidateReturnTypeProxy_16797.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 414)))) ;
                  }
                  test_24 = test_25.boolEnum () ;
                  if (kBoolTrue == test_24) {
                    TC_Array <C_FixItDescription> fixItArray26 ;
                    inCompiler->emitSemanticError (extractedValue_16034_functionName.readProperty_location (), GALGAS_string ("this function should return no object"), fixItArray26  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 415)) ;
                  }
                }
              }
              enumGalgasBool test_27 = kBoolTrue ;
              if (kBoolTrue == test_27) {
                test_27 = GALGAS_bool (kIsNotEqual, var_functionSignature_16330.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 417)).objectCompare (var_candidateSignature_16753.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 417)))).boolEnum () ;
                if (kBoolTrue == test_27) {
                  TC_Array <C_FixItDescription> fixItArray28 ;
                  inCompiler->emitSemanticError (extractedValue_16034_functionName.readProperty_location (), GALGAS_string ("this function has ").add_operation (var_candidateSignature_16753.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 419)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 419)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 419)).add_operation (var_functionSignature_16330.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 420)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 419)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)), fixItArray28  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 418)) ;
                }
              }
              if (kBoolFalse == test_27) {
                cEnumerator_routineTypedSignature enumerator_17833 (var_functionSignature_16330, kENUMERATION_UP) ;
                cEnumerator_routineTypedSignature enumerator_17866 (var_candidateSignature_16753, kENUMERATION_UP) ;
                while (enumerator_17833.hasCurrentObject () && enumerator_17866.hasCurrentObject ()) {
                  enumGalgasBool test_29 = kBoolTrue ;
                  if (kBoolTrue == test_29) {
                    test_29 = GALGAS_bool (kIsNotEqual, enumerator_17833.current (HERE).readProperty_mTypeProxy ().objectCompare (enumerator_17866.current (HERE).readProperty_mTypeProxy ())).boolEnum () ;
                    if (kBoolTrue == test_29) {
                      TC_Array <C_FixItDescription> fixItArray30 ;
                      inCompiler->emitSemanticError (enumerator_17866.current (HERE).readProperty_mSelector ().readProperty_location (), GALGAS_string ("argument type should be $").add_operation (extensionGetter_key (enumerator_17833.current (HERE).readProperty_mTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 424)), fixItArray30  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 424)) ;
                    }
                  }
                  enumerator_17833.gotoNextObject () ;
                  enumerator_17866.gotoNextObject () ;
                }
              }
              var_staticValue_15247.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15310.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 428)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 428)).add_operation (var_routineLLVMName_17030.getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 428)) ;
            }
          }
          break ;
        }
        if (enumerator_15281.hasNextObject () && enumerator_15310.hasNextObject ()) {
          var_staticValue_15247.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 432)) ;
        }
        enumerator_15281.gotoNextObject () ;
        enumerator_15310.gotoNextObject () ;
      }
      var_staticValue_15247.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 434)) ;
      var_stringValueList_14969.addAssign_operation (var_staticValue_15247  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 435)) ;
    }
    enumerator_14991.gotoNextObject () ;
  }
  {
  const GALGAS_staticListAST temp_31 = object ;
  ioArgument_ioStaticListValueMap.setter_insertKey (temp_31.readProperty_mStaticListName (), var_stringValueList_14969, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 438)) ;
  }
  {
  const GALGAS_staticListAST temp_32 = object ;
  const GALGAS_staticListAST temp_33 = object ;
  const GALGAS_staticListAST temp_34 = object ;
  extensionSetter_insertGetter (ioArgument_ioContext, function_omnibusNameForStaticListType (temp_32.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 441)), GALGAS_lstring::constructor_new (GALGAS_string ("count"), temp_33.readProperty_mStaticListName ().readProperty_location ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 442)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("declaration-static-list.galgas", 443)), GALGAS_propertyGetterKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 444)), temp_34.readProperty_mValueList ().getter_length (SOURCE_FILE ("declaration-static-list.galgas", 444)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 444))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 444))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 440)) ;
  }
  const GALGAS_staticListAST temp_35 = object ;
  const GALGAS_staticListAST temp_36 = object ;
  GALGAS_omnibusType var_arrayType_18926 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_staticSubscript (var_elementType_14466, var_stringValueList_14969.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 448)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 448))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 448)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("declaration-static-list.galgas", 449)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("declaration-static-list.galgas", 449)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 449)), function_omnibusNameForStaticListType (temp_35.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 450)).readProperty_string (), GALGAS_typeKind::constructor_staticArrayType (var_elementType_14466, var_stringValueList_14969.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 451)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 451))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 451)), function_llvmNameForStaticListType (temp_36.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 452)).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 447)) ;
  {
  const GALGAS_staticListAST temp_37 = object ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, function_omnibusNameForStaticListType (temp_37.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 455)), var_arrayType_18926, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 454)) ;
  }
  const GALGAS_staticListAST temp_38 = object ;
  GALGAS_unifiedTypeMapEntry var_staticListType_19560 = extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), function_omnibusNameForStaticListType (temp_38.readProperty_mStaticListName (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 459)) ;
  {
  const GALGAS_staticListAST temp_39 = object ;
  const GALGAS_staticListAST temp_40 = object ;
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (temp_39.readProperty_mStaticListName (), GALGAS_objectIR::constructor_reference (extensionGetter_type (var_staticListType_19560, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 462)), function_llvmNameForGlobalVariable (temp_40.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 462))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 460)) ;
  }
  {
  const GALGAS_staticListAST temp_41 = object ;
  const GALGAS_staticListAST temp_42 = object ;
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_41.readProperty_mStaticListName (), GALGAS_objectIR::constructor_reference (extensionGetter_type (var_staticListType_19560, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 466)), function_llvmNameForGlobalVariable (temp_42.readProperty_mStaticListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 466))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 464)) ;
  }
  const GALGAS_staticListAST temp_43 = object ;
  const GALGAS_staticListAST temp_44 = object ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedStaticList::constructor_new (temp_43.readProperty_mStaticListName (), temp_44.readProperty_mValueList ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 469))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 469)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_14466.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 472)), var_propertyList_11465  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 471))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 471)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMStaticArrayTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_18926.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 476)), var_elementType_14466, var_stringValueList_14969.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 478)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 478))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 475))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 475)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_staticListAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                       extensionMethod_staticListAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_staticListAST_enterInContext (defineExtensionMethod_staticListAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedStaticList semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_decoratedStaticList_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                  const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedStaticList * object = (const cPtr_decoratedStaticList *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedStaticList) ;
  GALGAS_stringset var_invokedFunctionSet_21747 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 507)) ;
  const GALGAS_decoratedStaticList temp_0 = object ;
  cEnumerator_staticListValueListAST enumerator_21769 (temp_0.readProperty_mValueList (), kENUMERATION_UP) ;
  while (enumerator_21769.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_21811 (enumerator_21769.current_mElement (HERE), kENUMERATION_UP) ;
    while (enumerator_21811.hasCurrentObject ()) {
      switch (enumerator_21811.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_21899 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_21811.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_21896_exp = extractPtr_21899->mAssociatedValue0 ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_22200 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_21811.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_21942_functionName = extractPtr_22200->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentListAST extractedValue_21983_formalArgs = extractPtr_22200->mAssociatedValue1 ;
          GALGAS_lstring var_routineMangledName_22049 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_21942_functionName, extractedValue_21983_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 514)) ;
          var_invokedFunctionSet_21747.addAssign_operation (var_routineMangledName_22049.readProperty_string ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 519)) ;
        }
        break ;
      }
      enumerator_21811.gotoNextObject () ;
    }
    enumerator_21769.gotoNextObject () ;
  }
  {
  const GALGAS_decoratedStaticList temp_1 = object ;
  ioArgument_ioTemporaries.mProperty_mStaticArrayMapForTemporaries.setter_insertKey (temp_1.readProperty_mStaticListName (), var_invokedFunctionSet_21747, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 523)) ;
  }
  {
  const GALGAS_decoratedStaticList temp_2 = object ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate.setter_insertKey (temp_2.readProperty_mStaticListName (), var_invokedFunctionSet_21747, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 524)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_decoratedStaticList_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedStaticList.mSlotID,
                                         extensionMethod_decoratedStaticList_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_decoratedStaticList_semanticAnalysis (defineExtensionMethod_decoratedStaticList_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListIndirectRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                            GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListIndirectRoutineIR * object = (const cPtr_staticListIndirectRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_staticListIndirectRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 574)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_staticListIndirectRoutineIR temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mReturnTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 575)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 576)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_staticListIndirectRoutineIR temp_2 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 578)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 578)) ;
  }
  const GALGAS_staticListIndirectRoutineIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 580)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 580)) ;
  const GALGAS_staticListIndirectRoutineIR temp_4 = object ;
  GALGAS_string var_receiverLLVMTypeName_24793 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_4.readProperty_mStaticListElementType (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 581)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 581)) ;
  GALGAS_bool var_first_24857 = GALGAS_bool (true) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_24793.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_24793.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 584)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 584)) ;
      var_first_24857 = GALGAS_bool (false) ;
    }
  }
  const GALGAS_staticListIndirectRoutineIR temp_6 = object ;
  cEnumerator_routineTypedSignature enumerator_25059 (temp_6.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_25059.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_first_24857.boolEnum () ;
      if (kBoolTrue == test_7) {
        var_first_24857 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 591)) ;
    }
    switch (enumerator_25059.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25059.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 595)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 595)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 595)).add_operation (enumerator_25059.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 595)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 595)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25059.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 597)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 597)).add_operation (GALGAS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 597)).add_operation (enumerator_25059.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 597)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 597)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_25059.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 599)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 599)).add_operation (GALGAS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 599)).add_operation (enumerator_25059.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 599)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 599)) ;
      }
      break ;
    }
    enumerator_25059.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 602)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 602)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 602)) ;
  GALGAS_string var_llvmFunctionTypeName_25760 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_staticListIndirectRoutineIR temp_9 = object ;
    test_8 = GALGAS_bool (kIsEqual, temp_9.readProperty_mReturnTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 605)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_llvmFunctionTypeName_25760 = GALGAS_string ("void") ;
    }
  }
  if (kBoolFalse == test_8) {
    const GALGAS_staticListIndirectRoutineIR temp_10 = object ;
    var_llvmFunctionTypeName_25760 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_10.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 608)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 608)) ;
  }
  var_llvmFunctionTypeName_25760.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 610)) ;
  var_first_24857 = GALGAS_bool (true) ;
  const GALGAS_staticListIndirectRoutineIR temp_11 = object ;
  cEnumerator_routineTypedSignature enumerator_26013 (temp_11.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_26013.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_first_24857.boolEnum () ;
      if (kBoolTrue == test_12) {
        var_first_24857 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_12) {
      var_llvmFunctionTypeName_25760.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 616)) ;
    }
    switch (enumerator_26013.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_llvmFunctionTypeName_25760.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26013.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 620)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 620)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 620)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        var_llvmFunctionTypeName_25760.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26013.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 622)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 622)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 622)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 622)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        var_llvmFunctionTypeName_25760.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_26013.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 624)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 624)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 624)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 624)) ;
      }
      break ;
    }
    enumerator_26013.gotoNextObject () ;
  }
  var_llvmFunctionTypeName_25760.plusAssign_operation(GALGAS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 627)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr = getelementptr inbounds ").add_operation (var_receiverLLVMTypeName_24793, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 629)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 629)) ;
  const GALGAS_staticListIndirectRoutineIR temp_13 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_receiverLLVMTypeName_24793, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)).add_operation (GALGAS_string ("* %self, i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)).add_operation (temp_13.readProperty_mPropertyIndex ().getter_string (SOURCE_FILE ("declaration-static-list.galgas", 630)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %f = load ").add_operation (var_llvmFunctionTypeName_25760, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)).add_operation (var_llvmFunctionTypeName_25760, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)).add_operation (GALGAS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 631)) ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_staticListIndirectRoutineIR temp_15 = object ;
    test_14 = GALGAS_bool (kIsEqual, temp_15.readProperty_mReturnTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 632)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 633)) ;
    }
  }
  if (kBoolFalse == test_14) {
    const GALGAS_staticListIndirectRoutineIR temp_16 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_16.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 635)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 635)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 635)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" %f ("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 637)) ;
  var_first_24857 = GALGAS_bool (true) ;
  const GALGAS_staticListIndirectRoutineIR temp_17 = object ;
  cEnumerator_routineTypedSignature enumerator_27054 (temp_17.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_27054.hasCurrentObject ()) {
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_first_24857.boolEnum () ;
      if (kBoolTrue == test_18) {
        var_first_24857 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_18) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 643)) ;
    }
    switch (enumerator_27054.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_27054.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 647)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 647)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 647)).add_operation (enumerator_27054.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 647)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 647)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 647)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_27054.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 649)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 649)).add_operation (GALGAS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 649)).add_operation (enumerator_27054.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 649)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 649)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 649)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_27054.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 651)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 651)).add_operation (GALGAS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 651)).add_operation (enumerator_27054.current_mFormalArgumentName (HERE).readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 651)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 651)) ;
      }
      break ;
    }
    enumerator_27054.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 654)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    const GALGAS_staticListIndirectRoutineIR temp_20 = object ;
    test_19 = GALGAS_bool (kIsEqual, temp_20.readProperty_mReturnTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 656)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 657)) ;
    }
  }
  if (kBoolFalse == test_19) {
    const GALGAS_staticListIndirectRoutineIR temp_21 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_21.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 659)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 659)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 659)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 659)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 661)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_staticListIndirectRoutineIR.mSlotID,
                                           extensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_staticListIndirectRoutineIR_llvmCodeGeneration (defineExtensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedTaskListDeclaration semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_decoratedTaskListDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedTaskListDeclaration * object = (const cPtr_decoratedTaskListDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedTaskListDeclaration) ;
  const GALGAS_decoratedTaskListDeclaration temp_0 = object ;
  cEnumerator_decoratedTaskList enumerator_12249 (temp_0.readProperty_mTaskList (), kENUMERATION_UP) ;
  GALGAS_uint index_12226 ((uint32_t) 0) ;
  while (enumerator_12249.hasCurrentObject ()) {
    extensionMethod_taskSemanticAnalysis (enumerator_12249.current (HERE), constinArgument_inContext, index_12226, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 320)) ;
    enumerator_12249.gotoNextObject () ;
    index_12226.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 319)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_decoratedTaskListDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedTaskListDeclaration.mSlotID,
                                         extensionMethod_decoratedTaskListDeclaration_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_decoratedTaskListDeclaration_semanticAnalysis (defineExtensionMethod_decoratedTaskListDeclaration_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOrderedTaskRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeOrderedTaskRoutines (const GALGAS_taskSetupListAST constinArgument_inTaskRoutineLISTAST,
                                         GALGAS_stringlist & outArgument_outSetupOrderedList,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetupOrderedList.drop () ; // Release 'out' argument
  outArgument_outSetupOrderedList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 335)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 336)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_numberOfEntriesWithoutAnyPrecedence_12870 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_taskSetupListAST enumerator_12900 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
      while (enumerator_12900.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsEqual, enumerator_12900.current_mDependanceList (HERE).getter_length (SOURCE_FILE ("task-declaration.galgas", 340)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_numberOfEntriesWithoutAnyPrecedence_12870.plusAssign_operation(var_numberOfEntriesWithoutAnyPrecedence_12870.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 341)) ;
          }
        }
        enumerator_12900.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_numberOfEntriesWithoutAnyPrecedence_12870.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          cEnumerator_taskSetupListAST enumerator_13147 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
          while (enumerator_13147.hasCurrentObject ()) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_13147.current_mName (HERE).readProperty_location (), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray3  COMMA_SOURCE_FILE ("task-declaration.galgas", 346)) ;
            enumerator_13147.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsStrictSup, var_numberOfEntriesWithoutAnyPrecedence_12870.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_4) {
            cEnumerator_taskSetupListAST enumerator_13340 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
            while (enumerator_13340.hasCurrentObject ()) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = GALGAS_bool (kIsEqual, enumerator_13340.current_mDependanceList (HERE).getter_length (SOURCE_FILE ("task-declaration.galgas", 350)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (enumerator_13340.current_mName (HERE).readProperty_location (), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray6  COMMA_SOURCE_FILE ("task-declaration.galgas", 351)) ;
                }
              }
              enumerator_13340.gotoNextObject () ;
            }
          }
        }
      }
      GALGAS_taskSetupListAST var_taskSetupListAST_13601 = constinArgument_inTaskRoutineLISTAST ;
      GALGAS_stringset var_precedenceSet_13657 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("task-declaration.galgas", 357)) ;
      GALGAS_bool var_continue_13679 = GALGAS_bool (true) ;
      if (constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 359)).isValid ()) {
        uint32_t variant_13695 = constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 359)).uintValue () ;
        bool loop_13695 = true ;
        while (loop_13695) {
          GALGAS_bool test_7 = var_continue_13679 ;
          if (kBoolTrue == test_7.boolEnum ()) {
            test_7 = GALGAS_bool (kIsStrictSup, var_taskSetupListAST_13601.getter_length (SOURCE_FILE ("task-declaration.galgas", 359)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
          }
          loop_13695 = test_7.isValid () ;
          if (loop_13695) {
            loop_13695 = test_7.boolValue () ;
          }
          if (loop_13695 && (0 == variant_13695)) {
            loop_13695 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 359)) ;
          }
          if (loop_13695) {
            variant_13695 -- ;
            var_continue_13679 = GALGAS_bool (false) ;
            GALGAS_uint var_idx_13817 = GALGAS_uint ((uint32_t) 0U) ;
            cEnumerator_taskSetupListAST enumerator_13852 (var_taskSetupListAST_13601, kENUMERATION_UP) ;
            while (enumerator_13852.hasCurrentObject ()) {
              GALGAS_bool var_allPrecedenceDefined_13909 = GALGAS_bool (true) ;
              cEnumerator_lstringlist enumerator_13944 (enumerator_13852.current_mDependanceList (HERE), kENUMERATION_UP) ;
              bool bool_8 = var_allPrecedenceDefined_13909.isValidAndTrue () ;
              if (enumerator_13944.hasCurrentObject () && bool_8) {
                while (enumerator_13944.hasCurrentObject () && bool_8) {
                  var_allPrecedenceDefined_13909 = var_precedenceSet_13657.getter_hasKey (enumerator_13944.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("task-declaration.galgas", 365)) ;
                  enumerator_13944.gotoNextObject () ;
                  if (enumerator_13944.hasCurrentObject ()) {
                    bool_8 = var_allPrecedenceDefined_13909.isValidAndTrue () ;
                  }
                }
              }
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_allPrecedenceDefined_13909.boolEnum () ;
                if (kBoolTrue == test_9) {
                  outArgument_outSetupOrderedList.addAssign_operation (enumerator_13852.current_mName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 368)) ;
                  var_precedenceSet_13657.addAssign_operation (enumerator_13852.current_mName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas", 369)) ;
                  var_continue_13679 = GALGAS_bool (true) ;
                  {
                  GALGAS_lstring joker_14279_2 ; // Joker input parameter
                  GALGAS_lstringlist joker_14279_1 ; // Joker input parameter
                  var_taskSetupListAST_13601.setter_removeAtIndex (joker_14279_2, joker_14279_1, var_idx_13817, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 371)) ;
                  }
                }
              }
              if (kBoolFalse == test_9) {
                var_idx_13817 = var_idx_13817.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 373)) ;
              }
              enumerator_13852.gotoNextObject () ;
            }
          }
        }
      }
      cEnumerator_taskSetupListAST enumerator_14410 (var_taskSetupListAST_13601, kENUMERATION_UP) ;
      while (enumerator_14410.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_14410.current_mName (HERE).readProperty_location (), GALGAS_string ("this routine is out of execution order"), fixItArray10  COMMA_SOURCE_FILE ("task-declaration.galgas", 379)) ;
        enumerator_14410.gotoNextObject () ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@taskActivateFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_taskActivateFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_taskActivateFunctionIR * object = (const cPtr_taskActivateFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_taskActivateFunctionIR) ;
  const GALGAS_taskActivateFunctionIR temp_0 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 611)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 611)) ;
  const GALGAS_taskActivateFunctionIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("(%").add_operation (temp_1.readProperty_mAssemblerTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 612)) ;
  const GALGAS_taskActivateFunctionIR temp_2 = object ;
  const GALGAS_taskActivateFunctionIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (temp_2.readProperty_mActivateServiceInvocationName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (GALGAS_string (" (i8 "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (temp_3.readProperty_mTaskIndex ().getter_string (SOURCE_FILE ("task-declaration.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 613)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 614)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 615)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 616)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 617)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_taskActivateFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_taskActivateFunctionIR.mSlotID,
                                           extensionMethod_taskActivateFunctionIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_taskActivateFunctionIR_llvmCodeGeneration (defineExtensionMethod_taskActivateFunctionIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@taskSetupDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_taskSetupDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_taskSetupDeclarationAST * object = (const cPtr_taskSetupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_taskSetupDeclarationAST) ;
  const GALGAS_taskSetupDeclarationAST temp_0 = object ;
  const GALGAS_taskSetupDeclarationAST temp_1 = object ;
  const GALGAS_taskSetupDeclarationAST temp_2 = object ;
  GALGAS_string var_s_3585 = temp_0.readProperty_mQualifier ().add_operation (temp_1.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (temp_2.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)) ;
  {
  const GALGAS_taskSetupDeclarationAST temp_3 = object ;
  const GALGAS_taskSetupDeclarationAST temp_4 = object ;
  ioArgument_ioGraph.setter_addNode (GALGAS_lstring::constructor_new (var_s_3585, temp_3.readProperty_mSetupName ().readProperty_location ()  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 91)), temp_4, inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 91)) ;
  }
  {
  const GALGAS_taskSetupDeclarationAST temp_5 = object ;
  ioArgument_ioGraph.setter_noteNode (temp_5.readProperty_mTaskName () COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 93)) ;
  }
  const GALGAS_taskSetupDeclarationAST temp_6 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_6.readProperty_mTaskSetupInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 94)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_taskSetupDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_taskSetupDeclarationAST.mSlotID,
                                               extensionMethod_taskSetupDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_taskSetupDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_taskSetupDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@taskSetupDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_taskSetupDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_taskSetupDeclarationAST * object = (const cPtr_taskSetupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_taskSetupDeclarationAST) ;
  const GALGAS_taskSetupDeclarationAST temp_0 = object ;
  const GALGAS_taskSetupDeclarationAST temp_1 = object ;
  result_result = GALGAS_string ("task function ").add_operation (temp_0.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)).add_operation (temp_1.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_taskSetupDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_taskSetupDeclarationAST.mSlotID,
                                                           extensionGetter_taskSetupDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_taskSetupDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_taskSetupDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@taskSetupDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_taskSetupDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_taskSetupDeclarationAST * object = (const cPtr_taskSetupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_taskSetupDeclarationAST) ;
  const GALGAS_taskSetupDeclarationAST temp_0 = object ;
  result_result = temp_0.readProperty_mSetupName ().readProperty_location () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_taskSetupDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_taskSetupDeclarationAST.mSlotID,
                                                  extensionGetter_taskSetupDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_taskSetupDeclarationAST_locationForErrorSignaling (defineExtensionGetter_taskSetupDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@taskSetupDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_taskSetupDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                    GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                    GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                                    GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                    GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                    GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_taskSetupDeclarationAST * object = (const cPtr_taskSetupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_taskSetupDeclarationAST) ;
  const GALGAS_taskSetupDeclarationAST temp_0 = object ;
  const GALGAS_taskSetupDeclarationAST temp_1 = object ;
  const GALGAS_taskSetupDeclarationAST temp_2 = object ;
  GALGAS_string var_mangledName_5435 = temp_0.readProperty_mQualifier ().add_operation (temp_1.readProperty_mTaskName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)).add_operation (temp_2.readProperty_mSetupName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)) ;
  const GALGAS_taskSetupDeclarationAST temp_3 = object ;
  const GALGAS_taskSetupDeclarationAST temp_4 = object ;
  const GALGAS_taskSetupDeclarationAST temp_5 = object ;
  const GALGAS_taskSetupDeclarationAST temp_6 = object ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (temp_3.readProperty_mTaskName (), GALGAS_mode::constructor_userMode (SOURCE_FILE ("task-setup-declaration.galgas", 127)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("task-setup-declaration.galgas", 129)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("task-setup-declaration.galgas", 132)), GALGAS_lstring::constructor_new (var_mangledName_5435, temp_4.readProperty_mSetupName ().readProperty_location ()  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 133)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("task-setup-declaration.galgas", 134)), GALGAS_bool (true), temp_5.readProperty_mTaskSetupInstructionList (), temp_6.readProperty_mEndOfTaskSetupDeclaration (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("task-setup-declaration.galgas", 138))  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 125)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_taskSetupDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_taskSetupDeclarationAST.mSlotID,
                                       extensionMethod_taskSetupDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_taskSetupDeclarationAST_enterInContext (defineExtensionMethod_taskSetupDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  GALGAS_string var_s_4718 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_functionDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_functionDeclarationAST temp_2 = object ;
      var_s_4718.plusAssign_operation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 153)) ;
    }
  }
  const GALGAS_functionDeclarationAST temp_3 = object ;
  var_s_4718.plusAssign_operation(temp_3.readProperty_mFunctionName ().readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 155)) ;
  const GALGAS_functionDeclarationAST temp_4 = object ;
  cEnumerator_routineFormalArgumentListAST enumerator_4905 (temp_4.readProperty_mFunctionFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_4905.hasCurrentObject ()) {
    var_s_4718.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4905.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)).add_operation (enumerator_4905.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 157)) ;
    enumerator_4905.gotoNextObject () ;
  }
  var_s_4718.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 159)) ;
  const GALGAS_functionDeclarationAST temp_5 = object ;
  GALGAS_lstring var_nodeName_5055 = GALGAS_lstring::constructor_new (var_s_4718, temp_5.readProperty_mFunctionName ().readProperty_location ()  COMMA_SOURCE_FILE ("declaration-function.galgas", 160)) ;
  {
  const GALGAS_functionDeclarationAST temp_6 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_5055, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 161)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5055, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 162)) COMMA_SOURCE_FILE ("declaration-function.galgas", 162)) ;
  }
  const GALGAS_functionDeclarationAST temp_7 = object ;
  cEnumerator_routineFormalArgumentListAST enumerator_5249 (temp_7.readProperty_mFunctionFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_5249.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5249.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-function.galgas", 165)) ;
    }
    enumerator_5249.gotoNextObject () ;
  }
  const GALGAS_functionDeclarationAST temp_8 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mFunctionInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 167)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_functionDeclarationAST temp_10 = object ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      const GALGAS_functionDeclarationAST temp_11 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-function.galgas", 169)) ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    const GALGAS_functionDeclarationAST temp_13 = object ;
    test_12 = GALGAS_bool (kIsNotEqual, temp_13.readProperty_mFunctionReturnTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      {
      const GALGAS_functionDeclarationAST temp_14 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_14.readProperty_mFunctionReturnTypeName () COMMA_SOURCE_FILE ("declaration-function.galgas", 172)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                               extensionMethod_functionDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_functionDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_functionDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  const GALGAS_functionDeclarationAST temp_0 = object ;
  const GALGAS_functionDeclarationAST temp_1 = object ;
  result_result = GALGAS_string ("function ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)).add_operation (temp_1.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_functionDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                                           extensionGetter_functionDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_functionDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_functionDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_functionDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  const GALGAS_functionDeclarationAST temp_0 = object ;
  result_result = temp_0.readProperty_mFunctionName ().readProperty_location () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_functionDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                                  extensionGetter_functionDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_functionDeclarationAST_locationForErrorSignaling (defineExtensionGetter_functionDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                   GALGAS_semanticContext & ioArgument_ioContext,
                                                                   GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                   GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                                   GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                   GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                   GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  GALGAS_routineTypedSignature var_signature_7237 ;
  {
  const GALGAS_functionDeclarationAST temp_0 = object ;
  routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mFunctionFormalArgumentList (), var_signature_7237, inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 203)) ;
  }
  GALGAS_unifiedTypeMapEntry var_returnTypeProxy_7348 ;
  {
  const GALGAS_functionDeclarationAST temp_1 = object ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mFunctionReturnTypeName (), var_returnTypeProxy_7348, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 205)) ;
  }
  GALGAS_bool var_warnIfUnused_7384 = GALGAS_bool (true) ;
  GALGAS_bool var_exportedFunction_7414 = GALGAS_bool (false) ;
  GALGAS_bool var_canMutateProperties_7448 = GALGAS_bool (false) ;
  const GALGAS_functionDeclarationAST temp_2 = object ;
  cEnumerator_lstringlist enumerator_7473 (temp_2.readProperty_mFunctionAttributeList (), kENUMERATION_UP) ;
  while (enumerator_7473.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, enumerator_7473.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 211)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = var_warnIfUnused_7384.operator_not (SOURCE_FILE ("declaration-function.galgas", 212)).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_7473.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)), fixItArray5  COMMA_SOURCE_FILE ("declaration-function.galgas", 213)) ;
          }
        }
        var_warnIfUnused_7384 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsEqual, enumerator_7473.current_mValue (HERE).readProperty_string ().objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 216)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = var_exportedFunction_7414.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_7473.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)), fixItArray8  COMMA_SOURCE_FILE ("declaration-function.galgas", 218)) ;
            }
          }
          var_exportedFunction_7414 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = GALGAS_bool (kIsEqual, enumerator_7473.current_mValue (HERE).readProperty_string ().objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 221)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = var_canMutateProperties_7448.boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_7473.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)), fixItArray11  COMMA_SOURCE_FILE ("declaration-function.galgas", 223)) ;
              }
            }
            var_canMutateProperties_7448 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_9) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_7473.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 227)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), fixItArray12  COMMA_SOURCE_FILE ("declaration-function.galgas", 227)) ;
        }
      }
    }
    enumerator_7473.gotoNextObject () ;
  }
  const GALGAS_functionDeclarationAST temp_13 = object ;
  const GALGAS_functionDeclarationAST temp_14 = object ;
  const GALGAS_functionDeclarationAST temp_15 = object ;
  GALGAS_lstring var_functionLLVMName_8398 = function_routineMangledNameFromAST (temp_13.readProperty_mReceiverTypeName ().readProperty_string (), temp_14.readProperty_mFunctionName (), temp_15.readProperty_mFunctionFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 232)) ;
  const GALGAS_functionDeclarationAST temp_16 = object ;
  GALGAS_routineLLVMNameDict var_routineLLVMNameDict_8622 = extensionGetter_routineLLVMDictionaryForFunction (temp_16.readProperty_mMode (), var_functionLLVMName_8398.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 238)) ;
  const GALGAS_functionDeclarationAST temp_17 = object ;
  const GALGAS_functionDeclarationAST temp_18 = object ;
  GALGAS_lstring var_routineMangledName_8713 = extensionGetter_mangledName (var_signature_7237, temp_17.readProperty_mReceiverTypeName ().readProperty_string (), temp_18.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 239)) ;
  {
  const GALGAS_functionDeclarationAST temp_19 = object ;
  const GALGAS_functionDeclarationAST temp_20 = object ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_8713, temp_19.readProperty_mPublicFunction (), var_signature_7237, var_returnTypeProxy_7348, var_routineLLVMNameDict_8622, var_exportedFunction_7414, temp_20.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 240)) ;
  }
  const GALGAS_functionDeclarationAST temp_21 = object ;
  const GALGAS_functionDeclarationAST temp_22 = object ;
  const GALGAS_functionDeclarationAST temp_23 = object ;
  const GALGAS_functionDeclarationAST temp_24 = object ;
  const GALGAS_functionDeclarationAST temp_25 = object ;
  const GALGAS_functionDeclarationAST temp_26 = object ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (temp_21.readProperty_mReceiverTypeName (), temp_22.readProperty_mMode (), ioArgument_ioContext.readProperty_mRequiredRoutineSet ().getter_hasKey (var_functionLLVMName_8398.readProperty_string () COMMA_SOURCE_FILE ("declaration-function.galgas", 253)), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-function.galgas", 254)), var_warnIfUnused_7384, var_exportedFunction_7414, GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-function.galgas", 257)), var_functionLLVMName_8398, temp_23.readProperty_mFunctionFormalArgumentList (), GALGAS_bool (true), temp_24.readProperty_mFunctionInstructionList (), temp_25.readProperty_mEndOfFunctionDeclaration (), temp_26.readProperty_mFunctionReturnTypeName ()  COMMA_SOURCE_FILE ("declaration-function.galgas", 250)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                       extensionMethod_functionDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionDeclarationAST_enterInContext (defineExtensionMethod_functionDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemRoutineDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_systemRoutineDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemRoutineDeclarationAST * object = (const cPtr_systemRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_systemRoutineDeclarationAST) ;
  GALGAS_string var_s_5136 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_systemRoutineDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_systemRoutineDeclarationAST temp_2 = object ;
      var_s_5136.plusAssign_operation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 169)) ;
    }
  }
  const GALGAS_systemRoutineDeclarationAST temp_3 = object ;
  var_s_5136.plusAssign_operation(temp_3.readProperty_mSystemRoutineName ().readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 171)) ;
  const GALGAS_systemRoutineDeclarationAST temp_4 = object ;
  cEnumerator_routineFormalArgumentListAST enumerator_5328 (temp_4.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_5328.hasCurrentObject ()) {
    var_s_5136.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_5328.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)).add_operation (enumerator_5328.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)) ;
    enumerator_5328.gotoNextObject () ;
  }
  var_s_5136.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 175)) ;
  const GALGAS_systemRoutineDeclarationAST temp_5 = object ;
  GALGAS_lstring var_nodeKey_5469 = GALGAS_lstring::constructor_new (var_s_5136, temp_5.readProperty_mSystemRoutineName ().readProperty_location ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 176)) ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_6 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeKey_5469, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 177)) ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_7 = object ;
  cEnumerator_routineFormalArgumentListAST enumerator_5597 (temp_7.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_5597.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5597.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-svc.galgas", 180)) ;
    }
    enumerator_5597.gotoNextObject () ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_8 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 182)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_systemRoutineDeclarationAST temp_10 = object ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      const GALGAS_systemRoutineDeclarationAST temp_11 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 184)) ;
      }
      {
      const GALGAS_systemRoutineDeclarationAST temp_12 = object ;
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5469, temp_12.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 185)) ;
      }
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GALGAS_systemRoutineDeclarationAST temp_14 = object ;
    test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mReturnTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_13) {
      {
      const GALGAS_systemRoutineDeclarationAST temp_15 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_15.readProperty_mReturnTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 188)) ;
      }
      {
      const GALGAS_systemRoutineDeclarationAST temp_16 = object ;
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5469, temp_16.readProperty_mReturnTypeName () COMMA_SOURCE_FILE ("declaration-svc.galgas", 189)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_systemRoutineDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_systemRoutineDeclarationAST.mSlotID,
                                               extensionMethod_systemRoutineDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_systemRoutineDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_systemRoutineDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@systemRoutineDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_systemRoutineDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_systemRoutineDeclarationAST * object = (const cPtr_systemRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_systemRoutineDeclarationAST) ;
  const GALGAS_systemRoutineDeclarationAST temp_0 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_1 = object ;
  result_result = GALGAS_string ("system ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)).add_operation (temp_1.readProperty_mSystemRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_systemRoutineDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_systemRoutineDeclarationAST.mSlotID,
                                                           extensionGetter_systemRoutineDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_systemRoutineDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_systemRoutineDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@systemRoutineDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_systemRoutineDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_systemRoutineDeclarationAST * object = (const cPtr_systemRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_systemRoutineDeclarationAST) ;
  const GALGAS_systemRoutineDeclarationAST temp_0 = object ;
  result_result = temp_0.readProperty_mSystemRoutineName ().readProperty_location () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_systemRoutineDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_systemRoutineDeclarationAST.mSlotID,
                                                  extensionGetter_systemRoutineDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_systemRoutineDeclarationAST_locationForErrorSignaling (defineExtensionGetter_systemRoutineDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'systemUserMangledNameFromAST'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_systemUserMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                      const GALGAS_routineKind & constinArgument_inKind,
                                                      const GALGAS_lstring & constinArgument_inGuardName,
                                                      const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_7337 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_s_7337 = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_s_7337 = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_s_7337 = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_s_7337 = GALGAS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_7337.plusAssign_operation(GALGAS_string (".user."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 225)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_7337.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 227)) ;
    }
  }
  var_s_7337.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 229)) ;
  var_s_7337.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 230)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_7691 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_7691.hasCurrentObject ()) {
    var_s_7337.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7691.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (enumerator_7691.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)) ;
    enumerator_7691.gotoNextObject () ;
  }
  var_s_7337.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 234)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_7337, constinArgument_inGuardName.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 235)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_systemUserMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_systemUserMangledNameFromAST (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_routineKind operand1 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListAST operand3 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                           inCompiler
                                                                                                           COMMA_THERE) ;
  return function_systemUserMangledNameFromAST (operand0,
                                                operand1,
                                                operand2,
                                                operand3,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_systemUserMangledNameFromAST ("systemUserMangledNameFromAST",
                                                                              functionWithGenericHeader_systemUserMangledNameFromAST,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              4,
                                                                              functionArgs_systemUserMangledNameFromAST) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'systemImplementationMangledNameFromAST'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_systemImplementationMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                                const GALGAS_routineKind & constinArgument_inKind,
                                                                const GALGAS_lstring & constinArgument_inGuardName,
                                                                const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_8335 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_s_8335 = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_s_8335 = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_s_8335 = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_s_8335 = GALGAS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_8335.plusAssign_operation(GALGAS_string (".implementation."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 256)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_8335.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 258)) ;
    }
  }
  var_s_8335.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 260)) ;
  var_s_8335.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 261)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_8699 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_8699.hasCurrentObject ()) {
    var_s_8335.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_8699.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (enumerator_8699.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)) ;
    enumerator_8699.gotoNextObject () ;
  }
  var_s_8335.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_8335, constinArgument_inGuardName.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 266)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_systemImplementationMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_systemImplementationMangledNameFromAST (C_Compiler * inCompiler,
                                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_routineKind operand1 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListAST operand3 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                           inCompiler
                                                                                                           COMMA_THERE) ;
  return function_systemImplementationMangledNameFromAST (operand0,
                                                          operand1,
                                                          operand2,
                                                          operand3,
                                                          inCompiler
                                                          COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_systemImplementationMangledNameFromAST ("systemImplementationMangledNameFromAST",
                                                                                        functionWithGenericHeader_systemImplementationMangledNameFromAST,
                                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                                        4,
                                                                                        functionArgs_systemImplementationMangledNameFromAST) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemRoutineDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_systemRoutineDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                        GALGAS_semanticContext & ioArgument_ioContext,
                                                                        GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                        GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                                        GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                        GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                        GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                        GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemRoutineDeclarationAST * object = (const cPtr_systemRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_systemRoutineDeclarationAST) ;
  GALGAS_unifiedTypeMapEntry var_selfTypeProxy_9956 ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_0 = object ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_selfTypeProxy_9956, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 284)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = var_selfTypeProxy_9956.getter_isNull (SOURCE_FILE ("declaration-svc.galgas", 286)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = extensionGetter_type (var_selfTypeProxy_9956, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 286)).readProperty_llvmBaseTypeName () ;
  }
  GALGAS_string var_receiverLLVMBaseTypeName_10013 = temp_1 ;
  GALGAS_stringset var_attributeSet_10142 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-svc.galgas", 288)) ;
  const GALGAS_systemRoutineDeclarationAST temp_3 = object ;
  cEnumerator_lstringlist enumerator_10186 (temp_3.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_10186.hasCurrentObject ()) {
    var_attributeSet_10142.addAssign_operation (enumerator_10186.current (HERE).readProperty_mValue ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)) ;
    enumerator_10186.gotoNextObject () ;
  }
  GALGAS_routineKind var_routineKind_10276 ;
  const GALGAS_systemRoutineDeclarationAST temp_4 = object ;
  switch (temp_4.readProperty_mMode ().enumValue ()) {
  case GALGAS_mode::kNotBuilt:
    break ;
  case GALGAS_mode::kEnum_sectionMode:
  case GALGAS_mode::kEnum_safeSectionMode:
    {
      var_routineKind_10276 = GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-svc.galgas", 296)) ;
    }
    break ;
  case GALGAS_mode::kEnum_serviceMode:
  case GALGAS_mode::kEnum_safeServiceMode:
    {
      var_routineKind_10276 = GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-svc.galgas", 298)) ;
    }
    break ;
  case GALGAS_mode::kEnum_primitiveMode:
  case GALGAS_mode::kEnum_safePrimitiveMode:
    {
      var_routineKind_10276 = GALGAS_routineKind::constructor_primitive (SOURCE_FILE ("declaration-svc.galgas", 300)) ;
    }
    break ;
  case GALGAS_mode::kEnum_userMode:
  case GALGAS_mode::kEnum_safeUserMode:
  case GALGAS_mode::kEnum_anyMode:
  case GALGAS_mode::kEnum_anySafeMode:
  case GALGAS_mode::kEnum_bootMode:
  case GALGAS_mode::kEnum_guardMode:
  case GALGAS_mode::kEnum_panicMode:
  case GALGAS_mode::kEnum_safeGuardMode:
  case GALGAS_mode::kEnum_startupMode:
    {
      const GALGAS_systemRoutineDeclarationAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mSystemRoutineName ().readProperty_location (), GALGAS_string ("internal error"), fixItArray6  COMMA_SOURCE_FILE ("declaration-svc.galgas", 302)) ;
      var_routineKind_10276.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_7 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_8 = object ;
  GALGAS_lstring var_userRoutineMangledName_10740 = function_systemUserMangledNameFromAST (var_receiverLLVMBaseTypeName_10013, var_routineKind_10276, temp_7.readProperty_mSystemRoutineName (), temp_8.readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 305)) ;
  const GALGAS_systemRoutineDeclarationAST temp_9 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_10 = object ;
  GALGAS_lstring var_implementationRoutineMangledName_10922 = function_systemImplementationMangledNameFromAST (var_receiverLLVMBaseTypeName_10013, var_routineKind_10276, temp_9.readProperty_mSystemRoutineName (), temp_10.readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 311)) ;
  GALGAS_routineTypedSignature var_signature_11177 ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_11 = object ;
  routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, temp_11.readProperty_mFormalArgumentList (), var_signature_11177, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 318)) ;
  }
  GALGAS_unifiedTypeMapEntry var_returnTypeProxy_11281 ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_12 = object ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_12.readProperty_mReturnTypeName (), var_returnTypeProxy_11281, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 320)) ;
  }
  GALGAS_bool var_mutating_11313 = GALGAS_bool (false) ;
  GALGAS_bool var_noUnusedWarning_11343 = GALGAS_bool (false) ;
  const GALGAS_systemRoutineDeclarationAST temp_13 = object ;
  cEnumerator_lstringlist enumerator_11368 (temp_13.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_11368.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (kIsEqual, enumerator_11368.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 325)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = var_noUnusedWarning_11343.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            fixItArray16.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_11368.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)), fixItArray16  COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)) ;
          }
        }
        var_noUnusedWarning_11343 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_14) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsEqual, enumerator_11368.current_mValue (HERE).readProperty_string ().objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 330)))).boolEnum () ;
        if (kBoolTrue == test_17) {
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = var_mutating_11313.boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              fixItArray19.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_11368.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)), fixItArray19  COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)) ;
            }
          }
          var_mutating_11313 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_17) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        fixItArray20.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_11368.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), fixItArray20  COMMA_SOURCE_FILE ("declaration-svc.galgas", 336)) ;
      }
    }
    enumerator_11368.gotoNextObject () ;
  }
  GALGAS_routineAttributes var_attributes_12064 = GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-svc.galgas", 341)) ;
  const GALGAS_systemRoutineDeclarationAST temp_21 = object ;
  GALGAS_routineLLVMNameDict var_routineLLVMNameDict_12149 = extensionGetter_routineLLVMDictionaryForSystemRoutine (temp_21.readProperty_mMode (), var_userRoutineMangledName_10740.readProperty_string (), var_implementationRoutineMangledName_10922.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 343)) ;
  const GALGAS_systemRoutineDeclarationAST temp_22 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_23 = object ;
  GALGAS_lstring var_routineMangledName_12296 = extensionGetter_mangledName (var_signature_11177, temp_22.readProperty_mReceiverTypeName ().readProperty_string (), temp_23.readProperty_mSystemRoutineName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 347)) ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_24 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_25 = object ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_12296, temp_24.readProperty_mPublic (), var_signature_11177, var_returnTypeProxy_11281, var_routineLLVMNameDict_12149, GALGAS_bool (true), temp_25.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 348)) ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_26 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_27 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_28 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_29 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_30 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_31 = object ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (temp_26.readProperty_mReceiverTypeName (), temp_27.readProperty_mMode (), GALGAS_bool (false), var_routineKind_10276, var_noUnusedWarning_11343.operator_not (SOURCE_FILE ("declaration-svc.galgas", 363)), GALGAS_bool (true), var_attributes_12064, var_implementationRoutineMangledName_10922, temp_28.readProperty_mFormalArgumentList (), var_noUnusedWarning_11343, temp_29.readProperty_mInstructionList (), temp_30.readProperty_mEndOfInstructionListLocation (), temp_31.readProperty_mReturnTypeName ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 358)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_systemUserRoutineIR::constructor_new (var_userRoutineMangledName_10740, GALGAS_bool (false), GALGAS_bool (false), var_implementationRoutineMangledName_10922.readProperty_string (), var_signature_11177, var_selfTypeProxy_9956, GALGAS_bool (kIsEqual, var_routineKind_10276.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-svc.galgas", 380)))), var_returnTypeProxy_11281  COMMA_SOURCE_FILE ("declaration-svc.galgas", 373))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 373)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_systemRoutineDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_systemRoutineDeclarationAST.mSlotID,
                                       extensionMethod_systemRoutineDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_systemRoutineDeclarationAST_enterInContext (defineExtensionMethod_systemRoutineDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmFunctionPrototype'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmFunctionPrototype (const GALGAS_string & constinArgument_inReturnTypeLLVMName,
                                              const GALGAS_string & constinArgument_inFunctionName,
                                              const GALGAS_omnibusType & constinArgument_inReceiverType,
                                              const GALGAS_routineFormalArgumentListIR & constinArgument_inFormalArgumentListForGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inReturnTypeLLVMName ;
  result_result.plusAssign_operation(GALGAS_string (" @").add_operation (constinArgument_inFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)) ;
  GALGAS_bool var_first_14757 = GALGAS_bool (true) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 414)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)).add_operation (GALGAS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)) ;
      var_first_14757 = GALGAS_bool (false) ;
    }
  }
  cEnumerator_routineFormalArgumentListIR enumerator_14955 (constinArgument_inFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_14955.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_first_14757.boolEnum () ;
      if (kBoolTrue == test_1) {
        var_first_14757 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_1) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 422)) ;
    }
    switch (enumerator_14955.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14955.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (enumerator_14955.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14955.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)).add_operation (function_llvmNameForLocalVariable (enumerator_14955.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14955.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)).add_operation (function_llvmNameForLocalVariable (enumerator_14955.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)) ;
      }
      break ;
    }
    enumerator_14955.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmFunctionPrototype [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListIR,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmFunctionPrototype (C_Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_omnibusType operand2 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_routineFormalArgumentListIR operand3 = GALGAS_routineFormalArgumentListIR::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                         inCompiler
                                                                                                         COMMA_THERE) ;
  return function_llvmFunctionPrototype (operand0,
                                         operand1,
                                         operand2,
                                         operand3,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmFunctionPrototype ("llvmFunctionPrototype",
                                                                       functionWithGenericHeader_llvmFunctionPrototype,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       4,
                                                                       functionArgs_llvmFunctionPrototype) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateSectionDispatcher'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateSectionDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                        const GALGAS_string constinArgument_inTargetName,
                                        const GALGAS_targetParameters constinArgument_inTargetParameters,
                                        GALGAS_string & ioArgument_ioAssemblerCode,
                                        const GALGAS_sectionIRlist constinArgument_inSectionIRlist,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_sectionIRlist enumerator_15898 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
  GALGAS_uint index_15871 ((uint32_t) 0) ;
  while (enumerator_15898.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_15898.current (HERE).readProperty_invocationFromAnyMode ().boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_15961 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 449)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherInvocationFromAnyMode ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 447)) ;
        var_s_15961 = var_s_15961.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_15898.current (HERE).readProperty_mSectionCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 451)) ;
        var_s_15961 = var_s_15961.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15898.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 452)) ;
        var_s_15961 = var_s_15961.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_15871.getter_string (SOURCE_FILE ("declaration-svc.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 453)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_15961, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 454)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_s_16441 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 458)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherInvocationFromUserMode ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 456)) ;
      var_s_16441 = var_s_16441.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_15898.current (HERE).readProperty_mSectionCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 460)) ;
      var_s_16441 = var_s_16441.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15898.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 461)) ;
      var_s_16441 = var_s_16441.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_15871.getter_string (SOURCE_FILE ("declaration-svc.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 462)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_16441, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 463)) ;
    }
    enumerator_15898.gotoNextObject () ;
    index_15871.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 445)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 468)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherHeader ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 466)) ;
  cEnumerator_sectionIRlist enumerator_17107 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
  GALGAS_uint index_17076 ((uint32_t) 0) ;
  while (enumerator_17107.hasCurrentObject ()) {
    GALGAS_string var_s_17146 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionDispatcherEntry ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 471)) ;
    var_s_17146 = var_s_17146.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_17107.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 475)) ;
    var_s_17146 = var_s_17146.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_17107.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 476)) ;
    var_s_17146 = var_s_17146.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_17076.getter_string (SOURCE_FILE ("declaration-svc.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 477)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_17146, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 478)) ;
    enumerator_17107.gotoNextObject () ;
    index_17076.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 470)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 480)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 483)).add_operation (constinArgument_inTargetParameters.readProperty_mSectionHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 481)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 485)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 486)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generatePrimitiveAndServiceDispatcher'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generatePrimitiveAndServiceDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                                    const GALGAS_string constinArgument_inTargetName,
                                                    GALGAS_string & ioArgument_ioAssemblerCode,
                                                    const GALGAS_primitiveAndServiceIRlist constinArgument_inServiceList,
                                                    const GALGAS_targetParameters constinArgument_inTargetParameters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 501)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 499)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_18472 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_18447 ((uint32_t) 0) ;
  while (enumerator_18472.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_18472.current (HERE).readProperty_mHasReturnValue ().boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_18529 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 508)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceEntryWithReturnValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 506)) ;
        var_s_18529 = var_s_18529.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_18472.current (HERE).readProperty_mCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 510)) ;
        var_s_18529 = var_s_18529.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_18447.getter_string (SOURCE_FILE ("declaration-svc.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 511)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_18529, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 512)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_s_18874 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 516)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceEntryNoReturnedValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 514)) ;
      var_s_18874 = var_s_18874.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_18472.current (HERE).readProperty_mCallName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 518)) ;
      var_s_18874 = var_s_18874.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_18447.getter_string (SOURCE_FILE ("declaration-svc.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 519)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_18874, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 520)) ;
    }
    enumerator_18472.gotoNextObject () ;
    index_18447.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 504)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 525)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceDispatcherHeader ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 523)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_19398 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_19373 ((uint32_t) 0) ;
  while (enumerator_19398.hasCurrentObject ()) {
    GALGAS_string var_s_19417 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 530)).add_operation (constinArgument_inTargetParameters.readProperty_mServiceDispatcherEntry ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 528)) ;
    var_s_19417 = var_s_19417.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_19398.current (HERE).readProperty_mImplementationName (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 532)) ;
    var_s_19417 = var_s_19417.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_19373.getter_string (SOURCE_FILE ("declaration-svc.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 533)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_19417, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 534)) ;
    enumerator_19398.gotoNextObject () ;
    index_19373.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 527)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 536)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemUserRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_systemUserRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemUserRoutineIR * object = (const cPtr_systemUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_systemUserRoutineIR) ;
  const GALGAS_systemUserRoutineIR temp_0 = object ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (temp_0.readProperty_mMangledImplementationName ()  COMMA_SOURCE_FILE ("declaration-svc.galgas", 557)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_systemUserRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_systemUserRoutineIR.mSlotID,
                                                extensionMethod_systemUserRoutineIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_systemUserRoutineIR_enterAccessibleEntities (defineExtensionMethod_systemUserRoutineIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemUserRoutineIR svcDeclarationGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_systemUserRoutineIR_svcDeclarationGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                          GALGAS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                                          GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                                                          GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemUserRoutineIR * object = (const cPtr_systemUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_systemUserRoutineIR) ;
  const GALGAS_systemUserRoutineIR temp_0 = object ;
  GALGAS_string var_userMangledName_21035 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 567)) ;
  const GALGAS_systemUserRoutineIR temp_1 = object ;
  GALGAS_string var_implementationMangledName_21120 = temp_1.readProperty_mMangledImplementationName ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 568)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_systemUserRoutineIR temp_3 = object ;
    test_2 = temp_3.readProperty_mIsSection ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioSectionList.addAssign_operation (var_userMangledName_21035, var_implementationMangledName_21120, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 570)) ;
    }
  }
  if (kBoolFalse == test_2) {
    ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_21035, var_implementationMangledName_21120, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 572)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_systemUserRoutineIR_svcDeclarationGeneration (void) {
  enterExtensionMethod_svcDeclarationGeneration (kTypeDescriptor_GALGAS_systemUserRoutineIR.mSlotID,
                                                 extensionMethod_systemUserRoutineIR_svcDeclarationGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_systemUserRoutineIR_svcDeclarationGeneration (defineExtensionMethod_systemUserRoutineIR_svcDeclarationGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemUserRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_systemUserRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemUserRoutineIR * object = (const cPtr_systemUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_systemUserRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 583)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_systemUserRoutineIR temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mReturnTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-svc.galgas", 584)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 585)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_systemUserRoutineIR temp_2 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)) ;
  }
  const GALGAS_systemUserRoutineIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)) ;
  GALGAS_bool var_first_21963 = GALGAS_bool (true) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_systemUserRoutineIR temp_5 = object ;
    test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mReceiverTypeProxy ().objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-svc.galgas", 591)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_systemUserRoutineIR temp_6 = object ;
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_6.readProperty_mReceiverTypeProxy (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)).add_operation (GALGAS_string ("* %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)) ;
      var_first_21963 = GALGAS_bool (false) ;
    }
  }
  const GALGAS_systemUserRoutineIR temp_7 = object ;
  cEnumerator_routineTypedSignature enumerator_22166 (temp_7.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_22166.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_first_21963.boolEnum () ;
      if (kBoolTrue == test_8) {
        var_first_21963 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_8) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 599)) ;
    }
    switch (enumerator_22166.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_22166.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_22166.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (enumerator_22166.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)) ;
      }
      break ;
    }
    enumerator_22166.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_systemUserRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_systemUserRoutineIR.mSlotID,
                                           extensionMethod_systemUserRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_systemUserRoutineIR_llvmCodeGeneration (defineExtensionMethod_systemUserRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkRequiredProcedures'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkRequiredProcedures (const GALGAS_ast constinArgument_inAST,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_location /* constinArgument_inEndOfSourceFile */,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_requiredFunctionDeclarationListAST enumerator_2331 (constinArgument_inAST.readProperty_mRequiredFunctionListAST (), kENUMERATION_UP) ;
  while (enumerator_2331.hasCurrentObject ()) {
    GALGAS_lstring var_requiredFunctionSignature_2368 = extensionGetter_routineSignature (enumerator_2331.current (HERE).readProperty_mFormalArgumentList (), enumerator_2331.current (HERE).readProperty_mName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 61)) ;
    GALGAS_string var_requiredFunctionMangledName_2486 = enumerator_2331.current (HERE).readProperty_mName ().readProperty_string ().add_operation (var_requiredFunctionSignature_2368.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 62)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inContext.readProperty_mRoutineMap ().getter_hasKey (var_requiredFunctionMangledName_2486 COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 63)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 63)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2331.current (HERE).readProperty_mName ().readProperty_location (), GALGAS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_bool var_implementedPublic_2820 ;
      GALGAS_routineTypedSignature var_implementedSignature_2854 ;
      GALGAS_unifiedTypeMapEntry var_implementedReturnTypeProxy_2894 ;
      GALGAS_routineLLVMNameDict var_implementedModeDictionary_2968 ;
      GALGAS_bool var_implementedIsExported_3003 ;
      GALGAS_mode var_implementedMode_3032 ;
      constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_requiredFunctionMangledName_2486.getter_nowhere (SOURCE_FILE ("declaration-required-proc.galgas", 67)), var_implementedPublic_2820, var_implementedSignature_2854, var_implementedReturnTypeProxy_2894, var_implementedModeDictionary_2968, var_implementedIsExported_3003, var_implementedMode_3032, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 66)) ;
      GALGAS_location var_errorLocation_3064 = constinArgument_inContext.readProperty_mRoutineMap ().getter_locationForKey (var_requiredFunctionMangledName_2486, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 75)) ;
      GALGAS_routineTypedSignature var_requiredTypedSignature_3276 ;
      {
      routine_routineTypedSignature_32_ (constinArgument_inContext.readProperty_mTypeMap (), enumerator_2331.current (HERE).readProperty_mFormalArgumentList (), var_requiredTypedSignature_3276, inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 77)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_typedString (var_requiredTypedSignature_3276, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)).objectCompare (extensionGetter_typedString (var_implementedSignature_2854, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_3064, GALGAS_string ("function signature should be ").add_operation (extensionGetter_typedString (var_requiredTypedSignature_3276, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)).add_operation (GALGAS_string (" (as required by required function declaration)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsNotEqual, var_implementedReturnTypeProxy_2894.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-required-proc.galgas", 83)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_3064, GALGAS_string ("function should not return a value (as required by required function declaration)"), fixItArray5  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)) ;
        }
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_implementedMode_3032.objectCompare (enumerator_2331.current (HERE).readProperty_mExecutionMode ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_errorLocation_3064, GALGAS_string ("required mode is '").add_operation (extensionGetter_string (enumerator_2331.current (HERE).readProperty_mExecutionMode (), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), fixItArray7  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_implementedPublic_2820.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 99)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_errorLocation_3064, GALGAS_string ("function should be public (as required by required function declaration)"), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 100)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        GALGAS_bool test_11 = enumerator_2331.current (HERE).readProperty_mIsExported () ;
        if (kBoolTrue == test_11.boolEnum ()) {
          test_11 = var_implementedIsExported_3003.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 103)) ;
        }
        test_10 = test_11.boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, kFixItInsertAfter, GALGAS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106))) ;
          inCompiler->emitSemanticError (var_errorLocation_3064, GALGAS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)).add_operation (GALGAS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), fixItArray12  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 104)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          GALGAS_bool test_14 = var_implementedIsExported_3003 ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = enumerator_2331.current (HERE).readProperty_mIsExported ().operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 107)) ;
          }
          test_13 = test_14.boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_errorLocation_3064, GALGAS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)).add_operation (GALGAS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), fixItArray15  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 108)) ;
          }
        }
      }
    }
    enumerator_2331.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineIR * object = (const cPtr_externRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 175)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_externRoutineIR temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mReturnType ().objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 176)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 177)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_externRoutineIR temp_2 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)) ;
  }
  const GALGAS_externRoutineIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-extern-proc.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)) ;
  const GALGAS_externRoutineIR temp_4 = object ;
  cEnumerator_routineFormalArgumentListIR enumerator_7307 (temp_4.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_7307.hasCurrentObject ()) {
    switch (enumerator_7307.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7307.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (enumerator_7307.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7307.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (function_llvmNameForLocalVariable (enumerator_7307.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7307.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (function_llvmNameForLocalVariable (enumerator_7307.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)) ;
      }
      break ;
    }
    if (enumerator_7307.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 193)) ;
    }
    enumerator_7307.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)).add_operation (GALGAS_string ("; declared by extern Omnibus function declaration\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_externRoutineIR.mSlotID,
                                           extensionMethod_externRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externRoutineIR_llvmCodeGeneration (defineExtensionMethod_externRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@isrDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_isrDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_isrDeclarationAST * object = (const cPtr_isrDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_isrDeclarationAST) ;
  const GALGAS_isrDeclarationAST temp_0 = object ;
  GALGAS_lstring var_receiverTypeName_2201 = function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 53)) ;
  const GALGAS_isrDeclarationAST temp_1 = object ;
  GALGAS_string var_s_2264 = var_receiverTypeName_2201.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)).add_operation (temp_1.readProperty_mISRName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)) ;
  {
  const GALGAS_isrDeclarationAST temp_2 = object ;
  const GALGAS_isrDeclarationAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (GALGAS_lstring::constructor_new (var_s_2264, temp_2.readProperty_mISRName ().readProperty_location ()  COMMA_SOURCE_FILE ("declaration-isr.galgas", 55)), temp_3, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 55)) ;
  }
  const GALGAS_isrDeclarationAST temp_4 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_4.readProperty_mISRInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 57)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_receiverTypeName_2201.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioGraph.setter_noteNode (var_receiverTypeName_2201 COMMA_SOURCE_FILE ("declaration-isr.galgas", 59)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_isrDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_isrDeclarationAST.mSlotID,
                                               extensionMethod_isrDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_isrDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_isrDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@isrDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_isrDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_isrDeclarationAST * object = (const cPtr_isrDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_isrDeclarationAST) ;
  const GALGAS_isrDeclarationAST temp_0 = object ;
  GALGAS_lstring var_receiverTypeName_2795 = function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 66)) ;
  const GALGAS_isrDeclarationAST temp_1 = object ;
  result_result = GALGAS_string ("function ").add_operation (var_receiverTypeName_2795.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)).add_operation (temp_1.readProperty_mISRName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_isrDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_isrDeclarationAST.mSlotID,
                                                           extensionGetter_isrDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_isrDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_isrDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@isrDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_isrDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_isrDeclarationAST * object = (const cPtr_isrDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_isrDeclarationAST) ;
  const GALGAS_isrDeclarationAST temp_0 = object ;
  result_result = temp_0.readProperty_mISRName ().readProperty_location () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_isrDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_isrDeclarationAST.mSlotID,
                                                  extensionGetter_isrDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_isrDeclarationAST_locationForErrorSignaling (defineExtensionGetter_isrDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@isrDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_isrDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                              GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                              GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                              GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                              GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                              GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_isrDeclarationAST * object = (const cPtr_isrDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_isrDeclarationAST) ;
  const GALGAS_isrDeclarationAST temp_0 = object ;
  const GALGAS_isrDeclarationAST temp_1 = object ;
  const GALGAS_isrDeclarationAST temp_2 = object ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedISRDeclaration::constructor_new (temp_0.readProperty_mISRName (), temp_1.readProperty_mMode (), temp_2.readProperty_mDriverName ()  COMMA_SOURCE_FILE ("declaration-isr.galgas", 91))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 91)) ;
  const GALGAS_isrDeclarationAST temp_3 = object ;
  GALGAS_lstring var_driverLLVMBaseTypeName_4351 = function_llvmDriverNameFromName (temp_3.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 93)) ;
  const GALGAS_isrDeclarationAST temp_4 = object ;
  GALGAS_lstring var_isrRoutineMangledName_4424 = function_routineMangledNameFromAST (var_driverLLVMBaseTypeName_4351.readProperty_string (), temp_4.readProperty_mISRName (), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 94)) ;
  const GALGAS_isrDeclarationAST temp_5 = object ;
  const GALGAS_isrDeclarationAST temp_6 = object ;
  const GALGAS_isrDeclarationAST temp_7 = object ;
  const GALGAS_isrDeclarationAST temp_8 = object ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_omnibusTypeSpecificNameForDriver (temp_5.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 96)), temp_6.readProperty_mMode (), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-isr.galgas", 99)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-isr.galgas", 102)), var_isrRoutineMangledName_4424, GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 104)), GALGAS_bool (true), temp_7.readProperty_mISRInstructionList (), temp_8.readProperty_mEndOfISRDeclaration (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-isr.galgas", 108))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 95)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_isrDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_isrDeclarationAST.mSlotID,
                                       extensionMethod_isrDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_isrDeclarationAST_enterInContext (defineExtensionMethod_isrDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedISRDeclaration semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_decoratedISRDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedISRDeclaration * object = (const cPtr_decoratedISRDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedISRDeclaration) ;
  GALGAS_omnibusType var_selfType_6011 ;
  const GALGAS_decoratedISRDeclaration temp_0 = object ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 129)), var_selfType_6011, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 129)) ;
  const GALGAS_decoratedISRDeclaration temp_1 = object ;
  GALGAS_interruptionPanicCode joker_6096 ; // Joker input parameter
  constinArgument_inContext.readProperty_mAvailableInterruptMap ().method_searchKey (temp_1.readProperty_mISRName (), joker_6096, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 131)) ;
  {
  const GALGAS_decoratedISRDeclaration temp_2 = object ;
  const GALGAS_decoratedISRDeclaration temp_3 = object ;
  const GALGAS_decoratedISRDeclaration temp_4 = object ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mInterruptMapIR.setter_insertKey (temp_2.readProperty_mISRName (), var_selfType_6011, temp_3.readProperty_mDriverName ().readProperty_string (), temp_4.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 132)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_decoratedISRDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedISRDeclaration.mSlotID,
                                         extensionMethod_decoratedISRDeclaration_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_decoratedISRDeclaration_semanticAnalysis (defineExtensionMethod_decoratedISRDeclaration_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_guardDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardDeclarationAST * object = (const cPtr_guardDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_guardDeclarationAST) ;
  GALGAS_string var_s_3291 = GALGAS_string ("guard.") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_guardDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_guardDeclarationAST temp_2 = object ;
      var_s_3291.plusAssign_operation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 87)) ;
    }
  }
  const GALGAS_guardDeclarationAST temp_3 = object ;
  var_s_3291.plusAssign_operation(temp_3.readProperty_mGuardName ().readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 89)) ;
  const GALGAS_guardDeclarationAST temp_4 = object ;
  cEnumerator_routineFormalArgumentListAST enumerator_3481 (temp_4.readProperty_mGuardFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_3481.hasCurrentObject ()) {
    var_s_3291.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3481.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)).add_operation (enumerator_3481.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)) ;
    enumerator_3481.gotoNextObject () ;
  }
  var_s_3291.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 93)) ;
  {
  const GALGAS_guardDeclarationAST temp_5 = object ;
  const GALGAS_guardDeclarationAST temp_6 = object ;
  ioArgument_ioGraph.setter_addNode (GALGAS_lstring::constructor_new (var_s_3291, temp_5.readProperty_mGuardName ().readProperty_location ()  COMMA_SOURCE_FILE ("declaration-guard.galgas", 94)), temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 94)) ;
  }
  const GALGAS_guardDeclarationAST temp_7 = object ;
  cEnumerator_routineFormalArgumentListAST enumerator_3719 (temp_7.readProperty_mGuardFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_3719.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_3719.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-guard.galgas", 97)) ;
    }
    enumerator_3719.gotoNextObject () ;
  }
  const GALGAS_guardDeclarationAST temp_8 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mGuardInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 99)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_guardDeclarationAST temp_10 = object ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      const GALGAS_guardDeclarationAST temp_11 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-guard.galgas", 101)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_guardDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_guardDeclarationAST.mSlotID,
                                               extensionMethod_guardDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_guardDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_guardDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@guardDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_guardDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_guardDeclarationAST * object = (const cPtr_guardDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_guardDeclarationAST) ;
  const GALGAS_guardDeclarationAST temp_0 = object ;
  const GALGAS_guardDeclarationAST temp_1 = object ;
  result_result = GALGAS_string ("guard ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)).add_operation (temp_1.readProperty_mGuardName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_guardDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_guardDeclarationAST.mSlotID,
                                                           extensionGetter_guardDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_guardDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_guardDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@guardDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_guardDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_guardDeclarationAST * object = (const cPtr_guardDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_guardDeclarationAST) ;
  const GALGAS_guardDeclarationAST temp_0 = object ;
  result_result = temp_0.readProperty_mGuardName ().readProperty_location () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_guardDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_guardDeclarationAST.mSlotID,
                                                  extensionGetter_guardDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_guardDeclarationAST_locationForErrorSignaling (defineExtensionGetter_guardDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_guardDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                GALGAS_semanticContext & ioArgument_ioContext,
                                                                GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardDeclarationAST * object = (const cPtr_guardDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_guardDeclarationAST) ;
  GALGAS_routineTypedSignature var_signature_5567 ;
  {
  const GALGAS_guardDeclarationAST temp_0 = object ;
  routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mGuardFormalArgumentList (), var_signature_5567, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 132)) ;
  }
  const GALGAS_guardDeclarationAST temp_1 = object ;
  const GALGAS_guardDeclarationAST temp_2 = object ;
  GALGAS_lstring var_guardMangledName_5615 = extensionGetter_mangledName (var_signature_5567, temp_1.readProperty_mReceiverTypeName ().readProperty_string (), temp_2.readProperty_mGuardName (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 134)) ;
  const GALGAS_guardDeclarationAST temp_3 = object ;
  const GALGAS_guardDeclarationAST temp_4 = object ;
  const GALGAS_guardDeclarationAST temp_5 = object ;
  GALGAS_lstring var_guardUserLLVMName_5772 = function_guardUserLLVMName (temp_3.readProperty_mReceiverLLVMBaseTypeName (), temp_4.readProperty_mGuardName (), temp_5.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 136)) ;
  const GALGAS_guardDeclarationAST temp_6 = object ;
  const GALGAS_guardDeclarationAST temp_7 = object ;
  const GALGAS_guardDeclarationAST temp_8 = object ;
  GALGAS_lstring var_guardImplementationLLVMName_5968 = function_guardImplementationLLVMName (temp_6.readProperty_mReceiverLLVMBaseTypeName (), temp_7.readProperty_mGuardName (), temp_8.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 142)) ;
  {
  const GALGAS_guardDeclarationAST temp_9 = object ;
  ioArgument_ioContext.mProperty_mGuardMap.setter_insertKey (var_guardMangledName_5615, temp_9.readProperty_mIsPublic (), var_signature_5567, var_guardUserLLVMName_5772, var_guardImplementationLLVMName_5968, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 147)) ;
  }
  const GALGAS_guardDeclarationAST temp_10 = object ;
  const GALGAS_guardDeclarationAST temp_11 = object ;
  const GALGAS_guardDeclarationAST temp_12 = object ;
  const GALGAS_guardDeclarationAST temp_13 = object ;
  const GALGAS_guardDeclarationAST temp_14 = object ;
  const GALGAS_guardDeclarationAST temp_15 = object ;
  const GALGAS_guardDeclarationAST temp_16 = object ;
  const GALGAS_guardDeclarationAST temp_17 = object ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedGuardDeclaration::constructor_new (temp_10.readProperty_mReceiverTypeName (), temp_11.readProperty_mGuardName (), temp_12.readProperty_mIsPublic (), temp_13.readProperty_mGuardAttributeList (), temp_14.readProperty_mGuardFormalArgumentList (), temp_15.readProperty_mGuardKind (), temp_16.readProperty_mGuardInstructionList (), temp_17.readProperty_mEndOfGuardDeclaration ()  COMMA_SOURCE_FILE ("declaration-guard.galgas", 154))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 154)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_guardDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_guardDeclarationAST.mSlotID,
                                       extensionMethod_guardDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_guardDeclarationAST_enterInContext (defineExtensionMethod_guardDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'guardUserLLVMName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_guardUserLLVMName (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                           const GALGAS_lstring & constinArgument_inGuardName,
                                           const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_7144 = GALGAS_string ("guard.user.") ;
  var_s_7144.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)) ;
  var_s_7144.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 176)) ;
  var_s_7144.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 177)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_7283 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_7283.hasCurrentObject ()) {
    var_s_7144.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7283.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)).add_operation (enumerator_7283.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)) ;
    enumerator_7283.gotoNextObject () ;
  }
  var_s_7144.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 181)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_7144, constinArgument_inGuardName.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-guard.galgas", 182)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_guardUserLLVMName [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_guardUserLLVMName (C_Compiler * inCompiler,
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
  return function_guardUserLLVMName (operand0,
                                     operand1,
                                     operand2,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_guardUserLLVMName ("guardUserLLVMName",
                                                                   functionWithGenericHeader_guardUserLLVMName,
                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                   3,
                                                                   functionArgs_guardUserLLVMName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'guardImplementationLLVMName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_guardImplementationLLVMName (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                     const GALGAS_lstring & constinArgument_inGuardName,
                                                     const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_7841 = GALGAS_string ("guard.implementation.") ;
  var_s_7841.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 192)) ;
  var_s_7841.plusAssign_operation(constinArgument_inGuardName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 193)) ;
  var_s_7841.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 194)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_7990 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_7990.hasCurrentObject ()) {
    var_s_7841.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7990.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)).add_operation (enumerator_7990.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)) ;
    enumerator_7990.gotoNextObject () ;
  }
  var_s_7841.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_7841, constinArgument_inGuardName.readProperty_location ()  COMMA_SOURCE_FILE ("declaration-guard.galgas", 199)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_guardImplementationLLVMName [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_guardImplementationLLVMName (C_Compiler * inCompiler,
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
  return function_guardImplementationLLVMName (operand0,
                                               operand1,
                                               operand2,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_guardImplementationLLVMName ("guardImplementationLLVMName",
                                                                             functionWithGenericHeader_guardImplementationLLVMName,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             3,
                                                                             functionArgs_guardImplementationLLVMName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedGuardDeclaration semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_decoratedGuardDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                        GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedGuardDeclaration * object = (const cPtr_decoratedGuardDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedGuardDeclaration) ;
  const GALGAS_decoratedGuardDeclaration temp_0 = object ;
  GALGAS_omnibusType var_receiverType_10019 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mReceiverTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 238)) ;
  GALGAS_bool var_warnIfUnused_10116 = GALGAS_bool (true) ;
  const GALGAS_decoratedGuardDeclaration temp_1 = object ;
  cEnumerator_lstringlist enumerator_10140 (temp_1.readProperty_mGuardAttributeList (), kENUMERATION_UP) ;
  while (enumerator_10140.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_10140.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 242)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_warnIfUnused_10116.operator_not (SOURCE_FILE ("declaration-guard.galgas", 243)).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_10140.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 244)) ;
          }
        }
        var_warnIfUnused_10116 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_10140.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute; available attribute is @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)), fixItArray5  COMMA_SOURCE_FILE ("declaration-guard.galgas", 248)) ;
    }
    enumerator_10140.gotoNextObject () ;
  }
  GALGAS_universalValuedObjectMap var_universalMap_10549 = constinArgument_inContext.readProperty_mValuedObjectMap () ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_10549, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 253)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_10549, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 254)) ;
  }
  GALGAS_routineFormalArgumentListIR var_formalArguments_10705 = GALGAS_routineFormalArgumentListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 255)) ;
  GALGAS_guardKindGenerationIR var_convenienceGuardGenerationIR_10768 ;
  GALGAS_allocaList var_allocaList_10797 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 257)) ;
  GALGAS_instructionListIR var_instructionGenerationList_10853 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 258)) ;
  const GALGAS_decoratedGuardDeclaration temp_6 = object ;
  switch (temp_6.readProperty_mGuardKind ().enumValue ()) {
  case GALGAS_guardKind::kNotBuilt:
    break ;
  case GALGAS_guardKind::kEnum_baseGuard:
    {
      const GALGAS_decoratedGuardDeclaration temp_7 = object ;
      GALGAS_lstring var_resultVarName_10960 = GALGAS_lstring::constructor_new (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 262)), temp_7.readProperty_mGuardName ().readProperty_location ()  COMMA_SOURCE_FILE ("declaration-guard.galgas", 262)) ;
      GALGAS_omnibusType var_resultType_11163 = extensionGetter_booleanType (constinArgument_inContext, var_resultVarName_10960.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 264)) ;
      var_allocaList_10797.addAssign_operation (function_llvmNameForLocalVariable (var_resultVarName_10960.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 273)), var_resultType_11163, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 273)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_10549, var_resultVarName_10960, var_resultType_11163, var_resultVarName_10960, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("declaration-guard.galgas", 278)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 274)) ;
      }
      {
      const GALGAS_decoratedGuardDeclaration temp_8 = object ;
      routine_enterFormalArguments (constinArgument_inContext, temp_8.readProperty_mGuardFormalArgumentList (), var_universalMap_10549, var_formalArguments_10705, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 282)) ;
      }
      var_convenienceGuardGenerationIR_10768 = GALGAS_guardKindGenerationIR::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 289)) ;
      const GALGAS_decoratedGuardDeclaration temp_9 = object ;
      extensionMethod_analyzeRoutineInstructionList (temp_9.readProperty_mGuardInstructionList (), var_receiverType_10019, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-guard.galgas", 293)), constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 295)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10549, var_allocaList_10797, var_instructionGenerationList_10853, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 291)) ;
    }
    break ;
  case GALGAS_guardKind::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_13702 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (temp_6.readProperty_mGuardKind ().unsafePointer ()) ;
      const GALGAS_callInstructionAST extractedValue_12600_baseGuardInstruction = extractPtr_13702->mAssociatedValue0 ;
      {
      const GALGAS_decoratedGuardDeclaration temp_10 = object ;
      routine_enterFormalArguments (constinArgument_inContext, temp_10.readProperty_mGuardFormalArgumentList (), var_universalMap_10549, var_formalArguments_10705, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 304)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((const cPtr_callInstructionAST *) extractedValue_12600_baseGuardInstruction.ptr (), var_receiverType_10019, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-guard.galgas", 314)), constinArgument_inContext, GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 316)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10549, var_convenienceGuardGenerationIR_10768, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 312)) ;
      const GALGAS_decoratedGuardDeclaration temp_11 = object ;
      extensionMethod_analyzeRoutineInstructionList (temp_11.readProperty_mGuardInstructionList (), var_receiverType_10019, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-guard.galgas", 325)), constinArgument_inContext, GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("declaration-guard.galgas", 327)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_10549, var_allocaList_10797, var_instructionGenerationList_10853, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 323)) ;
    }
    break ;
  }
  extensionMethod_checkLocalVariableFinalState (var_universalMap_10549, var_instructionGenerationList_10853, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 336)) ;
  {
  const GALGAS_decoratedGuardDeclaration temp_12 = object ;
  extensionSetter_closeBranch (var_universalMap_10549, temp_12.readProperty_mEndOfGuardDeclaration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 337)) ;
  }
  {
  const GALGAS_decoratedGuardDeclaration temp_13 = object ;
  extensionSetter_closeOverride (var_universalMap_10549, temp_13.readProperty_mEndOfGuardDeclaration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 338)) ;
  }
  const GALGAS_decoratedGuardDeclaration temp_14 = object ;
  const GALGAS_decoratedGuardDeclaration temp_15 = object ;
  GALGAS_lstring var_guardUserLLVMName_13977 = function_guardUserLLVMName (var_receiverType_10019.readProperty_llvmBaseTypeName (), temp_14.readProperty_mGuardName (), temp_15.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 340)) ;
  const GALGAS_decoratedGuardDeclaration temp_16 = object ;
  const GALGAS_decoratedGuardDeclaration temp_17 = object ;
  GALGAS_lstring var_guardImplementationLLVMName_14128 = function_guardImplementationLLVMName (var_receiverType_10019.readProperty_llvmBaseTypeName (), temp_16.readProperty_mGuardName (), temp_17.readProperty_mGuardFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 345)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_guardUserRoutineIR::constructor_new (var_guardUserLLVMName_13977, GALGAS_bool (false), var_warnIfUnused_10116, var_guardImplementationLLVMName_14128.readProperty_string (), var_formalArguments_10705, var_receiverType_10019, var_convenienceGuardGenerationIR_10768  COMMA_SOURCE_FILE ("declaration-guard.galgas", 351))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 351)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_guardImplementationRoutineIR::constructor_new (var_guardImplementationLLVMName_14128, GALGAS_bool (false), var_warnIfUnused_10116, var_formalArguments_10705, var_receiverType_10019, var_convenienceGuardGenerationIR_10768, var_allocaList_10797, var_instructionGenerationList_10853  COMMA_SOURCE_FILE ("declaration-guard.galgas", 360))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 360)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_decoratedGuardDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedGuardDeclaration.mSlotID,
                                         extensionMethod_decoratedGuardDeclaration_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_decoratedGuardDeclaration_semanticAnalysis (defineExtensionMethod_decoratedGuardDeclaration_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standAloneProcedureCallInstructionAST baseGuardAnalyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                                                                    const GALGAS_omnibusType /* constinArgument_inSelfType */,
                                                                                    const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                    const GALGAS_mode /* constinArgument_inMode */,
                                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                    GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                                    GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                                    GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  const GALGAS_standAloneProcedureCallInstructionAST temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mSandAloneRoutineName ().readProperty_location (), GALGAS_string ("NOT HANDLED YET"), fixItArray1  COMMA_SOURCE_FILE ("declaration-guard.galgas", 398)) ;
  outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST.mSlotID,
                                         extensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze (defineExtensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procedureCallInstructionAST baseGuardAnalyze'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_procedureCallInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                                                          const GALGAS_omnibusType constinArgument_inSelfType,
                                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_mode constinArgument_inMode,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                          GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  GALGAS_allocaList var_baseGuardAllocaList_17015 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 413)) ;
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList_17080 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 414)) ;
  GALGAS_objectIR var_currentObject_17215 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_procedureCallInstructionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 418)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_procedureCallInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("self is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 419)) ;
          var_currentObject_17215.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        var_currentObject_17215 = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 421))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 421)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_procedureCallInstructionAST temp_5 = object ;
    extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, temp_5.readProperty_mIdentifier (), constinArgument_inMode, ioArgument_ioTemporaries.readProperty_mInitializedDriverSet (), var_currentObject_17215, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 424)) ;
  }
  const GALGAS_procedureCallInstructionAST temp_6 = object ;
  GALGAS_accessInAssignmentListAST var_accessList_17699 = temp_6.readProperty_mAccessList () ;
  GALGAS_accessInAssignmentAST var_lastAccess_17758 ;
  {
  var_accessList_17699.setter_popLast (var_lastAccess_17758, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 433)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_17799 (var_accessList_17699, kENUMERATION_UP) ;
  while (enumerator_17799.hasCurrentObject ()) {
    GALGAS_omnibusType var_currentType_17837 = extensionGetter_type (var_currentObject_17215, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 436)) ;
    switch (enumerator_17799.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_19004 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_17799.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_17919_propertyName = extractPtr_19004->mAssociatedValue0 ;
        GALGAS_propertyGetterMap var_propertyGetterMap_18057 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_17837, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 440)) ;
        GALGAS_propertyGetterKind var_propertyAccess_18255 ;
        GALGAS_propertyVisibility joker_18234 ; // Joker input parameter
        var_propertyGetterMap_18057.method_searchKey (extractedValue_17919_propertyName, joker_18234, var_propertyAccess_18255, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 442)) ;
        switch (var_propertyAccess_18255.enumValue ()) {
        case GALGAS_propertyGetterKind::kNotBuilt:
          break ;
        case GALGAS_propertyGetterKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_17919_propertyName.readProperty_location (), GALGAS_string ("a constant property not available in this context"), fixItArray7  COMMA_SOURCE_FILE ("declaration-guard.galgas", 445)) ;
            var_currentObject_17215.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_storedProperty:
          {
            const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_18867 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_propertyAccess_18255.unsafePointer ()) ;
            const GALGAS_omnibusType extractedValue_18467_propertyType = extractPtr_18867->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_18487_propertyIndex = extractPtr_18867->mAssociatedValue1 ;
            GALGAS_string var_property_5F_llvmName_18553 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_18553, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 447)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (var_baseGuardInstructionGenerationList_17080, var_currentType_17837, extensionGetter_llvmName (var_currentObject_17215, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 450)), var_property_5F_llvmName_18553, extractedValue_18487_propertyIndex, extractedValue_17919_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 448)) ;
            }
            var_currentObject_17215 = GALGAS_objectIR::constructor_reference (extractedValue_18467_propertyType, var_property_5F_llvmName_18553  COMMA_SOURCE_FILE ("declaration-guard.galgas", 455)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_computedProperty:
          {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (extractedValue_17919_propertyName.readProperty_location (), GALGAS_string ("a computed property cannot be named in guard"), fixItArray8  COMMA_SOURCE_FILE ("declaration-guard.galgas", 457)) ;
            var_currentObject_17215.drop () ; // Release error dropped variable
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_19113 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_17799.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_location extractedValue_19049_endOfIndex = extractPtr_19113->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (extractedValue_19049_endOfIndex, GALGAS_string ("not handled yet"), fixItArray9  COMMA_SOURCE_FILE ("declaration-guard.galgas", 460)) ;
        var_currentObject_17215.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_17799.gotoNextObject () ;
  }
  switch (var_lastAccess_17758.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_20615 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_17758.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_19208_methodName = extractPtr_20615->mAssociatedValue0 ;
      GALGAS_omnibusType var_currentType_19231 = extensionGetter_type (var_currentObject_17215, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 466)) ;
      const GALGAS_procedureCallInstructionAST temp_10 = object ;
      GALGAS_lstring var_guardMangledName_19279 = extensionGetter_mangledName (temp_10.readProperty_mArguments (), var_currentType_19231.readProperty_omnibusTypeDescriptionName (), extractedValue_19208_methodName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 467)) ;
      GALGAS_routineTypedSignature var_formalSignature_19472 ;
      GALGAS_lstring var_guardRoutineImplentationLLVMName_19513 ;
      GALGAS_bool joker_19450 ; // Joker input parameter
      GALGAS_lstring joker_19474 ; // Joker input parameter
      constinArgument_inContext.readProperty_mGuardMap ().method_searchKey (var_guardMangledName_19279, joker_19450, var_formalSignature_19472, joker_19474, var_guardRoutineImplentationLLVMName_19513, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 468)) ;
      GALGAS_procCallEffectiveParameterListIR temp_11 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 472)) ;
      temp_11.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("declaration-guard.galgas", 471)), GALGAS_objectIR::constructor_reference (var_currentType_19231, extensionGetter_llvmName (var_currentObject_17215, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 472))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 472))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 472)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_19620 = temp_11 ;
      {
      const GALGAS_procedureCallInstructionAST temp_12 = object ;
      routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_19472, temp_12.readProperty_mArguments (), extractedValue_19208_methodName.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_17015, var_baseGuardInstructionGenerationList_17080, var_effectiveParameterListIR_19620, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 475)) ;
      }
      outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList_17015, var_baseGuardInstructionGenerationList_17080, var_guardRoutineImplentationLLVMName_19513.readProperty_string (), var_effectiveParameterListIR_19620  COMMA_SOURCE_FILE ("declaration-guard.galgas", 491)) ;
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_20757 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_17758.unsafePointer ()) ;
      const GALGAS_location extractedValue_20658_endOfIndex = extractPtr_20757->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (extractedValue_20658_endOfIndex, GALGAS_string ("a property access is required here"), fixItArray13  COMMA_SOURCE_FILE ("declaration-guard.galgas", 498)) ;
      outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_procedureCallInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_procedureCallInstructionAST.mSlotID,
                                         extensionMethod_procedureCallInstructionAST_baseGuardAnalyze) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_procedureCallInstructionAST_baseGuardAnalyze (defineExtensionMethod_procedureCallInstructionAST_baseGuardAnalyze, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardUserRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_guardUserRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                        GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                        GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardUserRoutineIR * object = (const cPtr_guardUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_guardUserRoutineIR) ;
  const GALGAS_guardUserRoutineIR temp_0 = object ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (temp_0.readProperty_mMangledImplementationGuardName ()  COMMA_SOURCE_FILE ("declaration-guard.galgas", 529)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_guardUserRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_guardUserRoutineIR.mSlotID,
                                                extensionMethod_guardUserRoutineIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_guardUserRoutineIR_enterAccessibleEntities (defineExtensionMethod_guardUserRoutineIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardUserRoutineIR svcDeclarationGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_guardUserRoutineIR_svcDeclarationGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                                         GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardUserRoutineIR * object = (const cPtr_guardUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_guardUserRoutineIR) ;
  const GALGAS_guardUserRoutineIR temp_0 = object ;
  GALGAS_string var_userMangledName_22540 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 539)) ;
  const GALGAS_guardUserRoutineIR temp_1 = object ;
  GALGAS_string var_implementationMangledName_22625 = temp_1.readProperty_mMangledImplementationGuardName ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 540)) ;
  const GALGAS_guardUserRoutineIR temp_2 = object ;
  switch (temp_2.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_22540, var_implementationMangledName_22625, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 543)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      ioArgument_ioSectionList.addAssign_operation (var_userMangledName_22540, var_implementationMangledName_22625, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 545)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_guardUserRoutineIR_svcDeclarationGeneration (void) {
  enterExtensionMethod_svcDeclarationGeneration (kTypeDescriptor_GALGAS_guardUserRoutineIR.mSlotID,
                                                 extensionMethod_guardUserRoutineIR_svcDeclarationGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_guardUserRoutineIR_svcDeclarationGeneration (defineExtensionMethod_guardUserRoutineIR_svcDeclarationGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardUserRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_guardUserRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                   GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardUserRoutineIR * object = (const cPtr_guardUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_guardUserRoutineIR) ;
  const GALGAS_guardUserRoutineIR temp_0 = object ;
  const GALGAS_guardUserRoutineIR temp_1 = object ;
  const GALGAS_guardUserRoutineIR temp_2 = object ;
  GALGAS_string var_prototype_23304 = function_llvmFunctionPrototype (GALGAS_string ("i1"), temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 561)), temp_1.readProperty_mReceiverType (), temp_2.readProperty_mFormalArgumentListForGeneration (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 559)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare ").add_operation (var_prototype_23304, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_guardUserRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_guardUserRoutineIR.mSlotID,
                                           extensionMethod_guardUserRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_guardUserRoutineIR_llvmCodeGeneration (defineExtensionMethod_guardUserRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardImplementationRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_guardImplementationRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                             GALGAS_string & ioArgument_ioLLVMcode,
                                                                             const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                             GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardImplementationRoutineIR * object = (const cPtr_guardImplementationRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_guardImplementationRoutineIR) ;
  const GALGAS_guardImplementationRoutineIR temp_0 = object ;
  GALGAS_string var_guardRoutineName_24304 = temp_0.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 585)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define i1 @").add_operation (var_guardRoutineName_24304, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 586)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 586)) ;
  const GALGAS_guardImplementationRoutineIR temp_1 = object ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, temp_1.readProperty_mReceiverType ().readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 587)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_3) {
    const GALGAS_guardImplementationRoutineIR temp_4 = object ;
    temp_2 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 590)) ;
  }
  GALGAS_string var_receiverLLVMTypeName_24440 = temp_2 ;
  GALGAS_bool var_first_24553 = GALGAS_bool (true) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_24440.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_24440.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 594)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 594)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 594)) ;
      var_first_24553 = GALGAS_bool (false) ;
    }
  }
  const GALGAS_guardImplementationRoutineIR temp_6 = object ;
  cEnumerator_routineFormalArgumentListIR enumerator_24755 (temp_6.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_24755.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_first_24553.boolEnum () ;
      if (kBoolTrue == test_7) {
        var_first_24553 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 601)) ;
    }
    switch (enumerator_24755.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24755.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)).add_operation (enumerator_24755.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24755.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)).add_operation (function_llvmNameForLocalVariable (enumerator_24755.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24755.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)).add_operation (function_llvmNameForLocalVariable (enumerator_24755.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)) ;
      }
      break ;
    }
    enumerator_24755.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)) ;
  const GALGAS_guardImplementationRoutineIR temp_8 = object ;
  GALGAS_allocaList var_allocaList_25396 = temp_8.readProperty_mAllocaList () ;
  const GALGAS_guardImplementationRoutineIR temp_9 = object ;
  cEnumerator_routineFormalArgumentListIR enumerator_25519 (temp_9.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_25519.hasCurrentObject ()) {
    switch (enumerator_25519.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_25396.addAssign_operation (function_llvmNameForLocalVariable (enumerator_25519.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 619)), enumerator_25519.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 619)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_25519.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_25396, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 624)) ;
  const GALGAS_guardImplementationRoutineIR temp_10 = object ;
  cEnumerator_routineFormalArgumentListIR enumerator_25903 (temp_10.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_25903.hasCurrentObject ()) {
    switch (enumerator_25903.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_26015 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25903.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_26015, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (enumerator_25903.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (var_llvmType_26015, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 631)).add_operation (function_llvmNameForLocalVariable (enumerator_25903.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 631)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 631)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_25903.gotoNextObject () ;
  }
  GALGAS_string var_accepted_5F_llvmName_26319 = function_llvmNameForLocalVariable (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_loaded_26409 = function_llvmNameForLocalVariable (function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 637)).add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 637)) ;
  const GALGAS_guardImplementationRoutineIR temp_11 = object ;
  switch (temp_11.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      GALGAS_string var_accepted_5F_label_26598 = function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 641)).add_operation (GALGAS_string (".guard.accepted"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 641)) ;
      GALGAS_string var_rejected_5F_label_26672 = function_acceptVariableOmnibusName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 642)).add_operation (GALGAS_string (".guard.rejected"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 642)) ;
      const GALGAS_guardImplementationRoutineIR temp_12 = object ;
      extensionMethod_instructionListLLVMCode (temp_12.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 643)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_accepted_5F_llvmName_5F_loaded_26409, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GALGAS_string (" = load i1, i1* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (var_accepted_5F_llvmName_26319, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 644)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_accepted_5F_llvmName_5F_loaded_26409, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)).add_operation (var_accepted_5F_label_26598, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)).add_operation (var_rejected_5F_label_26672, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 645)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_accepted_5F_label_26598.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 646)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 646)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 647)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 648)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_rejected_5F_label_26672.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 649)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 649)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 650)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 651)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_28679 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (temp_11.readProperty_mGuardKindGenerationIR ().unsafePointer ()) ;
      const GALGAS_allocaList extractedValue_27342_baseGuardAllocaList = extractPtr_28679->mAssociatedValue0 ;
      const GALGAS_instructionListIR extractedValue_27377_baseGuardInstructionGenerationList = extractPtr_28679->mAssociatedValue1 ;
      const GALGAS_string extractedValue_27398_baseGuardMangledName = extractPtr_28679->mAssociatedValue2 ;
      const GALGAS_procCallEffectiveParameterListIR extractedValue_27430_baseGuardEffectiveParameterList = extractPtr_28679->mAssociatedValue3 ;
      extensionMethod_generateAllocaList (extractedValue_27342_baseGuardAllocaList, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 653)) ;
      extensionMethod_instructionListLLVMCode (extractedValue_27377_baseGuardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 654)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %invoked.guard.result = call i1 @").add_operation (extractedValue_27398_baseGuardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 655)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 655)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 655)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 656)) ;
      cEnumerator_procCallEffectiveParameterListIR enumerator_27788 (extractedValue_27430_baseGuardEffectiveParameterList, kENUMERATION_UP) ;
      while (enumerator_27788.hasCurrentObject ()) {
        switch (enumerator_27788.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
        case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_27788.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 660)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 660)).add_operation (extensionGetter_llvmName (enumerator_27788.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 660)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 660)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_27788.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 662)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 662)).add_operation (extensionGetter_llvmName (enumerator_27788.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 662)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 662)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_27788.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 664)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 664)).add_operation (extensionGetter_llvmName (enumerator_27788.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 664)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 664)) ;
          }
          break ;
        }
        if (enumerator_27788.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 667)) ;
        }
        enumerator_27788.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 669)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %invoked.guard.result, label %invoked.guard.acceptation, label %invoked.guard.rejection\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 670)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.acceptation:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 671)) ;
      const GALGAS_guardImplementationRoutineIR temp_13 = object ;
      extensionMethod_instructionListLLVMCode (temp_13.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 672)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 673)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.rejection:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 674)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 675)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 676)) ;
    }
    break ;
  }
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("void @accept.guard ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 678)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("i1 @xtr.user.result ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 679)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_guardImplementationRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_guardImplementationRoutineIR.mSlotID,
                                           extensionMethod_guardImplementationRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_guardImplementationRoutineIR_llvmCodeGeneration (defineExtensionMethod_guardImplementationRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardImplementationRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_guardImplementationRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                  GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardImplementationRoutineIR * object = (const cPtr_guardImplementationRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_guardImplementationRoutineIR) ;
  const GALGAS_guardImplementationRoutineIR temp_0 = object ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 688)) ;
  const GALGAS_guardImplementationRoutineIR temp_1 = object ;
  switch (temp_1.readProperty_mGuardKindGenerationIR ().enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_29560 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (temp_1.readProperty_mGuardKindGenerationIR ().unsafePointer ()) ;
      const GALGAS_instructionListIR extractedValue_29340_baseGuardInstructionGenerationList = extractPtr_29560->mAssociatedValue1 ;
      const GALGAS_string extractedValue_29375_baseGuardImplementationMangledName = extractPtr_29560->mAssociatedValue2 ;
      ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_29375_baseGuardImplementationMangledName  COMMA_SOURCE_FILE ("declaration-guard.galgas", 692)) ;
      extensionMethod_enterAccessibleEntities (extractedValue_29340_baseGuardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 693)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_guardImplementationRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_guardImplementationRoutineIR.mSlotID,
                                                extensionMethod_guardImplementationRoutineIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_guardImplementationRoutineIR_enterAccessibleEntities (defineExtensionMethod_guardImplementationRoutineIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'routineTypedSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_routineTypedSignature (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                    const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                                    GALGAS_routineTypedSignature & outArgument_outSignature,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outSignature = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("formal-arguments.galgas", 167)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_6254 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_6254.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_typeProxy_6348 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6254.current_mFormalArgumentTypeName (HERE), var_typeProxy_6348, inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 169)) ;
    }
    outArgument_outSignature.addAssign_operation (enumerator_6254.current_mFormalArgumentPassingMode (HERE), enumerator_6254.current_mSelector (HERE), var_typeProxy_6348, enumerator_6254.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 170)) ;
    enumerator_6254.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'routineTypedSignature2'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_routineTypedSignature_32_ (GALGAS_unifiedTypeMap inArgument_inTypeMap,
                                        const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                                        GALGAS_routineTypedSignature & outArgument_outSignature,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outSignature = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("formal-arguments.galgas", 180)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_6878 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_6878.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_typeProxy_6924 = extensionGetter_searchKey (inArgument_inTypeMap, enumerator_6878.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 182)) ;
    outArgument_outSignature.addAssign_operation (enumerator_6878.current_mFormalArgumentPassingMode (HERE), enumerator_6878.current_mSelector (HERE), var_typeProxy_6924, enumerator_6878.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 183)) ;
    enumerator_6878.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterFormalArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterFormalArguments (const GALGAS_semanticContext constinArgument_inContext,
                                   const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentsAST,
                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                   GALGAS_routineFormalArgumentListIR & ioArgument_ioFormalArguments,
                                   const GALGAS_bool constinArgument_inUnusedWarning,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_routineFormalArgumentListAST enumerator_9490 (constinArgument_inFormalArgumentsAST, kENUMERATION_UP) ;
  while (enumerator_9490.hasCurrentObject ()) {
    GALGAS_omnibusType var_typeProxy_9536 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), enumerator_9490.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 241)) ;
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_9490.current_mFormalArgumentPassingMode (HERE), var_typeProxy_9536, enumerator_9490.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("formal-arguments.galgas", 242)) ;
    switch (enumerator_9490.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsNotEqual, enumerator_9490.current_mFormalArgumentName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = constinArgument_inUnusedWarning.boolEnum () ;
              if (kBoolTrue == test_1) {
                {
                extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, enumerator_9490.current_mFormalArgumentName (HERE), GALGAS_bool (true), var_typeProxy_9536, enumerator_9490.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 247)) ;
                }
              }
            }
            if (kBoolFalse == test_1) {
              {
              extensionSetter_insertUsedLocalConstant (ioArgument_ioUniversalMap, enumerator_9490.current_mFormalArgumentName (HERE), GALGAS_bool (true), var_typeProxy_9536, enumerator_9490.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 249)) ;
              }
            }
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, enumerator_9490.current_mFormalArgumentName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = constinArgument_inUnusedWarning.boolEnum () ;
              if (kBoolTrue == test_3) {
                {
                extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9490.current_mFormalArgumentName (HERE), var_typeProxy_9536, enumerator_9490.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("formal-arguments.galgas", 255)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 255)) ;
                }
              }
            }
            if (kBoolFalse == test_3) {
              {
              extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9490.current_mFormalArgumentName (HERE), var_typeProxy_9536, enumerator_9490.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("formal-arguments.galgas", 257)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 257)) ;
              }
            }
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9490.current_mFormalArgumentName (HERE), var_typeProxy_9536, enumerator_9490.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("formal-arguments.galgas", 261)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 261)) ;
        }
      }
      break ;
    }
    enumerator_9490.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@regularRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_regularRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                      GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                      GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_regularRoutineIR * object = (const cPtr_regularRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_regularRoutineIR) ;
  const GALGAS_regularRoutineIR temp_0 = object ;
  cEnumerator_instructionListIR enumerator_6238 (temp_0.readProperty_mInstructionGenerationList (), kENUMERATION_UP) ;
  while (enumerator_6238.hasCurrentObject ()) {
    callExtensionMethod_enterAccessibleEntities ((const cPtr_abstractInstructionIR *) enumerator_6238.current (HERE).readProperty_mInstructionGeneration ().ptr (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 154)) ;
    enumerator_6238.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_regularRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_regularRoutineIR.mSlotID,
                                                extensionMethod_regularRoutineIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_regularRoutineIR_enterAccessibleEntities (defineExtensionMethod_regularRoutineIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@regularRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_regularRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_regularRoutineIR * object = (const cPtr_regularRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_regularRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 168)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_regularRoutineIR temp_1 = object ;
    test_0 = temp_1.readProperty_mExportedFunction ().operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 169)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" internal"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 170)) ;
    }
  }
  const GALGAS_regularRoutineIR temp_2 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)) ;
  const GALGAS_regularRoutineIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)) ;
  const GALGAS_regularRoutineIR temp_4 = object ;
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, temp_4.readProperty_mReceiverType ().readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 174)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_6) {
    const GALGAS_regularRoutineIR temp_7 = object ;
    temp_5 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_7.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 176)) ;
  }
  GALGAS_string var_receiverLLVMTypeName_6928 = temp_5 ;
  GALGAS_bool var_first_7039 = GALGAS_bool (true) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_6928.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_6928.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)) ;
      var_first_7039 = GALGAS_bool (false) ;
    }
  }
  const GALGAS_regularRoutineIR temp_9 = object ;
  cEnumerator_routineFormalArgumentListIR enumerator_7241 (temp_9.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_7241.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_first_7039.boolEnum () ;
      if (kBoolTrue == test_10) {
        var_first_7039 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_10) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 187)) ;
    }
    switch (enumerator_7241.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7241.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (enumerator_7241.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7241.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (function_llvmNameForLocalVariable (enumerator_7241.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7241.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (function_llvmNameForLocalVariable (enumerator_7241.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)) ;
      }
      break ;
    }
    enumerator_7241.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    GALGAS_bool test_12 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 198)) ;
    if (kBoolTrue == test_12.boolEnum ()) {
      const GALGAS_regularRoutineIR temp_13 = object ;
      test_12 = temp_13.readProperty_mAppendFileAndLineArgumentForPanicLocation () ;
    }
    test_11 = test_12.boolEnum () ;
    if (kBoolTrue == test_11) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = var_first_7039.operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 199)).boolEnum () ;
        if (kBoolTrue == test_14) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 200)) ;
        }
      }
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)).add_operation (GALGAS_string (" %LINE, i8* %FILE"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)) ;
  const GALGAS_regularRoutineIR temp_15 = object ;
  GALGAS_allocaList var_allocaList_8149 = temp_15.readProperty_mAllocaList () ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_regularRoutineIR temp_17 = object ;
    test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mReturnType ().readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 207)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_regularRoutineIR temp_18 = object ;
      var_allocaList_8149.addAssign_operation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), temp_18.readProperty_mReturnType (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)) ;
    }
  }
  const GALGAS_regularRoutineIR temp_19 = object ;
  cEnumerator_routineFormalArgumentListIR enumerator_8421 (temp_19.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_8421.hasCurrentObject ()) {
    switch (enumerator_8421.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_8149.addAssign_operation (function_llvmNameForLocalVariable (enumerator_8421.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)), enumerator_8421.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_8421.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_8149, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 218)) ;
  const GALGAS_regularRoutineIR temp_20 = object ;
  cEnumerator_routineFormalArgumentListIR enumerator_8895 (temp_20.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_8895.hasCurrentObject ()) {
    switch (enumerator_8895.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Input argument '").add_operation (enumerator_8895.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)) ;
        GALGAS_string var_llvmType_9087 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_8895.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 225)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9087, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (enumerator_8895.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (var_llvmType_9087, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (function_llvmNameForLocalVariable (enumerator_8895.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)) ;
        callExtensionMethod_generateRetain ((const cPtr_omnibusType *) enumerator_8895.current_mFormalArgumentType (HERE).ptr (), enumerator_8895.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 228)) ;
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          const GALGAS_regularRoutineIR temp_22 = object ;
          test_21 = GALGAS_bool (kIsEqual, temp_22.readProperty_mKind ().objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 229)))).boolEnum () ;
          if (kBoolTrue == test_21) {
            callExtensionMethod_generateInsulate ((const cPtr_omnibusType *) enumerator_8895.current_mFormalArgumentType (HERE).ptr (), enumerator_8895.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 230)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          const GALGAS_regularRoutineIR temp_24 = object ;
          test_23 = GALGAS_bool (kIsEqual, temp_24.readProperty_mKind ().objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 233)))).boolEnum () ;
          if (kBoolTrue == test_23) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_8895.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)) ;
            callExtensionMethod_generateInsulate ((const cPtr_omnibusType *) enumerator_8895.current_mFormalArgumentType (HERE).ptr (), enumerator_8895.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 235)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
      }
      break ;
    }
    enumerator_8895.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Function instruction list\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 241)) ;
  const GALGAS_regularRoutineIR temp_25 = object ;
  extensionMethod_instructionListLLVMCode (temp_25.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 242)) ;
  const GALGAS_regularRoutineIR temp_26 = object ;
  cEnumerator_routineFormalArgumentListIR enumerator_10201 (temp_26.readProperty_mFormalArgumentListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_10201.hasCurrentObject ()) {
    switch (enumerator_10201.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Release input argument '").add_operation (enumerator_10201.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)) ;
        callExtensionMethod_generateRelease ((const cPtr_omnibusType *) enumerator_10201.current_mFormalArgumentType (HERE).ptr (), enumerator_10201.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 249)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        enumGalgasBool test_27 = kBoolTrue ;
        if (kBoolTrue == test_27) {
          const GALGAS_regularRoutineIR temp_28 = object ;
          test_27 = GALGAS_bool (kIsEqual, temp_28.readProperty_mKind ().objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 251)))).boolEnum () ;
          if (kBoolTrue == test_27) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_10201.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)) ;
            callExtensionMethod_generateInsulate ((const cPtr_omnibusType *) enumerator_10201.current_mFormalArgumentType (HERE).ptr (), enumerator_10201.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 253)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        enumGalgasBool test_29 = kBoolTrue ;
        if (kBoolTrue == test_29) {
          const GALGAS_regularRoutineIR temp_30 = object ;
          test_29 = GALGAS_bool (kIsEqual, temp_30.readProperty_mKind ().objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 256)))).boolEnum () ;
          if (kBoolTrue == test_29) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate output argument '").add_operation (enumerator_10201.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)) ;
            callExtensionMethod_generateInsulate ((const cPtr_omnibusType *) enumerator_10201.current_mFormalArgumentType (HERE).ptr (), enumerator_10201.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 258)) ;
          }
        }
      }
      break ;
    }
    enumerator_10201.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Return\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 263)) ;
  enumGalgasBool test_31 = kBoolTrue ;
  if (kBoolTrue == test_31) {
    const GALGAS_regularRoutineIR temp_32 = object ;
    test_31 = GALGAS_bool (kIsEqual, temp_32.readProperty_mReturnType ().readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 264)))).boolEnum () ;
    if (kBoolTrue == test_31) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 265)) ;
    }
  }
  if (kBoolFalse == test_31) {
    GALGAS_string var_resultVarLLVMName_11170 = function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)) ;
    const GALGAS_regularRoutineIR temp_33 = object ;
    const GALGAS_regularRoutineIR temp_34 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = load ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_33.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_34.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (var_resultVarLLVMName_11170, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)) ;
    const GALGAS_regularRoutineIR temp_35 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_35.readProperty_mReturnType ().ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 271)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_regularRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_regularRoutineIR.mSlotID,
                                           extensionMethod_regularRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_regularRoutineIR_llvmCodeGeneration (defineExtensionMethod_regularRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'checkModeAndReturnsRoutineLLVMName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_checkModeAndReturnsRoutineLLVMName (const GALGAS_routineLLVMNameDict & constinArgument_inCalledRoutineDictionary,
                                                           const GALGAS_mode & constinArgument_inCallerRoutineMode,
                                                           const GALGAS_lstring & constinArgument_inRoutineName,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inCalledRoutineDictionary.getter_hasKey (constinArgument_inCallerRoutineMode COMMA_SOURCE_FILE ("logical-modes.galgas", 184)).boolEnum () ;
    if (kBoolTrue == test_0) {
      constinArgument_inCalledRoutineDictionary.method_searchKey (constinArgument_inCallerRoutineMode, result_result, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 185)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_m_8459 = GALGAS_string ("the '").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (GALGAS_string ("' routine cannot be invoked from '"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (extensionGetter_string (constinArgument_inCallerRoutineMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (GALGAS_string ("' mode, but only from:"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)) ;
    cEnumerator_routineLLVMNameDict enumerator_8588 (constinArgument_inCalledRoutineDictionary, kENUMERATION_UP) ;
    while (enumerator_8588.hasCurrentObject ()) {
      var_m_8459.plusAssign_operation(GALGAS_string ("\n"
        "  - '").add_operation (extensionGetter_string (enumerator_8588.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)).add_operation (GALGAS_string ("' mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 189)) ;
      enumerator_8588.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), var_m_8459, fixItArray1  COMMA_SOURCE_FILE ("logical-modes.galgas", 191)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_checkModeAndReturnsRoutineLLVMName [4] = {
  & kTypeDescriptor_GALGAS_routineLLVMNameDict,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_checkModeAndReturnsRoutineLLVMName (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_routineLLVMNameDict operand0 = GALGAS_routineLLVMNameDict::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  const GALGAS_mode operand1 = GALGAS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_checkModeAndReturnsRoutineLLVMName (operand0,
                                                      operand1,
                                                      operand2,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_checkModeAndReturnsRoutineLLVMName ("checkModeAndReturnsRoutineLLVMName",
                                                                                    functionWithGenericHeader_checkModeAndReturnsRoutineLLVMName,
                                                                                    & kTypeDescriptor_GALGAS_string,
                                                                                    3,
                                                                                    functionArgs_checkModeAndReturnsRoutineLLVMName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_panicAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicAST * object = (const cPtr_panicAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicAST) ;
  const GALGAS_panicAST temp_0 = object ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mIsSetup ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("setup") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("loop") ;
  }
  const GALGAS_panicAST temp_3 = object ;
  const GALGAS_panicAST temp_4 = object ;
  GALGAS_lstring var_nodeName_2609 = GALGAS_lstring::constructor_new (GALGAS_string ("panic ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)).add_operation (temp_3.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 60)), temp_4.readProperty_mPriority ().readProperty_location ()  COMMA_SOURCE_FILE ("panic.galgas", 59)) ;
  {
  const GALGAS_panicAST temp_5 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_2609, temp_5, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 63)) ;
  }
  const GALGAS_panicAST temp_6 = object ;
  GALGAS_lstring var_configNode_2802 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 64)), temp_6.readProperty_mPriority ().readProperty_location ()  COMMA_SOURCE_FILE ("panic.galgas", 64)) ;
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_2609, var_configNode_2802 COMMA_SOURCE_FILE ("panic.galgas", 65)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_panicAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                               extensionMethod_panicAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_panicAST_enterInPrecedenceGraph (defineExtensionMethod_panicAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@panicAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_panicAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_panicAST * object = (const cPtr_panicAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicAST) ;
  const GALGAS_panicAST temp_0 = object ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mIsSetup ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("setup") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("loop") ;
  }
  const GALGAS_panicAST temp_3 = object ;
  result_outRepresentation = GALGAS_string ("panic ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 71)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 71)).add_operation (temp_3.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 71)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_panicAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                                           extensionGetter_panicAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_panicAST_keyRepresentationForErrorSignaling (defineExtensionGetter_panicAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@panicAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_panicAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_panicAST * object = (const cPtr_panicAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicAST) ;
  const GALGAS_panicAST temp_0 = object ;
  result_outLocation = temp_0.readProperty_mPriority ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_panicAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                                  extensionGetter_panicAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_panicAST_locationForErrorSignaling (defineExtensionGetter_panicAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineNameForLocationFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_panicRoutineNameForLocationFile (const GALGAS_location & constinArgument_inLocation,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inLocation.getter_isNowhere (SOURCE_FILE ("panic.galgas", 85)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("raise.panic.nofile") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("raise.panic.file.").add_operation (constinArgument_inLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 88)).getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 88)).getter_stringByDeletingPathExtension (SOURCE_FILE ("panic.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 88)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicRoutineNameForLocationFile [2] = {
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicRoutineNameForLocationFile (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_location operand0 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_panicRoutineNameForLocationFile (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicRoutineNameForLocationFile ("panicRoutineNameForLocationFile",
                                                                                 functionWithGenericHeader_panicRoutineNameForLocationFile,
                                                                                 & kTypeDescriptor_GALGAS_string,
                                                                                 1,
                                                                                 functionArgs_panicRoutineNameForLocationFile) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'panicRoutineNameForFilePath'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_panicRoutineNameForFilePath (const GALGAS_string & constinArgument_inFilePath,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inFilePath.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("raise.panic.nofile") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("raise.panic.file.").add_operation (constinArgument_inFilePath.getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 98)).getter_stringByDeletingPathExtension (SOURCE_FILE ("panic.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 98)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicRoutineNameForFilePath [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicRoutineNameForFilePath (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_panicRoutineNameForFilePath (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicRoutineNameForFilePath ("panicRoutineNameForFilePath",
                                                                             functionWithGenericHeader_panicRoutineNameForFilePath,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             1,
                                                                             functionArgs_panicRoutineNameForFilePath) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_panicAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                     GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                     GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                     GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                     GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                     GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                     GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                     GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicAST * object = (const cPtr_panicAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_panicAST temp_1 = object ;
    test_0 = temp_1.readProperty_mIsSetup ().boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_panicAST temp_2 = object ;
      const GALGAS_panicAST temp_3 = object ;
      ioArgument_ioContext.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (temp_2.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 126)), temp_3.readProperty_mPriority ().readProperty_location ()  COMMA_SOURCE_FILE ("panic.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 126)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_panicAST temp_4 = object ;
    const GALGAS_panicAST temp_5 = object ;
    ioArgument_ioContext.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (temp_4.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 128)), temp_5.readProperty_mPriority ().readProperty_location ()  COMMA_SOURCE_FILE ("panic.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 128)) ;
    }
  }
  const GALGAS_panicAST temp_6 = object ;
  const GALGAS_panicAST temp_7 = object ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedPanicRoutine::constructor_new (temp_6.readProperty_mIsSetup (), temp_7.readProperty_mPriority ()  COMMA_SOURCE_FILE ("panic.galgas", 131))  COMMA_SOURCE_FILE ("panic.galgas", 131)) ;
  GALGAS_routineFormalArgumentListAST var_arguments_6465 = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("panic.galgas", 136)) ;
  var_arguments_6465.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("panic.galgas", 138)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 139)), ioArgument_ioContext.readProperty_mPanicLineType ().readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("panic.galgas", 140)), GALGAS_string ("LINE").getter_nowhere (SOURCE_FILE ("panic.galgas", 141))  COMMA_SOURCE_FILE ("panic.galgas", 137)) ;
  var_arguments_6465.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("panic.galgas", 143)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 144)), ioArgument_ioContext.readProperty_mPanicCodeType ().readProperty_llvmBaseTypeName ().getter_nowhere (SOURCE_FILE ("panic.galgas", 145)), GALGAS_string ("CODE").getter_nowhere (SOURCE_FILE ("panic.galgas", 146))  COMMA_SOURCE_FILE ("panic.galgas", 142)) ;
  var_arguments_6465.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("panic.galgas", 148)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 149)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 150)).getter_nowhere (SOURCE_FILE ("panic.galgas", 150)), GALGAS_string ("FILE").getter_nowhere (SOURCE_FILE ("panic.galgas", 151))  COMMA_SOURCE_FILE ("panic.galgas", 147)) ;
  const GALGAS_panicAST temp_8 = object ;
  GALGAS_string temp_9 ;
  const enumGalgasBool test_10 = temp_8.readProperty_mIsSetup ().boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_string ("setup") ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_string ("loop") ;
  }
  const GALGAS_panicAST temp_11 = object ;
  const GALGAS_panicAST temp_12 = object ;
  GALGAS_lstring var_routineMangledName_6849 = GALGAS_lstring::constructor_new (GALGAS_string ("panic.").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)).add_operation (temp_11.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)), temp_12.readProperty_mPriority ().readProperty_location ()  COMMA_SOURCE_FILE ("panic.galgas", 152)) ;
  const GALGAS_panicAST temp_13 = object ;
  const GALGAS_panicAST temp_14 = object ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 157)), GALGAS_mode::constructor_panicMode (SOURCE_FILE ("panic.galgas", 158)), GALGAS_bool (false), GALGAS_routineKind::constructor_function (SOURCE_FILE ("panic.galgas", 160)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("panic.galgas", 163)), var_routineMangledName_6849, var_arguments_6465, GALGAS_bool (false), temp_13.readProperty_mPanicInstructionList (), temp_14.readProperty_mEndOfPanicInstructions (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 169))  COMMA_SOURCE_FILE ("panic.galgas", 156)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_panicAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                       extensionMethod_panicAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_panicAST_enterInContext (defineExtensionMethod_panicAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPanicRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPanicRoutines (const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                                  GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_universalModePanicRoutineIR::constructor_new (GALGAS_string ("section.user.handle.panic").getter_nowhere (SOURCE_FILE ("panic.galgas", 181)), GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("panic.galgas", 180))  COMMA_SOURCE_FILE ("panic.galgas", 180)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_sectionModePanicRoutineIR::constructor_new (GALGAS_string ("section.implementation.handle.panic").getter_nowhere (SOURCE_FILE ("panic.galgas", 187)), GALGAS_bool (false), GALGAS_bool (false), ioArgument_ioIntermediateCodeStruct.readProperty_mPanicSetupListIR (), ioArgument_ioIntermediateCodeStruct.readProperty_mPanicLoopListIR ()  COMMA_SOURCE_FILE ("panic.galgas", 186))  COMMA_SOURCE_FILE ("panic.galgas", 186)) ;
  cEnumerator_stringset enumerator_8583 (constinArgument_inSourceFileAbsolutePathSet, kENUMERATION_UP) ;
  while (enumerator_8583.hasCurrentObject ()) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_fileSpecificPanicRoutineIR::constructor_new (function_panicRoutineNameForFilePath (enumerator_8583.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 196)).getter_nowhere (SOURCE_FILE ("panic.galgas", 196)), GALGAS_bool (false), GALGAS_bool (false), enumerator_8583.current_key (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 195))  COMMA_SOURCE_FILE ("panic.galgas", 195)) ;
    enumerator_8583.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_fileSpecificPanicRoutineIR::constructor_new (function_panicRoutineNameForFilePath (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 203)).getter_nowhere (SOURCE_FILE ("panic.galgas", 203)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("panic.galgas", 202))  COMMA_SOURCE_FILE ("panic.galgas", 202)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicModeName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_panicModeName (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("panic") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicModeName = false ;
static GALGAS_string gOnceFunctionResult_panicModeName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_panicModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicModeName) {
    gOnceFunctionResult_panicModeName = onceFunction_panicModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicModeName = true ;
  }
  return gOnceFunctionResult_panicModeName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicModeName (void) {
  gOnceFunctionResult_panicModeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicModeName (NULL,
                                                           releaseOnceFunctionResult_panicModeName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicModeName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicModeName (C_Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_panicModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicModeName ("panicModeName",
                                                               functionWithGenericHeader_panicModeName,
                                                               & kTypeDescriptor_GALGAS_string,
                                                               0,
                                                               functionArgs_panicModeName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedPanicRoutine semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_decoratedPanicRoutine_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedPanicRoutine * object = (const cPtr_decoratedPanicRoutine *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedPanicRoutine) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_decoratedPanicRoutine temp_1 = object ;
    test_0 = temp_1.readProperty_mIsSetup ().boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_decoratedPanicRoutine temp_2 = object ;
      const GALGAS_decoratedPanicRoutine temp_3 = object ;
      ioArgument_ioTemporaries.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (temp_2.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 234)), temp_3.readProperty_mPriority ().readProperty_location ()  COMMA_SOURCE_FILE ("panic.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 234)) ;
      }
      const GALGAS_decoratedPanicRoutine temp_4 = object ;
      ioArgument_ioIntermediateCodeStruct.mProperty_mPanicSetupListIR.addAssign_operation (temp_4.readProperty_mPriority ().readProperty_bigint ()  COMMA_SOURCE_FILE ("panic.galgas", 235)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_decoratedPanicRoutine temp_5 = object ;
    const GALGAS_decoratedPanicRoutine temp_6 = object ;
    ioArgument_ioTemporaries.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (temp_5.readProperty_mPriority ().readProperty_bigint ().getter_string (SOURCE_FILE ("panic.galgas", 237)), temp_6.readProperty_mPriority ().readProperty_location ()  COMMA_SOURCE_FILE ("panic.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 237)) ;
    }
    const GALGAS_decoratedPanicRoutine temp_7 = object ;
    ioArgument_ioIntermediateCodeStruct.mProperty_mPanicLoopListIR.addAssign_operation (temp_7.readProperty_mPriority ().readProperty_bigint ()  COMMA_SOURCE_FILE ("panic.galgas", 238)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_decoratedPanicRoutine_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedPanicRoutine.mSlotID,
                                         extensionMethod_decoratedPanicRoutine_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_decoratedPanicRoutine_semanticAnalysis (defineExtensionMethod_decoratedPanicRoutine_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generatePanicCode'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generatePanicCode (GALGAS_string & ioArgument_ioLLVMcode,
                                const GALGAS_generationContext constinArgument_inGenerationContext,
                                GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_emptyStringIndex_11386 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, GALGAS_string::makeEmptyString (), var_emptyStringIndex_11386, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 260)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Panic for ISR"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 261)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @panic.isr (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (GALGAS_string (" %in.CODE) "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 262)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %str.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_emptyStringIndex_11386, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 263)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 265)).add_operation (GALGAS_string (" 0, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 266)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 266)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8* %str.FILE"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" )\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 268)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 269)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 270)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fileSpecificPanicRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_fileSpecificPanicRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                           GALGAS_string & ioArgument_ioLLVMcode,
                                                                           const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_fileSpecificPanicRoutineIR * object = (const cPtr_fileSpecificPanicRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_fileSpecificPanicRoutineIR) ;
  GALGAS_string var_arguments_12806 = GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 288)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)).add_operation (GALGAS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)) ;
  const GALGAS_fileSpecificPanicRoutineIR temp_0 = object ;
  GALGAS_string var_fileBaseName_13006 = temp_0.readProperty_inFilePath ().getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 292)).getter_stringByDeletingPathExtension (SOURCE_FILE ("panic.galgas", 292)) ;
  GALGAS_uint var_staticStringIndex_13185 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, var_fileBaseName_13006, var_staticStringIndex_13185, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 294)) ;
  }
  const GALGAS_fileSpecificPanicRoutineIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (temp_1.readProperty_mRoutineMangledName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 298)) ;
  const GALGAS_fileSpecificPanicRoutineIR temp_2 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("panic.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 299)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 300)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (GALGAS_string (" %in.CODE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 301)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %in.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_staticStringIndex_13185, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)).add_operation (var_arguments_12806, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 303)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 304)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 305)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_fileSpecificPanicRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR.mSlotID,
                                           extensionMethod_fileSpecificPanicRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_fileSpecificPanicRoutineIR_llvmCodeGeneration (defineExtensionMethod_fileSpecificPanicRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fileSpecificPanicRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_fileSpecificPanicRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * /* inObject */,
                                                                                GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 314))  COMMA_SOURCE_FILE ("panic.galgas", 314)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_fileSpecificPanicRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR.mSlotID,
                                                extensionMethod_fileSpecificPanicRoutineIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_fileSpecificPanicRoutineIR_enterAccessibleEntities (defineExtensionMethod_fileSpecificPanicRoutineIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@universalModePanicRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_universalModePanicRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * /* inObject */,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                            GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_arguments_14849 = GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 331)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 332)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)).add_operation (GALGAS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 333)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Raise Panic internal"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 336)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 337)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_arguments_14849, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 338)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 339)).add_operation (GALGAS_string ("noreturn\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 339)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_universalModePanicRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_universalModePanicRoutineIR.mSlotID,
                                           extensionMethod_universalModePanicRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_universalModePanicRoutineIR_llvmCodeGeneration (defineExtensionMethod_universalModePanicRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@universalModePanicRoutineIR svcDeclarationGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_universalModePanicRoutineIR_svcDeclarationGeneration (const cPtr_abstractRoutineIR * /* inObject */,
                                                                                  GALGAS_primitiveAndServiceIRlist & /* ioArgument_ioPrimitiveAndServiceList */,
                                                                                  GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                                                                  GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioSectionList.addAssign_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 350)), function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 351)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("panic.galgas", 349)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_universalModePanicRoutineIR_svcDeclarationGeneration (void) {
  enterExtensionMethod_svcDeclarationGeneration (kTypeDescriptor_GALGAS_universalModePanicRoutineIR.mSlotID,
                                                 extensionMethod_universalModePanicRoutineIR_svcDeclarationGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_universalModePanicRoutineIR_svcDeclarationGeneration (defineExtensionMethod_universalModePanicRoutineIR_svcDeclarationGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@universalModePanicRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_universalModePanicRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * /* inObject */,
                                                                                 GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                 GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 361))  COMMA_SOURCE_FILE ("panic.galgas", 361)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_universalModePanicRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_universalModePanicRoutineIR.mSlotID,
                                                extensionMethod_universalModePanicRoutineIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_universalModePanicRoutineIR_enterAccessibleEntities (defineExtensionMethod_universalModePanicRoutineIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sectionModePanicRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sectionModePanicRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                          GALGAS_string & ioArgument_ioLLVMcode,
                                                                          const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                          GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sectionModePanicRoutineIR * object = (const cPtr_sectionModePanicRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_sectionModePanicRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Raise Panic internal (section mode)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 380)) ;
  GALGAS_string var_arguments_16970 = GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 382)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 383)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)).add_operation (GALGAS_string ("i8* %in.FILE)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 387)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_arguments_16970.add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 388)) ;
  const GALGAS_sectionModePanicRoutineIR temp_0 = object ;
  cEnumerator_panicSortedListIR enumerator_17335 (temp_0.readProperty_mPanicSetupListIR (), kENUMERATION_UP) ;
  while (enumerator_17335.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @panic.setup.").add_operation (enumerator_17335.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)).add_operation (var_arguments_16970, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 391)) ;
    enumerator_17335.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %panic.loop\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("panic.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 394)) ;
  const GALGAS_sectionModePanicRoutineIR temp_1 = object ;
  cEnumerator_panicSortedListIR enumerator_17540 (temp_1.readProperty_mPanicLoopListIR (), kENUMERATION_UP) ;
  while (enumerator_17540.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @panic.loop.").add_operation (enumerator_17540.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)).add_operation (var_arguments_16970, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 396)) ;
    enumerator_17540.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %panic.loop\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 398)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 399)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sectionModePanicRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_sectionModePanicRoutineIR.mSlotID,
                                           extensionMethod_sectionModePanicRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sectionModePanicRoutineIR_llvmCodeGeneration (defineExtensionMethod_sectionModePanicRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sectionModePanicRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sectionModePanicRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                               GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                               GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sectionModePanicRoutineIR * object = (const cPtr_sectionModePanicRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_sectionModePanicRoutineIR) ;
  const GALGAS_sectionModePanicRoutineIR temp_0 = object ;
  cEnumerator_panicSortedListIR enumerator_18009 (temp_0.readProperty_mPanicSetupListIR (), kENUMERATION_UP) ;
  while (enumerator_18009.hasCurrentObject ()) {
    ioArgument_ioInvokedRoutineSet.addAssign_operation (GALGAS_string ("panic.setup.").add_operation (enumerator_18009.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 409))  COMMA_SOURCE_FILE ("panic.galgas", 409)) ;
    enumerator_18009.gotoNextObject () ;
  }
  const GALGAS_sectionModePanicRoutineIR temp_1 = object ;
  cEnumerator_panicSortedListIR enumerator_18115 (temp_1.readProperty_mPanicLoopListIR (), kENUMERATION_UP) ;
  while (enumerator_18115.hasCurrentObject ()) {
    ioArgument_ioInvokedRoutineSet.addAssign_operation (GALGAS_string ("panic.loop.").add_operation (enumerator_18115.current_mPriority (HERE).getter_string (SOURCE_FILE ("panic.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 412))  COMMA_SOURCE_FILE ("panic.galgas", 412)) ;
    enumerator_18115.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sectionModePanicRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_sectionModePanicRoutineIR.mSlotID,
                                                extensionMethod_sectionModePanicRoutineIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sectionModePanicRoutineIR_enterAccessibleEntities (defineExtensionMethod_sectionModePanicRoutineIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicRoutineName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_panicRoutineName (C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("handle.panic") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicRoutineName = false ;
static GALGAS_string gOnceFunctionResult_panicRoutineName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_panicRoutineName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicRoutineName) {
    gOnceFunctionResult_panicRoutineName = onceFunction_panicRoutineName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicRoutineName = true ;
  }
  return gOnceFunctionResult_panicRoutineName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicRoutineName (void) {
  gOnceFunctionResult_panicRoutineName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicRoutineName (NULL,
                                                              releaseOnceFunctionResult_panicRoutineName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicRoutineName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicRoutineName (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_panicRoutineName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicRoutineName ("panicRoutineName",
                                                                  functionWithGenericHeader_panicRoutineName,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  0,
                                                                  functionArgs_panicRoutineName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForAssertViolation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForAssertViolation (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 7)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForAssertViolation = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForAssertViolation ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForAssertViolation (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForAssertViolation) {
    gOnceFunctionResult_panicCodeForAssertViolation = onceFunction_panicCodeForAssertViolation (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForAssertViolation = true ;
  }
  return gOnceFunctionResult_panicCodeForAssertViolation ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForAssertViolation (void) {
  gOnceFunctionResult_panicCodeForAssertViolation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForAssertViolation (NULL,
                                                                         releaseOnceFunctionResult_panicCodeForAssertViolation) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForAssertViolation [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForAssertViolation (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForAssertViolation (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForAssertViolation ("panicCodeForAssertViolation",
                                                                             functionWithGenericHeader_panicCodeForAssertViolation,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForAssertViolation) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedAdditionOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForUnsignedAdditionOverflow (C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 9)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForUnsignedAdditionOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow = onceFunction_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedAdditionOverflow (NULL,
                                                                                  releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedAdditionOverflow [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow (C_Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GALGAS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedAdditionOverflow ("panicCodeForUnsignedAdditionOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedAdditionOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedAdditionOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForSignedAdditionOverflow (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("3", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 11)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForSignedAdditionOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForSignedAdditionOverflow = onceFunction_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedAdditionOverflow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedAdditionOverflow (NULL,
                                                                                releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedAdditionOverflow [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForSignedAdditionOverflow (C_Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedAdditionOverflow ("panicCodeForSignedAdditionOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedAdditionOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedAdditionOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedSubtractOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForUnsignedSubtractOverflow (C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 13)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForUnsignedSubtractOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow = onceFunction_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedSubtractOverflow (NULL,
                                                                                  releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedSubtractOverflow [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow (C_Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GALGAS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedSubtractOverflow ("panicCodeForUnsignedSubtractOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedSubtractOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedSubtractOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForSignedSubtractOverflow (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 15)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForSignedSubtractOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForSignedSubtractOverflow = onceFunction_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedSubtractOverflow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedSubtractOverflow (NULL,
                                                                                releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedSubtractOverflow [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForSignedSubtractOverflow (C_Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedSubtractOverflow ("panicCodeForSignedSubtractOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedSubtractOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedSubtractOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedMultiplicationOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForUnsignedMultiplicationOverflow (C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 17)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForUnsignedMultiplicationOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow = onceFunction_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedMultiplicationOverflow (NULL,
                                                                                        releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedMultiplicationOverflow [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow (C_Compiler * inCompiler,
                                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                                           const GALGAS_location & /* inErrorLocation */
                                                                                           COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedMultiplicationOverflow ("panicCodeForUnsignedMultiplicationOverflow",
                                                                                            functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow,
                                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                                            0,
                                                                                            functionArgs_panicCodeForUnsignedMultiplicationOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedMultiplicationOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForSignedMultiplicationOverflow (C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 19)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForSignedMultiplicationOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow = onceFunction_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedMultiplicationOverflow (NULL,
                                                                                      releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedMultiplicationOverflow [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow (C_Compiler * inCompiler,
                                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                                         const GALGAS_location & /* inErrorLocation */
                                                                                         COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedMultiplicationOverflow ("panicCodeForSignedMultiplicationOverflow",
                                                                                          functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow,
                                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                                          0,
                                                                                          functionArgs_panicCodeForSignedMultiplicationOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedDivisionByZero'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForUnsignedDivisionByZero (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 21)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForUnsignedDivisionByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForUnsignedDivisionByZero = onceFunction_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedDivisionByZero.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedDivisionByZero (NULL,
                                                                                releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedDivisionByZero [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedDivisionByZero (C_Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedDivisionByZero ("panicCodeForUnsignedDivisionByZero",
                                                                                    functionWithGenericHeader_panicCodeForUnsignedDivisionByZero,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForUnsignedDivisionByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedDivisionByZero'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForSignedDivisionByZero (C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 23)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedDivisionByZero ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForSignedDivisionByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForSignedDivisionByZero = onceFunction_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedDivisionByZero ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForSignedDivisionByZero.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedDivisionByZero (NULL,
                                                                              releaseOnceFunctionResult_panicCodeForSignedDivisionByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedDivisionByZero [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForSignedDivisionByZero (C_Compiler * inCompiler,
                                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedDivisionByZero ("panicCodeForSignedDivisionByZero",
                                                                                  functionWithGenericHeader_panicCodeForSignedDivisionByZero,
                                                                                  & kTypeDescriptor_GALGAS_bigint,
                                                                                  0,
                                                                                  functionArgs_panicCodeForSignedDivisionByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForUnsignedRemainderByZero'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForUnsignedRemainderByZero (C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("10", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 25)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForUnsignedRemainderByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForUnsignedRemainderByZero = onceFunction_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedRemainderByZero.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedRemainderByZero (NULL,
                                                                                 releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedRemainderByZero [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedRemainderByZero (C_Compiler * inCompiler,
                                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedRemainderByZero ("panicCodeForUnsignedRemainderByZero",
                                                                                     functionWithGenericHeader_panicCodeForUnsignedRemainderByZero,
                                                                                     & kTypeDescriptor_GALGAS_bigint,
                                                                                     0,
                                                                                     functionArgs_panicCodeForUnsignedRemainderByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForSignedRemainderByZero'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForSignedRemainderByZero (C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("11", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 27)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedRemainderByZero ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForSignedRemainderByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForSignedRemainderByZero = onceFunction_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedRemainderByZero ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForSignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForSignedRemainderByZero.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedRemainderByZero (NULL,
                                                                               releaseOnceFunctionResult_panicCodeForSignedRemainderByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedRemainderByZero [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForSignedRemainderByZero (C_Compiler * inCompiler,
                                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedRemainderByZero ("panicCodeForSignedRemainderByZero",
                                                                                   functionWithGenericHeader_panicCodeForSignedRemainderByZero,
                                                                                   & kTypeDescriptor_GALGAS_bigint,
                                                                                   0,
                                                                                   functionArgs_panicCodeForSignedRemainderByZero) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForConvertOverflow'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForConvertOverflow (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("12", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 31)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForConvertOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForConvertOverflow ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForConvertOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForConvertOverflow) {
    gOnceFunctionResult_panicCodeForConvertOverflow = onceFunction_panicCodeForConvertOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForConvertOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForConvertOverflow ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForConvertOverflow (void) {
  gOnceFunctionResult_panicCodeForConvertOverflow.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForConvertOverflow (NULL,
                                                                         releaseOnceFunctionResult_panicCodeForConvertOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForConvertOverflow [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForConvertOverflow (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForConvertOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForConvertOverflow ("panicCodeForConvertOverflow",
                                                                             functionWithGenericHeader_panicCodeForConvertOverflow,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForConvertOverflow) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForNegativeArrayIndex'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForNegativeArrayIndex (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("14", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 35)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForNegativeArrayIndex ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForNegativeArrayIndex (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex) {
    gOnceFunctionResult_panicCodeForNegativeArrayIndex = onceFunction_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForNegativeArrayIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForNegativeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForNegativeArrayIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForNegativeArrayIndex (NULL,
                                                                            releaseOnceFunctionResult_panicCodeForNegativeArrayIndex) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForNegativeArrayIndex [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForNegativeArrayIndex (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForNegativeArrayIndex ("panicCodeForNegativeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForNegativeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForNegativeArrayIndex) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForTooLargeArrayIndex'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForTooLargeArrayIndex (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 37)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForTooLargeArrayIndex (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex) {
    gOnceFunctionResult_panicCodeForTooLargeArrayIndex = onceFunction_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForTooLargeArrayIndex.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForTooLargeArrayIndex (NULL,
                                                                            releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForTooLargeArrayIndex [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForTooLargeArrayIndex (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForTooLargeArrayIndex ("panicCodeForTooLargeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForTooLargeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForTooLargeArrayIndex) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'panicCodeForClosedSync'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint onceFunction_panicCodeForClosedSync (C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 41)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_panicCodeForClosedSync = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForClosedSync ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_panicCodeForClosedSync (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForClosedSync) {
    gOnceFunctionResult_panicCodeForClosedSync = onceFunction_panicCodeForClosedSync (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForClosedSync = true ;
  }
  return gOnceFunctionResult_panicCodeForClosedSync ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_panicCodeForClosedSync (void) {
  gOnceFunctionResult_panicCodeForClosedSync.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForClosedSync (NULL,
                                                                    releaseOnceFunctionResult_panicCodeForClosedSync) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_panicCodeForClosedSync [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_panicCodeForClosedSync (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_panicCodeForClosedSync (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_panicCodeForClosedSync ("panicCodeForClosedSync",
                                                                        functionWithGenericHeader_panicCodeForClosedSync,
                                                                        & kTypeDescriptor_GALGAS_bigint,
                                                                        0,
                                                                        functionArgs_panicCodeForClosedSync) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeConvertToBooleanAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_compileTimeConvertToBooleanAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_compileTimeConvertToBooleanAST * object = (const cPtr_compileTimeConvertToBooleanAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeConvertToBooleanAST) ;
  const GALGAS_compileTimeConvertToBooleanAST temp_0 = object ;
  result_outLocation = temp_0.readProperty_mReceiverTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_compileTimeConvertToBooleanAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST.mSlotID,
                                                  extensionGetter_compileTimeConvertToBooleanAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_compileTimeConvertToBooleanAST_locationForErrorSignaling (defineExtensionGetter_compileTimeConvertToBooleanAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmConvertToBooleanAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_llvmConvertToBooleanAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_llvmConvertToBooleanAST * object = (const cPtr_llvmConvertToBooleanAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmConvertToBooleanAST) ;
  const GALGAS_llvmConvertToBooleanAST temp_0 = object ;
  result_outLocation = temp_0.readProperty_mReceiverTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_llvmConvertToBooleanAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_llvmConvertToBooleanAST.mSlotID,
                                                  extensionGetter_llvmConvertToBooleanAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_llvmConvertToBooleanAST_locationForErrorSignaling (defineExtensionGetter_llvmConvertToBooleanAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeConvertToBooleanAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_compileTimeConvertToBooleanAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_compileTimeConvertToBooleanAST * object = (const cPtr_compileTimeConvertToBooleanAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeConvertToBooleanAST) ;
  const GALGAS_compileTimeConvertToBooleanAST temp_0 = object ;
  const GALGAS_compileTimeConvertToBooleanAST temp_1 = object ;
  const GALGAS_compileTimeConvertToBooleanAST temp_2 = object ;
  GALGAS_lstring var_nodeName_3602 = GALGAS_lstring::constructor_new (temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 87)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 87)), temp_2.readProperty_mReceiverTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 87)) ;
  {
  const GALGAS_compileTimeConvertToBooleanAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3602, temp_3, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 88)) ;
  }
  {
  const GALGAS_compileTimeConvertToBooleanAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3602, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 89)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compileTimeConvertToBooleanAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST.mSlotID,
                                               extensionMethod_compileTimeConvertToBooleanAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compileTimeConvertToBooleanAST_enterInPrecedenceGraph (defineExtensionMethod_compileTimeConvertToBooleanAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeConvertToBooleanAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_compileTimeConvertToBooleanAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_compileTimeConvertToBooleanAST * object = (const cPtr_compileTimeConvertToBooleanAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeConvertToBooleanAST) ;
  const GALGAS_compileTimeConvertToBooleanAST temp_0 = object ;
  const GALGAS_compileTimeConvertToBooleanAST temp_1 = object ;
  result_outRepresentation = temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 95)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 95)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_compileTimeConvertToBooleanAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST.mSlotID,
                                                           extensionGetter_compileTimeConvertToBooleanAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_compileTimeConvertToBooleanAST_keyRepresentationForErrorSignaling (defineExtensionGetter_compileTimeConvertToBooleanAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmConvertToBooleanAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmConvertToBooleanAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmConvertToBooleanAST * object = (const cPtr_llvmConvertToBooleanAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmConvertToBooleanAST) ;
  const GALGAS_llvmConvertToBooleanAST temp_0 = object ;
  const GALGAS_llvmConvertToBooleanAST temp_1 = object ;
  const GALGAS_llvmConvertToBooleanAST temp_2 = object ;
  GALGAS_lstring var_nodeName_4371 = GALGAS_lstring::constructor_new (temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 103)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 103)), temp_2.readProperty_mReceiverTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 103)) ;
  {
  const GALGAS_llvmConvertToBooleanAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_4371, temp_3, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 104)) ;
  }
  {
  const GALGAS_llvmConvertToBooleanAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_4371, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 105)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmConvertToBooleanAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_llvmConvertToBooleanAST.mSlotID,
                                               extensionMethod_llvmConvertToBooleanAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmConvertToBooleanAST_enterInPrecedenceGraph (defineExtensionMethod_llvmConvertToBooleanAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmConvertToBooleanAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_llvmConvertToBooleanAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_llvmConvertToBooleanAST * object = (const cPtr_llvmConvertToBooleanAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmConvertToBooleanAST) ;
  const GALGAS_llvmConvertToBooleanAST temp_0 = object ;
  const GALGAS_llvmConvertToBooleanAST temp_1 = object ;
  result_outRepresentation = temp_0.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 111)).add_operation (temp_1.readProperty_mConverterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 111)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_llvmConvertToBooleanAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_llvmConvertToBooleanAST.mSlotID,
                                                           extensionGetter_llvmConvertToBooleanAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_llvmConvertToBooleanAST_keyRepresentationForErrorSignaling (defineExtensionGetter_llvmConvertToBooleanAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeConvertToBooleanAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_compileTimeConvertToBooleanAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  const cPtr_compileTimeConvertToBooleanAST * object = (const cPtr_compileTimeConvertToBooleanAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeConvertToBooleanAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_compileTimeConvertToBooleanAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mConverterName ().readProperty_string ().objectCompare (GALGAS_string ("convertToBoolean"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_compileTimeConvertToBooleanAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mConverterName ().readProperty_location (), GALGAS_string ("the implicit converter name should be 'convertToBoolean'"), fixItArray3  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 129)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_receiverTypeProxy_6106 ;
  {
  const GALGAS_compileTimeConvertToBooleanAST temp_4 = object ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mReceiverTypeName (), var_receiverTypeProxy_6106, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 132)) ;
  }
  GALGAS_omnibusType var_receiverType_6126 = extensionGetter_type (var_receiverTypeProxy_6106, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 133)) ;
  const GALGAS_compileTimeConvertToBooleanAST temp_5 = object ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_receiverType_6126.ptr (), temp_5.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 134)) ;
  GALGAS_ctCheckMap var_ctCheckMap_6293 = GALGAS_ctCheckMap::constructor_emptyMap (SOURCE_FILE ("convert-to-boolean.galgas", 136)) ;
  {
  const GALGAS_compileTimeConvertToBooleanAST temp_6 = object ;
  var_ctCheckMap_6293.setter_insertKey (temp_6.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 137)) ;
  }
  const GALGAS_compileTimeConvertToBooleanAST temp_7 = object ;
  callExtensionMethod_checkCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_7.readProperty_mExpression ().ptr (), var_ctCheckMap_6293, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 138)) ;
  const GALGAS_compileTimeConvertToBooleanAST temp_8 = object ;
  GALGAS_lstring var_key_6450 = GALGAS_lstring::constructor_new (var_receiverType_6126.readProperty_omnibusTypeDescriptionName (), temp_8.readProperty_mReceiverTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 140)) ;
  const GALGAS_compileTimeConvertToBooleanAST temp_9 = object ;
  const GALGAS_compileTimeConvertToBooleanAST temp_10 = object ;
  GALGAS_compileTimeImplicitConverterToBoolean var_converter_6557 = GALGAS_compileTimeImplicitConverterToBoolean::constructor_new (temp_9.readProperty_mReceiverName (), temp_10.readProperty_mExpression ()  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 141)) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_6450, var_converter_6557, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 142)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compileTimeConvertToBooleanAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST.mSlotID,
                                       extensionMethod_compileTimeConvertToBooleanAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compileTimeConvertToBooleanAST_enterInContext (defineExtensionMethod_compileTimeConvertToBooleanAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmConvertToBooleanAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmConvertToBooleanAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  const cPtr_llvmConvertToBooleanAST * object = (const cPtr_llvmConvertToBooleanAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmConvertToBooleanAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_llvmConvertToBooleanAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mConverterName ().readProperty_string ().objectCompare (GALGAS_string ("convertToBoolean"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_llvmConvertToBooleanAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mConverterName ().readProperty_location (), GALGAS_string ("the implicit converter name should be 'convertToBoolean'"), fixItArray3  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 158)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_receiverTypeProxy_7686 ;
  {
  const GALGAS_llvmConvertToBooleanAST temp_4 = object ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mReceiverTypeName (), var_receiverTypeProxy_7686, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 161)) ;
  }
  GALGAS_omnibusType var_receiverType_7706 = extensionGetter_type (var_receiverTypeProxy_7686, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 162)) ;
  const GALGAS_llvmConvertToBooleanAST temp_5 = object ;
  callExtensionMethod_checkIsNotCompileTimeType ((const cPtr_omnibusType *) var_receiverType_7706.ptr (), temp_5.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 163)) ;
  const GALGAS_llvmConvertToBooleanAST temp_6 = object ;
  GALGAS_lstring var_key_7854 = GALGAS_lstring::constructor_new (var_receiverType_7706.readProperty_omnibusTypeDescriptionName (), temp_6.readProperty_mReceiverTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 165)) ;
  const GALGAS_llvmConvertToBooleanAST temp_7 = object ;
  const GALGAS_llvmConvertToBooleanAST temp_8 = object ;
  GALGAS_llvmImplicitConverterToBoolean var_converter_7961 = GALGAS_llvmImplicitConverterToBoolean::constructor_new (temp_7.readProperty_mReceiverName (), var_receiverType_7706, temp_8.readProperty_mInstructionList ()  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 166)) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_7854, var_converter_7961, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 167)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmConvertToBooleanAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_llvmConvertToBooleanAST.mSlotID,
                                       extensionMethod_llvmConvertToBooleanAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmConvertToBooleanAST_enterInContext (defineExtensionMethod_llvmConvertToBooleanAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeImplicitConverterToBoolean generateConvertToBooleanCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_compileTimeImplicitConverterToBoolean_generateConvertToBooleanCode (const cPtr_abstractImplicitConverterToBoolean * inObject,
                                                                                                const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                                                                const GALGAS_location /* constinArgument_inErrorLocation */,
                                                                                                GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                                GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                                GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                                GALGAS_implicitBooleanConversionResult & outArgument_outResult,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_compileTimeImplicitConverterToBoolean * object = (const cPtr_compileTimeImplicitConverterToBoolean *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeImplicitConverterToBoolean) ;
  GALGAS_bigint var_receiverValue_10828 ;
  GALGAS_omnibusType joker_10800_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_literalInteger (joker_10800_1, var_receiverValue_10828, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 228)) ;
  GALGAS_ctMap var_varMap_10849 = GALGAS_ctMap::constructor_emptyMap (SOURCE_FILE ("convert-to-boolean.galgas", 229)) ;
  {
  const GALGAS_compileTimeImplicitConverterToBoolean temp_0 = object ;
  var_varMap_10849.setter_insertKey (temp_0.readProperty_mReceiverName (), var_receiverValue_10828, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 230)) ;
  }
  GALGAS_bigint var_result_10989 ;
  const GALGAS_compileTimeImplicitConverterToBoolean temp_1 = object ;
  callExtensionMethod_computeCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_1.readProperty_mExpression ().ptr (), var_varMap_10849, var_result_10989, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 231)) ;
  outArgument_outResult = GALGAS_implicitBooleanConversionResult::constructor_compileTime (GALGAS_bool (kIsNotEqual, var_result_10989.objectCompare (GALGAS_uint ((uint32_t) 0U).getter_bigint (SOURCE_FILE ("convert-to-boolean.galgas", 232))))  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 232)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compileTimeImplicitConverterToBoolean_generateConvertToBooleanCode (void) {
  enterExtensionMethod_generateConvertToBooleanCode (kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean.mSlotID,
                                                     extensionMethod_compileTimeImplicitConverterToBoolean_generateConvertToBooleanCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compileTimeImplicitConverterToBoolean_generateConvertToBooleanCode (defineExtensionMethod_compileTimeImplicitConverterToBoolean_generateConvertToBooleanCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmImplicitConverterToBoolean generateConvertToBooleanCode'
//
//----------------------------------------------------------------------------------------------------------------------

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
    const GALGAS_llvmImplicitConverterToBoolean temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mInstructionList ().getter_length (SOURCE_FILE ("convert-to-boolean.galgas", 253)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outResult = GALGAS_implicitBooleanConversionResult::constructor_llvmVariable (extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 254))  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 254)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_assignmentGenerationVarMap var_varMap_12005 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("convert-to-boolean.galgas", 256)) ;
    {
    const GALGAS_llvmImplicitConverterToBoolean temp_2 = object ;
    var_varMap_12005.setter_insertKey (temp_2.readProperty_mReceiverName (), extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 257)) ;
    }
    GALGAS_string var_resultLLVMName_12108 = GALGAS_string ("%temp").add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("convert-to-boolean.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 258)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 259)) ;
    {
    var_varMap_12005.setter_insertKey (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("convert-to-boolean.galgas", 260)), var_resultLLVMName_12108, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 260)) ;
    }
    GALGAS_assignmentGenerationVarMap var_typeMap_12297 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("convert-to-boolean.galgas", 262)) ;
    {
    const GALGAS_llvmImplicitConverterToBoolean temp_3 = object ;
    const GALGAS_llvmImplicitConverterToBoolean temp_4 = object ;
    var_typeMap_12297.setter_insertKey (temp_3.readProperty_mReceiverName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 263)) ;
    }
    GALGAS_stringlist var_generatedInstructions_12428 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("convert-to-boolean.galgas", 265)) ;
    const GALGAS_llvmImplicitConverterToBoolean temp_5 = object ;
    extensionMethod_generateIRCode (temp_5.readProperty_mInstructionList (), var_varMap_12005, var_typeMap_12297, var_generatedInstructions_12428, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 266)) ;
    cEnumerator_stringlist enumerator_12577 (var_generatedInstructions_12428, kENUMERATION_UP) ;
    while (enumerator_12577.hasCurrentObject ()) {
      {
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, enumerator_12577.current_mValue (HERE), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("convert-to-boolean.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 268)) ;
      }
      enumerator_12577.gotoNextObject () ;
    }
    outArgument_outResult = GALGAS_implicitBooleanConversionResult::constructor_llvmVariable (var_resultLLVMName_12108  COMMA_SOURCE_FILE ("convert-to-boolean.galgas", 270)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmImplicitConverterToBoolean_generateConvertToBooleanCode (void) {
  enterExtensionMethod_generateConvertToBooleanCode (kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean.mSlotID,
                                                     extensionMethod_llvmImplicitConverterToBoolean_generateConvertToBooleanCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmImplicitConverterToBoolean_generateConvertToBooleanCode (defineExtensionMethod_llvmImplicitConverterToBoolean_generateConvertToBooleanCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'computeStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_computeStaticExpression (GALGAS_semanticContext & ioArgument_ioContext,
                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                      const GALGAS_expressionAST constinArgument_inExpression,
                                      const GALGAS_location constinArgument_inErrorLocation,
                                      const GALGAS_lstring constinArgument_inOptionalTypeName,
                                      GALGAS_objectIR & outArgument_outStaticExpressionIR,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStaticExpressionIR.drop () ; // Release 'out' argument
  GALGAS_omnibusType var_annotationType_752 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_annotationType_752 = function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 16)) ;
    }
  }
  if (kBoolFalse == test_0) {
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), constinArgument_inOptionalTypeName, var_annotationType_752, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 18)) ;
  }
  GALGAS_semanticTemporariesStruct joker_1111 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("compute-static-expression.galgas", 27)) ;
  GALGAS_allocaList joker_1212 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("compute-static-expression.galgas", 30)) ;
  GALGAS_instructionListIR joker_1238 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("compute-static-expression.galgas", 31)) ;
  GALGAS_objectIR var_expressionIR_1278 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 22)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("compute-static-expression.galgas", 23)), var_annotationType_752, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("compute-static-expression.galgas", 26)), joker_1111, ioArgument_ioStaticEntityMap, ioArgument_ioContext.mProperty_mValuedObjectMap, joker_1212, joker_1238, var_expressionIR_1278, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 21)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_isStatic (var_expressionIR_1278, inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 34)).operator_not (SOURCE_FILE ("compute-static-expression.galgas", 34)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("expression is not static"), fixItArray2  COMMA_SOURCE_FILE ("compute-static-expression.galgas", 35)) ;
      outArgument_outStaticExpressionIR.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    outArgument_outStaticExpressionIR = function_checkAssignmentCompatibility (ioArgument_ioContext.readProperty_mAssignmentOperatorMap (), var_expressionIR_1278, var_annotationType_752, constinArgument_inErrorLocation, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("compute-static-expression.galgas", 38)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@convertExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inConstantName,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  const GALGAS_convertExpressionAST temp_0 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_convertExpressionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_convertExpressionAST temp_3 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-convert.galgas", 52)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                                             extensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_convertExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_convertExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@convertExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  const GALGAS_convertExpressionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 61)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_convertExpressionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_convertExpressionAST temp_3 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-convert.galgas", 63)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                                             extensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_convertExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@convertExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_objectIR var_expressionResult_4435 ;
  const GALGAS_convertExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4435, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 87)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4435, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 100)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 105)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_convertExpressionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), fixItArray3  COMMA_SOURCE_FILE ("expression-convert.galgas", 106)) ;
    }
  }
  const GALGAS_convertExpressionAST temp_4 = object ;
  GALGAS_omnibusType temp_5 ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, temp_4.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_6) {
    const GALGAS_convertExpressionAST temp_7 = object ;
    temp_5 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_7.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)) ;
  }
  GALGAS_omnibusType var_resultType_4744 = temp_5 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_resultType_4744.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 114)).operator_not (SOURCE_FILE ("expression-convert.galgas", 114)).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_convertExpressionAST temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-convert.galgas", 115)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = extensionGetter_type (var_expressionResult_4435, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 116)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 116)).operator_not (SOURCE_FILE ("expression-convert.galgas", 116)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GALGAS_convertExpressionAST temp_12 = object ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mEndOfExpression (), GALGAS_string ("expression type is not an integer type"), fixItArray13  COMMA_SOURCE_FILE ("expression-convert.galgas", 117)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_11) {
      GALGAS_bigint var_minSource_5222 ;
      GALGAS_bigint var_maxSource_5241 ;
      GALGAS_bool joker_5243_2 ; // Joker input parameter
      GALGAS_uint joker_5243_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4435, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 119)).readProperty_kind ().method_integer (var_minSource_5222, var_maxSource_5241, joker_5243_2, joker_5243_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 119)) ;
      GALGAS_bigint var_minTarget_5294 ;
      GALGAS_bigint var_maxTarget_5313 ;
      GALGAS_bool joker_5315_2 ; // Joker input parameter
      GALGAS_uint joker_5315_1 ; // Joker input parameter
      var_resultType_4744.readProperty_kind ().method_integer (var_minTarget_5294, var_maxTarget_5313, joker_5315_2, joker_5315_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 120)) ;
      GALGAS_bool test_14 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5294.objectCompare (var_minSource_5222)) ;
      if (kBoolTrue == test_14.boolEnum ()) {
        test_14 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5313.objectCompare (var_maxSource_5241)) ;
      }
      GALGAS_bool var_alwaysPossible_5341 = test_14 ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_alwaysPossible_5341.boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_convertExpressionAST temp_16 = object ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("useless explicit conversion"), fixItArray17  COMMA_SOURCE_FILE ("expression-convert.galgas", 123)) ;
        }
      }
      {
      routine_getNewTempValue (var_resultType_4744, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 125)) ;
      }
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_18) {
          ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4435  COMMA_SOURCE_FILE ("expression-convert.galgas", 127))  COMMA_SOURCE_FILE ("expression-convert.galgas", 127)) ;
        }
      }
      if (kBoolFalse == test_18) {
        const GALGAS_convertExpressionAST temp_19 = object ;
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_convertInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4435, temp_19.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-convert.galgas", 132))  COMMA_SOURCE_FILE ("expression-convert.galgas", 132)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_convertExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_convertExpressionAST.mSlotID,
                                          extensionMethod_convertExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_convertExpressionAST_analyzeExpression (defineExtensionMethod_convertExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@convertInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_convertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertInstructionIR * object = (const cPtr_convertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_convertInstructionIR) ;
  const GALGAS_convertInstructionIR temp_0 = object ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (temp_0.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 159))  COMMA_SOURCE_FILE ("expression-convert.galgas", 159)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_convertInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                                extensionMethod_convertInstructionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_convertInstructionIR_enterAccessibleEntities (defineExtensionMethod_convertInstructionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@convertInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_convertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertInstructionIR * object = (const cPtr_convertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_convertInstructionIR) ;
  const GALGAS_convertInstructionIR temp_0 = object ;
  GALGAS_string var_lbl_7225 = temp_0.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)).getter_string (SOURCE_FILE ("expression-convert.galgas", 169)) ;
  GALGAS_string var_convertMinOkLabel_7291 = GALGAS_string ("min.").add_operation (var_lbl_7225, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)) ;
  GALGAS_string var_convertMaxOkLabel_7338 = GALGAS_string ("max.").add_operation (var_lbl_7225, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)) ;
  GALGAS_string var_convertFailLabel_7384 = GALGAS_string ("fail.").add_operation (var_lbl_7225, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)) ;
  GALGAS_string var_compareMinVar_7421 = GALGAS_string ("cmp.").add_operation (var_lbl_7225, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)).add_operation (GALGAS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)) ;
  GALGAS_string var_compareMaxVar_7469 = GALGAS_string ("cmp.").add_operation (var_lbl_7225, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GALGAS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)) ;
  GALGAS_bigint var_minTarget_7552 ;
  GALGAS_bigint var_maxTarget_7571 ;
  const GALGAS_convertInstructionIR temp_1 = object ;
  GALGAS_bool joker_7573_2 ; // Joker input parameter
  GALGAS_uint joker_7573_1 ; // Joker input parameter
  extensionGetter_type (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).readProperty_kind ().method_integer (var_minTarget_7552, var_maxTarget_7571, joker_7573_2, joker_7573_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)) ;
  GALGAS_bigint var_minSource_7632 ;
  GALGAS_bool var_operandIsUnsigned_7671 ;
  const GALGAS_convertInstructionIR temp_2 = object ;
  GALGAS_bigint joker_7638 ; // Joker input parameter
  GALGAS_uint joker_7673_1 ; // Joker input parameter
  extensionGetter_type (temp_2.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)).readProperty_kind ().method_integer (var_minSource_7632, joker_7638, var_operandIsUnsigned_7671, joker_7673_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)) ;
  const GALGAS_convertInstructionIR temp_3 = object ;
  GALGAS_string var_operandType_7694 = extensionGetter_llvmTypeName (temp_3.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_minTarget_7552.objectCompare (var_minSource_7632)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMinVar_7421, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 179)) ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = var_operandIsUnsigned_7671.boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("uge") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string ("sge") ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(temp_5, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 180)) ;
      const GALGAS_convertInstructionIR temp_7 = object ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7694, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (extensionGetter_llvmName (temp_7.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (var_minTarget_7552.getter_string (SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 181)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMinVar_7421, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertMinOkLabel_7291, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertFailLabel_7384, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 182)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_convertMinOkLabel_7291.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 183)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMaxVar_7469, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 185)) ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = var_operandIsUnsigned_7671.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string ("ule") ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_8, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 186)) ;
  const GALGAS_convertInstructionIR temp_10 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7694, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (extensionGetter_llvmName (temp_10.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (var_maxTarget_7571.getter_string (SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 187)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMaxVar_7469, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertMaxOkLabel_7338, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertFailLabel_7384, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 188)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertFailLabel_7384.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 189)) ;
  const GALGAS_convertInstructionIR temp_11 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_11.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).getter_assemblerRepresentation (SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 190)) ;
  const GALGAS_convertInstructionIR temp_12 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (temp_12.readProperty_mLocation ().getter_line (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).getter_string (SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 191)) ;
  const GALGAS_convertInstructionIR temp_13 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (function_panicCodeForConvertOverflow (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_string (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (temp_13.readProperty_mLocation ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 192)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertMaxOkLabel_7338.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 194)) ;
  const GALGAS_convertInstructionIR temp_14 = object ;
  const GALGAS_convertInstructionIR temp_15 = object ;
  const GALGAS_convertInstructionIR temp_16 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_14.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (var_operandType_7694, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmName (temp_15.readProperty_mOperand (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmTypeName (temp_16.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 195)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_convertInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_convertInstructionIR.mSlotID,
                                            extensionMethod_convertInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_convertInstructionIR_llvmInstructionCode (defineExtensionMethod_convertInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extendExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inConstantName,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  const GALGAS_extendExpressionAST temp_0 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_extendExpressionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_extendExpressionAST temp_3 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-extend.galgas", 52)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                                             extensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extendExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_extendExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extendExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  const GALGAS_extendExpressionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 61)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_extendExpressionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_extendExpressionAST temp_3 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-extend.galgas", 63)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                                             extensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_extendExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extendExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_objectIR var_expressionResult_4288 ;
  const GALGAS_extendExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_4288, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 85)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_4288, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 98)) ;
  }
  const GALGAS_extendExpressionAST temp_1 = object ;
  GALGAS_omnibusType temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_3) {
    const GALGAS_extendExpressionAST temp_4 = object ;
    temp_2 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_4.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 105)) ;
  }
  GALGAS_omnibusType var_resultType_4446 = temp_2 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_resultType_4446.readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 108)).operator_not (SOURCE_FILE ("expression-extend.galgas", 108)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_extendExpressionAST temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type is not an integer type"), fixItArray7  COMMA_SOURCE_FILE ("expression-extend.galgas", 109)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = extensionGetter_type (var_expressionResult_4288, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 110)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 110)).operator_not (SOURCE_FILE ("expression-extend.galgas", 110)).boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_extendExpressionAST temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mEndOfExpression (), GALGAS_string ("expression type is not an integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-extend.galgas", 111)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_8) {
      GALGAS_bool var_sourceIsUnsigned_4940 ;
      GALGAS_uint var_sourceSize_4965 ;
      GALGAS_bigint joker_4907_2 ; // Joker input parameter
      GALGAS_bigint joker_4907_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4288, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)).readProperty_kind ().method_integer (joker_4907_2, joker_4907_1, var_sourceIsUnsigned_4940, var_sourceSize_4965, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)) ;
      GALGAS_bool var_targetIsUnsigned_5030 ;
      GALGAS_uint var_targetSize_5055 ;
      GALGAS_bigint joker_4997_2 ; // Joker input parameter
      GALGAS_bigint joker_4997_1 ; // Joker input parameter
      var_resultType_4446.readProperty_kind ().method_integer (joker_4997_2, joker_4997_1, var_targetIsUnsigned_5030, var_targetSize_5055, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 114)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        GALGAS_bool test_12 = var_sourceIsUnsigned_4940 ;
        if (kBoolTrue == test_12.boolEnum ()) {
          test_12 = var_targetIsUnsigned_5030 ;
        }
        test_11 = test_12.boolEnum () ;
        if (kBoolTrue == test_11) {
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = GALGAS_bool (kIsStrictSup, var_sourceSize_4965.objectCompare (var_targetSize_5055)).boolEnum () ;
            if (kBoolTrue == test_13) {
              const GALGAS_extendExpressionAST temp_14 = object ;
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray15  COMMA_SOURCE_FILE ("expression-extend.galgas", 117)) ;
            }
          }
          if (kBoolFalse == test_13) {
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = GALGAS_bool (kIsEqual, var_sourceSize_4965.objectCompare (var_targetSize_5055)).boolEnum () ;
              if (kBoolTrue == test_16) {
                const GALGAS_extendExpressionAST temp_17 = object ;
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("same size: useless extend operation"), fixItArray18  COMMA_SOURCE_FILE ("expression-extend.galgas", 119)) ;
              }
            }
          }
        }
      }
      if (kBoolFalse == test_11) {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          GALGAS_bool test_20 = var_sourceIsUnsigned_4940 ;
          if (kBoolTrue == test_20.boolEnum ()) {
            test_20 = var_targetIsUnsigned_5030.operator_not (SOURCE_FILE ("expression-extend.galgas", 121)) ;
          }
          test_19 = test_20.boolEnum () ;
          if (kBoolTrue == test_19) {
            enumGalgasBool test_21 = kBoolTrue ;
            if (kBoolTrue == test_21) {
              test_21 = GALGAS_bool (kIsSupOrEqual, var_sourceSize_4965.objectCompare (var_targetSize_5055)).boolEnum () ;
              if (kBoolTrue == test_21) {
                const GALGAS_extendExpressionAST temp_22 = object ;
                TC_Array <C_FixItDescription> fixItArray23 ;
                inCompiler->emitSemanticError (temp_22.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray23  COMMA_SOURCE_FILE ("expression-extend.galgas", 123)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_19) {
          enumGalgasBool test_24 = kBoolTrue ;
          if (kBoolTrue == test_24) {
            GALGAS_bool test_25 = var_sourceIsUnsigned_4940.operator_not (SOURCE_FILE ("expression-extend.galgas", 125)) ;
            if (kBoolTrue == test_25.boolEnum ()) {
              test_25 = var_targetIsUnsigned_5030 ;
            }
            test_24 = test_25.boolEnum () ;
            if (kBoolTrue == test_24) {
              const GALGAS_extendExpressionAST temp_26 = object ;
              TC_Array <C_FixItDescription> fixItArray27 ;
              inCompiler->emitSemanticError (temp_26.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray27  COMMA_SOURCE_FILE ("expression-extend.galgas", 126)) ;
            }
          }
          if (kBoolFalse == test_24) {
            enumGalgasBool test_28 = kBoolTrue ;
            if (kBoolTrue == test_28) {
              test_28 = GALGAS_bool (kIsStrictSup, var_sourceSize_4965.objectCompare (var_targetSize_5055)).boolEnum () ;
              if (kBoolTrue == test_28) {
                const GALGAS_extendExpressionAST temp_29 = object ;
                TC_Array <C_FixItDescription> fixItArray30 ;
                inCompiler->emitSemanticError (temp_29.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray30  COMMA_SOURCE_FILE ("expression-extend.galgas", 129)) ;
              }
            }
            if (kBoolFalse == test_28) {
              enumGalgasBool test_31 = kBoolTrue ;
              if (kBoolTrue == test_31) {
                test_31 = GALGAS_bool (kIsEqual, var_sourceSize_4965.objectCompare (var_targetSize_5055)).boolEnum () ;
                if (kBoolTrue == test_31) {
                  const GALGAS_extendExpressionAST temp_32 = object ;
                  TC_Array <C_FixItDescription> fixItArray33 ;
                  inCompiler->emitSemanticError (temp_32.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("same size: useless extend operation"), fixItArray33  COMMA_SOURCE_FILE ("expression-extend.galgas", 131)) ;
                }
              }
            }
          }
        }
      }
      {
      routine_getNewTempValue (var_resultType_4446, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 134)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_4288, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 135)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extendExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_extendExpressionAST.mSlotID,
                                          extensionMethod_extendExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extendExpressionAST_analyzeExpression (defineExtensionMethod_extendExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@truncateExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                        const GALGAS_lstring constinArgument_inConstantName,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  const GALGAS_truncateExpressionAST temp_0 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_truncateExpressionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_truncateExpressionAST temp_3 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_3.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-truncate.galgas", 52)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_truncateExpressionAST.mSlotID,
                                                             extensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_truncateExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

