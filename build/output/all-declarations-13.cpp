#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

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
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGraph.setter_noteNode (object->mProperty_mOptionalTypeName COMMA_SOURCE_FILE ("instruction-var.galgas", 97)) ;
      }
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 99)) ;
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
  ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("instruction-var.galgas", 105)) ;
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
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGraph.setter_noteNode (object->mProperty_mOptionalTypeName COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
      }
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
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
  GALGAS_lstringlist var_attributeList_902 = temp_0 ;
  GALGAS_instructionListAST temp_1 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  temp_1.addAssign_operation (GALGAS_instructionNOP::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("instruction-nop.galgas", 15))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 15))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  GALGAS_instructionListAST var_instructionList_967 = temp_1 ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("instruction-nop.galgas", 18)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 20)), GALGAS_string ("nop").getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 21)), var_attributeList_902, GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("instruction-nop.galgas", 23)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 24)), var_instructionList_967, GALGAS_location::constructor_nowhere (SOURCE_FILE ("instruction-nop.galgas", 26))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 17))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 33)) ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (object->mProperty_mThrowLocation, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-panic.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (object->mProperty_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (object->mProperty_mPanicCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)) ;
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
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (object->mProperty_mThrowLocation, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 118))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)) ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mThenInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mElseInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 90)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mThenInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 228)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mElseInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 229)) ;
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
  cEnumerator_syncInstructionBranchListAST enumerator_5495 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_5495.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5495.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 148)) ;
    enumerator_5495.gotoNextObject () ;
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
  GALGAS_guardedCommandIRList var_guardedCommandIRList_6524 = GALGAS_guardedCommandIRList::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 168)) ;
  cEnumerator_syncInstructionBranchListAST enumerator_6595 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_6595.hasCurrentObject ()) {
    switch (enumerator_6595.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandAST::kNotBuilt:
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolean * extractPtr_7990 = (const cEnumAssociatedValues_guardedCommandAST_boolean *) (enumerator_6595.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isContinue = extractPtr_7990->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_7990->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_7990->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_6739 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 172)) ;
        GALGAS_objectIR var_expressionResult_7201 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes.operator_or (GALGAS_routineAttributes::constructor_guard (SOURCE_FILE ("instruction-event.galgas", 175)) COMMA_SOURCE_FILE ("instruction-event.galgas", 175)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 176)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_6739, var_expressionResult_7201, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 173)) ;
        {
        extensionSetter_appendLoadWhenReference (var_guardInstructionGenerationList_6739, ioArgument_ioTemporaries, var_expressionResult_7201, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 186)) ;
        }
        GALGAS_implicitBooleanConversionResult var_booleanResult_7594 ;
        extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.getter_mImplicitConversionToBooleanMap (HERE), var_expressionResult_7201, extractedValue_endOfExpression, ioArgument_ioTemporaries, var_guardInstructionGenerationList_6739, ioArgument_ioAllocaList, var_booleanResult_7594, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 187)) ;
        switch (var_booleanResult_7594.enumValue ()) {
        case GALGAS_implicitBooleanConversionResult::kNotBuilt:
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
          {
            TC_Array <C_FixItDescription> fixItArray0 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is a compile time value"), fixItArray0  COMMA_SOURCE_FILE ("instruction-event.galgas", 197)) ;
          }
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
          {
          }
          break ;
        }
        var_guardedCommandIRList_6524.addAssign_operation (GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_isContinue, var_guardInstructionGenerationList_6739, extensionGetter_llvmName (var_booleanResult_7594, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 203))  COMMA_SOURCE_FILE ("instruction-event.galgas", 200))  COMMA_SOURCE_FILE ("instruction-event.galgas", 200)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolAndSync * extractPtr_13741 = (const cEnumAssociatedValues_guardedCommandAST_boolAndSync *) (enumerator_6595.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isContinue = extractPtr_13741->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_13741->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_warnsOnStaticExpression = extractPtr_13741->mAssociatedValue2 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_13741->mAssociatedValue3 ;
        const GALGAS_lbool extractedValue_usesSelf = extractPtr_13741->mAssociatedValue4 ;
        const GALGAS_lstringlist extractedValue_nameList = extractPtr_13741->mAssociatedValue5 ;
        const GALGAS_effectiveArgumentListAST extractedValue_parameterList = extractPtr_13741->mAssociatedValue6 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_8153 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 206)) ;
        GALGAS_objectIR var_expressionResult_8625 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_guard (SOURCE_FILE ("instruction-event.galgas", 210)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 211)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_8153, var_expressionResult_8625, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 208)) ;
        {
        extensionSetter_appendLoadWhenReference (var_boolExpInstructionGenerationList_8153, ioArgument_ioTemporaries, var_expressionResult_8625, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 221)) ;
        }
        GALGAS_implicitBooleanConversionResult var_booleanResult_9015 ;
        extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.getter_mImplicitConversionToBooleanMap (HERE), var_expressionResult_8625, extractedValue_endOfExp, ioArgument_ioTemporaries, var_boolExpInstructionGenerationList_8153, ioArgument_ioAllocaList, var_booleanResult_9015, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 222)) ;
        switch (var_booleanResult_9015.enumValue ()) {
        case GALGAS_implicitBooleanConversionResult::kNotBuilt:
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
          {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = extractedValue_warnsOnStaticExpression.boolEnum () ;
              if (kBoolTrue == test_1) {
                TC_Array <C_FixItDescription> fixItArray2 ;
                inCompiler->emitSemanticWarning (extractedValue_endOfExp, GALGAS_string ("guarded expression is static"), fixItArray2  COMMA_SOURCE_FILE ("instruction-event.galgas", 233)) ;
              }
            }
          }
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
          {
          }
          break ;
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_9751 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 248)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_9826 ;
        GALGAS_lstring var_guardMangledName_9858 ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = extractedValue_usesSelf.getter_bool (HERE).boolEnum () ;
          if (kBoolTrue == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = constinArgument_inSelfType.getter_kind (HERE).getter_isVoid (SOURCE_FILE ("instruction-event.galgas", 252)).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (extractedValue_usesSelf.getter_location (SOURCE_FILE ("instruction-event.galgas", 253)), GALGAS_string ("'self' is not available in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-event.galgas", 253)) ;
                var_guardEffectiveParameterListIR_9826.drop () ; // Release error dropped variable
                var_guardMangledName_9858.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_4) {
              GALGAS_lstringlist var_propertyList_10106 = extractedValue_nameList ;
              GALGAS_lstring var_guardName_10166 ;
              {
              var_propertyList_10106.setter_popLast (var_guardName_10166, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 256)) ;
              }
              GALGAS_objectIR var_currentObject_10201 = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 257))  COMMA_SOURCE_FILE ("instruction-event.galgas", 257)) ;
              cEnumerator_lstringlist enumerator_10307 (var_propertyList_10106, kENUMERATION_UP) ;
              while (enumerator_10307.hasCurrentObject ()) {
                {
                routine_handlePropertyAccessInExpression (constinArgument_inContext, var_currentObject_10201, enumerator_10307.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 259)) ;
                }
                enumerator_10307.gotoNextObject () ;
              }
              {
              routine_analyzeGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObject_10201, var_guardName_10166, extractedValue_parameterList, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_9751, var_guardEffectiveParameterListIR_9826, var_guardMangledName_9858, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 269)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, extractedValue_nameList.getter_length (SOURCE_FILE ("instruction-event.galgas", 286)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (extractedValue_nameList.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 287)).getter_location (SOURCE_FILE ("instruction-event.galgas", 287)), GALGAS_string ("Standalone guard are not handled"), fixItArray7  COMMA_SOURCE_FILE ("instruction-event.galgas", 287)) ;
              var_guardMangledName_9858.drop () ; // Release error dropped variable
              var_guardEffectiveParameterListIR_9826.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_6) {
            GALGAS_lstringlist var_propertyList_11570 = extractedValue_nameList ;
            GALGAS_lstring var_globalReceiverName_11638 ;
            {
            var_propertyList_11570.setter_popFirst (var_globalReceiverName_11638, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 292)) ;
            }
            GALGAS_lstring var_guardName_11686 ;
            {
            var_propertyList_11570.setter_popLast (var_guardName_11686, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 293)) ;
            }
            GALGAS_objectIR var_currentObjectIR_11856 ;
            extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, var_globalReceiverName_11638, constinArgument_inMode, ioArgument_ioTemporaries.getter_mInitializedDriverSet (HERE), var_currentObjectIR_11856, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 294)) ;
            cEnumerator_lstringlist enumerator_11909 (var_propertyList_11570, kENUMERATION_UP) ;
            while (enumerator_11909.hasCurrentObject ()) {
              {
              routine_handlePropertyAccessInExpression (constinArgument_inContext, var_currentObjectIR_11856, enumerator_11909.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 301)) ;
              }
              enumerator_11909.gotoNextObject () ;
            }
            {
            routine_analyzeGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObjectIR_11856, var_guardName_11686, extractedValue_parameterList, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_9751, var_guardEffectiveParameterListIR_9826, var_guardMangledName_9858, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 311)) ;
            }
          }
        }
        switch (var_booleanResult_9015.enumValue ()) {
        case GALGAS_implicitBooleanConversionResult::kNotBuilt:
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
          {
            const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * extractPtr_13290 = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) (var_booleanResult_9015.unsafePointer ()) ;
            const GALGAS_bool extractedValue_boolValue = extractPtr_13290->mAssociatedValue0 ;
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = extractedValue_boolValue.boolEnum () ;
              if (kBoolTrue == test_8) {
                var_guardedCommandIRList_6524.addAssign_operation (GALGAS_guardedCommandIR::constructor_sync (extractedValue_isContinue, var_guardMangledName_9858.getter_string (HERE), var_guardInstructionGenerationList_9751, var_guardEffectiveParameterListIR_9826  COMMA_SOURCE_FILE ("instruction-event.galgas", 331))  COMMA_SOURCE_FILE ("instruction-event.galgas", 331)) ;
              }
            }
            if (kBoolFalse == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_guardMangledName_9858.getter_location (SOURCE_FILE ("instruction-event.galgas", 338)), GALGAS_string ("false guard not handled yet"), fixItArray9  COMMA_SOURCE_FILE ("instruction-event.galgas", 338)) ;
            }
          }
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
          {
            const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable * extractPtr_13731 = (const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable *) (var_booleanResult_9015.unsafePointer ()) ;
            const GALGAS_string extractedValue_llvmName = extractPtr_13731->mAssociatedValue0 ;
            var_guardedCommandIRList_6524.addAssign_operation (GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_isContinue, var_boolExpInstructionGenerationList_8153, extractedValue_llvmName, var_guardMangledName_9858.getter_string (HERE), var_guardInstructionGenerationList_9751, var_guardEffectiveParameterListIR_9826  COMMA_SOURCE_FILE ("instruction-event.galgas", 341))  COMMA_SOURCE_FILE ("instruction-event.galgas", 341)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_6595.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 377)) ;
  }
  GALGAS_syncInstructionBranchListIR var_syncInstructionBranchListIR_14892 = GALGAS_syncInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 378)) ;
  cEnumerator_syncInstructionBranchListAST enumerator_14950 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  cEnumerator_guardedCommandIRList enumerator_14994 (var_guardedCommandIRList_6524, kENUMERATION_UP) ;
  while (enumerator_14950.hasCurrentObject () && enumerator_14994.hasCurrentObject ()) {
    GALGAS_instructionListIR var_branchInstructionGenerationList_15052 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 380)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_14950.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_14950.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_15052, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 381)) ;
    var_syncInstructionBranchListIR_14892.addAssign_operation (enumerator_14994.current_mGuardedCommand (HERE), var_branchInstructionGenerationList_15052  COMMA_SOURCE_FILE ("instruction-event.galgas", 393)) ;
    enumerator_14950.gotoNextObject () ;
    enumerator_14994.gotoNextObject () ;
  }
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_on_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 395)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_syncInstructionBranchListIR_14892  COMMA_SOURCE_FILE ("instruction-event.galgas", 397))  COMMA_SOURCE_FILE ("instruction-event.galgas", 397)) ;
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
  GALGAS_lstring var_guardMangledName_16654 = extensionGetter_mangledName (constinArgument_inEffectiveParameterList, extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 418)).getter_omnibusTypeDescriptionName (SOURCE_FILE ("instruction-event.galgas", 418)), constinArgument_inGuardName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 418)) ;
  GALGAS_bool var_isPublic_16900 ;
  GALGAS_routineTypedSignature var_formalSignature_16944 ;
  GALGAS_lstring var_guardRoutineUserLLVMName_16974 ;
  GALGAS_lstring joker_16976 ; // Joker input parameter
  constinArgument_inContext.getter_mGuardMap (HERE).method_searchKey (var_guardMangledName_16654, var_isPublic_16900, var_formalSignature_16944, var_guardRoutineUserLLVMName_16974, joker_16976, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 420)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_isPublic_16900.operator_not (SOURCE_FILE ("instruction-event.galgas", 422)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-event.galgas", 423)), GALGAS_string ("this guard is not public"), fixItArray1  COMMA_SOURCE_FILE ("instruction-event.galgas", 423)) ;
      outArgument_outGuardMangledName.drop () ; // Release error dropped variable
      outArgument_outEffectiveParameterListIR.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outGuardMangledName = var_guardRoutineUserLLVMName_16974 ;
    GALGAS_procCallEffectiveParameterListIR temp_2 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 427)) ;
    temp_2.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-event.galgas", 427)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("instruction-event.galgas", 427)) ;
    outArgument_outEffectiveParameterListIR = temp_2 ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_16944, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.getter_location (HERE), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 428)) ;
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
  ioArgument_ioGenerationAdds.mProperty_mUsesGuards = GALGAS_bool (true) ;
  GALGAS_string var_startLabel_20117 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-event.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 496)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 497)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_20117, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 499)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 499)) ;
  GALGAS_string var_startLabelName_20281 = var_startLabel_20117.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 500)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_20281.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 501)) ;
  GALGAS_string var_exitLabelName_20365 = var_startLabel_20117.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 502)) ;
  GALGAS_string var_selectLabelName_20410 = var_startLabel_20117.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 503)) ;
  GALGAS_string var_errorLabelName_20456 = var_startLabel_20117.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 504)) ;
  GALGAS_string var_currentStartBranchLabel_20510 = var_startLabelName_20281 ;
  cEnumerator_syncInstructionBranchListIR enumerator_20570 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  GALGAS_uint index_20533 ((uint32_t) 0) ;
  while (enumerator_20570.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_20605 = GALGAS_string ("%").add_operation (var_startLabel_20117, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)).add_operation (index_20533.getter_string (SOURCE_FILE ("instruction-event.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)) ;
    GALGAS_bool var_isWhileGuardedCommand_20675 ;
    switch (enumerator_20570.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_21513 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_20570.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isExitCommand = extractPtr_21513->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_21513->mAssociatedValue1 ;
        const GALGAS_string extractedValue_boolGuardBoolLLVMName = extractPtr_21513->mAssociatedValue2 ;
        var_isWhileGuardedCommand_20675 = extractedValue_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 512)) ;
        GALGAS_string var_acceptedLabelName_20980 = var_startLabel_20117.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)).add_operation (index_20533.getter_string (SOURCE_FILE ("instruction-event.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)) ;
        GALGAS_string var_rejectedLabelName_21043 = var_startLabel_20117.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)).add_operation (index_20533.getter_string (SOURCE_FILE ("instruction-event.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extractedValue_boolGuardBoolLLVMName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (var_acceptedLabelName_20980, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (var_rejectedLabelName_21043, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 515)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_20980.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 516)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 516)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 517)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_21043, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 518)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 518)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_21043.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 519)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_20605, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (extractedValue_boolGuardBoolLLVMName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 520)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_23247 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_20570.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isExitCommand = extractPtr_23247->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_expInstructionList = extractPtr_23247->mAssociatedValue1 ;
        const GALGAS_string extractedValue_boolGuardLLVMName = extractPtr_23247->mAssociatedValue2 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_23247->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_23247->mAssociatedValue4 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_23247->mAssociatedValue5 ;
        var_isWhileGuardedCommand_20675 = extractedValue_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 523)) ;
        GALGAS_string var_testOkLabelName_21824 = var_startLabel_20117.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)).add_operation (index_20533.getter_string (SOURCE_FILE ("instruction-event.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)) ;
        GALGAS_string var_testExitLabelName_21895 = var_startLabel_20117.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)).add_operation (index_20533.getter_string (SOURCE_FILE ("instruction-event.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extractedValue_boolGuardLLVMName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (var_testOkLabelName_21824, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (var_testExitLabelName_21895, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 526)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_21824.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 527)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 527)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 528)) ;
        GALGAS_string var_guardAcceptationLabelName_22247 = var_startLabel_20117.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)).add_operation (index_20533.getter_string (SOURCE_FILE ("instruction-event.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_22247, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).add_operation (extractedValue_guardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 530)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 531)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_22475 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_22475.hasCurrentObject ()) {
          switch (enumerator_22475.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22475.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)).add_operation (extensionGetter_llvmName (enumerator_22475.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 535)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22475.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)).add_operation (extensionGetter_llvmName (enumerator_22475.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 537)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22475.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)).add_operation (extensionGetter_llvmName (enumerator_22475.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 539)) ;
            }
            break ;
          }
          if (enumerator_22475.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 542)) ;
          }
          enumerator_22475.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 544)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_21895, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 545)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 545)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_21895.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 546)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_20605, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 547)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 547)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_22247, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)).add_operation (var_testOkLabelName_21824, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 548)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_20510, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 549)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_sync:
      {
        const cEnumAssociatedValues_guardedCommandIR_sync * extractPtr_24110 = (const cEnumAssociatedValues_guardedCommandIR_sync *) (enumerator_20570.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isExitCommand = extractPtr_24110->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_24110->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_24110->mAssociatedValue2 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_24110->mAssociatedValue3 ;
        var_isWhileGuardedCommand_20675 = extractedValue_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 552)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_20605, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)).add_operation (extractedValue_guardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 553)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 554)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_23661 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_23661.hasCurrentObject ()) {
          switch (enumerator_23661.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23661.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)).add_operation (extensionGetter_llvmName (enumerator_23661.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 558)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23661.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)).add_operation (extensionGetter_llvmName (enumerator_23661.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 560)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23661.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)).add_operation (extensionGetter_llvmName (enumerator_23661.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 562)) ;
            }
            break ;
          }
          if (enumerator_23661.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 565)) ;
          }
          enumerator_23661.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 567)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_24144 = var_startLabel_20117.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)).add_operation (index_20533.getter_string (SOURCE_FILE ("instruction-event.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)) ;
    GALGAS_string var_rejectedLabelName_24204 = var_startLabel_20117.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)).add_operation (index_20533.getter_string (SOURCE_FILE ("instruction-event.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_20605, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (var_acceptedLabelName_24144, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (var_rejectedLabelName_24204, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 571)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_24144.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 572)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 572)) ;
    extensionMethod_instructionListLLVMCode (enumerator_20570.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 573)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = var_isWhileGuardedCommand_20675.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = var_startLabelName_20281 ;
    }else if (kBoolFalse == test_1) {
      temp_0 = var_exitLabelName_20365 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 574)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 574)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 574)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_24204.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 575)) ;
    var_currentStartBranchLabel_20510 = var_rejectedLabelName_24204 ;
    enumerator_20570.gotoNextObject () ;
    index_20533.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 506)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_20410, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 578)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_20410, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (var_startLabelName_20281, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (var_errorLabelName_20456, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 579)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_20456.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 580)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_20365, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 582)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 582)) ;
    }
  }
  if (kBoolFalse == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (object->mProperty_mSelectInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 584)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 584)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 584)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).add_operation (object->mProperty_mSelectInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).getter_string (SOURCE_FILE ("instruction-event.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 585)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).getter_string (SOURCE_FILE ("instruction-event.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 586)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 587)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_20365.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 589)) ;
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
  GALGAS_uint var_branchCount_25940 = object->mProperty_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-event.galgas", 598)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_25940)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_25940 ;
    }
  }
  cEnumerator_syncInstructionBranchListIR enumerator_26125 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  while (enumerator_26125.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_26125.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 603)) ;
    switch (enumerator_26125.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_26444 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_26125.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_26444->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 606)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_sync:
      {
        const cEnumAssociatedValues_guardedCommandIR_sync * extractPtr_26676 = (const cEnumAssociatedValues_guardedCommandIR_sync *) (enumerator_26125.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_26676->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_26676->mAssociatedValue2 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 608)) ;
        ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-event.galgas", 609)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_27053 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_26125.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_27053->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_27053->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_27053->mAssociatedValue4 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 611)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 612)) ;
        ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-event.galgas", 613)) ;
      }
      break ;
    }
    enumerator_26125.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-event.galgas", 616)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (object->mProperty_mSelectInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 617))  COMMA_SOURCE_FILE ("instruction-event.galgas", 617)) ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mWhileInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 48)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_m_5F_while_5F_Expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 49)) ;
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
  GALGAS_instructionListIR var_testInstructionGenerationList_3350 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 68)) ;
  GALGAS_objectIR var_testValue_3750 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_m_5F_while_5F_Expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 72)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_3350, var_testValue_3750, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 69)) ;
  {
  extensionSetter_appendLoadWhenReference (var_testInstructionGenerationList_3350, ioArgument_ioTemporaries, var_testValue_3750, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 82)) ;
  }
  GALGAS_implicitBooleanConversionResult var_booleanResult_4121 ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.getter_mImplicitConversionToBooleanMap (HERE), var_testValue_3750, object->mProperty_mEndOf_5F_test_5F_expression, ioArgument_ioTemporaries, var_testInstructionGenerationList_3350, ioArgument_ioAllocaList, var_booleanResult_4121, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)) ;
  switch (var_booleanResult_4121.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be a compile time expression"), fixItArray0  COMMA_SOURCE_FILE ("instruction-while.galgas", 97)) ;
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
    }
    break ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_4707 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 108)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 109)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, object->mProperty_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4707, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 110)) ;
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 122)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 125)), var_testInstructionGenerationList_3350, extensionGetter_llvmName (var_booleanResult_4121, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 127)), var_instructionGenerationList_4707  COMMA_SOURCE_FILE ("instruction-while.galgas", 124))  COMMA_SOURCE_FILE ("instruction-while.galgas", 124)) ;
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
  GALGAS_string var_labelTest_6309 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)) ;
  GALGAS_string var_labelLoop_6360 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  GALGAS_string var_labelEnd_6410 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6309, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6309.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 155)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (object->mProperty_m_5F_while_5F_llvmName, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (var_labelLoop_6360, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (var_labelEnd_6410, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 156)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6360.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 157)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 158)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6309, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6410.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 160)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mTestInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 169)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 170)) ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 73)) ;
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
  GALGAS_objectIR var_iteratedObjectPointer_4039 ;
  {
  extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, object->mProperty_mIteratedObject, var_iteratedObjectPointer_4039, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 92)) ;
  }
  GALGAS_omnibusType var_iteratedType_4074 = extensionGetter_type (var_iteratedObjectPointer_4039, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 94)) ;
  GALGAS_omnibusType var_iteratedElementType_4171 ;
  switch (var_iteratedType_4074.getter_subscript (HERE).enumValue ()) {
  case GALGAS_subscript::kNotBuilt:
    break ;
  case GALGAS_subscript::kEnum_noSubscript:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mIteratedObject.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 99)), GALGAS_string ("this object is not enumerable"), fixItArray0  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)) ;
      var_iteratedElementType_4171.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      var_iteratedElementType_4171 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("u8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 101)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_4511 = (const cEnumAssociatedValues_subscript_staticSubscript *) (var_iteratedType_4074.getter_subscript (HERE).unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_elementType = extractPtr_4511->mAssociatedValue0 ;
      var_iteratedElementType_4171 = extractedValue_elementType ;
    }
    break ;
  }
  GALGAS_lstring var_omnibusName_4540 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 106))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 107)) ;
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_4540.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)), var_iteratedElementType_4171, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 110)) ;
  }
  {
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, object->mProperty_mVarName, GALGAS_bool (false), var_iteratedElementType_4171, var_omnibusName_4540, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 111)) ;
  }
  GALGAS_instructionListIR var_whileExpression_5F_GenerationList_5029 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 113)) ;
  GALGAS_objectIR var_whileExpressionResult_5444 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mWhileExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 117)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_5029, var_whileExpressionResult_5444, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 114)) ;
  GALGAS_implicitBooleanConversionResult var_whileExpressionBooleanResult_5745 ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.getter_mImplicitConversionToBooleanMap (HERE), var_whileExpressionResult_5444, object->mProperty_mEndOf_5F_whileExpression, ioArgument_ioTemporaries, var_whileExpression_5F_GenerationList_5029, ioArgument_ioAllocaList, var_whileExpressionBooleanResult_5745, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 128)) ;
  switch (var_whileExpressionBooleanResult_5745.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * extractPtr_5926 = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) (var_whileExpressionBooleanResult_5745.unsafePointer ()) ;
      const GALGAS_bool extractedValue_boolValue = extractPtr_5926->mAssociatedValue0 ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extractedValue_boolValue.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 138)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("test expression is always false"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)) ;
        }
      }
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
    }
    break ;
  }
  GALGAS_instructionListIR var_doInstructionList_5F_GenerationList_6558 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 153)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, object->mProperty_mEndOf_5F_for_5F_instruction, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_6558, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)) ;
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_for_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)) ;
  }
  switch (var_iteratedType_4074.getter_subscript (HERE).enumValue ()) {
  case GALGAS_subscript::kNotBuilt:
    break ;
  case GALGAS_subscript::kEnum_noSubscript:
    {
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnLiteralStringIR::constructor_new (var_omnibusName_4540.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 172)), object->mProperty_mIteratedObject.getter_location (HERE), var_iteratedObjectPointer_4039, var_iteratedType_4074, var_whileExpression_5F_GenerationList_5029, var_whileExpressionResult_5444, var_doInstructionList_5F_GenerationList_6558  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_8093 = (const cEnumAssociatedValues_subscript_staticSubscript *) (var_iteratedType_4074.getter_subscript (HERE).unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_elementType = extractPtr_8093->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_size = extractPtr_8093->mAssociatedValue1 ;
      GALGAS_stringset var_invokedFunctionSet_7573 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-for-in-do.galgas", 182)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = ioArgument_ioTemporaries.getter_mStaticArrayMapForTemporaries (HERE).getter_hasKey (object->mProperty_mIteratedObject.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 183)) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 183)).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioTemporaries.getter_mStaticArrayMapForTemporaries (HERE).method_searchKey (object->mProperty_mIteratedObject, var_invokedFunctionSet_7573, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 184)) ;
        }
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnArrayIR::constructor_new (var_omnibusName_4540.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 187)), object->mProperty_mIteratedObject, var_iteratedObjectPointer_4039, var_whileExpression_5F_GenerationList_5029, extensionGetter_llvmName (var_whileExpressionBooleanResult_5745, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 191)), var_doInstructionList_5F_GenerationList_6558, extractedValue_elementType, extractedValue_size.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 194)), var_invokedFunctionSet_7573  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 186))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 186)) ;
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
  GALGAS_string var_elementTypeLLVMName_10228 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mElementType.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)) ;
  GALGAS_string var_listTypeLLVMName_10281 = GALGAS_string ("[").add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (var_elementTypeLLVMName_10228, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)) ;
  GALGAS_string var_locationIndex_10356 = object->mProperty_mIteratedObjectName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 255)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 255)) ;
  GALGAS_string var_startLabel_10432 = GALGAS_string ("for.label.start.").add_operation (var_locationIndex_10356, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 257)) ;
  GALGAS_string var_testLabel_10485 = GALGAS_string ("for.label.test.").add_operation (var_locationIndex_10356, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)) ;
  GALGAS_string var_whileLabel_10538 = GALGAS_string ("for.label.while.").add_operation (var_locationIndex_10356, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)) ;
  GALGAS_string var_nextLabel_10591 = GALGAS_string ("for.label.next.").add_operation (var_locationIndex_10356, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)) ;
  GALGAS_string var_loopVar_10641 = GALGAS_string ("for.loop.").add_operation (var_locationIndex_10356, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)) ;
  GALGAS_string var_loopLabel_10687 = GALGAS_string ("for.label.loop.").add_operation (var_locationIndex_10356, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)) ;
  GALGAS_string var_endLabel_10738 = GALGAS_string ("for.label.end.").add_operation (var_locationIndex_10356, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)) ;
  GALGAS_string var_indexVar_10791 = GALGAS_string ("for.index.").add_operation (var_locationIndex_10356, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 265)) ;
  GALGAS_string var_ptrVar_10836 = GALGAS_string ("for.ptr.").add_operation (var_locationIndex_10356, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 266)) ;
  GALGAS_string var_currentValue_10885 = GALGAS_string ("for.currentValue.").add_operation (var_locationIndex_10356, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_10432, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_10432.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10836, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (GALGAS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (var_listTypeLLVMName_10281, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_10281, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10485, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_10485.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10836, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_elementTypeLLVMName_10228, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_ptrVar_10836, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_startLabel_10432, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_ptrVar_10836, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (var_nextLabel_10591, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_10791, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_startLabel_10432, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_indexVar_10791, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (var_nextLabel_10591, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_loopVar_10641, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GALGAS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (var_indexVar_10791, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_loopVar_10641, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_whileLabel_10538, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_endLabel_10738, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_10538.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (object->mProperty_mWhileExpressionBooleanResult_5F_llvmName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (var_loopLabel_10687, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (var_endLabel_10738, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_10687.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentValue_10885, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (var_elementTypeLLVMName_10228, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_10228.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (var_ptrVar_10836, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeLLVMName_10228, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (var_currentValue_10885, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (var_elementTypeLLVMName_10228, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (function_llvmNameForLocalVariable (object->mProperty_mEnumeratedValueName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_10591, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_10591.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10836, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (var_elementTypeLLVMName_10228, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_10228.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (var_ptrVar_10836, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_10791, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (GALGAS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (var_indexVar_10791, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (GALGAS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10485, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_10738.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 328)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 329)) ;
  ioArgument_ioInvokedRoutineSet.plusAssign_operation(object->mProperty_mInvokedFunctionSet, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)) ;
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
  GALGAS_string var_startLabel_14656 = GALGAS_string ("for.label.start.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)) ;
  GALGAS_string var_testLabel_14721 = GALGAS_string ("for.label.test.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)) ;
  GALGAS_string var_loopLabel_14785 = GALGAS_string ("for.label.loop.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)) ;
  GALGAS_string var_whileLabel_14850 = GALGAS_string ("for.label.while.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)) ;
  GALGAS_string var_nextLabel_14915 = GALGAS_string ("for.label.next.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)) ;
  GALGAS_string var_endLabel_14978 = GALGAS_string ("for.label.end.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)) ;
  GALGAS_string var_ptrVar_15039 = GALGAS_string ("for.ptr.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)) ;
  GALGAS_string var_currentVar_15100 = GALGAS_string ("for.current.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)) ;
  GALGAS_string var_stringLLVMTypeName_15170 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mLiteralStringType.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_14656, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14656.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_15039, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string (".start = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (var_stringLLVMTypeName_15170, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (var_stringLLVMTypeName_15170, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (extensionGetter_llvmName (object->mProperty_mStringElementIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_14721, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_14721.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_15039, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (var_stringLLVMTypeName_15170, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GALGAS_string (" [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (var_ptrVar_15039, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14656.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (var_ptrVar_15039, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (var_nextLabel_14915, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_15100, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string (" = load i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (var_stringLLVMTypeName_15170, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (var_ptrVar_15039, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_15100, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (var_currentVar_15100, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_15100, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (var_endLabel_14978, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (var_whileLabel_14850, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_14850.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (var_loopLabel_14785, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (var_endLabel_14978, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_14785.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 385)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8 %").add_operation (var_currentVar_15100, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * ").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_14915, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_14915.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_15039, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)).add_operation (GALGAS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (var_ptrVar_15039, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_14721, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_14978.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 408)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 409)) ;
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
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 67)) ;
      }
    }
  }
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 69)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 70)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 71)) ;
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
  GALGAS_omnibusType var_type_4046 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)) ;
  switch (var_type_4046.getter_kind (HERE).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 93)), GALGAS_string ("an integer type is required here"), fixItArray0  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 93)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 95)), GALGAS_string ("an integer type is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 95)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)), GALGAS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 100)), GALGAS_string ("an integer type is required here"), fixItArray3  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 100)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 102)), GALGAS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 102)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeBool:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 104)), GALGAS_string ("an integer type is required here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 104)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_llvmType:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 106)), GALGAS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 106)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_generic:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 108)), GALGAS_string ("an integer type is required here"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 108)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeInteger:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 110)), GALGAS_string ("an integer type is required here"), fixItArray8  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 110)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 112)), GALGAS_string ("an integer type is required here"), fixItArray9  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 112)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 114)), GALGAS_string ("an integer type is required here"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 114)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 116)), GALGAS_string ("an integer type is required here"), fixItArray11  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 116)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_8193 = (const cEnumAssociatedValues_typeKind_integer *) (var_type_4046.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_8193->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_8193->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8193->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_8193->mAssociatedValue3 ;
      GALGAS_objectIR var_lowerBoundExpressionResult_5687 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_4046, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResult_5687, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 119)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResult_5687, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 132)) ;
      }
      GALGAS_objectIR var_upperBoundExpressionResult_6247 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_4046, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResult_6247, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 136)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResult_6247, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 149)) ;
      }
      GALGAS_objectIR var_lowerBound_6426 = function_checkAssignmentCompatibility (constinArgument_inContext.getter_mAssignmentOperatorMap (HERE), var_lowerBoundExpressionResult_5687, var_type_4046, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 154)) ;
      GALGAS_objectIR var_upperBound_6690 = function_checkAssignmentCompatibility (constinArgument_inContext.getter_mAssignmentOperatorMap (HERE), var_upperBoundExpressionResult_6247, var_type_4046, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 161)) ;
      {
      extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 169)) ;
      }
      GALGAS_lstring var_enumeratedVarName_7055 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)) ;
      ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_enumeratedVarName_7055.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)), var_type_4046, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, object->mProperty_mVarName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_12) {
          {
          extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, object->mProperty_mVarName, GALGAS_bool (false), var_type_4046, var_enumeratedVarName_7055, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 175)) ;
          }
        }
      }
      GALGAS_instructionListIR var_instructionGenerationList_7463 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 178)) ;
      extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, object->mProperty_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_7463, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 179)) ;
      {
      extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 191)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarName_7055.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 194)), var_type_4046, extractedValue_unsigned, object->mProperty_mEndOf_5F_do_5F_instruction, var_lowerBound_6426, var_upperBound_6690, var_instructionGenerationList_7463  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 193))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 193)) ;
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

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionIR * object = (const cPtr_forLowerUpperBoundInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionIR) ;
  GALGAS_string var_llvmType_9261 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mType.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)) ;
  GALGAS_string var_llvmVarName_9302 = function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)) ;
  GALGAS_string var_testLabel_9357 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)) ;
  GALGAS_string var_loopLabel_9420 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)) ;
  GALGAS_string var_endLabel_9482 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)) ;
  GALGAS_string var_testResult_9546 = GALGAS_string ("%for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)) ;
  GALGAS_string var_loadedVarName_9621 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
  GALGAS_string var_currentVarName_9698 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)) ;
  GALGAS_string var_nextVarName_9773 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9261, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (extensionGetter_llvmName (object->mProperty_mLowerExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (var_llvmType_9261, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (var_llvmVarName_9302, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9357, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_9357.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_9621, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmType_9261, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmType_9261, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmVarName_9302, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_9546, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_9261, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (var_loadedVarName_9621, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (extensionGetter_llvmName (object->mProperty_mUpperExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_9546, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (var_loopLabel_9420, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (var_endLabel_9482, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_9420.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_9698, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmType_9261, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmType_9261, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmVarName_9302, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_9773, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_llvmType_9261, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_currentVarName_9698, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9261, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_nextVarName_9773, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmType_9261, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmVarName_9302, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9357, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_9482.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR.mSlotID,
                                            extensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (defineExtensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionIR * object = (const cPtr_forLowerUpperBoundInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR.mSlotID,
                                                extensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (defineExtensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  cEnumerator_accessInAssignmentListAST enumerator_4085 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_4085.hasCurrentObject ()) {
    switch (enumerator_4085.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_4260 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_4085.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_4260->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 92)) ;
      }
      break ;
    }
    enumerator_4085.gotoNextObject () ;
  }
  cEnumerator_effectiveArgumentListAST enumerator_4297 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_4297.hasCurrentObject ()) {
    switch (enumerator_4297.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4489 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4297.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_4489->mAssociatedValue1 ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 100)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4582 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4297.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_4582->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 102)) ;
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
    enumerator_4297.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_procedureCallInstructionAST.mSlotID,
                                                              extensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standAloneProcedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  cEnumerator_effectiveArgumentListAST enumerator_4947 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_4947.hasCurrentObject ()) {
    switch (enumerator_4947.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_5139 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4947.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_5139->mAssociatedValue1 ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_typeName COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 119)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_5232 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4947.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_5232->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 121)) ;
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
    enumerator_4947.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST.mSlotID,
                                                              extensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standAloneProcedureCallInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_standAloneProcedureCallInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
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
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  GALGAS_lstring var_calledRoutineSignature_7072 = extensionGetter_routineSignature (object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 167)) ;
  GALGAS_string var_requiredFunctionMangledName_7197 = object->mProperty_mSandAloneRoutineName.getter_string (HERE).add_operation (var_calledRoutineSignature_7072.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 169)) ;
  GALGAS_bool var_implementedPublic_7436 ;
  GALGAS_routineTypedSignature var_formalSignature_7461 ;
  GALGAS_unifiedTypeMap_2D_proxy var_formalReturnTypeProxy_7492 ;
  GALGAS_routineLLVMNameDict var_implementedModeDictionary_7555 ;
  GALGAS_bool var_implementedIsExported_7593 ;
  GALGAS_mode var_implementedMode_7625 ;
  constinArgument_inContext.getter_mRoutineMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (var_requiredFunctionMangledName_7197, object->mProperty_mSandAloneRoutineName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 172))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 172)), var_implementedPublic_7436, var_formalSignature_7461, var_formalReturnTypeProxy_7492, var_implementedModeDictionary_7555, var_implementedIsExported_7593, var_implementedMode_7625, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 171)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_formalReturnTypeProxy_7492.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 181)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mSandAloneRoutineName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 182)), GALGAS_string ("this function returns a value, cannot be used as a procedure"), fixItArray1  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 182)) ;
    }
  }
  GALGAS_string var_functionLLVMName_7852 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_7555, constinArgument_inMode, object->mProperty_mSandAloneRoutineName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 185)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_8044 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 187)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_7461, object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_8044, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 188)) ;
  }
  GALGAS_lstring var_routineMangledName_8589 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), object->mProperty_mSandAloneRoutineName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 205)) ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (GALGAS_objectIR::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 212)), var_routineMangledName_8589, var_functionLLVMName_7852, var_effectiveParameterListIR_8044  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 211))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 211)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_standAloneProcedureCallInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST.mSlotID,
                                                    extensionMethod_standAloneProcedureCallInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_standAloneProcedureCallInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_standAloneProcedureCallInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procedureCallInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_procedureCallInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
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
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  GALGAS_bool var_receiverIsSelf_9682 = GALGAS_bool (false) ;
  GALGAS_omnibusType var_currentType_9717 ;
  GALGAS_string var_currentLLVMAddressVar_9749 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_receiverIsSelf_9682 = GALGAS_bool (true) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 239)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 240)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 240)) ;
          var_currentType_9717.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_9749.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_1) {
        var_currentType_9717 = constinArgument_inSelfType ;
        var_currentLLVMAddressVar_9749 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 243)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_entity_10145 ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, object->mProperty_mIdentifier, var_entity_10145, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 246)) ;
    switch (var_entity_10145.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
        const cEnumAssociatedValues_valuedObject_task * extractPtr_10296 = (const cEnumAssociatedValues_valuedObject_task *) (var_entity_10145.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_type = extractPtr_10296->mAssociatedValue0 ;
        var_currentType_9717 = extractedValue_type ;
        var_currentLLVMAddressVar_9749 = function_llvmNameForGlobalVariable (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 250)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
        const cEnumAssociatedValues_valuedObject_driver * extractPtr_10590 = (const cEnumAssociatedValues_valuedObject_driver *) (var_entity_10145.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_type = extractPtr_10590->mAssociatedValue0 ;
        const GALGAS_bool extractedValue_instancied = extractPtr_10590->mAssociatedValue1 ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = extractedValue_instancied.boolEnum () ;
          if (kBoolTrue == test_3) {
            var_currentType_9717 = extractedValue_type ;
            var_currentLLVMAddressVar_9749 = function_llvmNameForGlobalVariable (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 254)) ;
          }
        }
        if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 256)), GALGAS_string ("the driver should be instancied"), fixItArray4  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 256)) ;
          var_currentType_9717.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_9749.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 259)), GALGAS_string ("a global constant cannot be used in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 259)) ;
        var_currentType_9717.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9749.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_10913 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_10145.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_type = extractPtr_10913->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_omnibusName = extractPtr_10913->mAssociatedValue1 ;
        var_currentType_9717 = extractedValue_type ;
        var_currentLLVMAddressVar_9749 = function_llvmNameForLocalVariable (extractedValue_omnibusName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 264)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_11074 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_10145.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_type = extractPtr_11074->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_omnibusName = extractPtr_11074->mAssociatedValue1 ;
        var_currentType_9717 = extractedValue_type ;
        var_currentLLVMAddressVar_9749 = function_llvmNameForLocalVariable (extractedValue_omnibusName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 267)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
        const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_11245 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_entity_10145.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_type = extractPtr_11245->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_omnibusName = extractPtr_11245->mAssociatedValue1 ;
        var_currentType_9717 = extractedValue_type ;
        var_currentLLVMAddressVar_9749 = function_llvmNameForGlobalSyncInstance (extractedValue_omnibusName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 270)) ;
      }
      break ;
    }
  }
  GALGAS_propertyGetterMap var_currentObjectPropertyMap_11327 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9717, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 274)) ;
  GALGAS_accessInAssignmentListAST var_accessList_11461 = object->mProperty_mAccessList ;
  GALGAS_accessInAssignmentAST var_lastAccess_11515 ;
  {
  var_accessList_11461.setter_popLast (var_lastAccess_11515, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 277)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_11570 (var_accessList_11461, kENUMERATION_UP) ;
  while (enumerator_11570.hasCurrentObject ()) {
    switch (enumerator_11570.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_13350 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_11570.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_13350->mAssociatedValue0 ;
        GALGAS_propertyVisibility var_visibility_11723 ;
        GALGAS_propertyGetterKind var_propertyAccess_11771 ;
        var_currentObjectPropertyMap_11327.method_searchKey (extractedValue_propertyName, var_visibility_11723, var_propertyAccess_11771, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 282)) ;
        switch (var_visibility_11723.enumValue ()) {
        case GALGAS_propertyVisibility::kNotBuilt:
          break ;
        case GALGAS_propertyVisibility::kEnum_isPublic:
          {
          }
          break ;
        case GALGAS_propertyVisibility::kEnum_isPrivate:
          {
            enumGalgasBool test_6 = kBoolTrue ;
            if (kBoolTrue == test_6) {
              test_6 = var_receiverIsSelf_9682.operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 290)).boolEnum () ;
              if (kBoolTrue == test_6) {
                TC_Array <C_FixItDescription> fixItArray7 ;
                inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 291)), GALGAS_string ("inaccessible property, is private"), fixItArray7  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 291)) ;
              }
            }
          }
          break ;
        }
        var_receiverIsSelf_9682 = GALGAS_bool (false) ;
        switch (var_propertyAccess_11771.enumValue ()) {
        case GALGAS_propertyGetterKind::kNotBuilt:
          break ;
        case GALGAS_propertyGetterKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 297)), GALGAS_string ("a context property cannot be used in this context"), fixItArray8  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 297)) ;
            var_currentType_9717.drop () ; // Release error dropped variable
            var_currentLLVMAddressVar_9749.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_storedProperty:
          {
            const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_12720 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_propertyAccess_11771.unsafePointer ()) ;
            const GALGAS_omnibusType extractedValue_propertyType = extractPtr_12720->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_12720->mAssociatedValue1 ;
            GALGAS_string var_llvmPropertyName_12339 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmPropertyName_12339, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 301)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_9717, var_currentLLVMAddressVar_9749, var_llvmPropertyName_12339, extractedValue_propertyIndex, extractedValue_propertyName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 302)) ;
            }
            var_currentType_9717 = extractedValue_propertyType ;
            var_currentLLVMAddressVar_9749 = var_llvmPropertyName_12339 ;
            var_currentObjectPropertyMap_11327 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9717, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 311)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_computedProperty:
          {
            const cEnumAssociatedValues_propertyGetterKind_computedProperty * extractPtr_13340 = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) (var_propertyAccess_11771.unsafePointer ()) ;
            const GALGAS_unifiedTypeMap_2D_proxy extractedValue_propertyTypeProxy = extractPtr_13340->mAssociatedValue0 ;
            const GALGAS_routineLLVMNameDict extractedValue_modeDictionary = extractPtr_13340->mAssociatedValue1 ;
            GALGAS_string var_routineLLVMName_12813 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_modeDictionary, constinArgument_inMode, extractedValue_propertyName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 313)) ;
            GALGAS_objectIR var_resultValueIR_13152 ;
            {
            extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, GALGAS_objectIR::constructor_reference (var_currentType_9717, var_currentLLVMAddressVar_9749  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 316)), var_routineLLVMName_12813, extractedValue_propertyTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 318)), var_resultValueIR_13152, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 314)) ;
            }
            var_currentType_9717 = extensionGetter_type (var_resultValueIR_13152, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 321)) ;
            var_currentLLVMAddressVar_9749 = extensionGetter_llvmName (var_resultValueIR_13152, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 322)) ;
            var_currentObjectPropertyMap_11327 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9717, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 323)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_13480 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_11570.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_13480->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("not handled yet"), fixItArray9  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 326)) ;
        var_currentType_9717.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9749.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_11570.gotoNextObject () ;
  }
  switch (var_lastAccess_11515.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_13639 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_11515.unsafePointer ()) ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_13639->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("a property is required here"), fixItArray10  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 332)) ;
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_15345 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_11515.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_methodName = extractPtr_15345->mAssociatedValue0 ;
      GALGAS_lstring var_methodMangledName_13705 = extensionGetter_mangledName (object->mProperty_mArguments, var_currentType_9717.getter_omnibusTypeDescriptionName (SOURCE_FILE ("instruction-procedure-call.galgas", 334)), extractedValue_methodName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 334)) ;
      GALGAS_bool var_implementedPublic_13916 ;
      GALGAS_routineTypedSignature var_formalSignature_13943 ;
      GALGAS_unifiedTypeMap_2D_proxy var_formalReturnTypeProxy_13976 ;
      GALGAS_routineLLVMNameDict var_implementedModeDictionary_14041 ;
      GALGAS_bool var_implementedIsExported_14081 ;
      GALGAS_mode var_implementedMode_14115 ;
      constinArgument_inContext.getter_mRoutineMap (HERE).method_searchKey (var_methodMangledName_13705, var_implementedPublic_13916, var_formalSignature_13943, var_formalReturnTypeProxy_13976, var_implementedModeDictionary_14041, var_implementedIsExported_14081, var_implementedMode_14115, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 335)) ;
      GALGAS_string var_functionLLVMName_14165 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_14041, constinArgument_inMode, extractedValue_methodName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 345)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, var_formalReturnTypeProxy_13976.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 347)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 348)), GALGAS_string ("cannot be called in instruction, returns a value"), fixItArray12  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 348)) ;
        }
      }
      GALGAS_procCallEffectiveParameterListIR temp_13 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 353)) ;
      temp_13.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-procedure-call.galgas", 352)), GALGAS_objectIR::constructor_reference (var_currentType_9717, var_currentLLVMAddressVar_9749  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 353))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 353)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14527 = temp_13 ;
      {
      routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_13943, object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_14527, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 356)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (GALGAS_objectIR::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 373)), var_methodMangledName_13705, var_functionLLVMName_14165, var_effectiveParameterListIR_14527  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 372))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 372)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_procedureCallInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_procedureCallInstructionAST.mSlotID,
                                                    extensionMethod_procedureCallInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_procedureCallInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_procedureCallInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 68)) ;
  cEnumerator_switchCaseListAST enumerator_2895 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_2895.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2895.current_mCaseInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 70)) ;
    enumerator_2895.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                              extensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_switchInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
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
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_instructionListIR var_switchExpressionGenerationList_3933 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 90)) ;
  GALGAS_objectIR var_switchValueIR_4323 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("instruction-switch.galgas", 93)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 94)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_switchExpressionGenerationList_3933, var_switchValueIR_4323, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 91)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_switchValueIR_4323, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 104)) ;
  }
  GALGAS_lstring var_switchTypeName_4476 = GALGAS_lstring::constructor_new (extensionGetter_type (var_switchValueIR_4323, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)).getter_omnibusTypeDescriptionName (HERE), object->mProperty_mEndOf_5F_test_5F_expression  COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)) ;
  GALGAS_constantMap var_enumConstantMap_4643 ;
  constinArgument_inContext.getter_mTypeConstantMap (HERE).method_searchKey (var_switchTypeName_4476, var_enumConstantMap_4643, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 110)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = extensionGetter_type (var_switchValueIR_4323, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)).getter_kind (HERE).getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 112)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 112)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_omnibusTypeDescriptionName (var_switchValueIR_4323, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)), fixItArray1  COMMA_SOURCE_FILE ("instruction-switch.galgas", 113)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_isStatic (var_switchValueIR_4323, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 120)) ;
  }
  GALGAS_stringset var_usedEnumerationValues_5137 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 121)) ;
  GALGAS_switchCaseListIR var_switchCaseListIR_5179 = GALGAS_switchCaseListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 122)) ;
  cEnumerator_switchCaseListAST enumerator_5243 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_5243.hasCurrentObject ()) {
    GALGAS_uintlist var_caseIdentifierIndexList_5284 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 124)) ;
    cEnumerator_lstringlist enumerator_5326 (enumerator_5243.current_mCaseIdentifiers (HERE), kENUMERATION_UP) ;
    while (enumerator_5326.hasCurrentObject ()) {
      GALGAS_bigint var_constantIdx_5396 ;
      GALGAS_lstring joker_5398_1 ; // Joker input parameter
      var_enumConstantMap_4643.method_searchKey (enumerator_5326.current_mValue (HERE), var_constantIdx_5396, joker_5398_1, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 126)) ;
      var_caseIdentifierIndexList_5284.addAssign_operation (var_constantIdx_5396.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 127))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 127)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_usedEnumerationValues_5137.getter_hasKey (enumerator_5326.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 128)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 128)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          fixItArray5.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (enumerator_5326.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 129)), GALGAS_string ("duplicated enumeration constant"), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 129)) ;
        }
      }
      var_usedEnumerationValues_5137.addAssign_operation (enumerator_5326.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 131))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 131)) ;
      enumerator_5326.gotoNextObject () ;
    }
    GALGAS_instructionListIR var_instructionGenerationList_5683 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 133)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_5243.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, object->mProperty_mEndOf_5F_switch_5F_instruction, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_5683, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
    var_switchCaseListIR_5179.addAssign_operation (var_caseIdentifierIndexList_5284, var_instructionGenerationList_5683  COMMA_SOURCE_FILE ("instruction-switch.galgas", 146)) ;
    enumerator_5243.gotoNextObject () ;
  }
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 148)) ;
  }
  cEnumerator_constantMap enumerator_6347 (var_enumConstantMap_4643, kENUMERATION_UP) ;
  while (enumerator_6347.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_usedEnumerationValues_5137.getter_hasKey (enumerator_6347.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 151)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 151)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("missing '").add_operation (enumerator_6347.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)).add_operation (GALGAS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)) ;
      }
    }
    enumerator_6347.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_switchInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 157)), var_switchExpressionGenerationList_3933, var_switchValueIR_4323, var_switchCaseListIR_5179  COMMA_SOURCE_FILE ("instruction-switch.galgas", 156))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                    extensionMethod_switchInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_switchInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_switchInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                     GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionIR * object = (const cPtr_switchInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionIR) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)) ;
  GALGAS_string var_labelOtherwise_8016 = GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)).add_operation (GALGAS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)).add_operation (extensionGetter_llvmName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %").add_operation (var_labelOtherwise_8016, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)).add_operation (GALGAS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)) ;
  cEnumerator_switchCaseListIR enumerator_8266 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8217 ((uint32_t) 0) ;
  while (enumerator_8266.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_8329 (enumerator_8266.current_mCaseIdentifierIndexes (HERE), kENUMERATION_UP) ;
    while (enumerator_8329.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (enumerator_8329.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (index_8217.getter_string (SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)) ;
      enumerator_8329.gotoNextObject () ;
    }
    enumerator_8266.gotoNextObject () ;
    index_8217.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ]\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
  cEnumerator_switchCaseListIR enumerator_8612 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8569 ((uint32_t) 0) ;
  while (enumerator_8612.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (index_8569.getter_string (SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
    extensionMethod_instructionListLLVMCode (enumerator_8612.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelOtherwise_8016, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
    enumerator_8612.gotoNextObject () ;
    index_8569.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 203)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_8016.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_switchInstructionIR.mSlotID,
                                            extensionMethod_switchInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstructionIR_llvmInstructionCode (defineExtensionMethod_switchInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_switchInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                         GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionIR * object = (const cPtr_switchInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 218)) ;
  cEnumerator_switchCaseListIR enumerator_9348 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  while (enumerator_9348.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_9348.current_mCaseInstructionList (HERE), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)) ;
    enumerator_9348.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_switchInstructionIR.mSlotID,
                                                extensionMethod_switchInstructionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstructionIR_enterAccessibleEntities (defineExtensionMethod_switchInstructionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleArraySubscriptNew'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleArraySubscriptNew (const GALGAS_omnibusType constinArgument_inSelfType,
                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_mode constinArgument_inMode,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                      const GALGAS_expressionAST constinArgument_inIndexExpression,
                                      const GALGAS_location constinArgument_inErrorLocation,
                                      const GALGAS_bool constinArgument_inCheckIndexExpression,
                                      const GALGAS_bigint constinArgument_inArraySize,
                                      const GALGAS_omnibusType constinArgument_inElementType,
                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                      GALGAS_objectIR & outArgument_outIndexIR,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIndexIR.drop () ; // Release 'out' argument
  GALGAS_objectIR var_indexResult_1213 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 24)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResult_1213, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResult_1213, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 34)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_indexResult_1213.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 38)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bigint var_indexValue_1445 ;
      GALGAS_omnibusType joker_1413_1 ; // Joker input parameter
      var_indexResult_1213.method_literalInteger (joker_1413_1, var_indexValue_1445, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 39)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        GALGAS_bool test_2 = GALGAS_bool (kIsStrictInf, var_indexValue_1445.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 40)))) ;
        if (kBoolTrue != test_2.boolEnum ()) {
          test_2 = GALGAS_bool (kIsSupOrEqual, var_indexValue_1445.objectCompare (constinArgument_inArraySize)) ;
        }
        test_1 = test_2.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (constinArgument_inArraySize.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)) ;
          outArgument_outIndexIR.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_1) {
        outArgument_outIndexIR = GALGAS_objectIR::constructor_literalInteger (constinArgument_inElementType, var_indexValue_1445  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 43)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_type (var_indexResult_1213, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 45)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 45)).boolEnum () ;
      if (kBoolTrue == test_4) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GALGAS_bool test_6 = constinArgument_inCheckIndexExpression ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 46)) ;
          }
          test_5 = test_6.boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_bool var_generatePanicInstruction_2009 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_1213, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_2009, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 47)) ;
            }
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              GALGAS_bool test_8 = var_generatePanicInstruction_2009 ;
              if (kBoolTrue == test_8.boolEnum ()) {
                test_8 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 53)) ;
              }
              test_7 = test_8.boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <C_FixItDescription> fixItArray9 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic and routine is not safe"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 54)) ;
              }
            }
          }
        }
        outArgument_outIndexIR = var_indexResult_1213 ;
      }
    }
    if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray10  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 59)) ;
      outArgument_outIndexIR.drop () ; // Release error dropped variable
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValue'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValue (const GALGAS_omnibusType constinArgument_inSelfType,
                                      const GALGAS_bool constinArgument_inIsReadAccess,
                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_mode constinArgument_inMode,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                      const GALGAS_lstring constinArgument_inVariableName,
                                      const GALGAS_string constinArgument_inLLVMName,
                                      const GALGAS_omnibusType constinArgument_inVariableType,
                                      const GALGAS_LValueOperandAST constinArgument_inOperand,
                                      GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_omnibusType var_currentType_8767 = constinArgument_inVariableType ;
  GALGAS_string var_currentLLVMName_8806 = constinArgument_inLLVMName ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inIsReadAccess.boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          GALGAS_objectIR joker_8958 ; // Joker input parameter
          extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8958, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 220)) ;
          }
        }
      }
      if (kBoolFalse == test_0) {
        {
        GALGAS_objectIR joker_9044 ; // Joker input parameter
        extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9044, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 222)) ;
        }
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_9739 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_9739->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_nextOperand = extractPtr_9739->mAssociatedValue1 ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inIsReadAccess.boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          GALGAS_objectIR joker_9219 ; // Joker input parameter
          extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9219, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 226)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        {
        GALGAS_objectIR joker_9309 ; // Joker input parameter
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9309, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 228)) ;
        }
      }
      {
      routine_handlePropertyAccess (constinArgument_inSelfType, var_currentType_8767, var_currentLLVMName_8806, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_name, extractedValue_nextOperand, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 230)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_10497 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_10497->mAssociatedValue0 ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_10497->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_checkIndexExpression = extractPtr_10497->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_nextOperand = extractPtr_10497->mAssociatedValue3 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inIsReadAccess.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          GALGAS_objectIR joker_9923 ; // Joker input parameter
          extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9923, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 247)) ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        {
        GALGAS_objectIR joker_10013 ; // Joker input parameter
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_10013, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 249)) ;
        }
      }
      {
      routine_handleArrayAccess (constinArgument_inSelfType, var_currentType_8767, var_currentLLVMName_8806, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_indexExpression, extractedValue_endOfIndex, extractedValue_checkIndexExpression, extractedValue_nextOperand, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 251)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_new (var_currentType_8767, var_currentLLVMName_8806  COMMA_SOURCE_FILE ("lvalue.galgas", 269)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handlePropertyAccess (const GALGAS_omnibusType constinArgument_inSelfType,
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
                                   const GALGAS_lstring constinArgument_inPropertyName,
                                   const GALGAS_LValueOperandAST constinArgument_inNextOperand,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertySetterMap var_propertySetterMap_11407 = extensionGetter_propertySetterMap (constinArgument_inContext, ioArgument_ioCurrentType, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 290)) ;
  GALGAS_propertySetterKind var_propertyAccess_11544 ;
  GALGAS_propertyVisibility joker_11503 ; // Joker input parameter
  var_propertySetterMap_11407.method_searchKey (constinArgument_inPropertyName, joker_11503, var_propertyAccess_11544, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 291)) ;
  switch (var_propertyAccess_11544.enumValue ()) {
  case GALGAS_propertySetterKind::kNotBuilt:
    break ;
  case GALGAS_propertySetterKind::kEnum_computedProperty:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 294)), GALGAS_string ("a computed property cannot be used here"), fixItArray0  COMMA_SOURCE_FILE ("lvalue.galgas", 294)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertySetterKind::kEnum_storedProperty:
    {
      const cEnumAssociatedValues_propertySetterKind_storedProperty * extractPtr_12491 = (const cEnumAssociatedValues_propertySetterKind_storedProperty *) (var_propertyAccess_11544.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_propertyType = extractPtr_12491->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_index = extractPtr_12491->mAssociatedValue1 ;
      GALGAS_string var_newLLVMvariable_11825 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_11825, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 296)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, var_newLLVMvariable_11825, extractedValue_index, constinArgument_inPropertyName.getter_string (SOURCE_FILE ("lvalue.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 297)) ;
      }
      ioArgument_ioCurrentType = extractedValue_propertyType ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_11825 ;
      {
      routine_handleNextOperand (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 306)) ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleArrayAccess (const GALGAS_omnibusType constinArgument_inSelfType,
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
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is ").add_operation (ioArgument_ioCurrentType.getter_omnibusTypeDescriptionName (SOURCE_FILE ("lvalue.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 345)).add_operation (GALGAS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 345)), fixItArray0  COMMA_SOURCE_FILE ("lvalue.galgas", 344)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is literal string and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 347)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_14936 = (const cEnumAssociatedValues_subscript_staticSubscript *) (ioArgument_ioCurrentType.getter_subscript (HERE).unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_elementType = extractPtr_14936->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_arraySize = extractPtr_14936->mAssociatedValue1 ;
      GALGAS_objectIR var_indexIR_14205 ;
      {
      routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_arraySize, extractedValue_elementType, ioArgument_ioInstructionGenerationList, var_indexIR_14205, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 351)) ;
      }
      GALGAS_string var_newLLVMvariable_14268 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_14268, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 368)) ;
      }
      {
      extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, extractedValue_elementType, var_newLLVMvariable_14268, var_indexIR_14205, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 369)) ;
      }
      ioArgument_ioCurrentType = extractedValue_elementType ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_14268 ;
      {
      routine_handleNextOperand (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 378)) ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValue'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValue (const GALGAS_omnibusType constinArgument_inSelfType,
                                const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                const GALGAS_semanticContext constinArgument_inContext,
                                const GALGAS_mode constinArgument_inMode,
                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                GALGAS_allocaList & ioArgument_ioAllocaList,
                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                const GALGAS_LValueOperandAST constinArgument_inOperand,
                                GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_omnibusType var_currentType_15643 = constinArgument_inSelfType ;
  GALGAS_string var_currentLLVMName_15678 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 411)) ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_16207 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_16207->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_next = extractPtr_16207->mAssociatedValue1 ;
      {
      routine_handlePropertyAccess (constinArgument_inSelfType, var_currentType_15643, var_currentLLVMName_15678, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_name, extractedValue_next, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 415)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_16764 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_16764->mAssociatedValue0 ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_16764->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_checkIndexExpression = extractPtr_16764->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_nextOperand = extractPtr_16764->mAssociatedValue3 ;
      {
      routine_handleArrayAccess (constinArgument_inSelfType, var_currentType_15643, var_currentLLVMName_15678, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_indexExpression, extractedValue_endOfIndex, extractedValue_checkIndexExpression, extractedValue_nextOperand, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 431)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_new (var_currentType_15643, var_currentLLVMName_15678  COMMA_SOURCE_FILE ("lvalue.galgas", 449)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperand'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleNextOperand (const GALGAS_omnibusType constinArgument_inSelfType,
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
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_18042 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_18042->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_next = extractPtr_18042->mAssociatedValue1 ;
      {
      routine_handlePropertyAccess (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_name, extractedValue_next, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 471)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_18603 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_18603->mAssociatedValue0 ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_18603->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_checkIndexExpression = extractPtr_18603->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_nextOperand = extractPtr_18603->mAssociatedValue3 ;
      {
      routine_handleArrayAccess (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_indexExpression, extractedValue_endOfIndex, extractedValue_checkIndexExpression, extractedValue_nextOperand, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 487)) ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeEffectiveParameters'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeEffectiveParameters (const GALGAS_omnibusType constinArgument_inSelfType,
                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                         const GALGAS_routineTypedSignature constinArgument_inFormalSignature,
                                         const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                         const GALGAS_location constinArgument_inErrorLocation,
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
  GALGAS_procEffectiveParameterList var_parameterList_5194 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("effective-parameters.galgas", 129)) ;
  cEnumerator_routineTypedSignature enumerator_5237 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_5280 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_5237.hasCurrentObject () && enumerator_5280.hasCurrentObject ()) {
    switch (enumerator_5280.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_6069 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_5280.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_6069->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_6069->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_6069->mAssociatedValue2 ;
        GALGAS_omnibusType temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_5237.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 134)) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 136)).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 136)) ;
        }
        GALGAS_omnibusType var_type_5418 = temp_0 ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = extractedValue_constant.boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_name, GALGAS_bool (false), var_type_5418, extractedValue_name, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 139)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          {
          extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_name, var_type_5418, extractedValue_name, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("effective-parameters.galgas", 141)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 141)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 143)), var_type_5418, GALGAS_bool (true)  COMMA_SOURCE_FILE ("effective-parameters.galgas", 143)) ;
        var_parameterList_5194.addAssign_operation (enumerator_5280.current_mEffectiveParameterKind (HERE), enumerator_5280.current_mSelector (HERE), var_type_5418  COMMA_SOURCE_FILE ("effective-parameters.galgas", 144)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("effective-parameters.galgas", 146)), GALGAS_objectIR::constructor_reference (var_type_5418, function_llvmNameForLocalVariable (extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 147))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 147))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 145)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_6802 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_5280.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_6802->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_6179 ;
        {
        extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, extractedValue_name, var_objectIR_6179, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 149)) ;
        }
        var_parameterList_5194.addAssign_operation (enumerator_5280.current_mEffectiveParameterKind (HERE), enumerator_5280.current_mSelector (HERE), extensionGetter_type (var_objectIR_6179, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 159))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 159)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("effective-parameters.galgas", 161)), GALGAS_objectIR::constructor_reference (extensionGetter_type (var_objectIR_6179, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 163)), extensionGetter_llvmName (var_objectIR_6179, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 164)).getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 164)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 164))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 162))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 160)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_7869 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_5280.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_7869->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_7869->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_7328 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_5237.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 170)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7328, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 167)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_7328, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 180)) ;
        }
        GALGAS_objectIR var_result_7475 = function_checkAssignmentCompatibility (constinArgument_inContext.getter_mAssignmentOperatorMap (HERE), var_expressionResult_7328, enumerator_5237.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 187)), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 184)) ;
        var_parameterList_5194.addAssign_operation (enumerator_5280.current_mEffectiveParameterKind (HERE), enumerator_5280.current_mSelector (HERE), enumerator_5237.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 191))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 191)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("effective-parameters.galgas", 192)), var_result_7475  COMMA_SOURCE_FILE ("effective-parameters.galgas", 192)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_8269 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_5280.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_8269->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_7989 ;
        {
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, extractedValue_name, var_objectIR_7989, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 194)) ;
        }
        var_parameterList_5194.addAssign_operation (enumerator_5280.current_mEffectiveParameterKind (HERE), enumerator_5280.current_mSelector (HERE), extensionGetter_type (var_objectIR_7989, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 195))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 195)) ;
        GALGAS_objectIR var_argumentIR_8107 = GALGAS_objectIR::constructor_reference (extensionGetter_type (var_objectIR_7989, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 197)), extensionGetter_llvmName (var_objectIR_7989, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 198))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 196)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("effective-parameters.galgas", 200)), var_argumentIR_8107  COMMA_SOURCE_FILE ("effective-parameters.galgas", 200)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_9523 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_5280.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_9523->mAssociatedValue0 ;
        GALGAS_propertyGetterMap var_propertyGetterMap_8446 = extensionGetter_propertyGetterMap (constinArgument_inContext, constinArgument_inSelfType, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 203)) ;
        GALGAS_propertyGetterKind var_propertyAccess_8666 ;
        GALGAS_propertyVisibility joker_8625 ; // Joker input parameter
        var_propertyGetterMap_8446.method_searchKey (extractedValue_name, joker_8625, var_propertyAccess_8666, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 205)) ;
        switch (var_propertyAccess_8666.enumValue ()) {
        case GALGAS_propertyGetterKind::kNotBuilt:
          break ;
        case GALGAS_propertyGetterKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a constant property cannot be used as output / input parameter"), fixItArray3  COMMA_SOURCE_FILE ("effective-parameters.galgas", 208)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_storedProperty:
          {
            const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_9381 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_propertyAccess_8666.unsafePointer ()) ;
            const GALGAS_omnibusType extractedValue_propertyType = extractPtr_9381->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_9381->mAssociatedValue1 ;
            GALGAS_string var_property_5F_llvmName_8965 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_8965, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 210)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 213)), var_property_5F_llvmName_8965, extractedValue_propertyIndex, extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 211)) ;
            }
            var_parameterList_5194.addAssign_operation (enumerator_5280.current_mEffectiveParameterKind (HERE), enumerator_5280.current_mSelector (HERE), extractedValue_propertyType  COMMA_SOURCE_FILE ("effective-parameters.galgas", 218)) ;
            ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("effective-parameters.galgas", 219)), GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_8965  COMMA_SOURCE_FILE ("effective-parameters.galgas", 219))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 219)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_computedProperty:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a computed property cannot be used as output / input parameter"), fixItArray4  COMMA_SOURCE_FILE ("effective-parameters.galgas", 221)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_5237.gotoNextObject () ;
    enumerator_5280.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("effective-parameters.galgas", 226)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("effective-parameters.galgas", 226)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("effective-parameters.galgas", 227)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("effective-parameters.galgas", 228)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 228)), fixItArray6  COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)) ;
    }
  }
  if (kBoolFalse == test_5) {
    cEnumerator_routineTypedSignature enumerator_9859 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_9888 (var_parameterList_5194, kENUMERATION_UP) ;
    while (enumerator_9859.hasCurrentObject () && enumerator_9888.hasCurrentObject ()) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, enumerator_9859.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 231)).getter_omnibusTypeDescriptionName (HERE).objectCompare (enumerator_9888.current_mParameterType (HERE).getter_omnibusTypeDescriptionName (HERE))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_9888.current_mSelector (HERE).getter_location (SOURCE_FILE ("effective-parameters.galgas", 232)), GALGAS_string ("the actual parameter type is $").add_operation (enumerator_9888.current_mParameterType (HERE).getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 232)).add_operation (GALGAS_string (", and is incompatible with the formal type $"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 232)).add_operation (enumerator_9859.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 233)), fixItArray8  COMMA_SOURCE_FILE ("effective-parameters.galgas", 232)) ;
        }
      }
      GALGAS_string var_requiredPassingMode_10252 = extensionGetter_requiredActualPassingModeForSelector (enumerator_9859.current_mFormalArgumentPassingMode (HERE), enumerator_9859.current_mSelector (HERE).getter_string (SOURCE_FILE ("effective-parameters.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 235)) ;
      GALGAS_string var_testedPassingMode_10373 = extensionGetter_passingModeForActualSelector (enumerator_9888.current_mEffectiveParameterPassingMode (HERE), enumerator_9888.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 236)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_10252.objectCompare (var_testedPassingMode_10373)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_9888.current_mSelector (HERE).getter_location (SOURCE_FILE ("effective-parameters.galgas", 238)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_10252, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 238)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 238)), fixItArray10  COMMA_SOURCE_FILE ("effective-parameters.galgas", 238)) ;
        }
      }
      enumerator_9859.gotoNextObject () ;
      enumerator_9888.gotoNextObject () ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'llvmAttributeFunction'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_llvmAttributeFunction (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (" nounwind minsize optsize ") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmAttributeFunction = false ;
static GALGAS_string gOnceFunctionResult_llvmAttributeFunction ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmAttributeFunction (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmAttributeFunction) {
    gOnceFunctionResult_llvmAttributeFunction = onceFunction_llvmAttributeFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmAttributeFunction = true ;
  }
  return gOnceFunctionResult_llvmAttributeFunction ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmAttributeFunction (void) {
  gOnceFunctionResult_llvmAttributeFunction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_llvmAttributeFunction (NULL,
                                                                   releaseOnceFunctionResult_llvmAttributeFunction) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmAttributeFunction [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmAttributeFunction (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_llvmAttributeFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmAttributeFunction ("llvmAttributeFunction",
                                                                       functionWithGenericHeader_llvmAttributeFunction,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_llvmAttributeFunction) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'staticAttribute'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_staticAttribute (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("static") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_staticAttribute = false ;
static GALGAS_string gOnceFunctionResult_staticAttribute ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_staticAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticAttribute) {
    gOnceFunctionResult_staticAttribute = onceFunction_staticAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticAttribute = true ;
  }
  return gOnceFunctionResult_staticAttribute ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_staticAttribute (void) {
  gOnceFunctionResult_staticAttribute.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_staticAttribute (NULL,
                                                             releaseOnceFunctionResult_staticAttribute) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_staticAttribute [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_staticAttribute (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_staticAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_staticAttribute ("staticAttribute",
                                                                 functionWithGenericHeader_staticAttribute,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_staticAttribute) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'compileTimeDeclarationBarrier'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring onceFunction_compileTimeDeclarationBarrier (C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_string ("\xC2""\xAB""compile time\xC2""\xBB""").getter_nowhere (SOURCE_FILE ("generated-code-prefixes.galgas", 16)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compileTimeDeclarationBarrier = false ;
static GALGAS_lstring gOnceFunctionResult_compileTimeDeclarationBarrier ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_compileTimeDeclarationBarrier (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeDeclarationBarrier) {
    gOnceFunctionResult_compileTimeDeclarationBarrier = onceFunction_compileTimeDeclarationBarrier (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeDeclarationBarrier = true ;
  }
  return gOnceFunctionResult_compileTimeDeclarationBarrier ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compileTimeDeclarationBarrier (void) {
  gOnceFunctionResult_compileTimeDeclarationBarrier.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_compileTimeDeclarationBarrier (NULL,
                                                                           releaseOnceFunctionResult_compileTimeDeclarationBarrier) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_compileTimeDeclarationBarrier [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_compileTimeDeclarationBarrier (C_Compiler * inCompiler,
                                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                                              const GALGAS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  return function_compileTimeDeclarationBarrier (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compileTimeDeclarationBarrier ("compileTimeDeclarationBarrier",
                                                                               functionWithGenericHeader_compileTimeDeclarationBarrier,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               0,
                                                                               functionArgs_compileTimeDeclarationBarrier) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'registerGroupNameFromOmnibusName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_registerGroupNameFromOmnibusName (const GALGAS_lstring & constinArgument_inName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("registers ").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 24)), constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 24)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_registerGroupNameFromOmnibusName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_registerGroupNameFromOmnibusName (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_registerGroupNameFromOmnibusName (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_registerGroupNameFromOmnibusName ("registerGroupNameFromOmnibusName",
                                                                                  functionWithGenericHeader_registerGroupNameFromOmnibusName,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_registerGroupNameFromOmnibusName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'literalStringName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_literalStringName (const GALGAS_uint & constinArgument_inIndex,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@string.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 32)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_literalStringName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_literalStringName ("literalStringName",
                                                                   functionWithGenericHeader_literalStringName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_literalStringName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'literalCharacterArrayName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_literalCharacterArrayName (const GALGAS_uint & constinArgument_inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@str.array.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 38)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_literalCharacterArrayName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_literalCharacterArrayName ("literalCharacterArrayName",
                                                                           functionWithGenericHeader_literalCharacterArrayName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_literalCharacterArrayName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorMapKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_infixOperatorMapKey (const GALGAS_omnibusType & constinArgument_inLeftType,
                                             const GALGAS_omnibusInfixOperator & constinArgument_inInfixOperator,
                                             const GALGAS_location & constinArgument_inOperatorLocation,
                                             const GALGAS_omnibusType & constinArgument_inRightType,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_2098 = constinArgument_inLeftType.getter_omnibusTypeDescriptionName (SOURCE_FILE ("generated-code-prefixes.galgas", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)).add_operation (extensionGetter_string (constinArgument_inInfixOperator, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)) ;
  var_s_2098.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inRightType.getter_omnibusTypeDescriptionName (SOURCE_FILE ("generated-code-prefixes.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_2098, constinArgument_inOperatorLocation  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 52)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_infixOperatorMapKey [5] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_omnibusInfixOperator,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_omnibusType,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_infixOperatorMapKey (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_omnibusInfixOperator operand1 = GALGAS_omnibusInfixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                           inCompiler
                                                                                           COMMA_THERE) ;
  const GALGAS_location operand2 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_omnibusType operand3 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_infixOperatorMapKey (operand0,
                                       operand1,
                                       operand2,
                                       operand3,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_infixOperatorMapKey ("infixOperatorMapKey",
                                                                     functionWithGenericHeader_infixOperatorMapKey,
                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                     4,
                                                                     functionArgs_infixOperatorMapKey) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorFunctionName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_infixOperatorFunctionName (const GALGAS_omnibusType & constinArgument_inLeftType,
                                                  const GALGAS_omnibusInfixOperator & constinArgument_inOperator,
                                                  const GALGAS_omnibusType & constinArgument_inRightType,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("operator.").add_operation (constinArgument_inLeftType.getter_omnibusTypeDescriptionName (SOURCE_FILE ("generated-code-prefixes.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 62)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 62)) ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GALGAS_omnibusInfixOperator::kNotBuilt:
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_equal:
    {
      result_result.plusAssign_operation(GALGAS_string ("equal"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 64)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_lessThan:
    {
      result_result.plusAssign_operation(GALGAS_string ("lessThan"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 65)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_infEqual:
    {
      result_result.plusAssign_operation(GALGAS_string ("infEqual"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 66)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_bitWiseAndOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("bitWiseAnd"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 67)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_bitWiseOrOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("bitWiseOr"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 68)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_bitWiseXorOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("xor"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 69)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_addOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("add"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 70)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_addOpNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("addOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 71)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_subOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("sub"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 72)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_subOpNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("subOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 73)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_mulOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("mul"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 74)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_mulOpNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("mulOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 75)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_divOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("div"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 76)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_divOpNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("divNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 77)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_modOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("modulo"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 78)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_modOpNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("moduloNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 79)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_leftShiftOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("leftShift"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 80)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_rightShiftOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("rightShift"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 81)) ;
    }
    break ;
  }
  result_result.plusAssign_operation(GALGAS_string (".").add_operation (constinArgument_inRightType.getter_omnibusTypeDescriptionName (SOURCE_FILE ("generated-code-prefixes.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 83)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_infixOperatorFunctionName [4] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_omnibusInfixOperator,
  & kTypeDescriptor_GALGAS_omnibusType,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_infixOperatorFunctionName (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_omnibusInfixOperator operand1 = GALGAS_omnibusInfixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                           inCompiler
                                                                                           COMMA_THERE) ;
  const GALGAS_omnibusType operand2 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_infixOperatorFunctionName (operand0,
                                             operand1,
                                             operand2,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_infixOperatorFunctionName ("infixOperatorFunctionName",
                                                                           functionWithGenericHeader_infixOperatorFunctionName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           3,
                                                                           functionArgs_infixOperatorFunctionName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorMapKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_prefixOperatorMapKey (const GALGAS_omnibusType & constinArgument_inReceiverType,
                                              const GALGAS_prefixOperator & constinArgument_inOperator,
                                              const GALGAS_location & constinArgument_inOperatorLocation,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_3923 ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_s_3923 = GALGAS_string ("-%") ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusOp:
    {
      var_s_3923 = GALGAS_string ("-") ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOp:
    {
      var_s_3923 = GALGAS_string ("not") ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_bitWiseComplement:
    {
      var_s_3923 = GALGAS_string ("~") ;
    }
    break ;
  }
  var_s_3923.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inReceiverType.getter_omnibusTypeDescriptionName (SOURCE_FILE ("generated-code-prefixes.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 101)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 101)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_3923, constinArgument_inOperatorLocation  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 102)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_prefixOperatorMapKey [4] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_prefixOperator,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_prefixOperatorMapKey (C_Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_prefixOperator operand1 = GALGAS_prefixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                               inCompiler
                                                                               COMMA_THERE) ;
  const GALGAS_location operand2 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_prefixOperatorMapKey (operand0,
                                        operand1,
                                        operand2,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_prefixOperatorMapKey ("prefixOperatorMapKey",
                                                                      functionWithGenericHeader_prefixOperatorMapKey,
                                                                      & kTypeDescriptor_GALGAS_lstring,
                                                                      3,
                                                                      functionArgs_prefixOperatorMapKey) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorFunctionName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_prefixOperatorFunctionName (const GALGAS_omnibusType & constinArgument_inReceiverType,
                                                   const GALGAS_prefixOperator & constinArgument_inOperator,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("operator.") ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("minusNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 113)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("minus"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 114)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("not"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 115)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_bitWiseComplement:
    {
      result_result.plusAssign_operation(GALGAS_string ("complement"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 116)) ;
    }
    break ;
  }
  result_result.plusAssign_operation(GALGAS_string (".").add_operation (constinArgument_inReceiverType.getter_omnibusTypeDescriptionName (SOURCE_FILE ("generated-code-prefixes.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 118)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_prefixOperatorFunctionName [3] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_prefixOperator,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_prefixOperatorFunctionName (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_prefixOperator operand1 = GALGAS_prefixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                               inCompiler
                                                                               COMMA_THERE) ;
  return function_prefixOperatorFunctionName (operand0,
                                              operand1,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_prefixOperatorFunctionName ("prefixOperatorFunctionName",
                                                                            functionWithGenericHeader_prefixOperatorFunctionName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            2,
                                                                            functionArgs_prefixOperatorFunctionName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'staticStringTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_staticStringTypeName (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("literalString") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_staticStringTypeName = false ;
static GALGAS_string gOnceFunctionResult_staticStringTypeName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_staticStringTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticStringTypeName) {
    gOnceFunctionResult_staticStringTypeName = onceFunction_staticStringTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticStringTypeName = true ;
  }
  return gOnceFunctionResult_staticStringTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_staticStringTypeName (void) {
  gOnceFunctionResult_staticStringTypeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_staticStringTypeName (NULL,
                                                                  releaseOnceFunctionResult_staticStringTypeName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_staticStringTypeName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_staticStringTypeName (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_staticStringTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_staticStringTypeName ("staticStringTypeName",
                                                                      functionWithGenericHeader_staticStringTypeName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      0,
                                                                      functionArgs_staticStringTypeName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'functionResultVariableName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_functionResultVariableName (C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("result") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_functionResultVariableName = false ;
static GALGAS_string gOnceFunctionResult_functionResultVariableName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_functionResultVariableName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_functionResultVariableName) {
    gOnceFunctionResult_functionResultVariableName = onceFunction_functionResultVariableName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_functionResultVariableName = true ;
  }
  return gOnceFunctionResult_functionResultVariableName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_functionResultVariableName (void) {
  gOnceFunctionResult_functionResultVariableName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_functionResultVariableName (NULL,
                                                                        releaseOnceFunctionResult_functionResultVariableName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_functionResultVariableName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_functionResultVariableName (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_functionResultVariableName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_functionResultVariableName ("functionResultVariableName",
                                                                            functionWithGenericHeader_functionResultVariableName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            0,
                                                                            functionArgs_functionResultVariableName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForFunction'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForFunction (const GALGAS_string & constinArgument_inName,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 140)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForFunction [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForFunction ("llvmNameForFunction",
                                                                     functionWithGenericHeader_llvmNameForFunction,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_llvmNameForFunction) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'getterLLVMName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_getterLLVMName (GALGAS_string inArgument_inReceiverLLVMTypeName,
                                       const GALGAS_string & constinArgument_inPropertyName,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("get.").add_operation (inArgument_inReceiverLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)).add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_getterLLVMName [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_getterLLVMName (C_Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
                                                               const GALGAS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_getterLLVMName (operand0,
                                  operand1,
                                  inCompiler
                                  COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_getterLLVMName ("getterLLVMName",
                                                                functionWithGenericHeader_getterLLVMName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                2,
                                                                functionArgs_getterLLVMName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'setterLLVMName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_setterLLVMName (GALGAS_string inArgument_inReceiverLLVMTypeName,
                                       const GALGAS_string & constinArgument_inPropertyName,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("set.").add_operation (inArgument_inReceiverLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 156)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 156)).add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 156)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_setterLLVMName [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_setterLLVMName (C_Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
                                                               const GALGAS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_setterLLVMName (operand0,
                                  operand1,
                                  inCompiler
                                  COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_setterLLVMName ("setterLLVMName",
                                                                functionWithGenericHeader_setterLLVMName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                2,
                                                                functionArgs_setterLLVMName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceInterrupt'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmNameForServiceInterrupt (const GALGAS_lstring & constinArgument_inName,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("interrupt.service.").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 164)), constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 164)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceInterrupt [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceInterrupt ("llvmNameForServiceInterrupt",
                                                                             functionWithGenericHeader_llvmNameForServiceInterrupt,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             1,
                                                                             functionArgs_llvmNameForServiceInterrupt) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionInterrupt'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForSectionInterrupt (const GALGAS_string & constinArgument_inName,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("interrupt.section.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 170)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionInterrupt [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionInterrupt ("llvmNameForSectionInterrupt",
                                                                             functionWithGenericHeader_llvmNameForSectionInterrupt,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             1,
                                                                             functionArgs_llvmNameForSectionInterrupt) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceCall'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForServiceCall (const GALGAS_string & constinArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("service.user.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 178)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 178)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceCall ("llvmNameForServiceCall",
                                                                        functionWithGenericHeader_llvmNameForServiceCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForServiceCall) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForServiceImplementation (const GALGAS_string & constinArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("service.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 184)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 184)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceImplementation ("llvmNameForServiceImplementation",
                                                                                  functionWithGenericHeader_llvmNameForServiceImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForServiceImplementation) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionCall'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForSectionCall (const GALGAS_string & constinArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("section.user.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 192)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 192)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionCall ("llvmNameForSectionCall",
                                                                        functionWithGenericHeader_llvmNameForSectionCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForSectionCall) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForSectionImplementation (const GALGAS_string & constinArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("section.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 198)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 198)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionImplementation ("llvmNameForSectionImplementation",
                                                                                  functionWithGenericHeader_llvmNameForSectionImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForSectionImplementation) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'acceptVariableOmnibusName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_acceptVariableOmnibusName (C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("accept") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_acceptVariableOmnibusName = false ;
static GALGAS_string gOnceFunctionResult_acceptVariableOmnibusName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_acceptVariableOmnibusName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_acceptVariableOmnibusName) {
    gOnceFunctionResult_acceptVariableOmnibusName = onceFunction_acceptVariableOmnibusName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_acceptVariableOmnibusName = true ;
  }
  return gOnceFunctionResult_acceptVariableOmnibusName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_acceptVariableOmnibusName (void) {
  gOnceFunctionResult_acceptVariableOmnibusName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_acceptVariableOmnibusName (NULL,
                                                                       releaseOnceFunctionResult_acceptVariableOmnibusName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_acceptVariableOmnibusName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_acceptVariableOmnibusName (C_Compiler * inCompiler,
                                                                          const cObjectArray & /* inEffectiveParameterArray */,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  return function_acceptVariableOmnibusName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_acceptVariableOmnibusName ("acceptVariableOmnibusName",
                                                                           functionWithGenericHeader_acceptVariableOmnibusName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           0,
                                                                           functionArgs_acceptVariableOmnibusName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'waitForGuardChangeFunctionName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_waitForGuardChangeFunctionName (C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("guard.wait.for.change") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = false ;
static GALGAS_string gOnceFunctionResult_waitForGuardChangeFunctionName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_waitForGuardChangeFunctionName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_waitForGuardChangeFunctionName) {
    gOnceFunctionResult_waitForGuardChangeFunctionName = onceFunction_waitForGuardChangeFunctionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = true ;
  }
  return gOnceFunctionResult_waitForGuardChangeFunctionName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_waitForGuardChangeFunctionName (void) {
  gOnceFunctionResult_waitForGuardChangeFunctionName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_waitForGuardChangeFunctionName (NULL,
                                                                            releaseOnceFunctionResult_waitForGuardChangeFunctionName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_waitForGuardChangeFunctionName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_waitForGuardChangeFunctionName (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_waitForGuardChangeFunctionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_waitForGuardChangeFunctionName ("waitForGuardChangeFunctionName",
                                                                                functionWithGenericHeader_waitForGuardChangeFunctionName,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                0,
                                                                                functionArgs_waitForGuardChangeFunctionName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForLocalVariable'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForLocalVariable (const GALGAS_string & constinArgument_inName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("%").add_operation (GALGAS_string ("var.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 220)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 220)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForLocalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForLocalVariable ("llvmNameForLocalVariable",
                                                                          functionWithGenericHeader_llvmNameForLocalVariable,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          1,
                                                                          functionArgs_llvmNameForLocalVariable) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForSelf'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_llvmNameForSelf (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("%self") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForSelf = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForSelf ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForSelf (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForSelf) {
    gOnceFunctionResult_llvmNameForSelf = onceFunction_llvmNameForSelf (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForSelf = true ;
  }
  return gOnceFunctionResult_llvmNameForSelf ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForSelf (void) {
  gOnceFunctionResult_llvmNameForSelf.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_llvmNameForSelf (NULL,
                                                             releaseOnceFunctionResult_llvmNameForSelf) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForSelf [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForSelf (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_llvmNameForSelf (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForSelf ("llvmNameForSelf",
                                                                 functionWithGenericHeader_llvmNameForSelf,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_llvmNameForSelf) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForGlobalVariable'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForGlobalVariable (const GALGAS_string & constinArgument_inName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@gvar.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 232)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForGlobalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForGlobalVariable ("llvmNameForGlobalVariable",
                                                                           functionWithGenericHeader_llvmNameForGlobalVariable,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_llvmNameForGlobalVariable) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForGlobalSyncInstance'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForGlobalSyncInstance (const GALGAS_string & constinArgument_inName,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@gsync.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 238)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForGlobalSyncInstance [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForGlobalSyncInstance ("llvmNameForGlobalSyncInstance",
                                                                               functionWithGenericHeader_llvmNameForGlobalSyncInstance,
                                                                               & kTypeDescriptor_GALGAS_string,
                                                                               1,
                                                                               functionArgs_llvmNameForGlobalSyncInstance) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'instantiableAttribute'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_instantiableAttribute (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("instantiable") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_instantiableAttribute = false ;
static GALGAS_string gOnceFunctionResult_instantiableAttribute ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_instantiableAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_instantiableAttribute) {
    gOnceFunctionResult_instantiableAttribute = onceFunction_instantiableAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_instantiableAttribute = true ;
  }
  return gOnceFunctionResult_instantiableAttribute ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_instantiableAttribute (void) {
  gOnceFunctionResult_instantiableAttribute.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_instantiableAttribute (NULL,
                                                                   releaseOnceFunctionResult_instantiableAttribute) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_instantiableAttribute [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_instantiableAttribute (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_instantiableAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_instantiableAttribute ("instantiableAttribute",
                                                                       functionWithGenericHeader_instantiableAttribute,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_instantiableAttribute) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'copyableAttribute'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_copyableAttribute (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("copyable") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_copyableAttribute = false ;
static GALGAS_string gOnceFunctionResult_copyableAttribute ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_copyableAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_copyableAttribute) {
    gOnceFunctionResult_copyableAttribute = onceFunction_copyableAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_copyableAttribute = true ;
  }
  return gOnceFunctionResult_copyableAttribute ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_copyableAttribute (void) {
  gOnceFunctionResult_copyableAttribute.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_copyableAttribute (NULL,
                                                               releaseOnceFunctionResult_copyableAttribute) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_copyableAttribute [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_copyableAttribute (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_copyableAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_copyableAttribute ("copyableAttribute",
                                                                   functionWithGenericHeader_copyableAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_copyableAttribute) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'mutatingAttribute'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_mutatingAttribute (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("mutating") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_mutatingAttribute = false ;
static GALGAS_string gOnceFunctionResult_mutatingAttribute ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_mutatingAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_mutatingAttribute) {
    gOnceFunctionResult_mutatingAttribute = onceFunction_mutatingAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_mutatingAttribute = true ;
  }
  return gOnceFunctionResult_mutatingAttribute ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_mutatingAttribute (void) {
  gOnceFunctionResult_mutatingAttribute.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_mutatingAttribute (NULL,
                                                               releaseOnceFunctionResult_mutatingAttribute) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_mutatingAttribute [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_mutatingAttribute (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_mutatingAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_mutatingAttribute ("mutatingAttribute",
                                                                   functionWithGenericHeader_mutatingAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_mutatingAttribute) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'userAttributeForRegister'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_userAttributeForRegister (C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("user") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_userAttributeForRegister = false ;
static GALGAS_string gOnceFunctionResult_userAttributeForRegister ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_userAttributeForRegister (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_userAttributeForRegister) {
    gOnceFunctionResult_userAttributeForRegister = onceFunction_userAttributeForRegister (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_userAttributeForRegister = true ;
  }
  return gOnceFunctionResult_userAttributeForRegister ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_userAttributeForRegister (void) {
  gOnceFunctionResult_userAttributeForRegister.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_userAttributeForRegister (NULL,
                                                                      releaseOnceFunctionResult_userAttributeForRegister) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_userAttributeForRegister [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_userAttributeForRegister (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_userAttributeForRegister (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_userAttributeForRegister ("userAttributeForRegister",
                                                                          functionWithGenericHeader_userAttributeForRegister,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          0,
                                                                          functionArgs_userAttributeForRegister) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'noUnusedWarningAttribute'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_noUnusedWarningAttribute (C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("noUnusedWarning") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_noUnusedWarningAttribute = false ;
static GALGAS_string gOnceFunctionResult_noUnusedWarningAttribute ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_noUnusedWarningAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_noUnusedWarningAttribute) {
    gOnceFunctionResult_noUnusedWarningAttribute = onceFunction_noUnusedWarningAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_noUnusedWarningAttribute = true ;
  }
  return gOnceFunctionResult_noUnusedWarningAttribute ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_noUnusedWarningAttribute (void) {
  gOnceFunctionResult_noUnusedWarningAttribute.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_noUnusedWarningAttribute (NULL,
                                                                      releaseOnceFunctionResult_noUnusedWarningAttribute) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_noUnusedWarningAttribute [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_noUnusedWarningAttribute (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_noUnusedWarningAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_noUnusedWarningAttribute ("noUnusedWarningAttribute",
                                                                          functionWithGenericHeader_noUnusedWarningAttribute,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          0,
                                                                          functionArgs_noUnusedWarningAttribute) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'exportedAttribute'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_exportedAttribute (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("exported") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_exportedAttribute = false ;
static GALGAS_string gOnceFunctionResult_exportedAttribute ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_exportedAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_exportedAttribute) {
    gOnceFunctionResult_exportedAttribute = onceFunction_exportedAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_exportedAttribute = true ;
  }
  return gOnceFunctionResult_exportedAttribute ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_exportedAttribute (void) {
  gOnceFunctionResult_exportedAttribute.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_exportedAttribute (NULL,
                                                               releaseOnceFunctionResult_exportedAttribute) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_exportedAttribute [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_exportedAttribute (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_exportedAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_exportedAttribute ("exportedAttribute",
                                                                   functionWithGenericHeader_exportedAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_exportedAttribute) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'stackNameForTask'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_stackNameForTask (const GALGAS_string & constinArgument_inTaskName,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.stack.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 284)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 284)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_stackNameForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_stackNameForTask ("stackNameForTask",
                                                                  functionWithGenericHeader_stackNameForTask,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  1,
                                                                  functionArgs_stackNameForTask) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'setupNameForTaskType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_setupNameForTaskType (const GALGAS_string & constinArgument_inTaskTypeName,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.setup.").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 290)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 290)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_setupNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_setupNameForTaskType (C_Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_setupNameForTaskType (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_setupNameForTaskType ("setupNameForTaskType",
                                                                      functionWithGenericHeader_setupNameForTaskType,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      1,
                                                                      functionArgs_setupNameForTaskType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'activateNameForTaskType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_activateNameForTaskType (const GALGAS_string & constinArgument_inTaskTypeName,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("task.activate.").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 296)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_activateNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_activateNameForTaskType (C_Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_activateNameForTaskType (operand0,
                                           inCompiler
                                           COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_activateNameForTaskType ("activateNameForTaskType",
                                                                         functionWithGenericHeader_activateNameForTaskType,
                                                                         & kTypeDescriptor_GALGAS_string,
                                                                         1,
                                                                         functionArgs_activateNameForTaskType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'deactivateNameForTaskType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_deactivateNameForTaskType (const GALGAS_string & constinArgument_inTaskTypeName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.deactivate.").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 302)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 302)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_deactivateNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_deactivateNameForTaskType (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_deactivateNameForTaskType (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_deactivateNameForTaskType ("deactivateNameForTaskType",
                                                                           functionWithGenericHeader_deactivateNameForTaskType,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_deactivateNameForTaskType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'stackAddressForTask'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_stackAddressForTask (const GALGAS_string & constinArgument_inTaskName,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("%").add_operation (GALGAS_string ("task.stack.address.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 308)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 308)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_stackAddressForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_stackAddressForTask ("stackAddressForTask",
                                                                     functionWithGenericHeader_stackAddressForTask,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_stackAddressForTask) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'mainRoutineNameForTask'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_mainRoutineNameForTask (const GALGAS_string & constinArgument_inTaskName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.main.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 314)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 314)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_mainRoutineNameForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_mainRoutineNameForTask ("mainRoutineNameForTask",
                                                                        functionWithGenericHeader_mainRoutineNameForTask,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_mainRoutineNameForTask) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForTaskLoopFunction'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_llvmNameForTaskLoopFunction (C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("task.loop") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForTaskLoopFunction ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForTaskLoopFunction (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction) {
    gOnceFunctionResult_llvmNameForTaskLoopFunction = onceFunction_llvmNameForTaskLoopFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskLoopFunction ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForTaskLoopFunction (void) {
  gOnceFunctionResult_llvmNameForTaskLoopFunction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskLoopFunction (NULL,
                                                                         releaseOnceFunctionResult_llvmNameForTaskLoopFunction) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskLoopFunction [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForTaskLoopFunction (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskLoopFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskLoopFunction ("llvmNameForTaskLoopFunction",
                                                                             functionWithGenericHeader_llvmNameForTaskLoopFunction,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             0,
                                                                             functionArgs_llvmNameForTaskLoopFunction) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForTaskWaitsForActivation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_llvmNameForTaskWaitsForActivation (C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("xtr.wait.for.activation") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForTaskWaitsForActivation = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForTaskWaitsForActivation ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForTaskWaitsForActivation (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskWaitsForActivation) {
    gOnceFunctionResult_llvmNameForTaskWaitsForActivation = onceFunction_llvmNameForTaskWaitsForActivation (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskWaitsForActivation = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskWaitsForActivation ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForTaskWaitsForActivation (void) {
  gOnceFunctionResult_llvmNameForTaskWaitsForActivation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskWaitsForActivation (NULL,
                                                                               releaseOnceFunctionResult_llvmNameForTaskWaitsForActivation) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskWaitsForActivation [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForTaskWaitsForActivation (C_Compiler * inCompiler,
                                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskWaitsForActivation ("llvmNameForTaskWaitsForActivation",
                                                                                   functionWithGenericHeader_llvmNameForTaskWaitsForActivation,
                                                                                   & kTypeDescriptor_GALGAS_string,
                                                                                   0,
                                                                                   functionArgs_llvmNameForTaskWaitsForActivation) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForActivateTask'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_llvmNameForActivateTask (C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("xtr.activate.task") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForActivateTask = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForActivateTask ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmNameForActivateTask (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForActivateTask) {
    gOnceFunctionResult_llvmNameForActivateTask = onceFunction_llvmNameForActivateTask (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForActivateTask = true ;
  }
  return gOnceFunctionResult_llvmNameForActivateTask ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForActivateTask (void) {
  gOnceFunctionResult_llvmNameForActivateTask.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_llvmNameForActivateTask (NULL,
                                                                     releaseOnceFunctionResult_llvmNameForActivateTask) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForActivateTask [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmNameForActivateTask (C_Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_llvmNameForActivateTask (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForActivateTask ("llvmNameForActivateTask",
                                                                         functionWithGenericHeader_llvmNameForActivateTask,
                                                                         & kTypeDescriptor_GALGAS_string,
                                                                         0,
                                                                         functionArgs_llvmNameForActivateTask) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'memoryAllocSectionName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_memoryAllocSectionName (C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("heap.memory.alloc") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_memoryAllocSectionName = false ;
static GALGAS_string gOnceFunctionResult_memoryAllocSectionName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_memoryAllocSectionName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_memoryAllocSectionName) {
    gOnceFunctionResult_memoryAllocSectionName = onceFunction_memoryAllocSectionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_memoryAllocSectionName = true ;
  }
  return gOnceFunctionResult_memoryAllocSectionName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_memoryAllocSectionName (void) {
  gOnceFunctionResult_memoryAllocSectionName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_memoryAllocSectionName (NULL,
                                                                    releaseOnceFunctionResult_memoryAllocSectionName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_memoryAllocSectionName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_memoryAllocSectionName (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_memoryAllocSectionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_memoryAllocSectionName ("memoryAllocSectionName",
                                                                        functionWithGenericHeader_memoryAllocSectionName,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        0,
                                                                        functionArgs_memoryAllocSectionName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'memoryFreeSectionName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_memoryFreeSectionName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("heap.memory.free") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_memoryFreeSectionName = false ;
static GALGAS_string gOnceFunctionResult_memoryFreeSectionName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_memoryFreeSectionName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_memoryFreeSectionName) {
    gOnceFunctionResult_memoryFreeSectionName = onceFunction_memoryFreeSectionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_memoryFreeSectionName = true ;
  }
  return gOnceFunctionResult_memoryFreeSectionName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_memoryFreeSectionName (void) {
  gOnceFunctionResult_memoryFreeSectionName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_memoryFreeSectionName (NULL,
                                                                   releaseOnceFunctionResult_memoryFreeSectionName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_memoryFreeSectionName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_memoryFreeSectionName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_memoryFreeSectionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_memoryFreeSectionName ("memoryFreeSectionName",
                                                                       functionWithGenericHeader_memoryFreeSectionName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_memoryFreeSectionName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'registerGroupAddressArrayLLVMname'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_registerGroupAddressArrayLLVMname (const GALGAS_string & constinArgument_inGroupName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@register.group.array.").add_operation (constinArgument_inGroupName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 353)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_registerGroupAddressArrayLLVMname [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_registerGroupAddressArrayLLVMname (C_Compiler * inCompiler,
                                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_registerGroupAddressArrayLLVMname (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_registerGroupAddressArrayLLVMname ("registerGroupAddressArrayLLVMname",
                                                                                   functionWithGenericHeader_registerGroupAddressArrayLLVMname,
                                                                                   & kTypeDescriptor_GALGAS_string,
                                                                                   1,
                                                                                   functionArgs_registerGroupAddressArrayLLVMname) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nopIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_nopIR_llvmInstructionCode (const cPtr_abstractInstructionIR * /* inObject */,
                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                       const GALGAS_generationContext constinArgument_inGenerationContext,
                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inGenerationContext.getter_mNopInstructionInLLVM (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-nop.galgas", 18)).add_operation (GALGAS_string (" ; NOP instruction in LLVM\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-nop.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("intermediate-nop.galgas", 18)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_nopIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_nopIR.mSlotID,
                                            extensionMethod_nopIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_nopIR_llvmInstructionCode (defineExtensionMethod_nopIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@freeStringIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_freeStringIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                              GALGAS_string & ioArgument_ioLLVMcode,
                                                              const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                              GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_freeStringIR * object = (const cPtr_freeStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_freeStringIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mString, inCompiler COMMA_SOURCE_FILE ("instruction-free-string.galgas", 21)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-free-string.galgas", 21)), inCompiler  COMMA_SOURCE_FILE ("instruction-free-string.galgas", 21)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_freeStringIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_freeStringIR.mSlotID,
                                            extensionMethod_freeStringIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_freeStringIR_llvmInstructionCode (defineExtensionMethod_freeStringIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@freeStringIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_freeStringIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                  GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                  GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_freeStringIR * object = (const cPtr_freeStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_freeStringIR) ;
  ioArgument_ioInvokedRoutineSet.plusAssign_operation(object->mProperty_mInvokedFunctionSet, inCompiler  COMMA_SOURCE_FILE ("instruction-free-string.galgas", 30)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_freeStringIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_freeStringIR.mSlotID,
                                                extensionMethod_freeStringIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_freeStringIR_enterAccessibleEntities (defineExtensionMethod_freeStringIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extendIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extendIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                          GALGAS_string & ioArgument_ioLLVMcode,
                                                          const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                          GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendIR * object = (const cPtr_extendIR *) inObject ;
  macroValidSharedObject (object, cPtr_extendIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)) ;
  GALGAS_typeKind var_kind_701 = extensionGetter_type (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)).getter_kind (HERE) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_kind_701.getter_isLlvmType (SOURCE_FILE ("intermediate-extend.galgas", 25)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("zext"), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bool var_sourceIsUnsigned_836 ;
    GALGAS_bigint joker_803_2 ; // Joker input parameter
    GALGAS_bigint joker_803_1 ; // Joker input parameter
    GALGAS_uint joker_838_1 ; // Joker input parameter
    var_kind_701.method_integer (joker_803_2, joker_803_1, var_sourceIsUnsigned_836, joker_838_1, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 28)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_sourceIsUnsigned_836.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("zext") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string ("sext") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 29)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)).add_operation (extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 31)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extendIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_extendIR.mSlotID,
                                            extensionMethod_extendIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extendIR_llvmInstructionCode (defineExtensionMethod_extendIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@truncIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_truncIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncIR * object = (const cPtr_truncIR *) inObject ;
  macroValidSharedObject (object, cPtr_truncIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)).add_operation (extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 33)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_truncIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_truncIR.mSlotID,
                                            extensionMethod_truncIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_truncIR_llvmInstructionCode (defineExtensionMethod_truncIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolToUIntIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolToUIntIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_boolToUIntIR.mSlotID,
                                            extensionMethod_boolToUIntIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolToUIntIR_llvmInstructionCode (defineExtensionMethod_boolToUIntIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_leftShiftIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_leftShiftIR.mSlotID,
                                            extensionMethod_leftShiftIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_leftShiftIR_llvmInstructionCode (defineExtensionMethod_leftShiftIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logicalRightShiftIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_logicalRightShiftIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_logicalRightShiftIR.mSlotID,
                                            extensionMethod_logicalRightShiftIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_logicalRightShiftIR_llvmInstructionCode (defineExtensionMethod_logicalRightShiftIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binaryOperationIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_binaryOperationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                       GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = (const cPtr_binaryOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("intermediate-binary-operation.galgas", 71)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 72))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 72)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_binaryOperationIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                                extensionMethod_binaryOperationIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_binaryOperationIR_enterAccessibleEntities (defineExtensionMethod_binaryOperationIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binaryOperationIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_binaryOperationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = (const cPtr_binaryOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_string var_llvmType_5024 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mOperandType.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 133)) ;
  switch (object->mProperty_mOperation.enumValue ()) {
  case GALGAS_llvmBinaryOperation::kNotBuilt:
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_addNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GALGAS_string (" = sub "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GALGAS_string (" = mul "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GALGAS_string (" = udiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GALGAS_string (" = sdiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GALGAS_string (" = urem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GALGAS_string (" = srem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uaddOVF:
    {
      const GALGAS_binaryOperationIR temp_0 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_0.ptr (), GALGAS_string ("uadd"), function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 152)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 150)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_saddOVF:
    {
      const GALGAS_binaryOperationIR temp_1 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_1.ptr (), GALGAS_string ("sadd"), function_panicCodeForSignedAdditionOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 160)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 158)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_usubOVF:
    {
      const GALGAS_binaryOperationIR temp_2 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_2.ptr (), GALGAS_string ("usub"), function_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 168)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 166)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ssubOVF:
    {
      const GALGAS_binaryOperationIR temp_3 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_3.ptr (), GALGAS_string ("ssub"), function_panicCodeForSignedSubtractOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 176)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 174)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_umulOVF:
    {
      const GALGAS_binaryOperationIR temp_4 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_4.ptr (), GALGAS_string ("umul"), function_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 184)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 182)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_smulOVF:
    {
      const GALGAS_binaryOperationIR temp_5 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_5.ptr (), GALGAS_string ("smul"), function_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 192)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 190)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivOVF:
    {
      const GALGAS_binaryOperationIR temp_6 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_6.ptr (), GALGAS_string ("udiv"), function_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 198)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivOVF:
    {
      const GALGAS_binaryOperationIR temp_7 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_7.ptr (), GALGAS_string ("sdiv"), function_panicCodeForSignedDivisionByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremOVF:
    {
      const GALGAS_binaryOperationIR temp_8 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_8.ptr (), GALGAS_string ("urem"), function_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremOVF:
    {
      const GALGAS_binaryOperationIR temp_9 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_9.ptr (), GALGAS_string ("srem"), function_panicCodeForSignedRemainderByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_and:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string (" = and "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GALGAS_string (" = or "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GALGAS_string (" = xor "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GALGAS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GALGAS_string (" = ashr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GALGAS_string (" = lshr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GALGAS_string (" = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GALGAS_string (" = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GALGAS_string (" = icmp ule "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (GALGAS_string (" = icmp slt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 254)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (GALGAS_string (" = icmp sle "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (var_llvmType_5024, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 256)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_binaryOperationIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                            extensionMethod_binaryOperationIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_binaryOperationIR_llvmInstructionCode (defineExtensionMethod_binaryOperationIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@shortCircuitAndOperationIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_shortCircuitAndOperationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_shortCircuitAndOperationIR * object = (const cPtr_shortCircuitAndOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_shortCircuitAndOperationIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mLeftInstructionList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 38)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mRightInstructionList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 39)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_shortCircuitAndOperationIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_shortCircuitAndOperationIR.mSlotID,
                                                extensionMethod_shortCircuitAndOperationIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_shortCircuitAndOperationIR_enterAccessibleEntities (defineExtensionMethod_shortCircuitAndOperationIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@shortCircuitAndOperationIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_shortCircuitAndOperationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                            GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_shortCircuitAndOperationIR * object = (const cPtr_shortCircuitAndOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_shortCircuitAndOperationIR) ;
  GALGAS_string var_startLabel_1778 = GALGAS_string ("and.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)) ;
  GALGAS_string var_trueLabel_1843 = GALGAS_string ("and.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)) ;
  GALGAS_string var_falseLabel_1908 = GALGAS_string ("and.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_1778, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_1778.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mLeftInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 54)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (object->mProperty_mLeftOperandLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (var_trueLabel_1843, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (var_falseLabel_1908, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_trueLabel_1843.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mRightInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_falseLabel_1908, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_falseLabel_1908.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 59)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string (" = phi i1 ["), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (object->mProperty_mRightOperandLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 61)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 61)).add_operation (var_trueLabel_1843, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 61)).add_operation (GALGAS_string ("], [false, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 61)).add_operation (var_startLabel_1778, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 61)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_shortCircuitAndOperationIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_shortCircuitAndOperationIR.mSlotID,
                                            extensionMethod_shortCircuitAndOperationIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_shortCircuitAndOperationIR_llvmInstructionCode (defineExtensionMethod_shortCircuitAndOperationIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loadFromReferenceIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_loadFromReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadFromReferenceIR * object = (const cPtr_loadFromReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadFromReferenceIR) ;
  GALGAS_string var_llvmType_716 = extensionGetter_llvmTypeName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 23)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (var_llvmType_716, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (var_llvmType_716, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_loadFromReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadFromReferenceIR.mSlotID,
                                            extensionMethod_loadFromReferenceIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_loadFromReferenceIR_llvmInstructionCode (defineExtensionMethod_loadFromReferenceIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@storeToUniversalReferenceIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_storeToUniversalReferenceIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                 GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeToUniversalReferenceIR * object = (const cPtr_storeToUniversalReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeToUniversalReferenceIR) ;
  switch (object->mProperty_mSourceValue.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmValue:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * extractPtr_1276 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_value = extractPtr_1276->mAssociatedValue2 ;
      GALGAS_string var_llvmAssignRoutineName_1167 = function_assignmentOperatorFuncName (extensionGetter_type (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)), extensionGetter_type (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)) ;
      ioArgument_ioInvokedRoutineSet.addAssign_operation (var_llvmAssignRoutineName_1167  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 35)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * extractPtr_1646 = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_operands = extractPtr_1646->mAssociatedValue1 ;
      cEnumerator_operandIRList enumerator_1443 (extractedValue_operands, kENUMERATION_UP) ;
      while (enumerator_1443.hasCurrentObject ()) {
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = extensionGetter_isStatic (enumerator_1443.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 40)).operator_not (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 40)).boolEnum () ;
          if (kBoolTrue == test_0) {
            GALGAS_string var_llvmAssignRoutineName_1515 = function_assignmentOperatorFuncName (extensionGetter_type (enumerator_1443.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)), extensionGetter_type (enumerator_1443.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)) ;
            ioArgument_ioInvokedRoutineSet.addAssign_operation (var_llvmAssignRoutineName_1515  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 42)) ;
          }
        }
        enumerator_1443.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_storeToUniversalReferenceIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeToUniversalReferenceIR.mSlotID,
                                                extensionMethod_storeToUniversalReferenceIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_storeToUniversalReferenceIR_enterAccessibleEntities (defineExtensionMethod_storeToUniversalReferenceIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@storeToUniversalReferenceIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_storeToUniversalReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                             GALGAS_string & ioArgument_ioLLVMcode,
                                                                             const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                             GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeToUniversalReferenceIR * object = (const cPtr_storeToUniversalReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeToUniversalReferenceIR) ;
  GALGAS_string var_llvmType_2020 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mTargetVarType.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 57)) ;
  switch (object->mProperty_mSourceValue.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("<< ERROR @storeToUniversalReferenceIR llvmInstructionCode void >>\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 60)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_2020, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)).add_operation (GALGAS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)).add_operation (var_llvmType_2020, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("<< ERROR @storeToUniversalReferenceIR llvmInstructionCode reference >>\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 64)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmValue:
    {
      const cEnumAssociatedValues_objectIR_llvmValue * extractPtr_2562 = (const cEnumAssociatedValues_objectIR_llvmValue *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_string extractedValue_llvmName = extractPtr_2562->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_2020, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (extractedValue_llvmName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (var_llvmType_2020, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_2713 = (const cEnumAssociatedValues_objectIR_literalInteger *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_2713->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_2020, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)).add_operation (extractedValue_value.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)).add_operation (var_llvmType_2020, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureValue * extractPtr_3254 = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_operands = extractPtr_3254->mAssociatedValue1 ;
      cEnumerator_sortedOperandIRList enumerator_2809 (extractedValue_operands, kENUMERATION_UP) ;
      while (enumerator_2809.hasCurrentObject ()) {
        GALGAS_string var_tempVar_2830 = GALGAS_string ("%temp.addr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 71)) ;
        ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 72)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempVar_2830, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)).add_operation (var_llvmType_2020, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)).add_operation (var_llvmType_2020, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 74)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 74)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 74)).add_operation (enumerator_2809.current_mIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 74)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 74)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)) ;
        GALGAS_string var_valueType_3111 = extensionGetter_llvmTypeName (enumerator_2809.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 75)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_valueType_3111, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)).add_operation (extensionGetter_llvmName (enumerator_2809.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)).add_operation (var_valueType_3111, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)).add_operation (var_tempVar_2830, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)) ;
        enumerator_2809.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * extractPtr_5018 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_type = extractPtr_5018->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_size = extractPtr_5018->mAssociatedValue1 ;
      const GALGAS_objectIR extractedValue_value = extractPtr_5018->mAssociatedValue2 ;
      GALGAS_string var_indexVarName_3332 = GALGAS_string ("%index.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 79)) ;
      GALGAS_string var_nextIndexVarName_3401 = GALGAS_string ("%index.next.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 80)) ;
      GALGAS_string var_ptrVarName_3469 = GALGAS_string ("%element.ptr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 81)) ;
      GALGAS_string var_loopTestName_3540 = GALGAS_string ("%continue.loop.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 82)) ;
      GALGAS_string var_startLabel_3611 = GALGAS_string ("assign.start.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 83)) ;
      GALGAS_string var_loopLabel_3679 = GALGAS_string ("assign.loop.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)) ;
      GALGAS_string var_exitLabel_3746 = GALGAS_string ("assign.exit.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 85)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 86)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_3611, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 87)).add_operation (GALGAS_string (" ;--- Assign static array from repeated dynamic value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 87)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_3611.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 88)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_loopLabel_3679, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 89)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 89)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_3679.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 90)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_indexVarName_3332, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (GALGAS_string (" = phi i32 [0, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (var_startLabel_3611, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (GALGAS_string ("], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (var_nextIndexVarName_3401, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (var_loopLabel_3679, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_ptrVarName_3469, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_type.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_type.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)).add_operation (var_indexVarName_3332, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)) ;
      GALGAS_string var_llvmAssignRoutineName_4423 = function_assignmentOperatorFuncName (extensionGetter_type (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)), extensionGetter_type (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_llvmAssignRoutineName_4423.getter_assemblerRepresentation (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (extensionGetter_llvmTypeName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (var_ptrVarName_3469, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (extensionGetter_llvmTypeName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (extensionGetter_llvmName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextIndexVarName_3401, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (var_indexVarName_3332, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loopTestName_3540, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)).add_operation (GALGAS_string (" = icmp ult i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)).add_operation (var_nextIndexVarName_3401, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)).add_operation (extractedValue_size.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_loopTestName_3540, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)).add_operation (var_loopLabel_3679, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)).add_operation (var_exitLabel_3746, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabel_3746.add_operation (GALGAS_string (":\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 100)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 100)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * extractPtr_6614 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_type = extractPtr_6614->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_size = extractPtr_6614->mAssociatedValue1 ;
      const GALGAS_objectIR extractedValue_value = extractPtr_6614->mAssociatedValue2 ;
      GALGAS_string var_indexVarName_5097 = GALGAS_string ("%index.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 102)) ;
      GALGAS_string var_nextIndexVarName_5166 = GALGAS_string ("%index.next.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 103)) ;
      GALGAS_string var_ptrVarName_5234 = GALGAS_string ("%element.ptr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 104)) ;
      GALGAS_string var_loopTestName_5305 = GALGAS_string ("%continue.loop.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 105)) ;
      GALGAS_string var_startLabel_5376 = GALGAS_string ("assign.start.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 106)) ;
      GALGAS_string var_loopLabel_5444 = GALGAS_string ("assign.loop.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 107)) ;
      GALGAS_string var_exitLabel_5511 = GALGAS_string ("assign.exit.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 108)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 109)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_5376, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 110)).add_operation (GALGAS_string (" ;--- Assign static array from repeated static value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 110)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_5376.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 111)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_loopLabel_5444, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 112)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 112)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_5444.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 113)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_indexVarName_5097, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (GALGAS_string (" = phi i32 [0, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (var_startLabel_5376, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (GALGAS_string ("], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (var_nextIndexVarName_5166, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (var_loopLabel_5444, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_ptrVarName_5234, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_type.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_type.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (var_indexVarName_5097, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (extensionGetter_llvmTypeName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (extensionGetter_llvmName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (extensionGetter_llvmTypeName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (var_ptrVarName_5234, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextIndexVarName_5166, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)).add_operation (var_indexVarName_5097, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loopTestName_5305, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)).add_operation (GALGAS_string (" = icmp ult i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)).add_operation (var_nextIndexVarName_5166, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)).add_operation (extractedValue_size.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_loopTestName_5305, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)).add_operation (var_loopLabel_5444, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)).add_operation (var_exitLabel_5511, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabel_5511.add_operation (GALGAS_string (":\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 121)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * extractPtr_7221 = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_operands = extractPtr_7221->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Assign static array from static value\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 123)) ;
      cEnumerator_operandIRList enumerator_6768 (extractedValue_operands, kENUMERATION_UP) ;
      GALGAS_uint index_6748 ((uint32_t) 0) ;
      while (enumerator_6768.hasCurrentObject ()) {
        GALGAS_string var_tempVar_6797 = GALGAS_string ("%temp.addr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 125)) ;
        ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 126)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempVar_6797, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)).add_operation (var_llvmType_2020, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)).add_operation (var_llvmType_2020, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 128)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 128)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 128)).add_operation (index_6748.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 128)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)) ;
        GALGAS_string var_valueType_7078 = extensionGetter_llvmTypeName (enumerator_6768.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 129)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_valueType_7078, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)).add_operation (extensionGetter_llvmName (enumerator_6768.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)).add_operation (var_valueType_7078, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)).add_operation (var_tempVar_6797, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)) ;
        enumerator_6768.gotoNextObject () ;
        index_6748.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 124)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * extractPtr_8173 = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_operands = extractPtr_8173->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Assign static array from dynamic values\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 133)) ;
      cEnumerator_operandIRList enumerator_7376 (extractedValue_operands, kENUMERATION_UP) ;
      GALGAS_uint index_7356 ((uint32_t) 0) ;
      while (enumerator_7376.hasCurrentObject ()) {
        GALGAS_string var_tempVar_7405 = GALGAS_string ("%temp.addr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 135)) ;
        ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 136)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempVar_7405, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)).add_operation (var_llvmType_2020, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)).add_operation (var_llvmType_2020, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 138)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 138)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 138)).add_operation (index_7356.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 138)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)) ;
        GALGAS_string var_valueType_7686 = extensionGetter_llvmTypeName (enumerator_7376.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 139)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = extensionGetter_isStatic (enumerator_7376.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 140)).boolEnum () ;
          if (kBoolTrue == test_0) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_valueType_7686, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)).add_operation (extensionGetter_llvmName (enumerator_7376.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)).add_operation (var_valueType_7686, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)).add_operation (var_tempVar_7405, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)) ;
          }
        }
        if (kBoolFalse == test_0) {
          GALGAS_string var_llvmAssignRoutineName_7899 = function_assignmentOperatorFuncName (extensionGetter_type (enumerator_7376.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 143)), extensionGetter_type (enumerator_7376.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 143)) ;
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_llvmAssignRoutineName_7899.getter_assemblerRepresentation (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)) ;
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_valueType_7686, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)).add_operation (var_tempVar_7405, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)).add_operation (var_valueType_7686, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)).add_operation (extensionGetter_llvmName (enumerator_7376.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)) ;
        }
        enumerator_7376.gotoNextObject () ;
        index_7356.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 134)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_2020, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)).add_operation (var_llvmType_2020, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_storeToUniversalReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeToUniversalReferenceIR.mSlotID,
                                            extensionMethod_storeToUniversalReferenceIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_storeToUniversalReferenceIR_llvmInstructionCode (defineExtensionMethod_storeToUniversalReferenceIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@storeFromTemporaryReferenceIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_storeFromTemporaryReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                               GALGAS_string & ioArgument_ioLLVMcode,
                                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                               GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeFromTemporaryReferenceIR * object = (const cPtr_storeFromTemporaryReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeFromTemporaryReferenceIR) ;
  GALGAS_string var_llvmType_965 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mTargetVarType.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 26)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_965, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (var_llvmType_965, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_storeFromTemporaryReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR.mSlotID,
                                            extensionMethod_storeFromTemporaryReferenceIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_storeFromTemporaryReferenceIR_llvmInstructionCode (defineExtensionMethod_storeFromTemporaryReferenceIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneRoutineCallIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_standaloneRoutineCallIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneRoutineCallIR * object = (const cPtr_standaloneRoutineCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneRoutineCallIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 17)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mResult.objectCompare (GALGAS_objectIR::constructor_void (SOURCE_FILE ("intermediate-static-routine-call.galgas", 18)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("call void"), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 19)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 21)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 21)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 21)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 21)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 21)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mFunctionNameForGeneration.getter_assemblerRepresentation (SOURCE_FILE ("intermediate-static-routine-call.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 23)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 23)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_900 (object->mProperty_mArgumentList, kENUMERATION_UP) ;
  while (enumerator_900.hasCurrentObject ()) {
    switch (enumerator_900.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_900.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 27)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 27)).add_operation (extensionGetter_llvmName (enumerator_900.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 27)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_900.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 29)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 29)).add_operation (extensionGetter_llvmName (enumerator_900.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 29)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_900.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 31)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 31)).add_operation (extensionGetter_llvmName (enumerator_900.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 31)) ;
      }
      break ;
    }
    if (enumerator_900.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 34)) ;
    }
    enumerator_900.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 36)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_standaloneRoutineCallIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_standaloneRoutineCallIR.mSlotID,
                                            extensionMethod_standaloneRoutineCallIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_standaloneRoutineCallIR_llvmInstructionCode (defineExtensionMethod_standaloneRoutineCallIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneRoutineCallIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_standaloneRoutineCallIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                             GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneRoutineCallIR * object = (const cPtr_standaloneRoutineCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneRoutineCallIR) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (object->mProperty_mFunctionNameForGeneration  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 45)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_standaloneRoutineCallIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_standaloneRoutineCallIR.mSlotID,
                                                extensionMethod_standaloneRoutineCallIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_standaloneRoutineCallIR_enterAccessibleEntities (defineExtensionMethod_standaloneRoutineCallIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@releaseIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_releaseIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                           GALGAS_string & ioArgument_ioLLVMcode,
                                                           const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_releaseIR * object = (const cPtr_releaseIR *) inObject ;
  macroValidSharedObject (object, cPtr_releaseIR) ;
  callExtensionMethod_generateRelease ((const cPtr_omnibusType *) object->mProperty_mType.ptr (), object->mProperty_mOmnibusName.getter_string (SOURCE_FILE ("intermediate-release.galgas", 20)), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-release.galgas", 20)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_releaseIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_releaseIR.mSlotID,
                                            extensionMethod_releaseIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_releaseIR_llvmInstructionCode (defineExtensionMethod_releaseIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@computeSubscriptedVolatileRegisterAddress llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_computeSubscriptedVolatileRegisterAddress_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                           GALGAS_string & ioArgument_ioLLVMcode,
                                                                                           const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_computeSubscriptedVolatileRegisterAddress * object = (const cPtr_computeSubscriptedVolatileRegisterAddress *) inObject ;
  macroValidSharedObject (object, cPtr_computeSubscriptedVolatileRegisterAddress) ;
  GALGAS_string var_registerIndexName_1069 = GALGAS_string ("%register.index.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 29)) ;
  GALGAS_string var_scriptedRegisterOffsetName_1155 = GALGAS_string ("%register.offset.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 30)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 31)) ;
  GALGAS_uint var_bitCount_1348 ;
  GALGAS_bigint joker_1323_3 ; // Joker input parameter
  GALGAS_bigint joker_1323_2 ; // Joker input parameter
  GALGAS_bool joker_1323_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)).getter_kind (HERE).method_integer (joker_1323_3, joker_1323_2, joker_1323_1, var_bitCount_1348, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, var_bitCount_1348.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerIndexName_1069, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 35)).add_operation (GALGAS_string (" = zext "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 35)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 35)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 35)).add_operation (extensionGetter_llvmName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 36)).add_operation (GALGAS_string (" to i32 ; extend index to i32\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 35)) ;
    }
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_bitCount_1348.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_registerIndexName_1069 ;
  }else if (kBoolFalse == test_2) {
    temp_1 = extensionGetter_llvmName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 40)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_scriptedRegisterOffsetName_1155, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 39)).add_operation (GALGAS_string (" = mul i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 39)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 39)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 40)).add_operation (object->mProperty_mElementSize.getter_string (SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)).add_operation (GALGAS_string (" ; multiply index by size "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)).add_operation (object->mProperty_mElementSize.getter_string (SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 39)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mLLVMResultVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 42)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 42)).add_operation (object->mProperty_mAddressLLVMname, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 42)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 42)).add_operation (var_scriptedRegisterOffsetName_1155, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 43)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 42)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_computeSubscriptedVolatileRegisterAddress_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress.mSlotID,
                                            extensionMethod_computeSubscriptedVolatileRegisterAddress_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_computeSubscriptedVolatileRegisterAddress_llvmInstructionCode (defineExtensionMethod_computeSubscriptedVolatileRegisterAddress_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enterRegisterAddressIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enterRegisterAddressIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                        const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                        GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enterRegisterAddressIR * object = (const cPtr_enterRegisterAddressIR *) inObject ;
  macroValidSharedObject (object, cPtr_enterRegisterAddressIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 29)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 29)).add_operation (object->mProperty_mBaseAddress.getter_string (SOURCE_FILE ("intermediate-enter-register-address.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 29)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 29)).add_operation (object->mProperty_mAddressOffset.getter_string (SOURCE_FILE ("intermediate-enter-register-address.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 30)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 30)).add_operation (object->mProperty_mRegisterName, inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 30)).add_operation (GALGAS_string (" at "), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 30)).add_operation (object->mProperty_mBaseAddress.getter_hexString (SOURCE_FILE ("intermediate-enter-register-address.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 31)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 31)).add_operation (object->mProperty_mAddressOffset.getter_hexString (SOURCE_FILE ("intermediate-enter-register-address.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 31)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-enter-register-address.galgas", 29)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enterRegisterAddressIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_enterRegisterAddressIR.mSlotID,
                                            extensionMethod_enterRegisterAddressIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enterRegisterAddressIR_llvmInstructionCode (defineExtensionMethod_enterRegisterAddressIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enterRegisterGroupSubscriptedAddressIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enterRegisterGroupSubscriptedAddressIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                                        const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                        GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enterRegisterGroupSubscriptedAddressIR * object = (const cPtr_enterRegisterGroupSubscriptedAddressIR *) inObject ;
  macroValidSharedObject (object, cPtr_enterRegisterGroupSubscriptedAddressIR) ;
  GALGAS_string var_groupArrayName_998 = function_registerGroupAddressArrayLLVMname (object->mProperty_mGroupName, inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 30)).add_operation (GALGAS_string (".addr = getelementptr inbounds ["), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 30)).add_operation (object->mProperty_mGroupSize.getter_string (SOURCE_FILE ("intermediate-register-group-address.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 30)).add_operation (GALGAS_string (" x i32], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 30)).add_operation (object->mProperty_mGroupSize.getter_string (SOURCE_FILE ("intermediate-register-group-address.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 31)).add_operation (GALGAS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 31)).add_operation (var_groupArrayName_998, inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 31)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 31)).add_operation (extensionGetter_llvmName (object->mProperty_mIndexIR, inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 32)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 30)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 33)).add_operation (GALGAS_string (" = load i32, i32* "), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 33)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 33)).add_operation (GALGAS_string (".addr\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 33)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enterRegisterGroupSubscriptedAddressIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR.mSlotID,
                                            extensionMethod_enterRegisterGroupSubscriptedAddressIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enterRegisterGroupSubscriptedAddressIR_llvmInstructionCode (defineExtensionMethod_enterRegisterGroupSubscriptedAddressIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loadIndirectVolatileIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_loadIndirectVolatileIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                        const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                        GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadIndirectVolatileIR * object = (const cPtr_loadIndirectVolatileIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadIndirectVolatileIR) ;
  GALGAS_string var_llvmType_729 = extensionGetter_llvmTypeName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 23)) ;
  GALGAS_string var_ptr_769 = GALGAS_string ("%registerPointer.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 24)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_ptr_769, inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 26)).add_operation (GALGAS_string (" = inttoptr i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 26)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 26)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 26)).add_operation (var_llvmType_729, inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 26)).add_operation (GALGAS_string ("* ;\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 26)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)).add_operation (GALGAS_string (" = load volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)).add_operation (var_llvmType_729, inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)).add_operation (var_llvmType_729, inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)).add_operation (var_ptr_769, inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 28)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-indirect-volatile-register.galgas", 27)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_loadIndirectVolatileIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadIndirectVolatileIR.mSlotID,
                                            extensionMethod_loadIndirectVolatileIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_loadIndirectVolatileIR_llvmInstructionCode (defineExtensionMethod_loadIndirectVolatileIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@storeIndirectVolatileIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_storeIndirectVolatileIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeIndirectVolatileIR * object = (const cPtr_storeIndirectVolatileIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeIndirectVolatileIR) ;
  GALGAS_string var_llvmType_816 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mTargetVarType.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 25)) ;
  GALGAS_string var_ptr_858 = GALGAS_string ("%registerPointer.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 26)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_ptr_858, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (GALGAS_string (" = inttoptr i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (var_llvmType_816, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (GALGAS_string ("  store volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (var_llvmType_816, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 29)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 29)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 29)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 29)).add_operation (var_llvmType_816, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 29)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 29)).add_operation (var_ptr_858, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_storeIndirectVolatileIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeIndirectVolatileIR.mSlotID,
                                            extensionMethod_storeIndirectVolatileIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_storeIndirectVolatileIR_llvmInstructionCode (defineExtensionMethod_storeIndirectVolatileIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@copyFromReferencesIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_copyFromReferencesIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_copyFromReferencesIR * object = (const cPtr_copyFromReferencesIR *) inObject ;
  macroValidSharedObject (object, cPtr_copyFromReferencesIR) ;
  GALGAS_string var_assignmentFunctionLLVMName_2062 = function_assignmentOperatorFuncName (object->mProperty_mTarget.getter_type (SOURCE_FILE ("intermediate-copy-from-references.galgas", 50)), object->mProperty_mTarget.getter_type (SOURCE_FILE ("intermediate-copy-from-references.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 50)) ;
  GALGAS_string var_llvmTypeName_2144 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mTarget.getter_type (SOURCE_FILE ("intermediate-copy-from-references.galgas", 51)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 51)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_assignmentFunctionLLVMName_2062.getter_assemblerRepresentation (SOURCE_FILE ("intermediate-copy-from-references.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 52)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmTypeName_2144, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)).add_operation (object->mProperty_mTarget.getter_llvmName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)).add_operation (var_llvmTypeName_2144, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)).add_operation (object->mProperty_mSourceLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_copyFromReferencesIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_copyFromReferencesIR.mSlotID,
                                            extensionMethod_copyFromReferencesIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_copyFromReferencesIR_llvmInstructionCode (defineExtensionMethod_copyFromReferencesIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@copyFromReferencesIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_copyFromReferencesIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_copyFromReferencesIR * object = (const cPtr_copyFromReferencesIR *) inObject ;
  macroValidSharedObject (object, cPtr_copyFromReferencesIR) ;
  GALGAS_string var_assignmentFunctionLLVMName_2683 = function_assignmentOperatorFuncName (object->mProperty_mTarget.getter_type (SOURCE_FILE ("intermediate-copy-from-references.galgas", 62)), object->mProperty_mTarget.getter_type (SOURCE_FILE ("intermediate-copy-from-references.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 62)) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (var_assignmentFunctionLLVMName_2683  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_copyFromReferencesIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_copyFromReferencesIR.mSlotID,
                                                extensionMethod_copyFromReferencesIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_copyFromReferencesIR_enterAccessibleEntities (defineExtensionMethod_copyFromReferencesIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getUniversalPropertyReferenceIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_getUniversalPropertyReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                                 const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                 GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getUniversalPropertyReferenceIR * object = (const cPtr_getUniversalPropertyReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_getUniversalPropertyReferenceIR) ;
  GALGAS_string var_llvmType_967 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mType.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mElementLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 30)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 30)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_967.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)).add_operation (var_llvmType_967, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)).add_operation (object->mProperty_mPropertyIndex.getter_string (SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 32)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 32)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_getUniversalPropertyReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR.mSlotID,
                                            extensionMethod_getUniversalPropertyReferenceIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_getUniversalPropertyReferenceIR_llvmInstructionCode (defineExtensionMethod_getUniversalPropertyReferenceIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getUniversalArrayElementReferenceIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_getUniversalArrayElementReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getUniversalArrayElementReferenceIR * object = (const cPtr_getUniversalArrayElementReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_getUniversalArrayElementReferenceIR) ;
  GALGAS_string var_llvmType_980 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mType.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mElementLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 30)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 30)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_980.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (var_llvmType_980, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (GALGAS_string (", i32 0, "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mIndexIR, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (extensionGetter_llvmName (object->mProperty_mIndexIR, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_getUniversalArrayElementReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR.mSlotID,
                                            extensionMethod_getUniversalArrayElementReferenceIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_getUniversalArrayElementReferenceIR_llvmInstructionCode (defineExtensionMethod_getUniversalArrayElementReferenceIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getComputedPropertyValueIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_getComputedPropertyValueIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                            GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getComputedPropertyValueIR * object = (const cPtr_getComputedPropertyValueIR *) inObject ;
  macroValidSharedObject (object, cPtr_getComputedPropertyValueIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mResultValueIR, inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 29)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 29)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (object->mProperty_mResultValueIR, inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 29)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mLLVMGetterName.getter_assemblerRepresentation (SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 30)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (object->mProperty_mReceiverIR, inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 31)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 31)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 31)).add_operation (extensionGetter_llvmName (object->mProperty_mReceiverIR, inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 31)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 31)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_getComputedPropertyValueIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getComputedPropertyValueIR.mSlotID,
                                            extensionMethod_getComputedPropertyValueIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_getComputedPropertyValueIR_llvmInstructionCode (defineExtensionMethod_getComputedPropertyValueIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getComputedPropertyValueIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_getComputedPropertyValueIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getComputedPropertyValueIR * object = (const cPtr_getComputedPropertyValueIR *) inObject ;
  macroValidSharedObject (object, cPtr_getComputedPropertyValueIR) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (object->mProperty_mLLVMGetterName  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 40)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_getComputedPropertyValueIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_getComputedPropertyValueIR.mSlotID,
                                                extensionMethod_getComputedPropertyValueIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_getComputedPropertyValueIR_enterAccessibleEntities (defineExtensionMethod_getComputedPropertyValueIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@storeComputedPropertyValueIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_storeComputedPropertyValueIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                              GALGAS_string & ioArgument_ioLLVMcode,
                                                                              const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                              GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeComputedPropertyValueIR * object = (const cPtr_storeComputedPropertyValueIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeComputedPropertyValueIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (object->mProperty_mLLVMSetterName.getter_assemblerRepresentation (SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (object->mProperty_mReceiverIR, inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)).add_operation (extensionGetter_llvmName (object->mProperty_mReceiverIR, inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (object->mProperty_mValueIR, inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 27)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 27)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 27)).add_operation (extensionGetter_llvmName (object->mProperty_mValueIR, inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 27)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 27)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_storeComputedPropertyValueIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeComputedPropertyValueIR.mSlotID,
                                            extensionMethod_storeComputedPropertyValueIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_storeComputedPropertyValueIR_llvmInstructionCode (defineExtensionMethod_storeComputedPropertyValueIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@storeComputedPropertyValueIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_storeComputedPropertyValueIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                  GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeComputedPropertyValueIR * object = (const cPtr_storeComputedPropertyValueIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeComputedPropertyValueIR) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (object->mProperty_mLLVMSetterName  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 36)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_storeComputedPropertyValueIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeComputedPropertyValueIR.mSlotID,
                                                extensionMethod_storeComputedPropertyValueIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_storeComputedPropertyValueIR_enterAccessibleEntities (defineExtensionMethod_storeComputedPropertyValueIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getArrayElementReferenceIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_getArrayElementReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                            GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getArrayElementReferenceIR * object = (const cPtr_getArrayElementReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_getArrayElementReferenceIR) ;
  GALGAS_string var_llvmType_1122 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (object->mProperty_mArray, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 30)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 30)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 31)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 31)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_1122.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)).add_operation (var_llvmType_1122, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)).add_operation (extensionGetter_llvmName (object->mProperty_mArray, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)).add_operation (GALGAS_string (", i32 0, "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)).add_operation (extensionGetter_llvmName (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 33)).add_operation (GALGAS_string (" ; Element of index "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 33)).add_operation (extensionGetter_llvmName (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 34)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 32)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_getArrayElementReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getArrayElementReferenceIR.mSlotID,
                                            extensionMethod_getArrayElementReferenceIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_getArrayElementReferenceIR_llvmInstructionCode (defineExtensionMethod_getArrayElementReferenceIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selectInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionIR * object = (const cPtr_selectInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)).add_operation (GALGAS_string (" = select "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i1 ").add_operation (object->mProperty_m_5F_if_5F_variableLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (object->mProperty_m_5F_then_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).add_operation (extensionGetter_llvmName (object->mProperty_m_5F_then_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (object->mProperty_m_5F_else_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).add_operation (extensionGetter_llvmName (object->mProperty_m_5F_else_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selectInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_selectInstructionIR.mSlotID,
                                            extensionMethod_selectInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selectInstructionIR_llvmInstructionCode (defineExtensionMethod_selectInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testArrayIndexIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_testArrayIndexIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                  GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                  GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testArrayIndexIR * object = (const cPtr_testArrayIndexIR *) inObject ;
  macroValidSharedObject (object, cPtr_testArrayIndexIR) ;
  GALGAS_bigint var_max_946 ;
  GALGAS_bool var_isUnsigned_971 ;
  GALGAS_bigint joker_931_1 ; // Joker input parameter
  GALGAS_uint joker_973_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 28)).getter_kind (HERE).method_integer (joker_931_1, var_max_946, var_isUnsigned_971, joker_973_1, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 28)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_isUnsigned_971.operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas", 30)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_testToZero_1060 = GALGAS_string ("%test.index.zero.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 31)) ;
      GALGAS_string var_testToZeroOk_1135 = GALGAS_string ("test.index.zero.ok.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 32)) ;
      GALGAS_string var_testToZeroFailure_1217 = GALGAS_string ("test.index.zero.fails.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 33)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 34)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testToZero_1060, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)).add_operation (extensionGetter_llvmName (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testToZero_1060, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)).add_operation (var_testToZeroOk_1135, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)).add_operation (var_testToZeroFailure_1217, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_testToZeroFailure_1217.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 38)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (object->mProperty_mErrorLocation, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (object->mProperty_mErrorLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 41)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 41)).add_operation (function_panicCodeForNegativeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 41)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 41)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 41)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 42)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_testToZeroOk_1135.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsSupOrEqual, var_max_946.objectCompare (object->mProperty_mSize)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_testToSize_2142 = GALGAS_string ("%test.index.size.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 48)) ;
      GALGAS_string var_testToSizeOk_2217 = GALGAS_string ("test.index.size.ok.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 49)) ;
      GALGAS_string var_testToSizeFailure_2299 = GALGAS_string ("test.index.size.fails.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 50)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testToSize_2142, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 51)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 51)) ;
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = var_isUnsigned_971.boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string ("ult") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_string ("slt") ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(temp_2, inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 52)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)).add_operation (extensionGetter_llvmName (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)).add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testToSize_2142, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)).add_operation (var_testToSizeOk_2217, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)).add_operation (var_testToSizeFailure_2299, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_testToSizeFailure_2299.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 56)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (object->mProperty_mErrorLocation, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (object->mProperty_mErrorLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 59)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 59)).add_operation (function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 59)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 59)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 59)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 60)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_testToSizeOk_2217.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)) ;
    }
  }
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 65)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_testArrayIndexIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_testArrayIndexIR.mSlotID,
                                            extensionMethod_testArrayIndexIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_testArrayIndexIR_llvmInstructionCode (defineExtensionMethod_testArrayIndexIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testArrayIndexIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_testArrayIndexIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                      GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testArrayIndexIR * object = (const cPtr_testArrayIndexIR *) inObject ;
  macroValidSharedObject (object, cPtr_testArrayIndexIR) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas", 74)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (object->mProperty_mErrorLocation, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 75))  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 75)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_testArrayIndexIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_testArrayIndexIR.mSlotID,
                                                extensionMethod_testArrayIndexIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_testArrayIndexIR_enterAccessibleEntities (defineExtensionMethod_testArrayIndexIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sourceLocationIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sourceLocationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                  GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                  GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sourceLocationIR * object = (const cPtr_sourceLocationIR *) inObject ;
  macroValidSharedObject (object, cPtr_sourceLocationIR) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mSourceLocation.getter_isNowhere (SOURCE_FILE ("intermediate-comment-source-line.galgas", 19)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";---------\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 20)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- ").add_operation (object->mProperty_mSourceLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).getter_string (SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).add_operation (object->mProperty_mSourceLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).getter_lastPathComponent (SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sourceLocationIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_sourceLocationIR.mSlotID,
                                            extensionMethod_sourceLocationIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sourceLocationIR_llvmInstructionCode (defineExtensionMethod_sourceLocationIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@freeCommentIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_freeCommentIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                               GALGAS_string & ioArgument_ioLLVMcode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_freeCommentIR * object = (const cPtr_freeCommentIR *) inObject ;
  macroValidSharedObject (object, cPtr_freeCommentIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- ").add_operation (object->mProperty_mComment, inCompiler COMMA_SOURCE_FILE ("intermediate-free-comment.galgas", 19)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-free-comment.galgas", 19)), inCompiler  COMMA_SOURCE_FILE ("intermediate-free-comment.galgas", 19)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_freeCommentIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_freeCommentIR.mSlotID,
                                            extensionMethod_freeCommentIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_freeCommentIR_llvmInstructionCode (defineExtensionMethod_freeCommentIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'codeOptimization'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_codeOptimization (const GALGAS_string constinArgument_inSourceFile,
                               GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineAccessibilityIR var_routineAccessibilityIR_1371 = GALGAS_routineAccessibilityIR::constructor_emptyList (SOURCE_FILE ("dead-code-elimination.galgas", 26)) ;
  GALGAS_stringset var_exploreRoutineSet_1483 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 28)) ;
  GALGAS_stringset var_allRoutineSet_1515 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 29)) ;
  GALGAS_stringset var_definedRoutineSet_1551 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 30)) ;
  cEnumerator_routineListIR enumerator_1613 (ioArgument_ioIntermediateCodeStruct.getter_mRoutineListIR (HERE), kENUMERATION_UP) ;
  while (enumerator_1613.hasCurrentObject ()) {
    GALGAS_stringset var_accessibleRoutineSet_1652 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 32)) ;
    callExtensionMethod_enterAccessibleEntities ((const cPtr_abstractRoutineIR *) enumerator_1613.current (HERE).getter_mRoutine (HERE).ptr (), var_accessibleRoutineSet_1652, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 33)) ;
    var_routineAccessibilityIR_1371.addAssign_operation (enumerator_1613.current (HERE).getter_mRoutine (HERE), var_accessibleRoutineSet_1652  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 34)) ;
    var_allRoutineSet_1515.plusAssign_operation(var_accessibleRoutineSet_1652, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 35)) ;
    var_definedRoutineSet_1551.addAssign_operation (enumerator_1613.current (HERE).getter_mRoutine (HERE).getter_mRoutineMangledName (HERE).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 36))  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 36)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_1613.current (HERE).getter_mRoutine (HERE).getter_isRequired (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_exploreRoutineSet_1483.addAssign_operation (enumerator_1613.current (HERE).getter_mRoutine (HERE).getter_mRoutineMangledName (HERE).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 38))  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 38)) ;
      }
    }
    enumerator_1613.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_m_2138 = GALGAS_string ("** Dead code elimination\n") ;
      var_m_2138.plusAssign_operation(GALGAS_string ("    ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mRoutineListIR (HERE).getter_length (SOURCE_FILE ("dead-code-elimination.galgas", 43)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 43)).add_operation (GALGAS_string (" routines, "), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 43)) ;
      var_m_2138.plusAssign_operation(var_exploreRoutineSet_1483.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 44)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 44)).add_operation (GALGAS_string (" root routines.\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 44)) ;
      inCompiler->printMessage (var_m_2138  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 45)) ;
    }
  }
  GALGAS_stringset var_undefinedRoutineSet_2463 = var_allRoutineSet_1515.substract_operation (var_definedRoutineSet_1551, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 48)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_undefinedRoutineSet_2463.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 49)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_m_2551 = GALGAS_string ("undefined routine(s):") ;
      cEnumerator_stringset enumerator_2618 (var_undefinedRoutineSet_2463, kENUMERATION_UP) ;
      while (enumerator_2618.hasCurrentObject ()) {
        var_m_2551.plusAssign_operation(GALGAS_string ("\n"
          "    - ").add_operation (enumerator_2618.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 52)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 52)) ;
        enumerator_2618.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("dead-code-elimination.galgas", 54)), var_m_2551, fixItArray3  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 54)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (gOption_omnibus_5F_options_noDeadCodeElimination.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->printMessage (GALGAS_string ("    No dead code elimination (option --").add_operation (GALGAS_string (gOption_omnibus_5F_options_noDeadCodeElimination.getter_string ()), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 58)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 58))  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 58)) ;
    }
  }
  if (kBoolFalse == test_4) {
    GALGAS_stringset var_usefulRoutineSet_2990 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 60)) ;
    if (ioArgument_ioIntermediateCodeStruct.getter_mRoutineListIR (HERE).getter_length (SOURCE_FILE ("dead-code-elimination.galgas", 61)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 61)).isValid ()) {
      uint32_t variant_3004 = ioArgument_ioIntermediateCodeStruct.getter_mRoutineListIR (HERE).getter_length (SOURCE_FILE ("dead-code-elimination.galgas", 61)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 61)).uintValue () ;
      bool loop_3004 = true ;
      while (loop_3004) {
        loop_3004 = GALGAS_bool (kIsStrictSup, var_exploreRoutineSet_1483.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 61)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
        if (loop_3004) {
          loop_3004 = GALGAS_bool (kIsStrictSup, var_exploreRoutineSet_1483.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 61)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
        }
        if (loop_3004 && (0 == variant_3004)) {
          loop_3004 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("dead-code-elimination.galgas", 61)) ;
        }
        if (loop_3004) {
          variant_3004 -- ;
          GALGAS_stringset var_currentSet_3119 = var_exploreRoutineSet_1483 ;
          var_exploreRoutineSet_1483 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 63)) ;
          cEnumerator_routineAccessibilityIR enumerator_3212 (var_routineAccessibilityIR_1371, kENUMERATION_UP) ;
          while (enumerator_3212.hasCurrentObject ()) {
            GALGAS_lstring var_routineMangledName_3246 = enumerator_3212.current (HERE).getter_mRoutine (HERE).getter_mRoutineMangledName (HERE) ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_currentSet_3119.getter_hasKey (var_routineMangledName_3246.getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 66)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 66)).operator_and (var_usefulRoutineSet_2990.getter_hasKey (var_routineMangledName_3246.getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 66)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 66)).operator_not (SOURCE_FILE ("dead-code-elimination.galgas", 66)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 66)).boolEnum () ;
              if (kBoolTrue == test_5) {
                var_usefulRoutineSet_2990.addAssign_operation (var_routineMangledName_3246.getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 67))  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 67)) ;
                var_exploreRoutineSet_1483.plusAssign_operation(enumerator_3212.current (HERE).getter_mAccessibleRoutineSet (HERE), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 68)) ;
              }
            }
            enumerator_3212.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_routineAccessibilityIR enumerator_3648 (var_routineAccessibilityIR_1371, kENUMERATION_UP) ;
    while (enumerator_3648.hasCurrentObject ()) {
      GALGAS_lstring var_routineMangledName_3680 = enumerator_3648.current (HERE).getter_mRoutine (HERE).getter_mRoutineMangledName (HERE) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = enumerator_3648.current (HERE).getter_mRoutine (HERE).getter_warnsIfUnused (HERE).operator_and (var_usefulRoutineSet_2990.getter_hasKey (var_routineMangledName_3680.getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 75)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 75)).operator_not (SOURCE_FILE ("dead-code-elimination.galgas", 75)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 75)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (var_routineMangledName_3680.getter_location (SOURCE_FILE ("dead-code-elimination.galgas", 76)), GALGAS_string ("unused routine"), fixItArray7  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 76)) ;
        }
      }
      enumerator_3648.gotoNextObject () ;
    }
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_string var_m_4006 = GALGAS_string ("    ").add_operation (var_usefulRoutineSet_2990.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 81)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 81)).add_operation (GALGAS_string (" useful routines.\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 81)) ;
        inCompiler->printMessage (var_m_4006  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 85)) ;
      }
    }
    ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR = GALGAS_routineListIR::constructor_emptyList (SOURCE_FILE ("dead-code-elimination.galgas", 88)) ;
    cEnumerator_routineAccessibilityIR enumerator_4356 (var_routineAccessibilityIR_1371, kENUMERATION_UP) ;
    while (enumerator_4356.hasCurrentObject ()) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_usefulRoutineSet_2990.getter_hasKey (enumerator_4356.current_mRoutine (HERE).getter_mRoutineMangledName (HERE).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 90)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 90)).boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (enumerator_4356.current_mRoutine (HERE)  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 91)) ;
        }
      }
      enumerator_4356.gotoNextObject () ;
    }
  }
  GALGAS_string var_filePath_4557 = constinArgument_inSourceFile.add_operation (GALGAS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 96)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (gOption_omnibus_5F_options_emitRoutineInvocationGraphFile.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      routine_displayInvocationGraph (ioArgument_ioIntermediateCodeStruct.getter_mRoutineListIR (HERE), var_filePath_4557, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 98)) ;
      }
    }
  }
  if (kBoolFalse == test_10) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_filePath_4557, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 100)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'displayInvocationGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_displayInvocationGraph (const GALGAS_routineListIR constinArgument_inRoutineListIR,
                                     const GALGAS_string constinArgument_inFilePath,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_5042 = GALGAS_string ("digraph G {\n") ;
  GALGAS_stringset var_definedRoutines_5106 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 112)) ;
  GALGAS_stringset var_allRoutines_5136 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 113)) ;
  cEnumerator_routineListIR enumerator_5176 (constinArgument_inRoutineListIR, kENUMERATION_UP) ;
  while (enumerator_5176.hasCurrentObject ()) {
    var_definedRoutines_5106.addAssign_operation (enumerator_5176.current_mRoutine (HERE).getter_mRoutineMangledName (HERE).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 115))  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 115)) ;
    var_allRoutines_5136.addAssign_operation (enumerator_5176.current_mRoutine (HERE).getter_mRoutineMangledName (HERE).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 116))  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 116)) ;
    GALGAS_stringset var_accessibleRoutineSet_5315 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 117)) ;
    GALGAS_uint joker_5383 = GALGAS_uint::constructor_default (SOURCE_FILE ("dead-code-elimination.galgas", 118)) ;
    callExtensionMethod_enterAccessibleEntities ((const cPtr_abstractRoutineIR *) enumerator_5176.current_mRoutine (HERE).ptr (), var_accessibleRoutineSet_5315, joker_5383, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 118)) ;
    var_allRoutines_5136.plusAssign_operation(var_accessibleRoutineSet_5315, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 119)) ;
    var_s_5042.plusAssign_operation(GALGAS_string ("  \"").add_operation (enumerator_5176.current_mRoutine (HERE).getter_mRoutineMangledName (HERE).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 120)).add_operation (GALGAS_string ("\" [shape=rectangle"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 120)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_5176.current_mRoutine (HERE).getter_isRequired (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_s_5042.plusAssign_operation(GALGAS_string (", color=blue"), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 122)) ;
      }
    }
    var_s_5042.plusAssign_operation(GALGAS_string ("] ;\n"), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 124)) ;
    cEnumerator_stringset enumerator_5649 (var_accessibleRoutineSet_5315, kENUMERATION_UP) ;
    while (enumerator_5649.hasCurrentObject ()) {
      var_s_5042.plusAssign_operation(GALGAS_string ("  \"").add_operation (enumerator_5176.current_mRoutine (HERE).getter_mRoutineMangledName (HERE).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 126)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 126)).add_operation (enumerator_5649.current (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 126)).add_operation (GALGAS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 126)) ;
      enumerator_5649.gotoNextObject () ;
    }
    enumerator_5176.gotoNextObject () ;
  }
  GALGAS_stringset var_undefinedRoutineSet_5823 = var_allRoutines_5136.substract_operation (var_definedRoutines_5106, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 130)) ;
  cEnumerator_stringset enumerator_5894 (var_undefinedRoutineSet_5823, kENUMERATION_UP) ;
  while (enumerator_5894.hasCurrentObject ()) {
    var_s_5042.plusAssign_operation(GALGAS_string ("  \"").add_operation (enumerator_5894.current (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 132)).add_operation (GALGAS_string ("\" [shape=rectangle, color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 132)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 132)) ;
    enumerator_5894.gotoNextObject () ;
  }
  var_s_5042.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 134)) ;
  GALGAS_bool joker_6038 ; // Joker input parameter
  var_s_5042.method_writeToFileWhenDifferentContents (constinArgument_inFilePath, joker_6038, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 135)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_undefinedRoutineSet_5823.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 136)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_m_6092 = var_undefinedRoutineSet_5823.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 137)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 137)).add_operation (GALGAS_string (" undefined routine(s) in routine invocation graph"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 137)) ;
      cEnumerator_stringset enumerator_6220 (var_undefinedRoutineSet_5823, kENUMERATION_UP) ;
      while (enumerator_6220.hasCurrentObject ()) {
        var_m_6092.plusAssign_operation(GALGAS_string ("\n"
          "    - ").add_operation (enumerator_6220.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 139)) ;
        enumerator_6220.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("dead-code-elimination.galgas", 141)), var_m_6092, fixItArray2  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 141)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'llvmSeparatorLine'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_llvmSeparatorLine (C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (";-------------------------------------------------------------------------") ;
  result_result.plusAssign_operation(GALGAS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 57)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmSeparatorLine = false ;
static GALGAS_string gOnceFunctionResult_llvmSeparatorLine ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmSeparatorLine (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmSeparatorLine) {
    gOnceFunctionResult_llvmSeparatorLine = onceFunction_llvmSeparatorLine (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmSeparatorLine = true ;
  }
  return gOnceFunctionResult_llvmSeparatorLine ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmSeparatorLine (void) {
  gOnceFunctionResult_llvmSeparatorLine.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_llvmSeparatorLine (NULL,
                                                               releaseOnceFunctionResult_llvmSeparatorLine) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmSeparatorLine [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmSeparatorLine (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_llvmSeparatorLine (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmSeparatorLine ("llvmSeparatorLine",
                                                                   functionWithGenericHeader_llvmSeparatorLine,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_llvmSeparatorLine) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmTitleComment'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmTitleComment (const GALGAS_string & constinArgument_inTitle,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outTitle ; // Returned variable
  result_outTitle = function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 63)) ;
  result_outTitle.plusAssign_operation(GALGAS_string (";    ").add_operation (constinArgument_inTitle.getter_stringByRightPadding (GALGAS_uint ((uint32_t) 114U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("code-generation.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 64)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 64)) ;
  result_outTitle.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 65)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 65)) ;
//---
  return result_outTitle ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmTitleComment [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmTitleComment ("llvmTitleComment",
                                                                  functionWithGenericHeader_llvmTitleComment,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  1,
                                                                  functionArgs_llvmTitleComment) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'asSeparatorLine'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_asSeparatorLine (C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@-------------------------------------------------------------------------") ;
  result_result.plusAssign_operation(GALGAS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 72)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_asSeparatorLine = false ;
static GALGAS_string gOnceFunctionResult_asSeparatorLine ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_asSeparatorLine (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_asSeparatorLine) {
    gOnceFunctionResult_asSeparatorLine = onceFunction_asSeparatorLine (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_asSeparatorLine = true ;
  }
  return gOnceFunctionResult_asSeparatorLine ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_asSeparatorLine (void) {
  gOnceFunctionResult_asSeparatorLine.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_asSeparatorLine (NULL,
                                                             releaseOnceFunctionResult_asSeparatorLine) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_asSeparatorLine [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_asSeparatorLine (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_asSeparatorLine (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_asSeparatorLine ("asSeparatorLine",
                                                                 functionWithGenericHeader_asSeparatorLine,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_asSeparatorLine) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'asTitleComment'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_asTitleComment (const GALGAS_string & constinArgument_inTitle,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outTitle ; // Returned variable
  result_outTitle = function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 78)) ;
  result_outTitle.plusAssign_operation(GALGAS_string ("@    ").add_operation (constinArgument_inTitle.getter_stringByRightPadding (GALGAS_uint ((uint32_t) 114U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("code-generation.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 79)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 79)) ;
  result_outTitle.plusAssign_operation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 80)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 80)) ;
//---
  return result_outTitle ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_asTitleComment [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_asTitleComment ("asTitleComment",
                                                                functionWithGenericHeader_asTitleComment,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                1,
                                                                functionArgs_asTitleComment) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'codeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_codeGeneration (const GALGAS_string constinArgument_inCurrentDirectory,
                             const GALGAS_string constinArgument_inSourceFileName,
                             const GALGAS_location constinArgument_inEndOfSourceFileLocation,
                             const GALGAS_intermediateCodeStruct constinArgument_inIntermediateCodeStruct,
                             const GALGAS_userLLVMTypeDefinitionListIR constinArgument_inUserLLVMTypeDefinitionListIR,
                             const GALGAS_lstring constinArgument_inTargetName,
                             const GALGAS_omnibusType constinArgument_inPanicCodeType,
                             const GALGAS_omnibusType constinArgument_inPanicLineType,
                             const GALGAS_availableInterruptMap constinArgument_inAvailableInterruptMap,
                             const GALGAS_staticListInitializationMap constinArgument_inStaticListValueMap,
                             const GALGAS_targetParameters constinArgument_inTargetParameters,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_timer var_generationTime_4442 = GALGAS_timer::constructor_start (SOURCE_FILE ("code-generation.galgas", 98)) ;
  GALGAS_string var_homeDir_4466 = GALGAS_string::constructor_homeDirectory (SOURCE_FILE ("code-generation.galgas", 99)).add_operation (GALGAS_string ("/omnibus-products/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 99)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("no-panic") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }
  GALGAS_string var_productDirectory_4585 = var_homeDir_4466.add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 101)).add_operation (constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("code-generation.galgas", 103)).getter_stringByReplacingStringByString (GALGAS_string ("/"), GALGAS_string ("+"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 102)) ;
  GALGAS_string var_sourceDirectory_4802 = var_productDirectory_4585.add_operation (GALGAS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 104)) ;
  var_sourceDirectory_4802.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 105)) ;
  {
  routine_generateTarget (constinArgument_inCurrentDirectory, var_productDirectory_4585, constinArgument_inTargetName, constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 107)) ;
  }
  {
  routine_generateCodeFiles (constinArgument_inCurrentDirectory, var_productDirectory_4585, constinArgument_inIntermediateCodeStruct, constinArgument_inUserLLVMTypeDefinitionListIR, constinArgument_inTargetName, constinArgument_inPanicCodeType, constinArgument_inPanicLineType, constinArgument_inAvailableInterruptMap, constinArgument_inStaticListValueMap, constinArgument_inTargetParameters, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 114)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->printMessage (GALGAS_string ("** Code generation: ").add_operation (var_generationTime_4442.getter_string (SOURCE_FILE ("code-generation.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 127)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 127))  COMMA_SOURCE_FILE ("code-generation.galgas", 127)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("code-generation.galgas", 130)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_timer var_scriptTime_5803 = GALGAS_timer::constructor_start (SOURCE_FILE ("code-generation.galgas", 131)) ;
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = GALGAS_bool (gOption_omnibus_5F_option_5F_not_5F_appearing_5F_in_5F_cocoa_performFlashing.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("run") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string ("build") ;
      }
      GALGAS_string var_script_5828 = temp_4 ;
      GALGAS_string var_fullScript_5949 = GALGAS_string ("python ").add_operation (var_productDirectory_4585, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 133)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 133)).add_operation (var_script_5828, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 133)).add_operation (GALGAS_string (".py"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 133)) ;
      GALGAS_sint var_result_6020 = var_fullScript_5949.getter_system (SOURCE_FILE ("code-generation.galgas", 134)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_result_6020.objectCompare (GALGAS_sint ((int32_t) 0L))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfSourceFileLocation, GALGAS_string ("error during LLVM compilation or flashing"), fixItArray7  COMMA_SOURCE_FILE ("code-generation.galgas", 136)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.getter_value ()).boolEnum () ;
        if (kBoolTrue == test_8) {
          inCompiler->printMessage (GALGAS_string ("** Compilation script: ").add_operation (var_scriptTime_5803.getter_string (SOURCE_FILE ("code-generation.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 139)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 139))  COMMA_SOURCE_FILE ("code-generation.galgas", 139)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateCodeFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateCodeFiles (const GALGAS_string constinArgument_inCurrentDirectory,
                                const GALGAS_string constinArgument_inProductDirectory,
                                const GALGAS_intermediateCodeStruct constinArgument_inIntermediateCodeStruct,
                                const GALGAS_userLLVMTypeDefinitionListIR constinArgument_inUserLLVMTypeDefinitionListIR,
                                const GALGAS_lstring constinArgument_inTargetName,
                                const GALGAS_omnibusType constinArgument_inPanicCodeType,
                                const GALGAS_omnibusType constinArgument_inPanicLineType,
                                const GALGAS_availableInterruptMap constinArgument_inAvailableInterruptMap,
                                const GALGAS_staticListInitializationMap constinArgument_inStaticListValueMap,
                                const GALGAS_targetParameters constinArgument_inTargetParameters,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationAdds var_generationAdds_7423 = GALGAS_generationAdds::constructor_default (SOURCE_FILE ("code-generation.galgas", 168)) ;
  var_generationAdds_7423.mProperty_mStaticEntityMap = constinArgument_inIntermediateCodeStruct.getter_mStaticEntityMap (HERE) ;
  GALGAS_generationContext var_generationContext_7555 = GALGAS_generationContext::constructor_new (constinArgument_inPanicCodeType, constinArgument_inPanicLineType, constinArgument_inTargetParameters.getter_mNopInstructionStringInLLVM (HERE).getter_string (HERE), constinArgument_inIntermediateCodeStruct.getter_mGlobalTaskVariableList (HERE), constinArgument_inAvailableInterruptMap  COMMA_SOURCE_FILE ("code-generation.galgas", 170)) ;
  GALGAS_string var_sourceDirectory_7774 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 177)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inTargetParameters.getter_mHandleDynamicArray (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_generationAdds_7423.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("void @arc.retain (%ptrtype %inPtr)")  COMMA_SOURCE_FILE ("code-generation.galgas", 180)) ;
      var_generationAdds_7423.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("void @arc.release (%ptrtype %inPtr)")  COMMA_SOURCE_FILE ("code-generation.galgas", 181)) ;
      var_generationAdds_7423.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("%ptrtype @arc.insulate (%ptrtype %inPtr)")  COMMA_SOURCE_FILE ("code-generation.galgas", 182)) ;
      GALGAS_string var_insertFunction_8234 = GALGAS_string ("%ptrtype @arc.insert.at.index ").add_operation (GALGAS_string ("(%ptrtype %inPointer, i32 %inIndex, i32 %inElementSize, %ptrtype* %outElementPtr)"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 183)) ;
      var_generationAdds_7423.mProperty_mExternFunctionDeclarationSet.addAssign_operation (var_insertFunction_8234  COMMA_SOURCE_FILE ("code-generation.galgas", 185)) ;
      var_generationAdds_7423.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("i32 @arc.length (%ptrtype %inPointer)")  COMMA_SOURCE_FILE ("code-generation.galgas", 186)) ;
    }
  }
  GALGAS_string var_asCode_8633 = function_asTitleComment (GALGAS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 189)) ;
  GALGAS_string var_asFileContents_8697 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_8765 (constinArgument_inTargetParameters.getter_m_5F_S_5F_definitionFiles (HERE), kENUMERATION_UP) ;
  while (enumerator_8765.hasCurrentObject ()) {
    var_asFileContents_8697.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 194)).add_operation (enumerator_8765.current_mValue (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 192)) ;
    enumerator_8765.gotoNextObject () ;
  }
  GALGAS_string var_x_8920 = var_asFileContents_8697.getter_stringByReplacingStringByString (GALGAS_string ("!FUNC!"), function_llvmNameForFunction (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 197)) ;
  var_asCode_8633.plusAssign_operation(var_x_8920.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForSectionInterrupt (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 198)) ;
  var_asCode_8633.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 199)) ;
  GALGAS_string var_llvmCode_9202 = function_llvmTitleComment (GALGAS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 201)) ;
  GALGAS_string var_targetLLVMcode_9268 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_9337 (constinArgument_inTargetParameters.getter_m_5F_LL_5F_definitionFiles (HERE), kENUMERATION_UP) ;
  while (enumerator_9337.hasCurrentObject ()) {
    var_targetLLVMcode_9268.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 206)).add_operation (enumerator_9337.current_mValue (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 204)) ;
    enumerator_9337.gotoNextObject () ;
  }
  var_llvmCode_9202.plusAssign_operation(var_targetLLVMcode_9268.getter_stringByReplacingStringByString (GALGAS_string ("!FUNC!"), function_llvmNameForFunction (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 209)) ;
  var_llvmCode_9202.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 210)) ;
  {
  routine_declareLLVMTypes (constinArgument_inUserLLVMTypeDefinitionListIR, var_llvmCode_9202, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 212)) ;
  }
  cEnumerator_driverListIR enumerator_9832 (constinArgument_inIntermediateCodeStruct.getter_mDriverList (HERE), kENUMERATION_UP) ;
  const bool bool_1 = true ;
  if (enumerator_9832.hasCurrentObject () && bool_1) {
    var_llvmCode_9202.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Driver variable definitions"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 215)) ;
    while (enumerator_9832.hasCurrentObject () && bool_1) {
      extensionMethod_generateLLVMDriverVariableDefinition (enumerator_9832.current (HERE), var_llvmCode_9202, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 216)) ;
      enumerator_9832.gotoNextObject () ;
    }
    var_llvmCode_9202.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 217)) ;
  }
  extensionMethod_generateLLVMcode (constinArgument_inIntermediateCodeStruct.getter_mControlRegisterGroupArrayList (HERE), var_llvmCode_9202, constinArgument_inTargetParameters.getter_mPointerSize (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 220)) ;
  cEnumerator_globalSyncInstanceMapIR enumerator_10336 (constinArgument_inIntermediateCodeStruct.getter_mGlobalSyncInstanceMap (HERE), kENUMERATION_UP) ;
  const bool bool_2 = true ;
  if (enumerator_10336.hasCurrentObject () && bool_2) {
    var_llvmCode_9202.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Global synchronization tool instances"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 223)) ;
    while (enumerator_10336.hasCurrentObject () && bool_2) {
      extensionMethod_generateLLVM (enumerator_10336.current (HERE), var_llvmCode_9202, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 224)) ;
      enumerator_10336.gotoNextObject () ;
    }
    var_llvmCode_9202.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 225)) ;
  }
  extensionMethod_generateLLVMForStaticLists (constinArgument_inStaticListValueMap, constinArgument_inIntermediateCodeStruct.getter_mStaticArrayMapForIntermediate (HERE), var_llvmCode_9202, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 228)) ;
  extensionMethod_generateLLVMDriverCode (constinArgument_inIntermediateCodeStruct.getter_mDriverList (HERE), var_llvmCode_9202, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 230)) ;
  extensionMethod_llvmRoutineGeneration (constinArgument_inIntermediateCodeStruct.getter_mRoutineListIR (HERE), var_llvmCode_9202, var_generationContext_7555, var_generationAdds_7423, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 232)) ;
  GALGAS_string var_undefinedInterruptString_11092 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 240)).add_operation (constinArgument_inTargetParameters.getter_mUndefinedInterruptHandler (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 238)) ;
  GALGAS_string var_XTRInterruptHandlerString_11269 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 244)).add_operation (constinArgument_inTargetParameters.getter_mXtrInterruptHandler (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 242)) ;
  extensionMethod_interruptCodeGeneration (constinArgument_inIntermediateCodeStruct.getter_mInterruptMapIR (HERE), var_llvmCode_9202, var_asCode_8633, var_undefinedInterruptString_11092, var_XTRInterruptHandlerString_11269, var_generationContext_7555, var_generationAdds_7423, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 246)) ;
  extensionMethod_llvmPrototypeGeneration (constinArgument_inIntermediateCodeStruct.getter_mExternProcedureMapIR (HERE), var_llvmCode_9202, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 255)) ;
  GALGAS_primitiveAndServiceIRlist var_primitiveAndServiceList_11813 = GALGAS_primitiveAndServiceIRlist::constructor_emptyList (SOURCE_FILE ("code-generation.galgas", 256)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_generationAdds_7423.getter_mUsesGuards (HERE).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_waitForGuardChange_11938 = function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 259)) ;
      var_primitiveAndServiceList_11813.addAssign_operation (function_llvmNameForServiceCall (var_waitForGuardChange_11938, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 261)), function_llvmNameForServiceImplementation (var_waitForGuardChange_11938, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 262)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("code-generation.galgas", 260)) ;
      var_generationAdds_7423.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("i1 @").add_operation (function_llvmNameForServiceCall (var_waitForGuardChange_11938, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 265)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 265))  COMMA_SOURCE_FILE ("code-generation.galgas", 264)) ;
    }
  }
  GALGAS_sectionIRlist var_sectionIRlist_12377 = GALGAS_sectionIRlist::constructor_emptyList (SOURCE_FILE ("code-generation.galgas", 268)) ;
  cEnumerator_routineListIR enumerator_12439 (constinArgument_inIntermediateCodeStruct.getter_mRoutineListIR (HERE), kENUMERATION_UP) ;
  while (enumerator_12439.hasCurrentObject ()) {
    callExtensionMethod_svcDeclarationGeneration ((const cPtr_abstractRoutineIR *) enumerator_12439.current (HERE).getter_mRoutine (HERE).ptr (), var_primitiveAndServiceList_11813, var_sectionIRlist_12377, var_generationAdds_7423, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 270)) ;
    enumerator_12439.gotoNextObject () ;
  }
  extensionMethod_generateCode (constinArgument_inIntermediateCodeStruct.getter_mTaskMapIR (HERE), var_llvmCode_9202, var_generationContext_7555, var_generationAdds_7423, var_primitiveAndServiceList_11813, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 277)) ;
  {
  routine_generatePrimitiveAndServiceDispatcher (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE), var_asCode_8633, var_primitiveAndServiceList_11813, constinArgument_inTargetParameters, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 284)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-generation.galgas", 292)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      routine_generatePanicCode (var_llvmCode_9202, var_generationContext_7555, var_generationAdds_7423, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 293)) ;
      }
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_generationAdds_7423.getter_mNeedsDynamicMemoryAllocation (HERE).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_sectionIRlist_12377.addAssign_operation (function_llvmNameForSectionCall (function_memoryAllocSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 302)), function_llvmNameForSectionImplementation (function_memoryAllocSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 303)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("code-generation.galgas", 301)) ;
      var_sectionIRlist_12377.addAssign_operation (function_llvmNameForSectionCall (function_memoryFreeSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 306)), function_llvmNameForSectionImplementation (function_memoryFreeSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 307)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("code-generation.galgas", 305)) ;
    }
  }
  {
  routine_generateSectionDispatcher (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE), constinArgument_inTargetParameters, var_asCode_8633, var_sectionIRlist_12377, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 310)) ;
  }
  var_llvmCode_9202.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("LLVM extern functions"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 318)) ;
  cEnumerator_stringset enumerator_14111 (var_generationAdds_7423.getter_mExternFunctionDeclarationSet (HERE), kENUMERATION_UP) ;
  while (enumerator_14111.hasCurrentObject ()) {
    var_llvmCode_9202.plusAssign_operation(GALGAS_string ("declare ").add_operation (enumerator_14111.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 320)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 320)) ;
    enumerator_14111.gotoNextObject () ;
  }
  var_llvmCode_9202.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 322)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsStrictSup, var_generationAdds_7423.getter_mStaticEntityMap (HERE).getter_mStaticStringMap (HERE).getter_count (SOURCE_FILE ("code-generation.galgas", 324)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_llvmCode_9202.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Static strings"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 325)) ;
      cEnumerator_staticStringMap enumerator_14422 (var_generationAdds_7423.getter_mStaticEntityMap (HERE).getter_mStaticStringMap (HERE), kENUMERATION_UP) ;
      while (enumerator_14422.hasCurrentObject ()) {
        GALGAS_string var_lgStr_14441 = enumerator_14422.current_lkey (HERE).getter_string (HERE).getter_utf_38_Length (SOURCE_FILE ("code-generation.galgas", 327)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 327)).getter_string (SOURCE_FILE ("code-generation.galgas", 327)) ;
        var_llvmCode_9202.plusAssign_operation(function_literalCharacterArrayName (enumerator_14422.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 328)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 328)) ;
        var_llvmCode_9202.plusAssign_operation(var_lgStr_14441.add_operation (GALGAS_string (" x i8] c\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 329)).add_operation (enumerator_14422.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 329)).add_operation (GALGAS_string ("\\00\", align 1\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 329)) ;
        var_llvmCode_9202.plusAssign_operation(function_literalStringName (enumerator_14422.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 330)).add_operation (GALGAS_string (" = private constant i8* getelementptr inbounds (["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 330)) ;
        var_llvmCode_9202.plusAssign_operation(var_lgStr_14441.add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 331)).add_operation (var_lgStr_14441, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 331)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 331)) ;
        var_llvmCode_9202.plusAssign_operation(function_literalCharacterArrayName (enumerator_14422.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 332)).add_operation (GALGAS_string (", i32 0, i32 0), align 4\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 332)) ;
        enumerator_14422.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsStrictSup, var_generationAdds_7423.getter_mStaticEntityMap (HERE).getter_mGlobalStructuredConstantList (HERE).getter_length (SOURCE_FILE ("code-generation.galgas", 336)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_llvmCode_9202.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Global structured constants"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 337)) ;
      cEnumerator_globalStructuredConstantList enumerator_15207 (var_generationAdds_7423.getter_mStaticEntityMap (HERE).getter_mGlobalStructuredConstantList (HERE), kENUMERATION_UP) ;
      GALGAS_uint index_15139 ((uint32_t) 0) ;
      while (enumerator_15207.hasCurrentObject ()) {
        var_llvmCode_9202.plusAssign_operation(GALGAS_string ("@gconst.").add_operation (index_15139.getter_string (SOURCE_FILE ("code-generation.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 339)).add_operation (GALGAS_string (" = private unnamed_addr constant "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 339)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15207.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 339)) ;
        var_llvmCode_9202.plusAssign_operation(GALGAS_string (" ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 340)) ;
        cEnumerator_operandIRList enumerator_15366 (enumerator_15207.current_mOperandIRList (HERE), kENUMERATION_UP) ;
        while (enumerator_15366.hasCurrentObject ()) {
          var_llvmCode_9202.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_15366.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 342)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 342)).add_operation (extensionGetter_llvmName (enumerator_15366.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 342)) ;
          if (enumerator_15366.hasNextObject ()) {
            var_llvmCode_9202.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 343)) ;
          }
          enumerator_15366.gotoNextObject () ;
        }
        var_llvmCode_9202.plusAssign_operation(GALGAS_string ("]\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 345)) ;
        enumerator_15207.gotoNextObject () ;
        index_15139.increment_operation (inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 338)) ;
      }
      var_llvmCode_9202.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 347)) ;
    }
  }
  var_llvmCode_9202.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 350)) ;
  GALGAS_bool joker_15713 ; // Joker input parameter
  var_llvmCode_9202.method_writeToFileWhenDifferentContents (var_sourceDirectory_7774.add_operation (GALGAS_string ("/src.ll"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 351)), joker_15713, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 351)) ;
  var_asCode_8633.plusAssign_operation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 353)) ;
  GALGAS_bool joker_15884 ; // Joker input parameter
  var_asCode_8633.method_writeToFileWhenDifferentContents (var_sourceDirectory_7774.add_operation (GALGAS_string ("/src.s"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 354)), joker_15884, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 354)) ;
  GALGAS_string var_s_30__15992 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_16060 (constinArgument_inTargetParameters.getter_m_5F_C_5F_definitionFiles (HERE), kENUMERATION_UP) ;
  while (enumerator_16060.hasCurrentObject ()) {
    var_s_30__15992.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 360)).add_operation (enumerator_16060.current_mValue (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 358)) ;
    enumerator_16060.gotoNextObject () ;
  }
  GALGAS_string var_s_31__16204 = var_s_30__15992.getter_stringByReplacingStringByString (GALGAS_string ("!TASKCOUNT!"), constinArgument_inIntermediateCodeStruct.getter_mTaskMapIR (HERE).getter_count (SOURCE_FILE ("code-generation.galgas", 363)).getter_string (SOURCE_FILE ("code-generation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 363)) ;
  GALGAS_string var_s_32__16321 = var_s_31__16204.getter_stringByReplacingStringByString (GALGAS_string ("!GUARDCOUNT!"), constinArgument_inIntermediateCodeStruct.getter_mMaxBranchOfOnInstructions (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 364)) ;
  GALGAS_string var_s_33__16447 = var_s_32__16321.getter_stringByReplacingStringByString (GALGAS_string ("!FUNC!"), function_llvmNameForFunction (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 365)) ;
  GALGAS_string var_s_34__16532 = var_s_33__16447.getter_stringByReplacingStringByString (GALGAS_string ("!SERVICEIMPLEMENTATION!"), function_llvmNameForServiceImplementation (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 366)) ;
  GALGAS_string var_s_35__16647 = var_s_34__16532.getter_stringByReplacingStringByString (GALGAS_string ("!SERVICECALL!"), function_llvmNameForServiceCall (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 367)) ;
  GALGAS_string var_s_36__16742 = var_s_35__16647.getter_stringByReplacingStringByString (GALGAS_string ("!SECTIONIMPLEMENTATION!"), function_llvmNameForSectionImplementation (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 368)) ;
  GALGAS_string var_cppCode_16862 = var_s_36__16742.getter_stringByReplacingStringByString (GALGAS_string ("!SECTIONCALL!"), function_llvmNameForSectionCall (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 369)) ;
  GALGAS_bool joker_17277 ; // Joker input parameter
  var_cppCode_16862.method_writeToFileWhenDifferentContents (var_sourceDirectory_7774.add_operation (GALGAS_string ("/src.cpp"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 375)), joker_17277, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 375)) ;
  GALGAS_string var_json_17370 = GALGAS_string ("{\n") ;
  var_json_17370.plusAssign_operation(GALGAS_string ("  \"system-stack-size\" : ").add_operation (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mSystemStackSize (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 379)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 379)) ;
  var_json_17370.plusAssign_operation(GALGAS_string ("  \"stacked-register-size-on-user-stack\" : ").add_operation (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mStackedUserRegisterOnInterruptByteSize (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 380)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 380)) ;
  var_json_17370.plusAssign_operation(GALGAS_string ("  \"service-stack-needs\" : ").add_operation (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mServicePushedRegisterByteSize (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 382)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 382)) ;
  var_json_17370.plusAssign_operation(GALGAS_string ("  \"section-stack-needs\" : ").add_operation (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mSectionPushedRegisterByteSize (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 383)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 383)) ;
  var_json_17370.plusAssign_operation(GALGAS_string ("  \"tasks\" : {"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 385)) ;
  cEnumerator_taskMapIR enumerator_18034 (constinArgument_inIntermediateCodeStruct.getter_mTaskMapIR (HERE), kENUMERATION_UP) ;
  while (enumerator_18034.hasCurrentObject ()) {
    var_json_17370.plusAssign_operation(GALGAS_string ("\n"
      "    \"").add_operation (enumerator_18034.current (HERE).getter_lkey (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("code-generation.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 387)).add_operation (GALGAS_string ("\" : "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 387)).add_operation (enumerator_18034.current (HERE).getter_mStackSize (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 387)) ;
    if (enumerator_18034.hasNextObject ()) {
      var_json_17370.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 388)) ;
    }
    enumerator_18034.gotoNextObject () ;
  }
  var_json_17370.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 390)) ;
  var_json_17370.plusAssign_operation(GALGAS_string ("  },\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 391)) ;
  var_json_17370.plusAssign_operation(GALGAS_string ("  \"services\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 393)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_18296 (var_primitiveAndServiceList_11813, kENUMERATION_UP) ;
  const bool bool_8 = true ;
  if (enumerator_18296.hasCurrentObject () && bool_8) {
    while (enumerator_18296.hasCurrentObject () && bool_8) {
      var_json_17370.plusAssign_operation(GALGAS_string ("\n"
        "    \"").add_operation (enumerator_18296.current_mImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 395)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 395)) ;
      enumerator_18296.gotoNextObject () ;
      if (enumerator_18296.hasCurrentObject () && bool_8) {
        var_json_17370.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 396)) ;
      }
    }
    var_json_17370.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 397)) ;
  }
  var_json_17370.plusAssign_operation(GALGAS_string ("  ],\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 399)) ;
  var_json_17370.plusAssign_operation(GALGAS_string ("  \"sections\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 401)) ;
  cEnumerator_sectionIRlist enumerator_18501 (var_sectionIRlist_12377, kENUMERATION_UP) ;
  const bool bool_9 = true ;
  if (enumerator_18501.hasCurrentObject () && bool_9) {
    while (enumerator_18501.hasCurrentObject () && bool_9) {
      var_json_17370.plusAssign_operation(GALGAS_string ("\n"
        "    \"").add_operation (enumerator_18501.current (HERE).getter_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 403)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 403)) ;
      enumerator_18501.gotoNextObject () ;
      if (enumerator_18501.hasCurrentObject () && bool_9) {
        var_json_17370.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 404)) ;
      }
    }
    var_json_17370.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 405)) ;
  }
  var_json_17370.plusAssign_operation(GALGAS_string ("  ],\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 407)) ;
  var_json_17370.plusAssign_operation(GALGAS_string ("  \"isr\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 409)) ;
  GALGAS_bool var_first_18690 = GALGAS_bool (true) ;
  cEnumerator_interruptMapIR enumerator_18772 (constinArgument_inIntermediateCodeStruct.getter_mInterruptMapIR (HERE), kENUMERATION_UP) ;
  while (enumerator_18772.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_first_18690.boolEnum () ;
      if (kBoolTrue == test_10) {
        var_first_18690 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_10) {
      var_json_17370.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 415)) ;
    }
    GALGAS_string temp_11 ;
    const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_18772.current_mMode (HERE).objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("code-generation.galgas", 417)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = function_llvmNameForServiceInterrupt (enumerator_18772.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 418)).getter_string (HERE) ;
    }else if (kBoolFalse == test_12) {
      temp_11 = function_llvmNameForSectionInterrupt (enumerator_18772.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 420)) ;
    }
    GALGAS_string var_interruptImplementationName_18884 = temp_11 ;
    var_json_17370.plusAssign_operation(GALGAS_string ("\n"
      "    \"").add_operation (var_interruptImplementationName_18884, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 422)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 422)) ;
    enumerator_18772.gotoNextObject () ;
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-generation.galgas", 424)).boolEnum () ;
    if (kBoolTrue == test_13) {
      cEnumerator_availableInterruptMap enumerator_19230 (constinArgument_inAvailableInterruptMap, kENUMERATION_UP) ;
      while (enumerator_19230.hasCurrentObject ()) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = constinArgument_inIntermediateCodeStruct.getter_mInterruptMapIR (HERE).getter_hasKey (enumerator_19230.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-generation.galgas", 426)).operator_not (SOURCE_FILE ("code-generation.galgas", 426)).boolEnum () ;
          if (kBoolTrue == test_14) {
            switch (enumerator_19230.current_mInterruptionPanicCode (HERE).enumValue ()) {
            case GALGAS_interruptionPanicCode::kNotBuilt:
              break ;
            case GALGAS_interruptionPanicCode::kEnum_noCode:
              {
              }
              break ;
            case GALGAS_interruptionPanicCode::kEnum_code:
              {
                enumGalgasBool test_15 = kBoolTrue ;
                if (kBoolTrue == test_15) {
                  test_15 = var_first_18690.boolEnum () ;
                  if (kBoolTrue == test_15) {
                    var_first_18690 = GALGAS_bool (false) ;
                  }
                }
                if (kBoolFalse == test_15) {
                  var_json_17370.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 433)) ;
                }
                var_json_17370.plusAssign_operation(GALGAS_string ("\n"
                  "    \"").add_operation (function_llvmNameForSectionInterrupt (enumerator_19230.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 435)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 435)) ;
              }
              break ;
            }
          }
        }
        enumerator_19230.gotoNextObject () ;
      }
    }
  }
  var_json_17370.plusAssign_operation(GALGAS_string ("\n"
    "  ]\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 440)) ;
  var_json_17370.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 442)) ;
  GALGAS_bool joker_19743 ; // Joker input parameter
  var_json_17370.method_writeToFileWhenDifferentContents (var_sourceDirectory_7774.add_operation (GALGAS_string ("/provided-stacks.json"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 443)), joker_19743, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 443)) ;
}


