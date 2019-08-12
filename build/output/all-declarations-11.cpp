#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-11.h"

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
  GALGAS_string var_idx_9449 = ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 206)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 207)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Bit band\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byte.offset.").add_operation (var_idx_9449, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GALGAS_string (" = sub i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (object->mProperty_mRegisterAddressLLVMname, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (object->mProperty_mBitbandRegisterBaseAddress.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byte.offset.").add_operation (var_idx_9449, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GALGAS_string (".mul = mul i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (var_idx_9449, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (object->mProperty_mBitbandRegisterOffsetMultiplier.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %bit.offset.").add_operation (var_idx_9449, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GALGAS_string (".mul = mul i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (extensionGetter_llvmName (object->mProperty_mBitExpressionOperand, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (object->mProperty_mBitbandRegisterBitMultiplier.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %offset.").add_operation (var_idx_9449, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GALGAS_string (" = add i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (var_idx_9449, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GALGAS_string (".mul, %bit.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (var_idx_9449, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GALGAS_string (".mul\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %bit.word.addr.").add_operation (var_idx_9449, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GALGAS_string (" = add i32 %offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (var_idx_9449, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (object->mProperty_mBitbandRegisterRelocationAddress.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr.").add_operation (var_idx_9449, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GALGAS_string (" = inttoptr i32 %bit.word.addr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (var_idx_9449, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GALGAS_string (" to i32*\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value.").add_operation (var_idx_9449, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GALGAS_string (" = zext i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceExpressionOperand, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GALGAS_string (" to i32\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i32 %value.").add_operation (var_idx_9449, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)).add_operation (GALGAS_string (", i32* %ptr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)).add_operation (var_idx_9449, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 216)) ;
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
      ioArgument_ioGraph.setter_noteNode (object->mProperty_mOptionalTypeName COMMA_SOURCE_FILE ("instruction-var.galgas", 73)) ;
      }
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 75)) ;
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
  ioArgument_ioGraph.setter_noteNode (object->mProperty_mTypeName COMMA_SOURCE_FILE ("instruction-var.galgas", 81)) ;
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
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 100)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 101)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 101)) ;
  }
  GALGAS_omnibusType var_targetType_4189 = temp_0 ;
  GALGAS_objectIR var_sourcePossibleReference_4781 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_4189, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_4781, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 104)) ;
  GALGAS_objectIR var_result_4798 = function_checkAssignmentCompatibility (var_sourcePossibleReference_4781, var_targetType_4189, object->mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 117)) ;
  GALGAS_lstring var_omnibusLocalVariableName_5033 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 124)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 124)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 124))  COMMA_SOURCE_FILE ("instruction-var.galgas", 124)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 125)) ;
  {
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, object->mProperty_mVarName, extensionGetter_type (var_result_4798, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 126)), var_omnibusLocalVariableName_5033, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 126)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 126)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_5033.getter_string (SOURCE_FILE ("instruction-var.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)), extensionGetter_type (var_result_4798, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 128)) ;
  {
  extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 132)), var_sourcePossibleReference_4781, GALGAS_LValueRepresentation::constructor_new (extensionGetter_type (var_result_4798, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 134)), function_llvmNameForLocalVariable (var_omnibusLocalVariableName_5033.getter_string (SOURCE_FILE ("instruction-var.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 134))  COMMA_SOURCE_FILE ("instruction-var.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 130)) ;
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
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_omnibusType var_targetType_6325 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 151)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_targetType_6325.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)).operator_not (SOURCE_FILE ("instruction-var.galgas", 153)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 154)), var_targetType_6325.getter_omnibusTypeDescriptionName (HERE).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 154)), fixItArray1  COMMA_SOURCE_FILE ("instruction-var.galgas", 154)) ;
    }
  }
  GALGAS_lstring var_omnibusName_6585 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 157)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 157)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 157))  COMMA_SOURCE_FILE ("instruction-var.galgas", 157)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 158)) ;
  {
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, object->mProperty_mVarName, var_targetType_6325, var_omnibusName_6585, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("instruction-var.galgas", 159)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 159)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_6585.getter_string (SOURCE_FILE ("instruction-var.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 161)), var_targetType_6325, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 161)) ;
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
  GALGAS_objectIR var_result_3939 = function_checkAssignmentCompatibility (var_expressionResult_3788, var_targetType_3207, object->mProperty_mConstantName.getter_location (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 91)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) extensionGetter_type (var_result_3939, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)).operator_not (SOURCE_FILE ("instruction-let.galgas", 99)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 100)), extensionGetter_omnibusTypeDescriptionName (var_result_3939, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)), fixItArray3  COMMA_SOURCE_FILE ("instruction-let.galgas", 100)) ;
      var_result_3939.drop () ; // Release error dropped variable
    }
  }
  GALGAS_lstring var_omnibusName_4331 = GALGAS_lstring::constructor_new (object->mProperty_mConstantName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-let.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)), object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 103))  COMMA_SOURCE_FILE ("instruction-let.galgas", 103)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_omnibusTypeDescriptionName (var_result_3939, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_4331.getter_string (SOURCE_FILE ("instruction-let.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)), extensionGetter_type (var_result_3939, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-let.galgas", 106)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_result_3939, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)), function_llvmNameForLocalVariable (var_omnibusName_4331.getter_string (SOURCE_FILE ("instruction-let.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 109)), var_result_3939, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)) ;
      }
    }
  }
  {
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, object->mProperty_mConstantName, GALGAS_bool (false), extensionGetter_type (var_result_3939, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)), var_omnibusName_4331, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)) ;
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

void routine_enter_5F_NOP_5F_function (GALGAS_functionDeclarationListAST & ioArgument_ioProcListAST,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-nop.galgas", 14)) ;
  temp_0.addAssign_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)).getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 14))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)) ;
  GALGAS_lstringlist var_attributeList_903 = temp_0 ;
  GALGAS_instructionListAST temp_1 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  temp_1.addAssign_operation (GALGAS_instructionNOP::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("instruction-nop.galgas", 15))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 15))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  GALGAS_instructionListAST var_instructionList_968 = temp_1 ;
  ioArgument_ioProcListAST.addAssign_operation (GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("instruction-nop.galgas", 18)), GALGAS_bool (true), GALGAS_string ("nop").getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 20)), var_attributeList_903, GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("instruction-nop.galgas", 22)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 23)), var_instructionList_968, GALGAS_location::constructor_nowhere (SOURCE_FILE ("instruction-nop.galgas", 25))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
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
  extensionSetter_appendNOP (ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 50)) ;
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
      test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_omnibusTypeDescriptionName (var_result_3411, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 74)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 74)))) ;
    }
    test_2 = test_4.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("throw expression should be a literal integer"), fixItArray5  COMMA_SOURCE_FILE ("instruction-panic.galgas", 75)) ;
    }
  }
  if (kBoolFalse == test_2) {
    GALGAS_bigint var_min_3774 ;
    GALGAS_bigint var_max_3787 ;
    GALGAS_bool joker_3789_2 ; // Joker input parameter
    GALGAS_uint joker_3789_1 ; // Joker input parameter
    constinArgument_inContext.getter_mPanicCodeType (HERE).getter_kind (HERE).method_integer (var_min_3774, var_max_3787, joker_3789_2, joker_3789_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 77)) ;
    GALGAS_bigint var_throwValue_3845 ;
    GALGAS_omnibusType joker_3821_1 ; // Joker input parameter
    var_result_3411.method_literalInteger (joker_3821_1, var_throwValue_3845, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 78)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      GALGAS_bool test_7 = GALGAS_bool (kIsStrictInf, var_throwValue_3845.objectCompare (var_min_3774)) ;
      if (kBoolTrue != test_7.boolEnum ()) {
        test_7 = GALGAS_bool (kIsStrictSup, var_throwValue_3845.objectCompare (var_max_3787)) ;
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
          ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_throwValue_3845  COMMA_SOURCE_FILE ("instruction-panic.galgas", 83))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)) ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_testResult_4999, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 128)).getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 128)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (extensionGetter_omnibusTypeDescriptionName (var_testResult_4999, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 129)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 129)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 129)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      GALGAS_bool test_3 = object->mProperty_mStaticIfExpression ;
      if (kBoolTrue == test_3.boolEnum ()) {
        test_3 = extensionGetter_isStatic (var_testResult_4999, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 130)).operator_not (SOURCE_FILE ("instruction-if.galgas", 130)) ;
      }
      test_2 = test_3.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is not static"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 131)) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        GALGAS_bool test_6 = extensionGetter_isStatic (var_testResult_4999, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 132)) ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = object->mProperty_mStaticIfExpression.operator_not (SOURCE_FILE ("instruction-if.galgas", 132)) ;
        }
        test_5 = test_6.boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 133)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 133)), fixItArray7  COMMA_SOURCE_FILE ("instruction-if.galgas", 133)) ;
        }
      }
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 135)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_5763 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 137)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mThenInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, object->mProperty_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_5763, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 138)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_6252 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 151)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mElseInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, object->mProperty_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_6252, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 152)) ;
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 164)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult_4999, object->mProperty_mTestExpressionEndLocation, var_thenInstructionGenerationList_5763, var_elseInstructionGenerationList_6252  COMMA_SOURCE_FILE ("instruction-if.galgas", 166))  COMMA_SOURCE_FILE ("instruction-if.galgas", 166)) ;
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
  GALGAS_string var_labelTrue_7793 = GALGAS_string ("if.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 193)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 193)) ;
  GALGAS_string var_labelFalse_7860 = GALGAS_string ("if.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 194)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 194)) ;
  GALGAS_string var_labelEnd_7926 = GALGAS_string ("if.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 195)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 195)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 196)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)).add_operation (var_labelTrue_7793, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)).add_operation (var_labelFalse_7860, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 197)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_7793.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 199)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_7926, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 201)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 201)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_7860.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 203)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_7926, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 205)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_7926.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mThenInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mElseInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
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
        const cEnumAssociatedValues_guardedCommandAST_boolean * extractPtr_7305 = (const cEnumAssociatedValues_guardedCommandAST_boolean *) (enumerator_6129.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isContinue = extractPtr_7305->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_7305->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_7305->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_6273 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 165)) ;
        GALGAS_objectIR var_sourceOperand_6728 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes.operator_or (GALGAS_routineAttributes::constructor_guard (SOURCE_FILE ("instruction-event.galgas", 168)) COMMA_SOURCE_FILE ("instruction-event.galgas", 168)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 169)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_6273, var_sourceOperand_6728, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 166)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_omnibusTypeDescriptionName (var_sourceOperand_6728, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 179)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 179)))).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("instruction-event.galgas", 180)) ;
          }
        }
        if (kBoolFalse == test_0) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = extensionGetter_isStatic (var_sourceOperand_6728, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 181)).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-event.galgas", 182)) ;
            }
          }
        }
        {
        extensionSetter_appendLoadWhenReference (var_guardInstructionGenerationList_6273, ioArgument_ioTemporaries, var_sourceOperand_6728, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 184)) ;
        }
        var_guardedCommandIRList_6058.addAssign_operation (GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_isContinue, var_guardInstructionGenerationList_6273, var_sourceOperand_6728  COMMA_SOURCE_FILE ("instruction-event.galgas", 188))  COMMA_SOURCE_FILE ("instruction-event.galgas", 188)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolAndSync * extractPtr_12430 = (const cEnumAssociatedValues_guardedCommandAST_boolAndSync *) (enumerator_6129.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isContinue = extractPtr_12430->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_12430->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_warnsOnStaticExpression = extractPtr_12430->mAssociatedValue2 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_12430->mAssociatedValue3 ;
        const GALGAS_lbool extractedValue_usesSelf = extractPtr_12430->mAssociatedValue4 ;
        const GALGAS_lstringlist extractedValue_nameList = extractPtr_12430->mAssociatedValue5 ;
        const GALGAS_effectiveArgumentListAST extractedValue_parameterList = extractPtr_12430->mAssociatedValue6 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_7468 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 194)) ;
        GALGAS_objectIR var_boolExpressionResult_7944 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_guard (SOURCE_FILE ("instruction-event.galgas", 198)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 199)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_7468, var_boolExpressionResult_7944, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 196)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_omnibusTypeDescriptionName (var_boolExpressionResult_7944, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 209)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 209)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_endOfExp, GALGAS_string ("guarded expression should be boolean"), fixItArray5  COMMA_SOURCE_FILE ("instruction-event.galgas", 210)) ;
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            GALGAS_bool test_7 = extractedValue_warnsOnStaticExpression ;
            if (kBoolTrue == test_7.boolEnum ()) {
              test_7 = extensionGetter_isStatic (var_boolExpressionResult_7944, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 211)) ;
            }
            test_6 = test_7.boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticWarning (extractedValue_endOfExp, GALGAS_string ("guarded expression is static"), fixItArray8  COMMA_SOURCE_FILE ("instruction-event.galgas", 212)) ;
            }
          }
        }
        {
        extensionSetter_appendLoadWhenReference (var_boolExpInstructionGenerationList_7468, ioArgument_ioTemporaries, var_boolExpressionResult_7944, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 214)) ;
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_8461 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 219)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_8536 ;
        GALGAS_lstring var_guardMangledName_8568 ;
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = extractedValue_usesSelf.getter_bool (HERE).boolEnum () ;
          if (kBoolTrue == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = constinArgument_inSelfType.getter_kind (HERE).getter_isVoid (SOURCE_FILE ("instruction-event.galgas", 223)).boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (extractedValue_usesSelf.getter_location (SOURCE_FILE ("instruction-event.galgas", 224)), GALGAS_string ("'self' is not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-event.galgas", 224)) ;
                var_guardEffectiveParameterListIR_8536.drop () ; // Release error dropped variable
                var_guardMangledName_8568.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_10) {
              GALGAS_lstringlist var_propertyList_8816 = extractedValue_nameList ;
              GALGAS_lstring var_guardName_8876 ;
              {
              var_propertyList_8816.setter_popLast (var_guardName_8876, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 227)) ;
              }
              GALGAS_objectIR var_currentObject_8911 = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 228))  COMMA_SOURCE_FILE ("instruction-event.galgas", 228)) ;
              cEnumerator_lstringlist enumerator_9017 (var_propertyList_8816, kENUMERATION_UP) ;
              while (enumerator_9017.hasCurrentObject ()) {
                {
                routine_handlePropertyAccessInExpression (var_currentObject_8911, enumerator_9017.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 230)) ;
                }
                enumerator_9017.gotoNextObject () ;
              }
              {
              routine_analyzeGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObject_8911, var_guardName_8876, extractedValue_parameterList, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_8461, var_guardEffectiveParameterListIR_8536, var_guardMangledName_8568, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 239)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_9) {
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            test_12 = GALGAS_bool (kIsEqual, extractedValue_nameList.getter_length (SOURCE_FILE ("instruction-event.galgas", 256)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_12) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (extractedValue_nameList.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 257)).getter_location (SOURCE_FILE ("instruction-event.galgas", 257)), GALGAS_string ("Standalone guard are not handled"), fixItArray13  COMMA_SOURCE_FILE ("instruction-event.galgas", 257)) ;
              var_guardMangledName_8568.drop () ; // Release error dropped variable
              var_guardEffectiveParameterListIR_8536.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_12) {
            GALGAS_lstringlist var_propertyList_10246 = extractedValue_nameList ;
            GALGAS_lstring var_globalReceiverName_10314 ;
            {
            var_propertyList_10246.setter_popFirst (var_globalReceiverName_10314, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 262)) ;
            }
            GALGAS_lstring var_guardName_10362 ;
            {
            var_propertyList_10246.setter_popLast (var_guardName_10362, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 263)) ;
            }
            GALGAS_objectIR var_currentObjectIR_10532 ;
            extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, var_globalReceiverName_10314, constinArgument_inMode, ioArgument_ioTemporaries.getter_mInitializedDriverSet (HERE), var_currentObjectIR_10532, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 264)) ;
            cEnumerator_lstringlist enumerator_10585 (var_propertyList_10246, kENUMERATION_UP) ;
            while (enumerator_10585.hasCurrentObject ()) {
              {
              routine_handlePropertyAccessInExpression (var_currentObjectIR_10532, enumerator_10585.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 271)) ;
              }
              enumerator_10585.gotoNextObject () ;
            }
            {
            routine_analyzeGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObjectIR_10532, var_guardName_10362, extractedValue_parameterList, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_8461, var_guardEffectiveParameterListIR_8536, var_guardMangledName_8568, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 280)) ;
            }
          }
        }
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = var_boolExpressionResult_7944.getter_isLiteralInteger (SOURCE_FILE ("instruction-event.galgas", 297)).boolEnum () ;
          if (kBoolTrue == test_14) {
            GALGAS_bigint var_value_11592 ;
            GALGAS_omnibusType joker_11565_1 ; // Joker input parameter
            var_boolExpressionResult_7944.method_literalInteger (joker_11565_1, var_value_11592, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 298)) ;
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              test_15 = GALGAS_bool (kIsEqual, var_value_11592.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 299)))).boolEnum () ;
              if (kBoolTrue == test_15) {
                var_guardedCommandIRList_6058.addAssign_operation (GALGAS_guardedCommandIR::constructor_sync (extractedValue_isContinue, var_guardMangledName_8568.getter_string (HERE), var_guardInstructionGenerationList_8461, var_guardEffectiveParameterListIR_8536  COMMA_SOURCE_FILE ("instruction-event.galgas", 300))  COMMA_SOURCE_FILE ("instruction-event.galgas", 300)) ;
              }
            }
            if (kBoolFalse == test_15) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (var_guardMangledName_8568.getter_location (SOURCE_FILE ("instruction-event.galgas", 307)), GALGAS_string ("false guard not handled yet"), fixItArray16  COMMA_SOURCE_FILE ("instruction-event.galgas", 307)) ;
            }
          }
        }
        if (kBoolFalse == test_14) {
          var_guardedCommandIRList_6058.addAssign_operation (GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_isContinue, var_boolExpInstructionGenerationList_7468, var_boolExpressionResult_7944, var_guardMangledName_8568.getter_string (HERE), var_guardInstructionGenerationList_8461, var_guardEffectiveParameterListIR_8536  COMMA_SOURCE_FILE ("instruction-event.galgas", 310))  COMMA_SOURCE_FILE ("instruction-event.galgas", 310)) ;
        }
      }
      break ;
    }
    enumerator_6129.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 322)) ;
  }
  GALGAS_syncInstructionBranchListIR var_syncInstructionBranchListIR_12591 = GALGAS_syncInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 323)) ;
  cEnumerator_syncInstructionBranchListAST enumerator_12649 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  cEnumerator_guardedCommandIRList enumerator_12693 (var_guardedCommandIRList_6058, kENUMERATION_UP) ;
  while (enumerator_12649.hasCurrentObject () && enumerator_12693.hasCurrentObject ()) {
    GALGAS_instructionListIR var_branchInstructionGenerationList_12751 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 325)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_12649.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_12649.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_12751, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 326)) ;
    var_syncInstructionBranchListIR_12591.addAssign_operation (enumerator_12693.current_mGuardedCommand (HERE), var_branchInstructionGenerationList_12751  COMMA_SOURCE_FILE ("instruction-event.galgas", 338)) ;
    enumerator_12649.gotoNextObject () ;
    enumerator_12693.gotoNextObject () ;
  }
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_on_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 340)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_syncInstructionBranchListIR_12591  COMMA_SOURCE_FILE ("instruction-event.galgas", 342))  COMMA_SOURCE_FILE ("instruction-event.galgas", 342)) ;
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
  GALGAS_lstring var_guardMangledName_14353 = extensionGetter_mangledName (constinArgument_inEffectiveParameterList, extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 363)).getter_omnibusTypeDescriptionName (SOURCE_FILE ("instruction-event.galgas", 363)), constinArgument_inGuardName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 363)) ;
  GALGAS_guardMapCTXT var_guardMap_14502 = extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 364)).getter_guardMap (SOURCE_FILE ("instruction-event.galgas", 364)) ;
  GALGAS_bool var_isPublic_14587 ;
  GALGAS_routineTypedSignature var_formalSignature_14631 ;
  GALGAS_lstring var_guardRoutineUserLLVMName_14661 ;
  GALGAS_lstring joker_14663 ; // Joker input parameter
  var_guardMap_14502.method_searchKey (var_guardMangledName_14353, var_isPublic_14587, var_formalSignature_14631, var_guardRoutineUserLLVMName_14661, joker_14663, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 365)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_isPublic_14587.operator_not (SOURCE_FILE ("instruction-event.galgas", 367)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-event.galgas", 368)), GALGAS_string ("this guard is not public"), fixItArray1  COMMA_SOURCE_FILE ("instruction-event.galgas", 368)) ;
      outArgument_outGuardMangledName.drop () ; // Release error dropped variable
      outArgument_outEffectiveParameterListIR.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outGuardMangledName = var_guardRoutineUserLLVMName_14661 ;
    GALGAS_procCallEffectiveParameterListIR temp_2 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 372)) ;
    temp_2.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-event.galgas", 372)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("instruction-event.galgas", 372)) ;
    outArgument_outEffectiveParameterListIR = temp_2 ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_14631, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.getter_location (HERE), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 373)) ;
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
  GALGAS_string var_startLabel_17785 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-event.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 441)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 442)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_17785, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 444)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 444)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 444)) ;
  GALGAS_string var_startLabelName_17949 = var_startLabel_17785.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 445)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_17949.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 446)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 446)) ;
  GALGAS_string var_exitLabelName_18033 = var_startLabel_17785.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 447)) ;
  GALGAS_string var_selectLabelName_18078 = var_startLabel_17785.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 448)) ;
  GALGAS_string var_errorLabelName_18124 = var_startLabel_17785.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 449)) ;
  GALGAS_string var_currentStartBranchLabel_18178 = var_startLabelName_17949 ;
  cEnumerator_syncInstructionBranchListIR enumerator_18238 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  GALGAS_uint index_18201 ((uint32_t) 0) ;
  while (enumerator_18238.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_18273 = GALGAS_string ("%").add_operation (var_startLabel_17785, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 452)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 452)).add_operation (index_18201.getter_string (SOURCE_FILE ("instruction-event.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 452)) ;
    GALGAS_bool var_isWhileGuardedCommand_18343 ;
    switch (enumerator_18238.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_19181 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_18238.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isExitCommand = extractPtr_19181->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_19181->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_result = extractPtr_19181->mAssociatedValue2 ;
        var_isWhileGuardedCommand_18343 = extractedValue_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 457)) ;
        GALGAS_string var_acceptedLabelName_18643 = var_startLabel_17785.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 458)).add_operation (index_18201.getter_string (SOURCE_FILE ("instruction-event.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 458)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 458)) ;
        GALGAS_string var_rejectedLabelName_18706 = var_startLabel_17785.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 459)).add_operation (index_18201.getter_string (SOURCE_FILE ("instruction-event.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 459)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 459)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 460)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 460)).add_operation (var_acceptedLabelName_18643, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 460)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 460)).add_operation (var_rejectedLabelName_18706, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 460)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 460)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 460)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_18643.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 461)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 461)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 462)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_18706, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 463)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 463)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 463)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_18706.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 464)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18273, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 465)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 465)).add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 465)).add_operation (GALGAS_string (", 0 ; assignment\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 465)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 465)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_20910 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_18238.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isExitCommand = extractPtr_20910->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_expInstructionList = extractPtr_20910->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_expResult = extractPtr_20910->mAssociatedValue2 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_20910->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_20910->mAssociatedValue4 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_20910->mAssociatedValue5 ;
        var_isWhileGuardedCommand_18343 = extractedValue_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 468)) ;
        GALGAS_string var_testOkLabelName_19484 = var_startLabel_17785.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 469)).add_operation (index_18201.getter_string (SOURCE_FILE ("instruction-event.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 469)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 469)) ;
        GALGAS_string var_testExitLabelName_19555 = var_startLabel_17785.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 470)).add_operation (index_18201.getter_string (SOURCE_FILE ("instruction-event.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 470)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 470)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_expResult, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 471)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 471)).add_operation (var_testOkLabelName_19484, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 471)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 471)).add_operation (var_testExitLabelName_19555, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 471)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 471)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_19484.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 472)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 473)) ;
        GALGAS_string var_guardAcceptationLabelName_19910 = var_startLabel_17785.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 474)).add_operation (index_18201.getter_string (SOURCE_FILE ("instruction-event.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 474)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 474)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_19910, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 475)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 475)).add_operation (extractedValue_guardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 475)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 476)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_20138 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_20138.hasCurrentObject ()) {
          switch (enumerator_20138.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20138.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 480)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 480)).add_operation (extensionGetter_llvmName (enumerator_20138.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 480)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20138.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 482)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 482)).add_operation (extensionGetter_llvmName (enumerator_20138.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 482)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20138.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 484)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 484)).add_operation (extensionGetter_llvmName (enumerator_20138.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 484)) ;
            }
            break ;
          }
          if (enumerator_20138.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 487)) ;
          }
          enumerator_20138.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 489)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_19555, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 490)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 490)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_19555.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 491)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18273, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 492)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 492)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_19910, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 493)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 493)).add_operation (var_testOkLabelName_19484, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 493)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 493)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 493)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_18178, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 494)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 494)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_sync:
      {
        const cEnumAssociatedValues_guardedCommandIR_sync * extractPtr_21773 = (const cEnumAssociatedValues_guardedCommandIR_sync *) (enumerator_18238.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isExitCommand = extractPtr_21773->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_21773->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_21773->mAssociatedValue2 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_21773->mAssociatedValue3 ;
        var_isWhileGuardedCommand_18343 = extractedValue_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 497)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18273, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 498)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 498)).add_operation (extractedValue_guardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 498)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 499)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_21324 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_21324.hasCurrentObject ()) {
          switch (enumerator_21324.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21324.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 503)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 503)).add_operation (extensionGetter_llvmName (enumerator_21324.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 503)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 503)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21324.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 505)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 505)).add_operation (extensionGetter_llvmName (enumerator_21324.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 505)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 505)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21324.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)).add_operation (extensionGetter_llvmName (enumerator_21324.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 507)) ;
            }
            break ;
          }
          if (enumerator_21324.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 510)) ;
          }
          enumerator_21324.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 512)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_21807 = var_startLabel_17785.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)).add_operation (index_18201.getter_string (SOURCE_FILE ("instruction-event.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)) ;
    GALGAS_string var_rejectedLabelName_21867 = var_startLabel_17785.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (index_18201.getter_string (SOURCE_FILE ("instruction-event.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_18273, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 516)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 516)).add_operation (var_acceptedLabelName_21807, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 516)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 516)).add_operation (var_rejectedLabelName_21867, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 516)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 516)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 516)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_21807.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 517)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 517)) ;
    extensionMethod_instructionListLLVMCode (enumerator_18238.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 518)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = var_isWhileGuardedCommand_18343.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = var_startLabelName_17949 ;
    }else if (kBoolFalse == test_1) {
      temp_0 = var_exitLabelName_18033 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 519)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 519)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_21867.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 520)) ;
    var_currentStartBranchLabel_18178 = var_rejectedLabelName_21867 ;
    enumerator_18238.gotoNextObject () ;
    index_18201.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 451)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_18078, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 523)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 523)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 523)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 523)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_18078, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)).add_operation (var_startLabelName_17949, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)).add_operation (var_errorLabelName_18124, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 524)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_18124.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 525)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_18033, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 527)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 527)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 527)) ;
    }
  }
  if (kBoolFalse == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (object->mProperty_mSelectInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 529)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).add_operation (object->mProperty_mSelectInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).getter_string (SOURCE_FILE ("instruction-event.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 530)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 531)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 531)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 531)).getter_string (SOURCE_FILE ("instruction-event.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 531)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 531)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 531)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 532)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_18033.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 534)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 534)) ;
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
  GALGAS_uint var_branchCount_23603 = object->mProperty_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-event.galgas", 543)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_23603)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_23603 ;
    }
  }
  cEnumerator_syncInstructionBranchListIR enumerator_23788 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  while (enumerator_23788.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_23788.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)) ;
    switch (enumerator_23788.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_24107 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_23788.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_24107->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 551)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_sync:
      {
        const cEnumAssociatedValues_guardedCommandIR_sync * extractPtr_24339 = (const cEnumAssociatedValues_guardedCommandIR_sync *) (enumerator_23788.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_24339->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_24339->mAssociatedValue2 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)) ;
        ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-event.galgas", 554)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_24716 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_23788.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_24716->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_24716->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_24716->mAssociatedValue4 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 556)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 557)) ;
        ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-event.galgas", 558)) ;
      }
      break ;
    }
    enumerator_23788.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-event.galgas", 561)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (object->mProperty_mSelectInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562))  COMMA_SOURCE_FILE ("instruction-event.galgas", 562)) ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_testValue_3741, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 86)).getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 86)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_omnibusTypeDescriptionName (var_testValue_3741, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)), fixItArray1  COMMA_SOURCE_FILE ("instruction-while.galgas", 87)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = extensionGetter_isStatic (var_testValue_3741, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 88)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-while.galgas", 89)) ;
      }
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_4243 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 92)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 93)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, object->mProperty_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4243, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 94)) ;
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 106)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 109)), var_testInstructionGenerationList_3341, var_testValue_3741, var_instructionGenerationList_4243  COMMA_SOURCE_FILE ("instruction-while.galgas", 108))  COMMA_SOURCE_FILE ("instruction-while.galgas", 108)) ;
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
  GALGAS_string var_labelTest_5834 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 134)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 134)) ;
  GALGAS_string var_labelLoop_5885 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 135)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 135)) ;
  GALGAS_string var_labelEnd_5935 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 136)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 136)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_5834, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 137)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 137)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_5834.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 138)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 139)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_m_5F_while_5F_Expression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)).add_operation (var_labelLoop_5885, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)).add_operation (var_labelEnd_5935, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 140)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_5885.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 141)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 142)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_5834, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 143)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_5935.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 144)) ;
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
                                                                        GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                        GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mTestInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
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
      var_iteratedElementType_4171 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 101)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_4514 = (const cEnumAssociatedValues_subscript_staticSubscript *) (var_iteratedType_4074.getter_subscript (HERE).unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_elementType = extractPtr_4514->mAssociatedValue0 ;
      var_iteratedElementType_4171 = extractedValue_elementType ;
    }
    break ;
  }
  GALGAS_lstring var_omnibusName_4543 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 106))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 107)) ;
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_4543.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)), var_iteratedElementType_4171, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 110)) ;
  }
  {
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, object->mProperty_mVarName, GALGAS_bool (false), var_iteratedElementType_4171, var_omnibusName_4543, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 111)) ;
  }
  GALGAS_instructionListIR var_whileExpression_5F_GenerationList_5032 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 113)) ;
  GALGAS_objectIR var_whileExpressionResult_5447 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mWhileExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 117)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_5032, var_whileExpressionResult_5447, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 114)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_type (var_whileExpressionResult_5447, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 128)).getter_kind (HERE).getter_isBoolean (SOURCE_FILE ("instruction-for-in-do.galgas", 128)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 128)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression should be boolean"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 129)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GALGAS_bool test_4 = object->mProperty_mStaticWhileExpression ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = extensionGetter_isStatic (var_whileExpressionResult_5447, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 130)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 130)) ;
      }
      test_3 = test_4.boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is not static"), fixItArray5  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 131)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        GALGAS_bool test_7 = extensionGetter_isStatic (var_whileExpressionResult_5447, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 132)) ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = object->mProperty_mStaticWhileExpression.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 132)) ;
        }
        test_6 = test_7.boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticWarning (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 133)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 133)), fixItArray8  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 133)) ;
        }
      }
    }
  }
  GALGAS_instructionListIR var_doInstructionList_5F_GenerationList_6088 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 136)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, object->mProperty_mEndOf_5F_for_5F_instruction, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_6088, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 137)) ;
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_for_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 149)) ;
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
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnLiteralStringIR::constructor_new (var_omnibusName_4543.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 155)), object->mProperty_mIteratedObject.getter_location (HERE), var_iteratedObjectPointer_4039, var_iteratedType_4074, var_whileExpression_5F_GenerationList_5032, var_whileExpressionResult_5447, var_doInstructionList_5F_GenerationList_6088  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_7605 = (const cEnumAssociatedValues_subscript_staticSubscript *) (var_iteratedType_4074.getter_subscript (HERE).unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_elementType = extractPtr_7605->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_size = extractPtr_7605->mAssociatedValue1 ;
      GALGAS_stringset var_invokedFunctionSet_7103 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-for-in-do.galgas", 165)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = ioArgument_ioTemporaries.getter_mStaticArrayMapForTemporaries (HERE).getter_hasKey (object->mProperty_mIteratedObject.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 166)) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)).boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioTemporaries.getter_mStaticArrayMapForTemporaries (HERE).method_searchKey (object->mProperty_mIteratedObject, var_invokedFunctionSet_7103, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)) ;
        }
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnArrayIR::constructor_new (var_omnibusName_4543.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 170)), object->mProperty_mIteratedObject, var_iteratedObjectPointer_4039, var_whileExpression_5F_GenerationList_5032, var_whileExpressionResult_5447, var_doInstructionList_5F_GenerationList_6088, extractedValue_elementType, extractedValue_size.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)), var_invokedFunctionSet_7103  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)) ;
    }
    break ;
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
  GALGAS_string var_elementTypeLLVMName_9730 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mElementType.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 236)) ;
  GALGAS_string var_listTypeLLVMName_9783 = GALGAS_string ("[").add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 237)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 237)).add_operation (var_elementTypeLLVMName_9730, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 237)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 237)) ;
  GALGAS_string var_locationIndex_9858 = object->mProperty_mIteratedObjectName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 238)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 238)) ;
  GALGAS_string var_startLabel_9934 = GALGAS_string ("for.label.start.").add_operation (var_locationIndex_9858, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 240)) ;
  GALGAS_string var_testLabel_9987 = GALGAS_string ("for.label.test.").add_operation (var_locationIndex_9858, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 241)) ;
  GALGAS_string var_whileLabel_10040 = GALGAS_string ("for.label.while.").add_operation (var_locationIndex_9858, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 242)) ;
  GALGAS_string var_nextLabel_10093 = GALGAS_string ("for.label.next.").add_operation (var_locationIndex_9858, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 243)) ;
  GALGAS_string var_loopVar_10143 = GALGAS_string ("for.loop.").add_operation (var_locationIndex_9858, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 244)) ;
  GALGAS_string var_loopLabel_10189 = GALGAS_string ("for.label.loop.").add_operation (var_locationIndex_9858, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 245)) ;
  GALGAS_string var_endLabel_10240 = GALGAS_string ("for.label.end.").add_operation (var_locationIndex_9858, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 246)) ;
  GALGAS_string var_indexVar_10293 = GALGAS_string ("for.index.").add_operation (var_locationIndex_9858, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 248)) ;
  GALGAS_string var_ptrVar_10338 = GALGAS_string ("for.ptr.").add_operation (var_locationIndex_9858, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 249)) ;
  GALGAS_string var_currentValue_10387 = GALGAS_string ("for.currentValue.").add_operation (var_locationIndex_9858, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_9934, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_9934.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 256)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10338, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)).add_operation (GALGAS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)).add_operation (var_listTypeLLVMName_9783, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_9783, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9987, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_9987.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10338, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (var_elementTypeLLVMName_9730, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (GALGAS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (var_ptrVar_10338, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (var_startLabel_9934, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)).add_operation (var_ptrVar_10338, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 268)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 268)).add_operation (var_nextLabel_10093, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 268)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_10293, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GALGAS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (var_startLabel_9934, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (var_indexVar_10293, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (var_nextLabel_10093, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_loopVar_10143, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (GALGAS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (var_indexVar_10293, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_loopVar_10143, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (var_whileLabel_10040, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (var_endLabel_10240, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_10040.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)).add_operation (var_loopLabel_10189, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)).add_operation (var_endLabel_10240, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_10189.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 283)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentValue_10387, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (var_elementTypeLLVMName_9730, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_9730.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)).add_operation (var_ptrVar_10338, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeLLVMName_9730, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_currentValue_10387, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_elementTypeLLVMName_9730, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (function_llvmNameForLocalVariable (object->mProperty_mEnumeratedValueName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_10093, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_10093.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10338, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)).add_operation (var_elementTypeLLVMName_9730, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_9730.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)).add_operation (var_ptrVar_10338, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_10293, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (GALGAS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (var_indexVar_10293, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (GALGAS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9987, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_10240.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)) ;
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
                                                                             GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                             GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnArrayIR * object = (const cPtr_forInstructionOnArrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnArrayIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)) ;
  ioArgument_ioInvokedRoutineSet.plusAssign_operation(object->mProperty_mInvokedFunctionSet, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)) ;
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
//                 Overriding extension method '@forInstructionOnLiteralStringIR llvmInstructionCode'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_forInstructionOnLiteralStringIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnLiteralStringIR * object = (const cPtr_forInstructionOnLiteralStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnLiteralStringIR) ;
  GALGAS_string var_startLabel_14153 = GALGAS_string ("for.label.start.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 337)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 337)) ;
  GALGAS_string var_testLabel_14218 = GALGAS_string ("for.label.test.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)) ;
  GALGAS_string var_loopLabel_14282 = GALGAS_string ("for.label.loop.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)) ;
  GALGAS_string var_whileLabel_14347 = GALGAS_string ("for.label.while.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 340)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 340)) ;
  GALGAS_string var_nextLabel_14412 = GALGAS_string ("for.label.next.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)) ;
  GALGAS_string var_endLabel_14475 = GALGAS_string ("for.label.end.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)) ;
  GALGAS_string var_ptrVar_14536 = GALGAS_string ("for.ptr.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)) ;
  GALGAS_string var_currentVar_14597 = GALGAS_string ("for.current.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 344)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 344)) ;
  GALGAS_string var_stringLLVMTypeName_14667 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mLiteralStringType.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_14153, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 347)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 347)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14153.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14536, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (GALGAS_string (".start = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (var_stringLLVMTypeName_14667, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (var_stringLLVMTypeName_14667, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (extensionGetter_llvmName (object->mProperty_mStringElementIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 350)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_14218, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_14218.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14536, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (var_stringLLVMTypeName_14667, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string (" [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (var_ptrVar_14536, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14153.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (var_ptrVar_14536, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (var_nextLabel_14412, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_14597, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (GALGAS_string (" = load i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (var_stringLLVMTypeName_14667, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (var_ptrVar_14536, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_14597, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (var_currentVar_14597, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_14597, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (var_endLabel_14475, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (var_whileLabel_14347, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_14347.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (var_loopLabel_14282, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (var_endLabel_14475, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 365)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_14282.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8 %").add_operation (var_currentVar_14597, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * ").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_14412, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_14412.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14536, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)).add_operation (GALGAS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (var_ptrVar_14536, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_14218, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_14475.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_forInstructionOnLiteralStringIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR.mSlotID,
                                            extensionMethod_forInstructionOnLiteralStringIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_forInstructionOnLiteralStringIR_llvmInstructionCode (defineExtensionMethod_forInstructionOnLiteralStringIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@forInstructionOnLiteralStringIR enterAccessibleEntities'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_forInstructionOnLiteralStringIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnLiteralStringIR * object = (const cPtr_forInstructionOnLiteralStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnLiteralStringIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 392)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_forInstructionOnLiteralStringIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR.mSlotID,
                                                extensionMethod_forInstructionOnLiteralStringIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_forInstructionOnLiteralStringIR_enterAccessibleEntities (defineExtensionMethod_forInstructionOnLiteralStringIR_enterAccessibleEntities, NULL) ;

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
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 104)), GALGAS_string ("an integer type is required here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 104)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 106)), GALGAS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 106)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 108)), GALGAS_string ("an integer type is required here"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 108)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 110)), GALGAS_string ("an integer type is required here"), fixItArray8  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 110)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_7868 = (const cEnumAssociatedValues_typeKind_integer *) (var_type_4046.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_7868->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_7868->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_7868->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_7868->mAssociatedValue3 ;
      GALGAS_objectIR var_lowerBoundExpressionResult_5442 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_4046, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResult_5442, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 113)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResult_5442, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 126)) ;
      }
      GALGAS_objectIR var_upperBoundExpressionResult_6002 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_4046, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResult_6002, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 130)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResult_6002, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 143)) ;
      }
      GALGAS_objectIR var_lowerBound_6181 = function_checkAssignmentCompatibility (var_lowerBoundExpressionResult_5442, var_type_4046, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 148)) ;
      GALGAS_objectIR var_upperBound_6405 = function_checkAssignmentCompatibility (var_upperBoundExpressionResult_6002, var_type_4046, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 154)) ;
      {
      extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 161)) ;
      }
      GALGAS_lstring var_enumeratedVarName_6730 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 163)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 163)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 163))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 163)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 164)) ;
      ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_enumeratedVarName_6730.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 165)), var_type_4046, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 165)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, object->mProperty_mVarName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          {
          extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, object->mProperty_mVarName, GALGAS_bool (false), var_type_4046, var_enumeratedVarName_6730, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 167)) ;
          }
        }
      }
      GALGAS_instructionListIR var_instructionGenerationList_7138 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170)) ;
      extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, object->mProperty_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_7138, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)) ;
      {
      extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 183)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarName_6730.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 186)), var_type_4046, extractedValue_unsigned, object->mProperty_mEndOf_5F_do_5F_instruction, var_lowerBound_6181, var_upperBound_6405, var_instructionGenerationList_7138  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 185))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 185)) ;
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
  GALGAS_string var_llvmType_8936 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mType.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 221)) ;
  GALGAS_string var_llvmVarName_8977 = function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 222)) ;
  GALGAS_string var_testLabel_9032 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)) ;
  GALGAS_string var_loopLabel_9095 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)) ;
  GALGAS_string var_endLabel_9157 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 225)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 225)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 225)) ;
  GALGAS_string var_testResult_9221 = GALGAS_string ("%for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 226)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 226)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 226)) ;
  GALGAS_string var_loadedVarName_9296 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)) ;
  GALGAS_string var_currentVarName_9373 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 228)) ;
  GALGAS_string var_nextVarName_9448 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_8936, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (extensionGetter_llvmName (object->mProperty_mLowerExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (var_llvmType_8936, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (var_llvmVarName_8977, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9032, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_9032.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_9296, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (var_llvmType_8936, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (var_llvmType_8936, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (var_llvmVarName_8977, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_9221, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_8936, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (var_loadedVarName_9296, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (extensionGetter_llvmName (object->mProperty_mUpperExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_9221, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (var_loopLabel_9095, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (var_endLabel_9157, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_9095.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_9373, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmType_8936, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmType_8936, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmVarName_8977, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_9448, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (var_llvmType_8936, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (var_currentVarName_9373, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_8936, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (var_nextVarName_9448, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (var_llvmType_8936, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (var_llvmVarName_8977, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9032, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_9157.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)) ;
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
                                                                                     GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionIR * object = (const cPtr_forLowerUpperBoundInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)) ;
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
  GALGAS_omnibusType var_currentType_9688 ;
  GALGAS_string var_currentLLVMAddressVar_9720 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 237)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 238)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 238)) ;
          var_currentType_9688.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_9720.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_1) {
        var_currentType_9688 = constinArgument_inSelfType ;
        var_currentLLVMAddressVar_9720 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 241)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_entity_10090 ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, object->mProperty_mIdentifier, var_entity_10090, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 244)) ;
    switch (var_entity_10090.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
        const cEnumAssociatedValues_valuedObject_task * extractPtr_10241 = (const cEnumAssociatedValues_valuedObject_task *) (var_entity_10090.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_type = extractPtr_10241->mAssociatedValue0 ;
        var_currentType_9688 = extractedValue_type ;
        var_currentLLVMAddressVar_9720 = function_llvmNameForGlobalVariable (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 248)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
        const cEnumAssociatedValues_valuedObject_driver * extractPtr_10535 = (const cEnumAssociatedValues_valuedObject_driver *) (var_entity_10090.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_type = extractPtr_10535->mAssociatedValue0 ;
        const GALGAS_bool extractedValue_instancied = extractPtr_10535->mAssociatedValue1 ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = extractedValue_instancied.boolEnum () ;
          if (kBoolTrue == test_3) {
            var_currentType_9688 = extractedValue_type ;
            var_currentLLVMAddressVar_9720 = function_llvmNameForGlobalVariable (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 252)) ;
          }
        }
        if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 254)), GALGAS_string ("the driver should be instancied"), fixItArray4  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 254)) ;
          var_currentType_9688.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_9720.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 257)), GALGAS_string ("a global constant cannot be used in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 257)) ;
        var_currentType_9688.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9720.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_10858 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_10090.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_type = extractPtr_10858->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_omnibusName = extractPtr_10858->mAssociatedValue1 ;
        var_currentType_9688 = extractedValue_type ;
        var_currentLLVMAddressVar_9720 = function_llvmNameForLocalVariable (extractedValue_omnibusName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 262)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_11019 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_10090.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_type = extractPtr_11019->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_omnibusName = extractPtr_11019->mAssociatedValue1 ;
        var_currentType_9688 = extractedValue_type ;
        var_currentLLVMAddressVar_9720 = function_llvmNameForLocalVariable (extractedValue_omnibusName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 265)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
        const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_11190 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_entity_10090.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_type = extractPtr_11190->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_omnibusName = extractPtr_11190->mAssociatedValue1 ;
        var_currentType_9688 = extractedValue_type ;
        var_currentLLVMAddressVar_9720 = function_llvmNameForGlobalSyncInstance (extractedValue_omnibusName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 268)) ;
      }
      break ;
    }
  }
  GALGAS_propertyGetterMap var_currentObjectPropertyMap_11287 = var_currentType_9688.getter_propertyGetterMap (HERE) ;
  GALGAS_accessInAssignmentListAST var_accessList_11408 = object->mProperty_mAccessList ;
  GALGAS_accessInAssignmentAST var_lastAccess_11462 ;
  {
  var_accessList_11408.setter_popLast (var_lastAccess_11462, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 275)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_11517 (var_accessList_11408, kENUMERATION_UP) ;
  while (enumerator_11517.hasCurrentObject ()) {
    switch (enumerator_11517.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_13067 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_11517.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_13067->mAssociatedValue0 ;
        GALGAS_bool var_isPublic_11681 ;
        GALGAS_propertyGetterKind var_propertyAccess_11729 ;
        var_currentObjectPropertyMap_11287.method_searchKey (extractedValue_propertyName, var_isPublic_11681, var_propertyAccess_11729, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 280)) ;
        switch (var_propertyAccess_11729.enumValue ()) {
        case GALGAS_propertyGetterKind::kNotBuilt:
          break ;
        case GALGAS_propertyGetterKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 287)), GALGAS_string ("a context property cannot be used in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 287)) ;
            var_currentType_9688.drop () ; // Release error dropped variable
            var_currentLLVMAddressVar_9720.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_storedProperty:
          {
            const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_12443 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_propertyAccess_11729.unsafePointer ()) ;
            const GALGAS_omnibusType extractedValue_propertyType = extractPtr_12443->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_12443->mAssociatedValue1 ;
            GALGAS_string var_llvmPropertyName_12075 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmPropertyName_12075, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 291)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_9688, var_currentLLVMAddressVar_9720, var_llvmPropertyName_12075, extractedValue_propertyIndex, extractedValue_propertyName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 292)) ;
            }
            var_currentType_9688 = extractedValue_propertyType ;
            var_currentLLVMAddressVar_9720 = var_llvmPropertyName_12075 ;
            var_currentObjectPropertyMap_11287 = var_currentType_9688.getter_propertyGetterMap (HERE) ;
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_computedProperty:
          {
            const cEnumAssociatedValues_propertyGetterKind_computedProperty * extractPtr_13050 = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) (var_propertyAccess_11729.unsafePointer ()) ;
            const GALGAS_unifiedTypeMap_2D_proxy extractedValue_propertyTypeProxy = extractPtr_13050->mAssociatedValue0 ;
            const GALGAS_routineLLVMNameDict extractedValue_modeDictionary = extractPtr_13050->mAssociatedValue1 ;
            GALGAS_string var_routineLLVMName_12536 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_modeDictionary, constinArgument_inMode, extractedValue_propertyName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 303)) ;
            GALGAS_objectIR var_resultValueIR_12875 ;
            {
            extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, GALGAS_objectIR::constructor_reference (var_currentType_9688, var_currentLLVMAddressVar_9720  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 306)), var_routineLLVMName_12536, extractedValue_propertyTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 308)), var_resultValueIR_12875, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 304)) ;
            }
            var_currentType_9688 = extensionGetter_type (var_resultValueIR_12875, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 311)) ;
            var_currentLLVMAddressVar_9720 = extensionGetter_llvmName (var_resultValueIR_12875, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 312)) ;
            var_currentObjectPropertyMap_11287 = var_currentType_9688.getter_propertyGetterMap (HERE) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_13197 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_11517.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_13197->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("not handled yet"), fixItArray7  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 316)) ;
        var_currentType_9688.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9720.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_11517.gotoNextObject () ;
  }
  switch (var_lastAccess_11462.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_13356 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_11462.unsafePointer ()) ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_13356->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("a property is required here"), fixItArray8  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 322)) ;
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_15062 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_11462.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_methodName = extractPtr_15062->mAssociatedValue0 ;
      GALGAS_lstring var_methodMangledName_13422 = extensionGetter_mangledName (object->mProperty_mArguments, var_currentType_9688.getter_omnibusTypeDescriptionName (SOURCE_FILE ("instruction-procedure-call.galgas", 324)), extractedValue_methodName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 324)) ;
      GALGAS_bool var_implementedPublic_13633 ;
      GALGAS_routineTypedSignature var_formalSignature_13660 ;
      GALGAS_unifiedTypeMap_2D_proxy var_formalReturnTypeProxy_13693 ;
      GALGAS_routineLLVMNameDict var_implementedModeDictionary_13758 ;
      GALGAS_bool var_implementedIsExported_13798 ;
      GALGAS_mode var_implementedMode_13832 ;
      constinArgument_inContext.getter_mRoutineMap (HERE).method_searchKey (var_methodMangledName_13422, var_implementedPublic_13633, var_formalSignature_13660, var_formalReturnTypeProxy_13693, var_implementedModeDictionary_13758, var_implementedIsExported_13798, var_implementedMode_13832, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 325)) ;
      GALGAS_string var_functionLLVMName_13882 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_13758, constinArgument_inMode, extractedValue_methodName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 335)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, var_formalReturnTypeProxy_13693.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 337)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 338)), GALGAS_string ("cannot be called in instruction, returns a value"), fixItArray10  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 338)) ;
        }
      }
      GALGAS_procCallEffectiveParameterListIR temp_11 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 343)) ;
      temp_11.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-procedure-call.galgas", 342)), GALGAS_objectIR::constructor_reference (var_currentType_9688, var_currentLLVMAddressVar_9720  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 343))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 343)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14244 = temp_11 ;
      {
      routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_13660, object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_14244, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 346)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (GALGAS_objectIR::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 363)), var_methodMangledName_13422, var_functionLLVMName_13882, var_effectiveParameterListIR_14244  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 362))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 362)) ;
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
  cEnumerator_switchCaseListAST enumerator_2895 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_2895.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2895.current_mCaseInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 70)) ;
    enumerator_2895.gotoNextObject () ;
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
  GALGAS_classConstantMap var_enumConstantMap_4477 = extensionGetter_type (var_switchValueIR_4323, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)).getter_classConstantMap (HERE) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = extensionGetter_type (var_switchValueIR_4323, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 110)).getter_kind (HERE).getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 110)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 110)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_omnibusTypeDescriptionName (var_switchValueIR_4323, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)), fixItArray1  COMMA_SOURCE_FILE ("instruction-switch.galgas", 113)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_isStatic (var_switchValueIR_4323, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 118)) ;
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 121)) ;
  }
  GALGAS_stringset var_usedEnumerationValues_5058 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 122)) ;
  GALGAS_switchCaseListIR var_switchCaseListIR_5100 = GALGAS_switchCaseListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 123)) ;
  cEnumerator_switchCaseListAST enumerator_5164 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_5164.hasCurrentObject ()) {
    GALGAS_uintlist var_caseIdentifierIndexList_5205 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 125)) ;
    cEnumerator_lstringlist enumerator_5247 (enumerator_5164.current_mCaseIdentifiers (HERE), kENUMERATION_UP) ;
    while (enumerator_5247.hasCurrentObject ()) {
      GALGAS_bigint var_constantIdx_5317 ;
      GALGAS_lstring joker_5319_1 ; // Joker input parameter
      var_enumConstantMap_4477.method_searchKey (enumerator_5247.current_mValue (HERE), var_constantIdx_5317, joker_5319_1, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 127)) ;
      var_caseIdentifierIndexList_5205.addAssign_operation (var_constantIdx_5317.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 128))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 128)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_usedEnumerationValues_5058.getter_hasKey (enumerator_5247.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 129)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 129)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          fixItArray5.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (enumerator_5247.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 130)), GALGAS_string ("duplicated enumeration constant"), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 130)) ;
        }
      }
      var_usedEnumerationValues_5058.addAssign_operation (enumerator_5247.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 132))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
      enumerator_5247.gotoNextObject () ;
    }
    GALGAS_instructionListIR var_instructionGenerationList_5604 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 134)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_5164.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, object->mProperty_mEndOf_5F_switch_5F_instruction, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_5604, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 135)) ;
    var_switchCaseListIR_5100.addAssign_operation (var_caseIdentifierIndexList_5205, var_instructionGenerationList_5604  COMMA_SOURCE_FILE ("instruction-switch.galgas", 147)) ;
    enumerator_5164.gotoNextObject () ;
  }
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 149)) ;
  }
  cEnumerator_classConstantMap enumerator_6268 (var_enumConstantMap_4477, kENUMERATION_UP) ;
  while (enumerator_6268.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_usedEnumerationValues_5058.getter_hasKey (enumerator_6268.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 152)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 152)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("missing '").add_operation (enumerator_6268.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 153)).add_operation (GALGAS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 153)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 153)) ;
      }
    }
    enumerator_6268.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_switchInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 158)), var_switchExpressionGenerationList_3933, var_switchValueIR_4323, var_switchCaseListIR_5100  COMMA_SOURCE_FILE ("instruction-switch.galgas", 157))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 157)) ;
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
  extensionMethod_instructionListLLVMCode (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 191)) ;
  GALGAS_string var_labelOtherwise_7937 = GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)).add_operation (GALGAS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)).add_operation (extensionGetter_llvmName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %").add_operation (var_labelOtherwise_7937, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)).add_operation (GALGAS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)) ;
  cEnumerator_switchCaseListIR enumerator_8187 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8138 ((uint32_t) 0) ;
  while (enumerator_8187.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_8250 (enumerator_8187.current_mCaseIdentifierIndexes (HERE), kENUMERATION_UP) ;
    while (enumerator_8250.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (enumerator_8250.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)).add_operation (index_8138.getter_string (SOURCE_FILE ("instruction-switch.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)) ;
      enumerator_8250.gotoNextObject () ;
    }
    enumerator_8187.gotoNextObject () ;
    index_8138.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ]\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)) ;
  cEnumerator_switchCaseListIR enumerator_8533 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8490 ((uint32_t) 0) ;
  while (enumerator_8533.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)).add_operation (index_8490.getter_string (SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
    extensionMethod_instructionListLLVMCode (enumerator_8533.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelOtherwise_7937, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 207)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 207)) ;
    enumerator_8533.gotoNextObject () ;
    index_8490.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_7937.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)) ;
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
                                                                         GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                         GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionIR * object = (const cPtr_switchInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 219)) ;
  cEnumerator_switchCaseListIR enumerator_9269 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  while (enumerator_9269.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_9269.current_mCaseInstructionList (HERE), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 221)) ;
    enumerator_9269.gotoNextObject () ;
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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'analyzeVariableInLValue'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'handlePropertyAccess'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_propertySetterMap var_propertySetterMap_11344 = ioArgument_ioCurrentType.getter_propertySetterMap (HERE) ;
  GALGAS_propertySetterKind var_propertyAccess_11468 ;
  GALGAS_bool joker_11427 ; // Joker input parameter
  var_propertySetterMap_11344.method_searchKey (constinArgument_inPropertyName, joker_11427, var_propertyAccess_11468, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 290)) ;
  switch (var_propertyAccess_11468.enumValue ()) {
  case GALGAS_propertySetterKind::kNotBuilt:
    break ;
  case GALGAS_propertySetterKind::kEnum_computedProperty:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 293)), GALGAS_string ("a computed property cannot be used here"), fixItArray0  COMMA_SOURCE_FILE ("lvalue.galgas", 293)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertySetterKind::kEnum_storedProperty:
    {
      const cEnumAssociatedValues_propertySetterKind_storedProperty * extractPtr_12415 = (const cEnumAssociatedValues_propertySetterKind_storedProperty *) (var_propertyAccess_11468.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_propertyType = extractPtr_12415->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_index = extractPtr_12415->mAssociatedValue1 ;
      GALGAS_string var_newLLVMvariable_11749 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_11749, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 295)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, var_newLLVMvariable_11749, extractedValue_index, constinArgument_inPropertyName.getter_string (SOURCE_FILE ("lvalue.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 296)) ;
      }
      ioArgument_ioCurrentType = extractedValue_propertyType ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_11749 ;
      {
      routine_handleNextOperand (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 305)) ;
      }
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'handleArrayAccess'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is ").add_operation (ioArgument_ioCurrentType.getter_omnibusTypeDescriptionName (SOURCE_FILE ("lvalue.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 344)).add_operation (GALGAS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 344)), fixItArray0  COMMA_SOURCE_FILE ("lvalue.galgas", 343)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is literal string and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 346)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_14860 = (const cEnumAssociatedValues_subscript_staticSubscript *) (ioArgument_ioCurrentType.getter_subscript (HERE).unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_elementType = extractPtr_14860->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_arraySize = extractPtr_14860->mAssociatedValue1 ;
      GALGAS_objectIR var_indexIR_14129 ;
      {
      routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_arraySize, extractedValue_elementType, ioArgument_ioInstructionGenerationList, var_indexIR_14129, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 350)) ;
      }
      GALGAS_string var_newLLVMvariable_14192 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_14192, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 367)) ;
      }
      {
      extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, extractedValue_elementType, var_newLLVMvariable_14192, var_indexIR_14129, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 368)) ;
      }
      ioArgument_ioCurrentType = extractedValue_elementType ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_14192 ;
      {
      routine_handleNextOperand (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 377)) ;
      }
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'analyzeSelfLValue'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_omnibusType var_currentType_15567 = constinArgument_inSelfType ;
  GALGAS_string var_currentLLVMName_15602 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 410)) ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_16131 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_16131->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_next = extractPtr_16131->mAssociatedValue1 ;
      {
      routine_handlePropertyAccess (constinArgument_inSelfType, var_currentType_15567, var_currentLLVMName_15602, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_name, extractedValue_next, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 414)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_16688 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_16688->mAssociatedValue0 ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_16688->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_checkIndexExpression = extractPtr_16688->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_nextOperand = extractPtr_16688->mAssociatedValue3 ;
      {
      routine_handleArrayAccess (constinArgument_inSelfType, var_currentType_15567, var_currentLLVMName_15602, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_indexExpression, extractedValue_endOfIndex, extractedValue_checkIndexExpression, extractedValue_nextOperand, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 430)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_new (var_currentType_15567, var_currentLLVMName_15602  COMMA_SOURCE_FILE ("lvalue.galgas", 448)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'handleNextOperand'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_17966 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_17966->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_next = extractPtr_17966->mAssociatedValue1 ;
      {
      routine_handlePropertyAccess (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_name, extractedValue_next, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 470)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_18527 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_18527->mAssociatedValue0 ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_18527->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_checkIndexExpression = extractPtr_18527->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_nextOperand = extractPtr_18527->mAssociatedValue3 ;
      {
      routine_handleArrayAccess (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_indexExpression, extractedValue_endOfIndex, extractedValue_checkIndexExpression, extractedValue_nextOperand, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 486)) ;
      }
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'analyzeEffectiveParameters'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_7827 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_5280.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_7827->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_7827->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_7328 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_5237.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 170)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7328, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 167)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_7328, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 180)) ;
        }
        GALGAS_objectIR var_result_7475 = function_checkAssignmentCompatibility (var_expressionResult_7328, enumerator_5237.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 186)), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 184)) ;
        var_parameterList_5194.addAssign_operation (enumerator_5280.current_mEffectiveParameterKind (HERE), enumerator_5280.current_mSelector (HERE), enumerator_5237.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 190))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 190)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("effective-parameters.galgas", 191)), var_result_7475  COMMA_SOURCE_FILE ("effective-parameters.galgas", 191)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_8227 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_5280.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_8227->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_7947 ;
        {
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, extractedValue_name, var_objectIR_7947, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 193)) ;
        }
        var_parameterList_5194.addAssign_operation (enumerator_5280.current_mEffectiveParameterKind (HERE), enumerator_5280.current_mSelector (HERE), extensionGetter_type (var_objectIR_7947, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 194))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 194)) ;
        GALGAS_objectIR var_argumentIR_8065 = GALGAS_objectIR::constructor_reference (extensionGetter_type (var_objectIR_7947, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 196)), extensionGetter_llvmName (var_objectIR_7947, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 197))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 195)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("effective-parameters.galgas", 199)), var_argumentIR_8065  COMMA_SOURCE_FILE ("effective-parameters.galgas", 199)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_9230 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_5280.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_9230->mAssociatedValue0 ;
        GALGAS_propertyGetterKind var_propertyAccess_8373 ;
        GALGAS_bool joker_8332 ; // Joker input parameter
        constinArgument_inSelfType.getter_propertyGetterMap (HERE).method_searchKey (extractedValue_name, joker_8332, var_propertyAccess_8373, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 201)) ;
        switch (var_propertyAccess_8373.enumValue ()) {
        case GALGAS_propertyGetterKind::kNotBuilt:
          break ;
        case GALGAS_propertyGetterKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a constant property cannot be used as output / input parameter"), fixItArray3  COMMA_SOURCE_FILE ("effective-parameters.galgas", 204)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_storedProperty:
          {
            const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_9088 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_propertyAccess_8373.unsafePointer ()) ;
            const GALGAS_omnibusType extractedValue_propertyType = extractPtr_9088->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_9088->mAssociatedValue1 ;
            GALGAS_string var_property_5F_llvmName_8672 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_8672, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 206)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 209)), var_property_5F_llvmName_8672, extractedValue_propertyIndex, extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 207)) ;
            }
            var_parameterList_5194.addAssign_operation (enumerator_5280.current_mEffectiveParameterKind (HERE), enumerator_5280.current_mSelector (HERE), extractedValue_propertyType  COMMA_SOURCE_FILE ("effective-parameters.galgas", 214)) ;
            ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("effective-parameters.galgas", 215)), GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_8672  COMMA_SOURCE_FILE ("effective-parameters.galgas", 215))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 215)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_computedProperty:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a computed property cannot be used as output / input parameter"), fixItArray4  COMMA_SOURCE_FILE ("effective-parameters.galgas", 217)) ;
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
    test_5 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("effective-parameters.galgas", 222)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("effective-parameters.galgas", 222)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("effective-parameters.galgas", 223)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 223)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 223)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("effective-parameters.galgas", 224)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 223)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 224)), fixItArray6  COMMA_SOURCE_FILE ("effective-parameters.galgas", 223)) ;
    }
  }
  if (kBoolFalse == test_5) {
    cEnumerator_routineTypedSignature enumerator_9566 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_9595 (var_parameterList_5194, kENUMERATION_UP) ;
    while (enumerator_9566.hasCurrentObject () && enumerator_9595.hasCurrentObject ()) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, enumerator_9566.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)).getter_omnibusTypeDescriptionName (HERE).objectCompare (enumerator_9595.current_mParameterType (HERE).getter_omnibusTypeDescriptionName (HERE))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_9595.current_mSelector (HERE).getter_location (SOURCE_FILE ("effective-parameters.galgas", 228)), GALGAS_string ("the actual parameter type is $").add_operation (enumerator_9595.current_mParameterType (HERE).getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 228)).add_operation (GALGAS_string (", and is incompatible with the formal type $"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 228)).add_operation (enumerator_9566.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 229)), fixItArray8  COMMA_SOURCE_FILE ("effective-parameters.galgas", 228)) ;
        }
      }
      GALGAS_string var_requiredPassingMode_9959 = extensionGetter_requiredActualPassingModeForSelector (enumerator_9566.current_mFormalArgumentPassingMode (HERE), enumerator_9566.current_mSelector (HERE).getter_string (SOURCE_FILE ("effective-parameters.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 231)) ;
      GALGAS_string var_testedPassingMode_10080 = extensionGetter_passingModeForActualSelector (enumerator_9595.current_mEffectiveParameterPassingMode (HERE), enumerator_9595.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 232)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_9959.objectCompare (var_testedPassingMode_10080)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_9595.current_mSelector (HERE).getter_location (SOURCE_FILE ("effective-parameters.galgas", 234)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_9959, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 234)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 234)), fixItArray10  COMMA_SOURCE_FILE ("effective-parameters.galgas", 234)) ;
        }
      }
      enumerator_9566.gotoNextObject () ;
      enumerator_9595.gotoNextObject () ;
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
//                                     Function 'registerGroupNameFromOmnibusName'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_registerGroupNameFromOmnibusName (const GALGAS_lstring & constinArgument_inName,
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

static const C_galgas_type_descriptor * functionArgs_registerGroupNameFromOmnibusName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_registerGroupNameFromOmnibusName ("registerGroupNameFromOmnibusName",
                                                                                  functionWithGenericHeader_registerGroupNameFromOmnibusName,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_registerGroupNameFromOmnibusName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'literalStringName'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_literalStringName (const GALGAS_uint & constinArgument_inIndex,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@string.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 26)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_literalStringName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_literalStringName ("literalStringName",
                                                                   functionWithGenericHeader_literalStringName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_literalStringName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'literalCharacterArrayName'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_literalCharacterArrayName (const GALGAS_uint & constinArgument_inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@str.array.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 32)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_literalCharacterArrayName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_literalCharacterArrayName ("literalCharacterArrayName",
                                                                           functionWithGenericHeader_literalCharacterArrayName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_literalCharacterArrayName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Once function 'assignmentPrefix'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_assignmentPrefix (C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("assign.from.ref.") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_assignmentPrefix = false ;
static GALGAS_string gOnceFunctionResult_assignmentPrefix ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_assignmentPrefix (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_assignmentPrefix) {
    gOnceFunctionResult_assignmentPrefix = onceFunction_assignmentPrefix (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_assignmentPrefix = true ;
  }
  return gOnceFunctionResult_assignmentPrefix ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_assignmentPrefix (void) {
  gOnceFunctionResult_assignmentPrefix.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_assignmentPrefix (NULL,
                                                              releaseOnceFunctionResult_assignmentPrefix) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_assignmentPrefix [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_assignmentPrefix (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_assignmentPrefix (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_assignmentPrefix ("assignmentPrefix",
                                                                  functionWithGenericHeader_assignmentPrefix,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  0,
                                                                  functionArgs_assignmentPrefix) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Once function 'staticStringTypeName'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_staticStringTypeName (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("literalString") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_staticStringTypeName = false ;
static GALGAS_string gOnceFunctionResult_staticStringTypeName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_staticStringTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticStringTypeName) {
    gOnceFunctionResult_staticStringTypeName = onceFunction_staticStringTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticStringTypeName = true ;
  }
  return gOnceFunctionResult_staticStringTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_staticStringTypeName (void) {
  gOnceFunctionResult_staticStringTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_staticStringTypeName (NULL,
                                                                  releaseOnceFunctionResult_staticStringTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_staticStringTypeName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_staticStringTypeName (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_staticStringTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_staticStringTypeName ("staticStringTypeName",
                                                                      functionWithGenericHeader_staticStringTypeName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      0,
                                                                      functionArgs_staticStringTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Once function 'staticIntegerTypeName'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_staticIntegerTypeName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("literalInt") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_staticIntegerTypeName = false ;
static GALGAS_string gOnceFunctionResult_staticIntegerTypeName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_staticIntegerTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticIntegerTypeName) {
    gOnceFunctionResult_staticIntegerTypeName = onceFunction_staticIntegerTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticIntegerTypeName = true ;
  }
  return gOnceFunctionResult_staticIntegerTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_staticIntegerTypeName (void) {
  gOnceFunctionResult_staticIntegerTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_staticIntegerTypeName (NULL,
                                                                   releaseOnceFunctionResult_staticIntegerTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_staticIntegerTypeName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_staticIntegerTypeName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_staticIntegerTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_staticIntegerTypeName ("staticIntegerTypeName",
                                                                       functionWithGenericHeader_staticIntegerTypeName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_staticIntegerTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Once function 'functionResultVariableName'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_functionResultVariableName (C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("result") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_functionResultVariableName = false ;
static GALGAS_string gOnceFunctionResult_functionResultVariableName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_functionResultVariableName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_functionResultVariableName) {
    gOnceFunctionResult_functionResultVariableName = onceFunction_functionResultVariableName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_functionResultVariableName = true ;
  }
  return gOnceFunctionResult_functionResultVariableName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_functionResultVariableName (void) {
  gOnceFunctionResult_functionResultVariableName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_functionResultVariableName (NULL,
                                                                        releaseOnceFunctionResult_functionResultVariableName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_functionResultVariableName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_functionResultVariableName (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_functionResultVariableName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_functionResultVariableName ("functionResultVariableName",
                                                                            functionWithGenericHeader_functionResultVariableName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            0,
                                                                            functionArgs_functionResultVariableName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Function 'llvmNameForFunction'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmNameForFunction (const GALGAS_string & constinArgument_inName,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 68)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForFunction [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForFunction ("llvmNameForFunction",
                                                                     functionWithGenericHeader_llvmNameForFunction,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_llvmNameForFunction) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Function 'getterLLVMName'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_getterLLVMName (GALGAS_string inArgument_inReceiverLLVMTypeName,
                                       const GALGAS_string & constinArgument_inPropertyName,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("get.").add_operation (inArgument_inReceiverLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 76)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 76)).add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 76)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_getterLLVMName [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_getterLLVMName ("getterLLVMName",
                                                                functionWithGenericHeader_getterLLVMName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                2,
                                                                functionArgs_getterLLVMName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Function 'setterLLVMName'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_setterLLVMName (GALGAS_string inArgument_inReceiverLLVMTypeName,
                                       const GALGAS_string & constinArgument_inPropertyName,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("set.").add_operation (inArgument_inReceiverLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 84)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 84)).add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 84)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_setterLLVMName [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_setterLLVMName ("setterLLVMName",
                                                                functionWithGenericHeader_setterLLVMName,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                2,
                                                                functionArgs_setterLLVMName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'llvmNameForServiceInterrupt'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring function_llvmNameForServiceInterrupt (const GALGAS_lstring & constinArgument_inName,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("interrupt.service.").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 92)), constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 92)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceInterrupt [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceInterrupt ("llvmNameForServiceInterrupt",
                                                                             functionWithGenericHeader_llvmNameForServiceInterrupt,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             1,
                                                                             functionArgs_llvmNameForServiceInterrupt) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'llvmNameForSectionInterrupt'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmNameForSectionInterrupt (const GALGAS_string & constinArgument_inName,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("interrupt.section.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 98)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionInterrupt [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionInterrupt ("llvmNameForSectionInterrupt",
                                                                             functionWithGenericHeader_llvmNameForSectionInterrupt,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             1,
                                                                             functionArgs_llvmNameForSectionInterrupt) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'llvmNameForServiceCall'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmNameForServiceCall (const GALGAS_string & constinArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("service.user.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 106)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 106)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceCall ("llvmNameForServiceCall",
                                                                        functionWithGenericHeader_llvmNameForServiceCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForServiceCall) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'llvmNameForServiceImplementation'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmNameForServiceImplementation (const GALGAS_string & constinArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("service.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 112)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 112)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceImplementation ("llvmNameForServiceImplementation",
                                                                                  functionWithGenericHeader_llvmNameForServiceImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForServiceImplementation) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'llvmNameForSectionCall'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmNameForSectionCall (const GALGAS_string & constinArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("section.user.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 120)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 120)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionCall ("llvmNameForSectionCall",
                                                                        functionWithGenericHeader_llvmNameForSectionCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForSectionCall) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'llvmNameForSectionImplementation'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmNameForSectionImplementation (const GALGAS_string & constinArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("section.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 126)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 126)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionImplementation ("llvmNameForSectionImplementation",
                                                                                  functionWithGenericHeader_llvmNameForSectionImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForSectionImplementation) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Once function 'acceptVariableOmnibusName'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_acceptVariableOmnibusName (C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("accept") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_acceptVariableOmnibusName = false ;
static GALGAS_string gOnceFunctionResult_acceptVariableOmnibusName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_acceptVariableOmnibusName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_acceptVariableOmnibusName) {
    gOnceFunctionResult_acceptVariableOmnibusName = onceFunction_acceptVariableOmnibusName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_acceptVariableOmnibusName = true ;
  }
  return gOnceFunctionResult_acceptVariableOmnibusName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_acceptVariableOmnibusName (void) {
  gOnceFunctionResult_acceptVariableOmnibusName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_acceptVariableOmnibusName (NULL,
                                                                       releaseOnceFunctionResult_acceptVariableOmnibusName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_acceptVariableOmnibusName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_acceptVariableOmnibusName (C_Compiler * inCompiler,
                                                                          const cObjectArray & /* inEffectiveParameterArray */,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  return function_acceptVariableOmnibusName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_acceptVariableOmnibusName ("acceptVariableOmnibusName",
                                                                           functionWithGenericHeader_acceptVariableOmnibusName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           0,
                                                                           functionArgs_acceptVariableOmnibusName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Once function 'waitForGuardChangeFunctionName'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_waitForGuardChangeFunctionName (C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("guard.wait.for.change") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = false ;
static GALGAS_string gOnceFunctionResult_waitForGuardChangeFunctionName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_waitForGuardChangeFunctionName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_waitForGuardChangeFunctionName) {
    gOnceFunctionResult_waitForGuardChangeFunctionName = onceFunction_waitForGuardChangeFunctionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = true ;
  }
  return gOnceFunctionResult_waitForGuardChangeFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_waitForGuardChangeFunctionName (void) {
  gOnceFunctionResult_waitForGuardChangeFunctionName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_waitForGuardChangeFunctionName (NULL,
                                                                            releaseOnceFunctionResult_waitForGuardChangeFunctionName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_waitForGuardChangeFunctionName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_waitForGuardChangeFunctionName (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_waitForGuardChangeFunctionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_waitForGuardChangeFunctionName ("waitForGuardChangeFunctionName",
                                                                                functionWithGenericHeader_waitForGuardChangeFunctionName,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                0,
                                                                                functionArgs_waitForGuardChangeFunctionName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Function 'llvmNameForLocalVariable'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmNameForLocalVariable (const GALGAS_string & constinArgument_inName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("%").add_operation (GALGAS_string ("var.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForLocalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForLocalVariable ("llvmNameForLocalVariable",
                                                                          functionWithGenericHeader_llvmNameForLocalVariable,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          1,
                                                                          functionArgs_llvmNameForLocalVariable) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Once function 'llvmNameForSelf'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_llvmNameForSelf (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("%self") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_llvmNameForSelf = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForSelf ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmNameForSelf (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForSelf) {
    gOnceFunctionResult_llvmNameForSelf = onceFunction_llvmNameForSelf (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForSelf = true ;
  }
  return gOnceFunctionResult_llvmNameForSelf ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_llvmNameForSelf (void) {
  gOnceFunctionResult_llvmNameForSelf.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmNameForSelf (NULL,
                                                             releaseOnceFunctionResult_llvmNameForSelf) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSelf [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmNameForSelf (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_llvmNameForSelf (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForSelf ("llvmNameForSelf",
                                                                 functionWithGenericHeader_llvmNameForSelf,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_llvmNameForSelf) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'llvmNameForGlobalVariable'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmNameForGlobalVariable (const GALGAS_string & constinArgument_inName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@gvar.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 160)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForGlobalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForGlobalVariable ("llvmNameForGlobalVariable",
                                                                           functionWithGenericHeader_llvmNameForGlobalVariable,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_llvmNameForGlobalVariable) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Function 'llvmNameForGlobalSyncInstance'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmNameForGlobalSyncInstance (const GALGAS_string & constinArgument_inName,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@gsync.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 166)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForGlobalSyncInstance [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForGlobalSyncInstance ("llvmNameForGlobalSyncInstance",
                                                                               functionWithGenericHeader_llvmNameForGlobalSyncInstance,
                                                                               & kTypeDescriptor_GALGAS_string,
                                                                               1,
                                                                               functionArgs_llvmNameForGlobalSyncInstance) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Once function 'instantiableAttribute'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_instantiableAttribute (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("instantiable") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_instantiableAttribute = false ;
static GALGAS_string gOnceFunctionResult_instantiableAttribute ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_instantiableAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_instantiableAttribute) {
    gOnceFunctionResult_instantiableAttribute = onceFunction_instantiableAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_instantiableAttribute = true ;
  }
  return gOnceFunctionResult_instantiableAttribute ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_instantiableAttribute (void) {
  gOnceFunctionResult_instantiableAttribute.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_instantiableAttribute (NULL,
                                                                   releaseOnceFunctionResult_instantiableAttribute) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_instantiableAttribute [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_instantiableAttribute (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_instantiableAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_instantiableAttribute ("instantiableAttribute",
                                                                       functionWithGenericHeader_instantiableAttribute,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_instantiableAttribute) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Once function 'copyableAttribute'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_copyableAttribute (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("copyable") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_copyableAttribute = false ;
static GALGAS_string gOnceFunctionResult_copyableAttribute ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_copyableAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_copyableAttribute) {
    gOnceFunctionResult_copyableAttribute = onceFunction_copyableAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_copyableAttribute = true ;
  }
  return gOnceFunctionResult_copyableAttribute ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_copyableAttribute (void) {
  gOnceFunctionResult_copyableAttribute.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_copyableAttribute (NULL,
                                                               releaseOnceFunctionResult_copyableAttribute) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_copyableAttribute [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_copyableAttribute (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_copyableAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_copyableAttribute ("copyableAttribute",
                                                                   functionWithGenericHeader_copyableAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_copyableAttribute) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Once function 'mutatingAttribute'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_mutatingAttribute (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("mutating") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_mutatingAttribute = false ;
static GALGAS_string gOnceFunctionResult_mutatingAttribute ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_mutatingAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_mutatingAttribute) {
    gOnceFunctionResult_mutatingAttribute = onceFunction_mutatingAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_mutatingAttribute = true ;
  }
  return gOnceFunctionResult_mutatingAttribute ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_mutatingAttribute (void) {
  gOnceFunctionResult_mutatingAttribute.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_mutatingAttribute (NULL,
                                                               releaseOnceFunctionResult_mutatingAttribute) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_mutatingAttribute [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_mutatingAttribute (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_mutatingAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_mutatingAttribute ("mutatingAttribute",
                                                                   functionWithGenericHeader_mutatingAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_mutatingAttribute) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Once function 'userAttributeForRegister'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_userAttributeForRegister (C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("user") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_userAttributeForRegister = false ;
static GALGAS_string gOnceFunctionResult_userAttributeForRegister ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_userAttributeForRegister (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_userAttributeForRegister) {
    gOnceFunctionResult_userAttributeForRegister = onceFunction_userAttributeForRegister (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_userAttributeForRegister = true ;
  }
  return gOnceFunctionResult_userAttributeForRegister ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_userAttributeForRegister (void) {
  gOnceFunctionResult_userAttributeForRegister.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_userAttributeForRegister (NULL,
                                                                      releaseOnceFunctionResult_userAttributeForRegister) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_userAttributeForRegister [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_userAttributeForRegister (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_userAttributeForRegister (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_userAttributeForRegister ("userAttributeForRegister",
                                                                          functionWithGenericHeader_userAttributeForRegister,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          0,
                                                                          functionArgs_userAttributeForRegister) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Once function 'noUnusedWarningAttribute'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_noUnusedWarningAttribute (C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("noUnusedWarning") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_noUnusedWarningAttribute = false ;
static GALGAS_string gOnceFunctionResult_noUnusedWarningAttribute ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_noUnusedWarningAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_noUnusedWarningAttribute) {
    gOnceFunctionResult_noUnusedWarningAttribute = onceFunction_noUnusedWarningAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_noUnusedWarningAttribute = true ;
  }
  return gOnceFunctionResult_noUnusedWarningAttribute ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_noUnusedWarningAttribute (void) {
  gOnceFunctionResult_noUnusedWarningAttribute.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_noUnusedWarningAttribute (NULL,
                                                                      releaseOnceFunctionResult_noUnusedWarningAttribute) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_noUnusedWarningAttribute [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_noUnusedWarningAttribute (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_noUnusedWarningAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_noUnusedWarningAttribute ("noUnusedWarningAttribute",
                                                                          functionWithGenericHeader_noUnusedWarningAttribute,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          0,
                                                                          functionArgs_noUnusedWarningAttribute) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Once function 'exportedAttribute'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_exportedAttribute (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("exported") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_exportedAttribute = false ;
static GALGAS_string gOnceFunctionResult_exportedAttribute ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_exportedAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_exportedAttribute) {
    gOnceFunctionResult_exportedAttribute = onceFunction_exportedAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_exportedAttribute = true ;
  }
  return gOnceFunctionResult_exportedAttribute ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_exportedAttribute (void) {
  gOnceFunctionResult_exportedAttribute.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_exportedAttribute (NULL,
                                                               releaseOnceFunctionResult_exportedAttribute) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_exportedAttribute [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_exportedAttribute (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_exportedAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_exportedAttribute ("exportedAttribute",
                                                                   functionWithGenericHeader_exportedAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_exportedAttribute) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Function 'stackNameForTask'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_stackNameForTask (const GALGAS_string & constinArgument_inTaskName,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.stack.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 212)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 212)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_stackNameForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_stackNameForTask ("stackNameForTask",
                                                                  functionWithGenericHeader_stackNameForTask,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  1,
                                                                  functionArgs_stackNameForTask) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Function 'setupNameForTaskType'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_setupNameForTaskType (const GALGAS_string & constinArgument_inTaskTypeName,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.setup.").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 218)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 218)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_setupNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_setupNameForTaskType ("setupNameForTaskType",
                                                                      functionWithGenericHeader_setupNameForTaskType,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      1,
                                                                      functionArgs_setupNameForTaskType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Function 'activateNameForTaskType'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_activateNameForTaskType (const GALGAS_string & constinArgument_inTaskTypeName,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("task.activate.").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 224)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_activateNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_activateNameForTaskType ("activateNameForTaskType",
                                                                         functionWithGenericHeader_activateNameForTaskType,
                                                                         & kTypeDescriptor_GALGAS_string,
                                                                         1,
                                                                         functionArgs_activateNameForTaskType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Function 'deactivateNameForTaskType'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_deactivateNameForTaskType (const GALGAS_string & constinArgument_inTaskTypeName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.deactivate.").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 230)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 230)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_deactivateNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_deactivateNameForTaskType ("deactivateNameForTaskType",
                                                                           functionWithGenericHeader_deactivateNameForTaskType,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_deactivateNameForTaskType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Function 'stackAddressForTask'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_stackAddressForTask (const GALGAS_string & constinArgument_inTaskName,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("%").add_operation (GALGAS_string ("task.stack.address.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 236)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 236)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_stackAddressForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_stackAddressForTask ("stackAddressForTask",
                                                                     functionWithGenericHeader_stackAddressForTask,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_stackAddressForTask) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'mainRoutineNameForTask'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_mainRoutineNameForTask (const GALGAS_string & constinArgument_inTaskName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.main.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 242)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 242)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_mainRoutineNameForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_mainRoutineNameForTask ("mainRoutineNameForTask",
                                                                        functionWithGenericHeader_mainRoutineNameForTask,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_mainRoutineNameForTask) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Once function 'llvmNameForTaskLoopFunction'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_llvmNameForTaskLoopFunction (C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("task.loop") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForTaskLoopFunction ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmNameForTaskLoopFunction (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction) {
    gOnceFunctionResult_llvmNameForTaskLoopFunction = onceFunction_llvmNameForTaskLoopFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskLoopFunction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_llvmNameForTaskLoopFunction (void) {
  gOnceFunctionResult_llvmNameForTaskLoopFunction.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskLoopFunction (NULL,
                                                                         releaseOnceFunctionResult_llvmNameForTaskLoopFunction) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskLoopFunction [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmNameForTaskLoopFunction (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskLoopFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskLoopFunction ("llvmNameForTaskLoopFunction",
                                                                             functionWithGenericHeader_llvmNameForTaskLoopFunction,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             0,
                                                                             functionArgs_llvmNameForTaskLoopFunction) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Once function 'llvmNameForTaskWaitsForActivation'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_llvmNameForTaskWaitsForActivation (C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("xtr.wait.for.activation") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_llvmNameForTaskWaitsForActivation = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForTaskWaitsForActivation ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmNameForTaskWaitsForActivation (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskWaitsForActivation) {
    gOnceFunctionResult_llvmNameForTaskWaitsForActivation = onceFunction_llvmNameForTaskWaitsForActivation (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskWaitsForActivation = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskWaitsForActivation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_llvmNameForTaskWaitsForActivation (void) {
  gOnceFunctionResult_llvmNameForTaskWaitsForActivation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskWaitsForActivation (NULL,
                                                                               releaseOnceFunctionResult_llvmNameForTaskWaitsForActivation) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskWaitsForActivation [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmNameForTaskWaitsForActivation (C_Compiler * inCompiler,
                                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskWaitsForActivation ("llvmNameForTaskWaitsForActivation",
                                                                                   functionWithGenericHeader_llvmNameForTaskWaitsForActivation,
                                                                                   & kTypeDescriptor_GALGAS_string,
                                                                                   0,
                                                                                   functionArgs_llvmNameForTaskWaitsForActivation) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Once function 'llvmNameForActivateTask'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_llvmNameForActivateTask (C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("xtr.activate.task") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_llvmNameForActivateTask = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForActivateTask ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmNameForActivateTask (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForActivateTask) {
    gOnceFunctionResult_llvmNameForActivateTask = onceFunction_llvmNameForActivateTask (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForActivateTask = true ;
  }
  return gOnceFunctionResult_llvmNameForActivateTask ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_llvmNameForActivateTask (void) {
  gOnceFunctionResult_llvmNameForActivateTask.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmNameForActivateTask (NULL,
                                                                     releaseOnceFunctionResult_llvmNameForActivateTask) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmNameForActivateTask [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmNameForActivateTask (C_Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_llvmNameForActivateTask (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmNameForActivateTask ("llvmNameForActivateTask",
                                                                         functionWithGenericHeader_llvmNameForActivateTask,
                                                                         & kTypeDescriptor_GALGAS_string,
                                                                         0,
                                                                         functionArgs_llvmNameForActivateTask) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Once function 'memoryAllocSectionName'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_memoryAllocSectionName (C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("heap.memory.alloc") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_memoryAllocSectionName = false ;
static GALGAS_string gOnceFunctionResult_memoryAllocSectionName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_memoryAllocSectionName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_memoryAllocSectionName) {
    gOnceFunctionResult_memoryAllocSectionName = onceFunction_memoryAllocSectionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_memoryAllocSectionName = true ;
  }
  return gOnceFunctionResult_memoryAllocSectionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_memoryAllocSectionName (void) {
  gOnceFunctionResult_memoryAllocSectionName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_memoryAllocSectionName (NULL,
                                                                    releaseOnceFunctionResult_memoryAllocSectionName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_memoryAllocSectionName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_memoryAllocSectionName (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_memoryAllocSectionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_memoryAllocSectionName ("memoryAllocSectionName",
                                                                        functionWithGenericHeader_memoryAllocSectionName,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        0,
                                                                        functionArgs_memoryAllocSectionName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Once function 'memoryFreeSectionName'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_memoryFreeSectionName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("heap.memory.free") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_memoryFreeSectionName = false ;
static GALGAS_string gOnceFunctionResult_memoryFreeSectionName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_memoryFreeSectionName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_memoryFreeSectionName) {
    gOnceFunctionResult_memoryFreeSectionName = onceFunction_memoryFreeSectionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_memoryFreeSectionName = true ;
  }
  return gOnceFunctionResult_memoryFreeSectionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_memoryFreeSectionName (void) {
  gOnceFunctionResult_memoryFreeSectionName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_memoryFreeSectionName (NULL,
                                                                   releaseOnceFunctionResult_memoryFreeSectionName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_memoryFreeSectionName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_memoryFreeSectionName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_memoryFreeSectionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_memoryFreeSectionName ("memoryFreeSectionName",
                                                                       functionWithGenericHeader_memoryFreeSectionName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_memoryFreeSectionName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Function 'registerGroupAddressArrayLLVMname'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_registerGroupAddressArrayLLVMname (const GALGAS_string & constinArgument_inGroupName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@register.group.array.").add_operation (constinArgument_inGroupName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 281)) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_registerGroupAddressArrayLLVMname [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_registerGroupAddressArrayLLVMname ("registerGroupAddressArrayLLVMname",
                                                                                   functionWithGenericHeader_registerGroupAddressArrayLLVMname,
                                                                                   & kTypeDescriptor_GALGAS_string,
                                                                                   1,
                                                                                   functionArgs_registerGroupAddressArrayLLVMname) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Overriding extension method '@nopIR llvmInstructionCode'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_nopIR_llvmInstructionCode (const cPtr_abstractInstructionIR * /* inObject */,
                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                       const GALGAS_generationContext constinArgument_inGenerationContext,
                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inGenerationContext.getter_mNopInstructionInLLVM (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-nop.galgas", 18)).add_operation (GALGAS_string (" ; NOP instruction in LLVM\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-nop.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("intermediate-nop.galgas", 18)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_nopIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_nopIR.mSlotID,
                                            extensionMethod_nopIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_nopIR_llvmInstructionCode (defineExtensionMethod_nopIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Overriding extension method '@extendIR llvmInstructionCode'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_extendIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_extendIR.mSlotID,
                                            extensionMethod_extendIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_extendIR_llvmInstructionCode (defineExtensionMethod_extendIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Overriding extension method '@truncIR llvmInstructionCode'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_truncIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_truncIR.mSlotID,
                                            extensionMethod_truncIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_truncIR_llvmInstructionCode (defineExtensionMethod_truncIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Overriding extension method '@boolToUIntIR llvmInstructionCode'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_boolToUIntIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_boolToUIntIR.mSlotID,
                                            extensionMethod_boolToUIntIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_boolToUIntIR_llvmInstructionCode (defineExtensionMethod_boolToUIntIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Overriding extension method '@leftShiftIR llvmInstructionCode'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_leftShiftIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_leftShiftIR.mSlotID,
                                            extensionMethod_leftShiftIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_leftShiftIR_llvmInstructionCode (defineExtensionMethod_leftShiftIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@logicalRightShiftIR llvmInstructionCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_logicalRightShiftIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_logicalRightShiftIR.mSlotID,
                                            extensionMethod_logicalRightShiftIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_logicalRightShiftIR_llvmInstructionCode (defineExtensionMethod_logicalRightShiftIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@binaryOperationIR enterAccessibleEntities'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_binaryOperationIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                                extensionMethod_binaryOperationIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_binaryOperationIR_enterAccessibleEntities (defineExtensionMethod_binaryOperationIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@binaryOperationIR llvmInstructionCode'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_binaryOperationIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                            extensionMethod_binaryOperationIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_binaryOperationIR_llvmInstructionCode (defineExtensionMethod_binaryOperationIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@shortCircuitAndOperationIR enterAccessibleEntities'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_shortCircuitAndOperationIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_shortCircuitAndOperationIR.mSlotID,
                                                extensionMethod_shortCircuitAndOperationIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_shortCircuitAndOperationIR_enterAccessibleEntities (defineExtensionMethod_shortCircuitAndOperationIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@shortCircuitAndOperationIR llvmInstructionCode'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_shortCircuitAndOperationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                            GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_shortCircuitAndOperationIR * object = (const cPtr_shortCircuitAndOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_shortCircuitAndOperationIR) ;
  GALGAS_string var_startLabel_1738 = GALGAS_string ("and.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)) ;
  GALGAS_string var_trueLabel_1803 = GALGAS_string ("and.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)) ;
  GALGAS_string var_falseLabel_1868 = GALGAS_string ("and.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_1738, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_1738.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mLeftInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 54)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (var_trueLabel_1803, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (var_falseLabel_1868, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_trueLabel_1803.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mRightInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_falseLabel_1868, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_falseLabel_1868.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 59)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string (" = phi i1 ["), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (extensionGetter_llvmName (object->mProperty_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (var_trueLabel_1803, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string ("], [false, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (var_startLabel_1738, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_shortCircuitAndOperationIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_shortCircuitAndOperationIR.mSlotID,
                                            extensionMethod_shortCircuitAndOperationIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_shortCircuitAndOperationIR_llvmInstructionCode (defineExtensionMethod_shortCircuitAndOperationIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@loadFromReferenceIR llvmInstructionCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_loadFromReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadFromReferenceIR.mSlotID,
                                            extensionMethod_loadFromReferenceIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_loadFromReferenceIR_llvmInstructionCode (defineExtensionMethod_loadFromReferenceIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@storeToUniversalReferenceIR enterAccessibleEntities'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * extractPtr_1309 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_value = extractPtr_1309->mAssociatedValue2 ;
      GALGAS_string var_llvmAssignRoutineName_1167 = function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)).add_operation (extensionGetter_type (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)).getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)).add_operation (extensionGetter_type (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)).getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)) ;
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
      const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * extractPtr_1713 = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_operands = extractPtr_1713->mAssociatedValue1 ;
      cEnumerator_operandIRList enumerator_1477 (extractedValue_operands, kENUMERATION_UP) ;
      while (enumerator_1477.hasCurrentObject ()) {
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = extensionGetter_isStatic (enumerator_1477.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 40)).operator_not (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 40)).boolEnum () ;
          if (kBoolTrue == test_0) {
            GALGAS_string var_llvmAssignRoutineName_1549 = function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)).add_operation (extensionGetter_type (enumerator_1477.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)).getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)).add_operation (extensionGetter_type (enumerator_1477.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)).getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)) ;
            ioArgument_ioInvokedRoutineSet.addAssign_operation (var_llvmAssignRoutineName_1549  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 42)) ;
          }
        }
        enumerator_1477.gotoNextObject () ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_storeToUniversalReferenceIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeToUniversalReferenceIR.mSlotID,
                                                extensionMethod_storeToUniversalReferenceIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_storeToUniversalReferenceIR_enterAccessibleEntities (defineExtensionMethod_storeToUniversalReferenceIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@storeToUniversalReferenceIR llvmInstructionCode'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_storeToUniversalReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                             GALGAS_string & ioArgument_ioLLVMcode,
                                                                             const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                             GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeToUniversalReferenceIR * object = (const cPtr_storeToUniversalReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeToUniversalReferenceIR) ;
  GALGAS_string var_llvmType_2087 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mTargetVarType.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 57)) ;
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
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_2087, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)).add_operation (GALGAS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)).add_operation (var_llvmType_2087, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("<< ERROR @storeToUniversalReferenceIR llvmInstructionCode reference >>\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 64)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmValue:
    {
      const cEnumAssociatedValues_objectIR_llvmValue * extractPtr_2629 = (const cEnumAssociatedValues_objectIR_llvmValue *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_string extractedValue_llvmName = extractPtr_2629->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_2087, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (extractedValue_llvmName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (var_llvmType_2087, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_2780 = (const cEnumAssociatedValues_objectIR_literalInteger *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_2780->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_2087, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)).add_operation (extractedValue_value.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)).add_operation (var_llvmType_2087, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 68)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureValue * extractPtr_3321 = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_operands = extractPtr_3321->mAssociatedValue1 ;
      cEnumerator_sortedOperandIRList enumerator_2876 (extractedValue_operands, kENUMERATION_UP) ;
      while (enumerator_2876.hasCurrentObject ()) {
        GALGAS_string var_tempVar_2897 = GALGAS_string ("%temp.addr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 71)) ;
        ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 72)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempVar_2897, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)).add_operation (var_llvmType_2087, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)).add_operation (var_llvmType_2087, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 74)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 74)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 74)).add_operation (enumerator_2876.current_mIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 74)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 74)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)) ;
        GALGAS_string var_valueType_3178 = extensionGetter_llvmTypeName (enumerator_2876.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 75)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_valueType_3178, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)).add_operation (extensionGetter_llvmName (enumerator_2876.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)).add_operation (var_valueType_3178, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)).add_operation (var_tempVar_2897, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)) ;
        enumerator_2876.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * extractPtr_5118 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_type = extractPtr_5118->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_size = extractPtr_5118->mAssociatedValue1 ;
      const GALGAS_objectIR extractedValue_value = extractPtr_5118->mAssociatedValue2 ;
      GALGAS_string var_indexVarName_3399 = GALGAS_string ("%index.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 79)) ;
      GALGAS_string var_nextIndexVarName_3468 = GALGAS_string ("%index.next.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 80)) ;
      GALGAS_string var_ptrVarName_3536 = GALGAS_string ("%element.ptr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 81)) ;
      GALGAS_string var_loopTestName_3607 = GALGAS_string ("%continue.loop.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 82)) ;
      GALGAS_string var_startLabel_3678 = GALGAS_string ("assign.start.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 83)) ;
      GALGAS_string var_loopLabel_3746 = GALGAS_string ("assign.loop.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)) ;
      GALGAS_string var_exitLabel_3813 = GALGAS_string ("assign.exit.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 85)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 86)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_3678, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 87)).add_operation (GALGAS_string (" ;--- Assign static array from repeated dynamic value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 87)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_3678.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 88)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_loopLabel_3746, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 89)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 89)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_3746.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 90)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_indexVarName_3399, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (GALGAS_string (" = phi i32 [0, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (var_startLabel_3678, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (GALGAS_string ("], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (var_nextIndexVarName_3468, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (var_loopLabel_3746, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_ptrVarName_3536, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_type.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_type.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)).add_operation (var_indexVarName_3399, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)) ;
      GALGAS_string var_llvmAssignRoutineName_4490 = function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)).add_operation (extensionGetter_type (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)).getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)).add_operation (extensionGetter_type (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)).getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_llvmAssignRoutineName_4490.getter_assemblerRepresentation (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (extensionGetter_llvmTypeName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (var_ptrVarName_3536, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (extensionGetter_llvmTypeName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (extensionGetter_llvmName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextIndexVarName_3468, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (var_indexVarName_3399, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loopTestName_3607, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)).add_operation (GALGAS_string (" = icmp ult i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)).add_operation (var_nextIndexVarName_3468, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)).add_operation (extractedValue_size.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 98)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_loopTestName_3607, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)).add_operation (var_loopLabel_3746, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)).add_operation (var_exitLabel_3813, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 99)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabel_3813.add_operation (GALGAS_string (":\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 100)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 100)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * extractPtr_6714 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_type = extractPtr_6714->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_size = extractPtr_6714->mAssociatedValue1 ;
      const GALGAS_objectIR extractedValue_value = extractPtr_6714->mAssociatedValue2 ;
      GALGAS_string var_indexVarName_5197 = GALGAS_string ("%index.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 102)) ;
      GALGAS_string var_nextIndexVarName_5266 = GALGAS_string ("%index.next.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 103)) ;
      GALGAS_string var_ptrVarName_5334 = GALGAS_string ("%element.ptr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 104)) ;
      GALGAS_string var_loopTestName_5405 = GALGAS_string ("%continue.loop.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 105)) ;
      GALGAS_string var_startLabel_5476 = GALGAS_string ("assign.start.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 106)) ;
      GALGAS_string var_loopLabel_5544 = GALGAS_string ("assign.loop.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 107)) ;
      GALGAS_string var_exitLabel_5611 = GALGAS_string ("assign.exit.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 108)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 109)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_5476, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 110)).add_operation (GALGAS_string (" ;--- Assign static array from repeated static value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 110)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_5476.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 111)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_loopLabel_5544, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 112)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 112)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_5544.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 113)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_indexVarName_5197, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (GALGAS_string (" = phi i32 [0, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (var_startLabel_5476, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (GALGAS_string ("], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (var_nextIndexVarName_5266, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (var_loopLabel_5544, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 114)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_ptrVarName_5334, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_type.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extractedValue_type.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (var_indexVarName_5197, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 115)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (extensionGetter_llvmTypeName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (extensionGetter_llvmName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (extensionGetter_llvmTypeName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (var_ptrVarName_5334, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 117)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextIndexVarName_5266, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)).add_operation (var_indexVarName_5197, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 118)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loopTestName_5405, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)).add_operation (GALGAS_string (" = icmp ult i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)).add_operation (var_nextIndexVarName_5266, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)).add_operation (extractedValue_size.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 119)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_loopTestName_5405, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)).add_operation (var_loopLabel_5544, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)).add_operation (var_exitLabel_5611, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 120)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabel_5611.add_operation (GALGAS_string (":\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 121)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * extractPtr_7321 = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_operands = extractPtr_7321->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Assign static array from static value\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 123)) ;
      cEnumerator_operandIRList enumerator_6868 (extractedValue_operands, kENUMERATION_UP) ;
      GALGAS_uint index_6848 ((uint32_t) 0) ;
      while (enumerator_6868.hasCurrentObject ()) {
        GALGAS_string var_tempVar_6897 = GALGAS_string ("%temp.addr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 125)) ;
        ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 126)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempVar_6897, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)).add_operation (var_llvmType_2087, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)).add_operation (var_llvmType_2087, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 128)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 128)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 128)).add_operation (index_6848.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 128)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 127)) ;
        GALGAS_string var_valueType_7178 = extensionGetter_llvmTypeName (enumerator_6868.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 129)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_valueType_7178, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)).add_operation (extensionGetter_llvmName (enumerator_6868.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)).add_operation (var_valueType_7178, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)).add_operation (var_tempVar_6897, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 130)) ;
        enumerator_6868.gotoNextObject () ;
        index_6848.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 124)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * extractPtr_8305 = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_operands = extractPtr_8305->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Assign static array from dynamic values\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 133)) ;
      cEnumerator_operandIRList enumerator_7476 (extractedValue_operands, kENUMERATION_UP) ;
      GALGAS_uint index_7456 ((uint32_t) 0) ;
      while (enumerator_7476.hasCurrentObject ()) {
        GALGAS_string var_tempVar_7505 = GALGAS_string ("%temp.addr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 135)) ;
        ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 136)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempVar_7505, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)).add_operation (var_llvmType_2087, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)).add_operation (var_llvmType_2087, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 138)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 138)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 138)).add_operation (index_7456.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 138)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 137)) ;
        GALGAS_string var_valueType_7786 = extensionGetter_llvmTypeName (enumerator_7476.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 139)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = extensionGetter_isStatic (enumerator_7476.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 140)).boolEnum () ;
          if (kBoolTrue == test_0) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_valueType_7786, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)).add_operation (extensionGetter_llvmName (enumerator_7476.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)).add_operation (var_valueType_7786, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)).add_operation (var_tempVar_7505, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 141)) ;
          }
        }
        if (kBoolFalse == test_0) {
          GALGAS_string var_llvmAssignRoutineName_7998 = function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 143)).add_operation (extensionGetter_type (enumerator_7476.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 143)).getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 143)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 143)).add_operation (extensionGetter_type (enumerator_7476.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 143)).getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 143)) ;
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_llvmAssignRoutineName_7998.getter_assemblerRepresentation (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 144)) ;
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_valueType_7786, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)).add_operation (var_tempVar_7505, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)).add_operation (var_valueType_7786, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)).add_operation (extensionGetter_llvmName (enumerator_7476.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 145)) ;
        }
        enumerator_7476.gotoNextObject () ;
        index_7456.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 134)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_2087, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)).add_operation (var_llvmType_2087, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 150)) ;
    }
    break ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_storeToUniversalReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeToUniversalReferenceIR.mSlotID,
                                            extensionMethod_storeToUniversalReferenceIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_storeToUniversalReferenceIR_llvmInstructionCode (defineExtensionMethod_storeToUniversalReferenceIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@storeFromTemporaryReferenceIR llvmInstructionCode'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_storeFromTemporaryReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR.mSlotID,
                                            extensionMethod_storeFromTemporaryReferenceIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_storeFromTemporaryReferenceIR_llvmInstructionCode (defineExtensionMethod_storeFromTemporaryReferenceIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@standaloneRoutineCallIR llvmInstructionCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_standaloneRoutineCallIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_standaloneRoutineCallIR.mSlotID,
                                            extensionMethod_standaloneRoutineCallIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_standaloneRoutineCallIR_llvmInstructionCode (defineExtensionMethod_standaloneRoutineCallIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@standaloneRoutineCallIR enterAccessibleEntities'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_standaloneRoutineCallIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                             GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneRoutineCallIR * object = (const cPtr_standaloneRoutineCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneRoutineCallIR) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (object->mProperty_mFunctionNameForGeneration  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 45)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_standaloneRoutineCallIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_standaloneRoutineCallIR.mSlotID,
                                                extensionMethod_standaloneRoutineCallIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_standaloneRoutineCallIR_enterAccessibleEntities (defineExtensionMethod_standaloneRoutineCallIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Overriding extension method '@releaseIR llvmInstructionCode'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_releaseIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_releaseIR.mSlotID,
                                            extensionMethod_releaseIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_releaseIR_llvmInstructionCode (defineExtensionMethod_releaseIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@computeSubscriptedVolatileRegisterAddress llvmInstructionCode'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_computeSubscriptedVolatileRegisterAddress_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress.mSlotID,
                                            extensionMethod_computeSubscriptedVolatileRegisterAddress_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_computeSubscriptedVolatileRegisterAddress_llvmInstructionCode (defineExtensionMethod_computeSubscriptedVolatileRegisterAddress_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@enterRegisterAddressIR llvmInstructionCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enterRegisterAddressIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_enterRegisterAddressIR.mSlotID,
                                            extensionMethod_enterRegisterAddressIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enterRegisterAddressIR_llvmInstructionCode (defineExtensionMethod_enterRegisterAddressIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@enterRegisterGroupSubscriptedAddressIR llvmInstructionCode'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enterRegisterGroupSubscriptedAddressIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR.mSlotID,
                                            extensionMethod_enterRegisterGroupSubscriptedAddressIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enterRegisterGroupSubscriptedAddressIR_llvmInstructionCode (defineExtensionMethod_enterRegisterGroupSubscriptedAddressIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@loadIndirectVolatileIR llvmInstructionCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_loadIndirectVolatileIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadIndirectVolatileIR.mSlotID,
                                            extensionMethod_loadIndirectVolatileIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_loadIndirectVolatileIR_llvmInstructionCode (defineExtensionMethod_loadIndirectVolatileIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@storeIndirectVolatileIR llvmInstructionCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_storeIndirectVolatileIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeIndirectVolatileIR.mSlotID,
                                            extensionMethod_storeIndirectVolatileIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_storeIndirectVolatileIR_llvmInstructionCode (defineExtensionMethod_storeIndirectVolatileIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@copyFromReferencesIR llvmInstructionCode'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_copyFromReferencesIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_copyFromReferencesIR * object = (const cPtr_copyFromReferencesIR *) inObject ;
  macroValidSharedObject (object, cPtr_copyFromReferencesIR) ;
  GALGAS_string var_assignmentFunctionLLVMName_1977 = function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 48)).add_operation (object->mProperty_mTarget.getter_type (SOURCE_FILE ("intermediate-copy-from-references.galgas", 48)).getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 48)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 48)).add_operation (object->mProperty_mTarget.getter_type (SOURCE_FILE ("intermediate-copy-from-references.galgas", 48)).getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 48)) ;
  GALGAS_string var_llvmType_2088 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) object->mProperty_mTarget.getter_type (SOURCE_FILE ("intermediate-copy-from-references.galgas", 49)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 49)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_assignmentFunctionLLVMName_1977.getter_assemblerRepresentation (SOURCE_FILE ("intermediate-copy-from-references.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 50)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmType_2088, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 51)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 51)).add_operation (object->mProperty_mTarget.getter_llvmName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 51)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 51)).add_operation (var_llvmType_2088, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 51)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 51)).add_operation (object->mProperty_mSourceLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 51)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 51)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_copyFromReferencesIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_copyFromReferencesIR.mSlotID,
                                            extensionMethod_copyFromReferencesIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_copyFromReferencesIR_llvmInstructionCode (defineExtensionMethod_copyFromReferencesIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@copyFromReferencesIR enterAccessibleEntities'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_copyFromReferencesIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_copyFromReferencesIR * object = (const cPtr_copyFromReferencesIR *) inObject ;
  macroValidSharedObject (object, cPtr_copyFromReferencesIR) ;
  GALGAS_string var_assignmentFunctionLLVMName_2619 = function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 60)).add_operation (object->mProperty_mTarget.getter_type (SOURCE_FILE ("intermediate-copy-from-references.galgas", 60)).getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 60)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 60)).add_operation (object->mProperty_mTarget.getter_type (SOURCE_FILE ("intermediate-copy-from-references.galgas", 60)).getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 60)) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (var_assignmentFunctionLLVMName_2619  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 61)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_copyFromReferencesIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_copyFromReferencesIR.mSlotID,
                                                extensionMethod_copyFromReferencesIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_copyFromReferencesIR_enterAccessibleEntities (defineExtensionMethod_copyFromReferencesIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@getUniversalPropertyReferenceIR llvmInstructionCode'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_getUniversalPropertyReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR.mSlotID,
                                            extensionMethod_getUniversalPropertyReferenceIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_getUniversalPropertyReferenceIR_llvmInstructionCode (defineExtensionMethod_getUniversalPropertyReferenceIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@getUniversalArrayElementReferenceIR llvmInstructionCode'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_getUniversalArrayElementReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR.mSlotID,
                                            extensionMethod_getUniversalArrayElementReferenceIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_getUniversalArrayElementReferenceIR_llvmInstructionCode (defineExtensionMethod_getUniversalArrayElementReferenceIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@getComputedPropertyValueIR llvmInstructionCode'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_getComputedPropertyValueIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getComputedPropertyValueIR.mSlotID,
                                            extensionMethod_getComputedPropertyValueIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_getComputedPropertyValueIR_llvmInstructionCode (defineExtensionMethod_getComputedPropertyValueIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@getComputedPropertyValueIR enterAccessibleEntities'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_getComputedPropertyValueIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getComputedPropertyValueIR * object = (const cPtr_getComputedPropertyValueIR *) inObject ;
  macroValidSharedObject (object, cPtr_getComputedPropertyValueIR) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (object->mProperty_mLLVMGetterName  COMMA_SOURCE_FILE ("intermediate-get-computed-property-value.galgas", 40)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_getComputedPropertyValueIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_getComputedPropertyValueIR.mSlotID,
                                                extensionMethod_getComputedPropertyValueIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_getComputedPropertyValueIR_enterAccessibleEntities (defineExtensionMethod_getComputedPropertyValueIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@storeComputedPropertyValueIR llvmInstructionCode'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_storeComputedPropertyValueIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeComputedPropertyValueIR.mSlotID,
                                            extensionMethod_storeComputedPropertyValueIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_storeComputedPropertyValueIR_llvmInstructionCode (defineExtensionMethod_storeComputedPropertyValueIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@storeComputedPropertyValueIR enterAccessibleEntities'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_storeComputedPropertyValueIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                  GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeComputedPropertyValueIR * object = (const cPtr_storeComputedPropertyValueIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeComputedPropertyValueIR) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (object->mProperty_mLLVMSetterName  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 36)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_storeComputedPropertyValueIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeComputedPropertyValueIR.mSlotID,
                                                extensionMethod_storeComputedPropertyValueIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_storeComputedPropertyValueIR_enterAccessibleEntities (defineExtensionMethod_storeComputedPropertyValueIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@getArrayElementReferenceIR llvmInstructionCode'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_getArrayElementReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getArrayElementReferenceIR.mSlotID,
                                            extensionMethod_getArrayElementReferenceIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_getArrayElementReferenceIR_llvmInstructionCode (defineExtensionMethod_getArrayElementReferenceIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@selectInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selectInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionIR * object = (const cPtr_selectInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)).add_operation (GALGAS_string (" = select "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (object->mProperty_m_5F_if_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)).add_operation (extensionGetter_llvmName (object->mProperty_m_5F_if_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (object->mProperty_m_5F_then_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).add_operation (extensionGetter_llvmName (object->mProperty_m_5F_then_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (object->mProperty_m_5F_else_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).add_operation (extensionGetter_llvmName (object->mProperty_m_5F_else_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selectInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_selectInstructionIR.mSlotID,
                                            extensionMethod_selectInstructionIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selectInstructionIR_llvmInstructionCode (defineExtensionMethod_selectInstructionIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@testArrayIndexIR llvmInstructionCode'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_testArrayIndexIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_testArrayIndexIR.mSlotID,
                                            extensionMethod_testArrayIndexIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_testArrayIndexIR_llvmInstructionCode (defineExtensionMethod_testArrayIndexIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@testArrayIndexIR enterAccessibleEntities'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_testArrayIndexIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_testArrayIndexIR.mSlotID,
                                                extensionMethod_testArrayIndexIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_testArrayIndexIR_enterAccessibleEntities (defineExtensionMethod_testArrayIndexIR_enterAccessibleEntities, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@sourceLocationIR llvmInstructionCode'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_sourceLocationIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_sourceLocationIR.mSlotID,
                                            extensionMethod_sourceLocationIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_sourceLocationIR_llvmInstructionCode (defineExtensionMethod_sourceLocationIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension method '@freeCommentIR llvmInstructionCode'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_freeCommentIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_freeCommentIR.mSlotID,
                                            extensionMethod_freeCommentIR_llvmInstructionCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_freeCommentIR_llvmInstructionCode (defineExtensionMethod_freeCommentIR_llvmInstructionCode, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'codeOptimization'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_codeOptimization (const GALGAS_string constinArgument_inSourceFile,
                               GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_maxBranchOfOnInstructions_1356 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_routineAccessibilityIR var_routineAccessibilityIR_1409 = GALGAS_routineAccessibilityIR::constructor_emptyList (SOURCE_FILE ("dead-code-elimination.galgas", 27)) ;
  GALGAS_stringset var_exploreRoutineSet_1521 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 29)) ;
  GALGAS_stringset var_allRoutineSet_1553 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 30)) ;
  GALGAS_stringset var_definedRoutineSet_1589 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 31)) ;
  cEnumerator_routineListIR enumerator_1651 (ioArgument_ioIntermediateCodeStruct.getter_mRoutineListIR (HERE), kENUMERATION_UP) ;
  while (enumerator_1651.hasCurrentObject ()) {
    GALGAS_stringset var_accessibleRoutineSet_1690 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 33)) ;
    callExtensionMethod_enterAccessibleEntities ((const cPtr_abstractRoutineIR *) enumerator_1651.current (HERE).getter_mRoutine (HERE).ptr (), var_accessibleRoutineSet_1690, var_maxBranchOfOnInstructions_1356, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 34)) ;
    var_routineAccessibilityIR_1409.addAssign_operation (enumerator_1651.current (HERE).getter_mRoutine (HERE), var_accessibleRoutineSet_1690  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 35)) ;
    var_allRoutineSet_1553.plusAssign_operation(var_accessibleRoutineSet_1690, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 36)) ;
    var_definedRoutineSet_1589.addAssign_operation (enumerator_1651.current (HERE).getter_mRoutine (HERE).getter_mRoutineMangledName (HERE).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 37))  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 37)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_1651.current (HERE).getter_mRoutine (HERE).getter_isRequired (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_exploreRoutineSet_1521.addAssign_operation (enumerator_1651.current (HERE).getter_mRoutine (HERE).getter_mRoutineMangledName (HERE).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 39))  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 39)) ;
      }
    }
    enumerator_1651.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_m_2150 = GALGAS_string ("** Dead code elimination\n") ;
      var_m_2150.plusAssign_operation(GALGAS_string ("    ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mRoutineListIR (HERE).getter_length (SOURCE_FILE ("dead-code-elimination.galgas", 44)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 44)).add_operation (GALGAS_string (" routines, "), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 44)) ;
      var_m_2150.plusAssign_operation(var_exploreRoutineSet_1521.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 45)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 45)).add_operation (GALGAS_string (" root routines.\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 45)) ;
      inCompiler->printMessage (var_m_2150  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 46)) ;
    }
  }
  GALGAS_stringset var_undefinedRoutineSet_2475 = var_allRoutineSet_1553.substract_operation (var_definedRoutineSet_1589, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 49)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_undefinedRoutineSet_2475.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 50)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_m_2563 = GALGAS_string ("undefined routine(s):") ;
      cEnumerator_stringset enumerator_2630 (var_undefinedRoutineSet_2475, kENUMERATION_UP) ;
      while (enumerator_2630.hasCurrentObject ()) {
        var_m_2563.plusAssign_operation(GALGAS_string ("\n"
          "    - ").add_operation (enumerator_2630.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 53)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 53)) ;
        enumerator_2630.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("dead-code-elimination.galgas", 55)), var_m_2563, fixItArray3  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 55)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (gOption_omnibus_5F_options_noDeadCodeElimination.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->printMessage (GALGAS_string ("    No dead code elimination (option --").add_operation (GALGAS_string (gOption_omnibus_5F_options_noDeadCodeElimination.getter_string ()), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 59)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 59))  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 59)) ;
    }
  }
  if (kBoolFalse == test_4) {
    GALGAS_stringset var_usefulRoutineSet_3002 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 61)) ;
    if (ioArgument_ioIntermediateCodeStruct.getter_mRoutineListIR (HERE).getter_length (SOURCE_FILE ("dead-code-elimination.galgas", 62)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 62)).isValid ()) {
      uint32_t variant_3016 = ioArgument_ioIntermediateCodeStruct.getter_mRoutineListIR (HERE).getter_length (SOURCE_FILE ("dead-code-elimination.galgas", 62)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 62)).uintValue () ;
      bool loop_3016 = true ;
      while (loop_3016) {
        loop_3016 = GALGAS_bool (kIsStrictSup, var_exploreRoutineSet_1521.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 62)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
        if (loop_3016) {
          loop_3016 = GALGAS_bool (kIsStrictSup, var_exploreRoutineSet_1521.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 62)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
        }
        if (loop_3016 && (0 == variant_3016)) {
          loop_3016 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("dead-code-elimination.galgas", 62)) ;
        }
        if (loop_3016) {
          variant_3016 -- ;
          GALGAS_stringset var_currentSet_3131 = var_exploreRoutineSet_1521 ;
          var_exploreRoutineSet_1521 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 64)) ;
          cEnumerator_routineAccessibilityIR enumerator_3224 (var_routineAccessibilityIR_1409, kENUMERATION_UP) ;
          while (enumerator_3224.hasCurrentObject ()) {
            GALGAS_lstring var_routineMangledName_3258 = enumerator_3224.current (HERE).getter_mRoutine (HERE).getter_mRoutineMangledName (HERE) ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_currentSet_3131.getter_hasKey (var_routineMangledName_3258.getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 67)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 67)).operator_and (var_usefulRoutineSet_3002.getter_hasKey (var_routineMangledName_3258.getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 67)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 67)).operator_not (SOURCE_FILE ("dead-code-elimination.galgas", 67)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 67)).boolEnum () ;
              if (kBoolTrue == test_5) {
                var_usefulRoutineSet_3002.addAssign_operation (var_routineMangledName_3258.getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 68))  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 68)) ;
                var_exploreRoutineSet_1521.plusAssign_operation(enumerator_3224.current (HERE).getter_mAccessibleRoutineSet (HERE), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 69)) ;
              }
            }
            enumerator_3224.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_routineAccessibilityIR enumerator_3660 (var_routineAccessibilityIR_1409, kENUMERATION_UP) ;
    while (enumerator_3660.hasCurrentObject ()) {
      GALGAS_lstring var_routineMangledName_3692 = enumerator_3660.current (HERE).getter_mRoutine (HERE).getter_mRoutineMangledName (HERE) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = enumerator_3660.current (HERE).getter_mRoutine (HERE).getter_warnsIfUnused (HERE).operator_and (var_usefulRoutineSet_3002.getter_hasKey (var_routineMangledName_3692.getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 76)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 76)).operator_not (SOURCE_FILE ("dead-code-elimination.galgas", 76)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 76)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (var_routineMangledName_3692.getter_location (SOURCE_FILE ("dead-code-elimination.galgas", 77)), GALGAS_string ("unused routine"), fixItArray7  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 77)) ;
        }
      }
      enumerator_3660.gotoNextObject () ;
    }
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (gOption_omnibus_5F_options_printPasses.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_string var_m_4018 = GALGAS_string ("    ").add_operation (var_usefulRoutineSet_3002.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 82)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 82)).add_operation (GALGAS_string (" useful routines.\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 82)) ;
        inCompiler->printMessage (var_m_4018  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 86)) ;
      }
    }
    ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR = GALGAS_routineListIR::constructor_emptyList (SOURCE_FILE ("dead-code-elimination.galgas", 89)) ;
    cEnumerator_routineAccessibilityIR enumerator_4368 (var_routineAccessibilityIR_1409, kENUMERATION_UP) ;
    while (enumerator_4368.hasCurrentObject ()) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_usefulRoutineSet_3002.getter_hasKey (enumerator_4368.current_mRoutine (HERE).getter_mRoutineMangledName (HERE).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 91)) COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 91)).boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (enumerator_4368.current_mRoutine (HERE)  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 92)) ;
        }
      }
      enumerator_4368.gotoNextObject () ;
    }
  }
  GALGAS_string var_filePath_4569 = constinArgument_inSourceFile.add_operation (GALGAS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 97)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (gOption_omnibus_5F_options_emitRoutineInvocationGraphFile.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      routine_displayInvocationGraph (ioArgument_ioIntermediateCodeStruct.getter_mRoutineListIR (HERE), var_filePath_4569, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 99)) ;
      }
    }
  }
  if (kBoolFalse == test_10) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_filePath_4569, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 101)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'displayInvocationGraph'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_displayInvocationGraph (const GALGAS_routineListIR constinArgument_inRoutineListIR,
                                     const GALGAS_string constinArgument_inFilePath,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_5054 = GALGAS_string ("digraph G {\n") ;
  GALGAS_stringset var_definedRoutines_5118 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 113)) ;
  GALGAS_stringset var_allRoutines_5148 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 114)) ;
  cEnumerator_routineListIR enumerator_5188 (constinArgument_inRoutineListIR, kENUMERATION_UP) ;
  while (enumerator_5188.hasCurrentObject ()) {
    var_definedRoutines_5118.addAssign_operation (enumerator_5188.current_mRoutine (HERE).getter_mRoutineMangledName (HERE).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 116))  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 116)) ;
    var_allRoutines_5148.addAssign_operation (enumerator_5188.current_mRoutine (HERE).getter_mRoutineMangledName (HERE).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 117))  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 117)) ;
    GALGAS_stringset var_accessibleRoutineSet_5327 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("dead-code-elimination.galgas", 118)) ;
    GALGAS_uint joker_5395 = GALGAS_uint::constructor_default (SOURCE_FILE ("dead-code-elimination.galgas", 119)) ;
    callExtensionMethod_enterAccessibleEntities ((const cPtr_abstractRoutineIR *) enumerator_5188.current_mRoutine (HERE).ptr (), var_accessibleRoutineSet_5327, joker_5395, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 119)) ;
    var_allRoutines_5148.plusAssign_operation(var_accessibleRoutineSet_5327, inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 120)) ;
    var_s_5054.plusAssign_operation(GALGAS_string ("  \"").add_operation (enumerator_5188.current_mRoutine (HERE).getter_mRoutineMangledName (HERE).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 121)).add_operation (GALGAS_string ("\" [shape=rectangle"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 121)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_5188.current_mRoutine (HERE).getter_isRequired (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_s_5054.plusAssign_operation(GALGAS_string (", color=blue"), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 123)) ;
      }
    }
    var_s_5054.plusAssign_operation(GALGAS_string ("] ;\n"), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 125)) ;
    cEnumerator_stringset enumerator_5661 (var_accessibleRoutineSet_5327, kENUMERATION_UP) ;
    while (enumerator_5661.hasCurrentObject ()) {
      var_s_5054.plusAssign_operation(GALGAS_string ("  \"").add_operation (enumerator_5188.current_mRoutine (HERE).getter_mRoutineMangledName (HERE).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 127)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 127)).add_operation (enumerator_5661.current (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 127)).add_operation (GALGAS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 127)) ;
      enumerator_5661.gotoNextObject () ;
    }
    enumerator_5188.gotoNextObject () ;
  }
  GALGAS_stringset var_undefinedRoutineSet_5835 = var_allRoutines_5148.substract_operation (var_definedRoutines_5118, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 131)) ;
  cEnumerator_stringset enumerator_5906 (var_undefinedRoutineSet_5835, kENUMERATION_UP) ;
  while (enumerator_5906.hasCurrentObject ()) {
    var_s_5054.plusAssign_operation(GALGAS_string ("  \"").add_operation (enumerator_5906.current (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 133)).add_operation (GALGAS_string ("\" [shape=rectangle, color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 133)) ;
    enumerator_5906.gotoNextObject () ;
  }
  var_s_5054.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 135)) ;
  GALGAS_bool joker_6050 ; // Joker input parameter
  var_s_5054.method_writeToFileWhenDifferentContents (constinArgument_inFilePath, joker_6050, inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 136)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_undefinedRoutineSet_5835.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 137)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_m_6104 = var_undefinedRoutineSet_5835.getter_count (SOURCE_FILE ("dead-code-elimination.galgas", 138)).getter_string (SOURCE_FILE ("dead-code-elimination.galgas", 138)).add_operation (GALGAS_string (" undefined routine(s) in routine invocation graph"), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 138)) ;
      cEnumerator_stringset enumerator_6232 (var_undefinedRoutineSet_5835, kENUMERATION_UP) ;
      while (enumerator_6232.hasCurrentObject ()) {
        var_m_6104.plusAssign_operation(GALGAS_string ("\n"
          "    - ").add_operation (enumerator_6232.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 140)) ;
        enumerator_6232.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("dead-code-elimination.galgas", 142)), var_m_6104, fixItArray2  COMMA_SOURCE_FILE ("dead-code-elimination.galgas", 142)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Once function 'llvmSeparatorLine'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_llvmSeparatorLine (C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (";-------------------------------------------------------------------------") ;
  result_result.plusAssign_operation(GALGAS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 63)) ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_llvmSeparatorLine = false ;
static GALGAS_string gOnceFunctionResult_llvmSeparatorLine ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_llvmSeparatorLine (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmSeparatorLine) {
    gOnceFunctionResult_llvmSeparatorLine = onceFunction_llvmSeparatorLine (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmSeparatorLine = true ;
  }
  return gOnceFunctionResult_llvmSeparatorLine ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_llvmSeparatorLine (void) {
  gOnceFunctionResult_llvmSeparatorLine.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmSeparatorLine (NULL,
                                                               releaseOnceFunctionResult_llvmSeparatorLine) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_llvmSeparatorLine [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_llvmSeparatorLine (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_llvmSeparatorLine (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_llvmSeparatorLine ("llvmSeparatorLine",
                                                                   functionWithGenericHeader_llvmSeparatorLine,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_llvmSeparatorLine) ;

