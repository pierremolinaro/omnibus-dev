#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-10.h"


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
  GALGAS_string var_llvmType_12078 = extensionGetter_llvmTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 298)) ;
  GALGAS_string var_llvmVarName_12119 = function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 299)) ;
  GALGAS_string var_testLabel_12174 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 300)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 300)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 300)) ;
  GALGAS_string var_loopLabel_12237 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 301)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 301)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 301)) ;
  GALGAS_string var_endLabel_12299 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 302)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 302)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 302)) ;
  GALGAS_string var_testResult_12363 = GALGAS_string ("%for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 303)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 303)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 303)) ;
  GALGAS_string var_loadedVarName_12438 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 304)) ;
  GALGAS_string var_currentVarName_12516 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 305)) ;
  GALGAS_string var_nextVarName_12592 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 306)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_12078, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 308)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 308)).add_operation (extensionGetter_llvmName (object->mProperty_mLowerExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 308)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 308)).add_operation (var_llvmType_12078, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 308)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 308)).add_operation (var_llvmVarName_12119, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 308)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_12174, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 309)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 309)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_12174.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 311)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_12438, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 312)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 312)).add_operation (var_llvmType_12078, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 312)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 312)).add_operation (var_llvmType_12078, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 312)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 312)).add_operation (var_llvmVarName_12119, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 312)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_12363, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 313)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 313)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 314)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_12078, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 315)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 315)).add_operation (var_loadedVarName_12438, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 315)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 315)).add_operation (extensionGetter_llvmName (object->mProperty_mUpperExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 315)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 315)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_12363, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 316)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 316)).add_operation (var_loopLabel_12237, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 316)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 316)).add_operation (var_endLabel_12299, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 316)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_12237.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 318)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 319)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_12516, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 320)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 320)).add_operation (var_llvmType_12078, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 320)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 320)).add_operation (var_llvmType_12078, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 320)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 320)).add_operation (var_llvmVarName_12119, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 320)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 320)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_12592, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 321)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 321)).add_operation (var_llvmType_12078, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 321)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 321)).add_operation (var_currentVarName_12516, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 321)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 321)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_12078, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 322)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 322)).add_operation (var_nextVarName_12592, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 322)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 322)).add_operation (var_llvmType_12078, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 322)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 322)).add_operation (var_llvmVarName_12119, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 322)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 322)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_12174, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 323)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 323)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_12299.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 325)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 334)) ;
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
//           Overriding extension method '@complexCallInstructionAST noteInstructionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_complexCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complexCallInstructionAST * object = (const cPtr_complexCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complexCallInstructionAST) ;
  callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 66)) ;
  cEnumerator_effectiveArgumentListAST enumerator_3482 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_3482.hasCurrentObject ()) {
    switch (enumerator_3482.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_3712 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3482.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3712->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 72)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 72)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_3805 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3482.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_3805->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 74)) ;
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
    enumerator_3482.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_complexCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_complexCallInstructionAST.mSlotID,
                                                              extensionMethod_complexCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complexCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_complexCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@simpleCallInstructionAST noteInstructionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_simpleCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_simpleCallInstructionAST * object = (const cPtr_simpleCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_simpleCallInstructionAST) ;
  cEnumerator_effectiveArgumentListAST enumerator_4155 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_4155.hasCurrentObject ()) {
    switch (enumerator_4155.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4385 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4155.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_4385->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 89)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 89)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4478 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4155.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_4478->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 91)) ;
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
    enumerator_4155.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_simpleCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_simpleCallInstructionAST.mSlotID,
                                                              extensionMethod_simpleCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_simpleCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_simpleCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@simpleCallInstructionAST solveEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_simpleCallInstructionAST_solveEntities (const cPtr_instructionAST * /* inObject */,
                                                                    GALGAS_globalConstantMap /* inArgument_inGlobalConstantMap */,
                                                                    const GALGAS_controlRegisterMap /* constinArgument_inRegisterMapSE */,
                                                                    const GALGAS_globalVariableMap /* constinArgument_inGlobalVariableMapSE */,
                                                                    GALGAS_instructionListSE & /* ioArgument_ioInstructionListSE */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_simpleCallInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_simpleCallInstructionAST.mSlotID,
                                      extensionMethod_simpleCallInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_simpleCallInstructionAST_solveEntities (defineExtensionMethod_simpleCallInstructionAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@complexCallInstructionAST solveEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_complexCallInstructionAST_solveEntities (const cPtr_instructionAST * /* inObject */,
                                                                     GALGAS_globalConstantMap /* inArgument_inGlobalConstantMap */,
                                                                     const GALGAS_controlRegisterMap /* constinArgument_inRegisterMapSE */,
                                                                     const GALGAS_globalVariableMap /* constinArgument_inGlobalVariableMapSE */,
                                                                     GALGAS_instructionListSE & /* ioArgument_ioInstructionListSE */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_complexCallInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_complexCallInstructionAST.mSlotID,
                                      extensionMethod_complexCallInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complexCallInstructionAST_solveEntities (defineExtensionMethod_complexCallInstructionAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@assignmentTargetNoSelfAST analyzeTargetForRoutineCall'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentTargetNoSelfAST_analyzeTargetForRoutineCall (const cPtr_assignmentTargetAST * inObject,
                                                                                   const GALGAS_PLMType constinArgument_inSelfType,
                                                                                   const GALGAS_targetAccessKind constinArgument_inSelfAccessKind,
                                                                                   const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                                   const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                                   const GALGAS_mode constinArgument_inCurrentMode,
                                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                   GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                                                   GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                   GALGAS_objectIR & outArgument_outCurrentObject,
                                                                                   GALGAS_string & outArgument_outGlobalVariableReceiverName,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentTargetNoSelfAST * object = (const cPtr_assignmentTargetNoSelfAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentTargetNoSelfAST) ;
  const enumGalgasBool test_0 = ioArgument_ioVariableMap.getter_hasKey (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 185)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 185)).boolEnum () ;
  if (kBoolTrue == test_0) {
    switch (constinArgument_inSelfAccessKind.enumValue ()) {
    case GALGAS_targetAccessKind::kNotBuilt:
      break ;
    case GALGAS_targetAccessKind::kEnum_read:
      {
        {
        GALGAS_PLMType joker_9065_2 ; // Joker input parameter
        GALGAS_bool joker_9065_1 ; // Joker input parameter
        GALGAS_bool joker_9096_2 ; // Joker input parameter
        GALGAS_bool joker_9096_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadAccess (object->mProperty_mIdentifier, joker_9065_2, joker_9065_1, outArgument_outCurrentObject, joker_9096_2, joker_9096_1, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 188)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_write:
      {
        {
        GALGAS_PLMType joker_9180_2 ; // Joker input parameter
        GALGAS_bool joker_9180_1 ; // Joker input parameter
        GALGAS_bool joker_9211_2 ; // Joker input parameter
        GALGAS_bool joker_9211_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mProperty_mIdentifier, joker_9180_2, joker_9180_1, outArgument_outCurrentObject, joker_9211_2, joker_9211_1, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 190)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_readWrite:
      {
        {
        GALGAS_PLMType joker_9303_2 ; // Joker input parameter
        GALGAS_bool joker_9303_1 ; // Joker input parameter
        GALGAS_bool joker_9334_2 ; // Joker input parameter
        GALGAS_bool joker_9334_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mIdentifier, joker_9303_2, joker_9303_1, outArgument_outCurrentObject, joker_9334_2, joker_9334_1, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 192)) ;
        }
      }
      break ;
    }
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = outArgument_outCurrentObject.getter_isGlobalVariableReference (SOURCE_FILE ("instruction-procedure-call.galgas", 194)).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = object->mProperty_mIdentifier.getter_string (HERE) ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    outArgument_outGlobalVariableReceiverName = temp_1 ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentObject = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 196)), object->mProperty_mIdentifier  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 196)) ;
    outArgument_outGlobalVariableReceiverName = GALGAS_string::makeEmptyString () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, object->mProperty_mAccessList.getter_length (SOURCE_FILE ("instruction-procedure-call.galgas", 200)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_9729 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_9729, object->mProperty_mIdentifier, outArgument_outCurrentObject, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 201)) ;
    }
  }else if (kBoolFalse == test_3) {
    cEnumerator_accessInAssignmentListAST enumerator_9833 (object->mProperty_mAccessList, kENUMERATION_UP) ;
    while (enumerator_9833.hasCurrentObject ()) {
      switch (enumerator_9833.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_10065 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_9833.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_10065->mAssociatedValue0 ;
          {
          routine_handlePropertyAccessInAssignment (outArgument_outCurrentObject, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 206)) ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_10766 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_9833.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_10766->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfExpression = extractPtr_10766->mAssociatedValue1 ;
          {
          routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfExpression, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 213)) ;
          }
        }
        break ;
      }
      enumerator_9833.gotoNextObject () ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentTargetNoSelfAST_analyzeTargetForRoutineCall (void) {
  enterExtensionMethod_analyzeTargetForRoutineCall (kTypeDescriptor_GALGAS_assignmentTargetNoSelfAST.mSlotID,
                                                    extensionMethod_assignmentTargetNoSelfAST_analyzeTargetForRoutineCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentTargetNoSelfAST_analyzeTargetForRoutineCall (defineExtensionMethod_assignmentTargetNoSelfAST_analyzeTargetForRoutineCall, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@assignmentTargetSelfAST analyzeTargetForRoutineCall'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentTargetSelfAST_analyzeTargetForRoutineCall (const cPtr_assignmentTargetAST * inObject,
                                                                                 const GALGAS_PLMType constinArgument_inSelfType,
                                                                                 const GALGAS_targetAccessKind /* constinArgument_inSelfAccessKind */,
                                                                                 const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                                 const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                                 const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                                 const GALGAS_mode constinArgument_inCurrentMode,
                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                 GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                 GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                                                 GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                 GALGAS_objectIR & outArgument_outCurrentObject,
                                                                                 GALGAS_string & outArgument_outGlobalVariableReceiverName,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentTargetSelfAST * object = (const cPtr_assignmentTargetSelfAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentTargetSelfAST) ;
  outArgument_outGlobalVariableReceiverName = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_0 = constinArgument_inSelfType.getter_isStructure (SOURCE_FILE ("instruction-procedure-call.galgas", 256)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_structureObjectMap_12050 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_12088 ;
    GALGAS_lstring joker_12013 ; // Joker input parameter
    GALGAS_propertyList joker_12090_3 ; // Joker input parameter
    GALGAS_uint joker_12090_2 ; // Joker input parameter
    GALGAS_string joker_12090_1 ; // Joker input parameter
    constinArgument_inSelfType.method_structure (joker_12013, var_structureObjectMap_12050, var_universalMap_12088, joker_12090_3, joker_12090_2, joker_12090_1, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 257)) ;
    const enumGalgasBool test_1 = var_structureObjectMap_12050.getter_hasKey (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 259)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 259)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_object_12300 ;
      GALGAS_bool joker_12279 ; // Joker input parameter
      var_structureObjectMap_12050.method_searchKey (object->mProperty_mIdentifier, joker_12279, var_object_12300, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 260)) ;
      {
      routine_handleSelfAccessInAssignment (constinArgument_inSelfType, var_object_12300, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 265)) ;
      }
    }else if (kBoolFalse == test_1) {
      outArgument_outCurrentObject = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 273)), object->mProperty_mIdentifier  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 273)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 276)), GALGAS_string ("'self' should be a structure instance"), fixItArray2  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 276)) ;
    outArgument_outCurrentObject.drop () ; // Release error dropped variable
    outArgument_outGlobalVariableReceiverName.drop () ; // Release error dropped variable
  }
  cEnumerator_accessInAssignmentListAST enumerator_12817 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_12817.hasCurrentObject ()) {
    switch (enumerator_12817.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_13033 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_12817.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_13033->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInAssignment (outArgument_outCurrentObject, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 282)) ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_13698 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_12817.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_13698->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_13698->mAssociatedValue1 ;
        {
        routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfExpression, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 289)) ;
        }
      }
      break ;
    }
    enumerator_12817.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentTargetSelfAST_analyzeTargetForRoutineCall (void) {
  enterExtensionMethod_analyzeTargetForRoutineCall (kTypeDescriptor_GALGAS_assignmentTargetSelfAST.mSlotID,
                                                    extensionMethod_assignmentTargetSelfAST_analyzeTargetForRoutineCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentTargetSelfAST_analyzeTargetForRoutineCall (defineExtensionMethod_assignmentTargetSelfAST_analyzeTargetForRoutineCall, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@simpleCallInstructionAST analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_simpleCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                              const GALGAS_PLMType constinArgument_inSelfType,
                                                              const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                              const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                              const GALGAS_mode constinArgument_inCurrentMode,
                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                              GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                              GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                              GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_simpleCallInstructionAST * object = (const cPtr_simpleCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_simpleCallInstructionAST) ;
  GALGAS_lstring var_calledRoutineSignature_14618 = extensionGetter_routineSignature (object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 327)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_14840 ;
  GALGAS_routineDescriptor var_routineDescriptor_14886 ;
  callExtensionMethod_searchRoutine ((const cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr (), object->mProperty_mSandAloneRoutineName, var_calledRoutineSignature_14618, var_LLVMInvocationRoutineName_14840, var_routineDescriptor_14886, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 329)) ;
  GALGAS_lstring var_routineMangledName_14954 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), object->mProperty_mSandAloneRoutineName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 336)) ;
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_14954 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 342)) ;
  }
  GALGAS_calleeKindIR var_routineKindIR_15215 = function_checkMode (constinArgument_inCurrentMode, extensionGetter_executionMode (var_routineDescriptor_14886.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 346)), var_routineDescriptor_14886.getter_mRoutineKind (HERE), object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 344)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_15504 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 351)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_routineDescriptor_14886.getter_mSignature (HERE), object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_15504, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 352)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_objectIR::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 373)), var_routineMangledName_14954, var_LLVMInvocationRoutineName_14840, var_routineKindIR_15215, var_effectiveParameterListIR_15504  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 371))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 371)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_simpleCallInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_simpleCallInstructionAST.mSlotID,
                                extensionMethod_simpleCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_simpleCallInstructionAST_analyze (defineExtensionMethod_simpleCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@complexCallInstructionAST analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_complexCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                               const GALGAS_PLMType constinArgument_inSelfType,
                                                               const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                               const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                               const GALGAS_mode constinArgument_inCurrentMode,
                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                               GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complexCallInstructionAST * object = (const cPtr_complexCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complexCallInstructionAST) ;
  GALGAS_objectIR var_currentObject_17855 ;
  GALGAS_string var_globalVariableReceiverName_17918 ;
  callExtensionMethod_analyzeAssignmentTarget ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_read (SOURCE_FILE ("instruction-procedure-call.galgas", 399)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_currentObject_17855, var_globalVariableReceiverName_17918, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 397)) ;
  GALGAS_PLMType var_returnedType_18614 ;
  {
  routine_handleFunctionCallInExpression (constinArgument_inSelfType, var_globalVariableReceiverName_17918, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, object->mProperty_mArguments, object->mProperty_mEndOfArguments, ioArgument_ioInstructionGenerationList, var_currentObject_17855, var_returnedType_18614, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 415)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_returnedType_18614.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 435)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfArguments, GALGAS_string ("the function cannot be called in instruction: lost return value"), fixItArray1  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 436)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_complexCallInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_complexCallInstructionAST.mSlotID,
                                extensionMethod_complexCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complexCallInstructionAST_analyze (defineExtensionMethod_complexCallInstructionAST_analyze, NULL) ;

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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 68)) ;
  cEnumerator_switchCaseListAST enumerator_2862 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_2862.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2862.current_mCaseInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 70)) ;
    enumerator_2862.gotoNextObject () ;
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
//                          Overriding extension method '@switchInstructionAST solveEntities'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionAST_solveEntities (const cPtr_instructionAST * inObject,
                                                                GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                                                const GALGAS_controlRegisterMap constinArgument_inRegisterMapSE,
                                                                const GALGAS_globalVariableMap constinArgument_inGlobalVariableMapSE,
                                                                GALGAS_instructionListSE & ioArgument_ioInstructionListSE,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_expressionSE var_switchExpression_4292 ;
  callExtensionMethod_solveEntities ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_switchExpression_4292, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 100)) ;
  GALGAS_switchCaseListSE var_switchCaseList_4331 = GALGAS_switchCaseListSE::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 106)) ;
  cEnumerator_switchCaseListAST enumerator_4364 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_4364.hasCurrentObject ()) {
    GALGAS_instructionListSE var_caseInstructionList_4410 = GALGAS_instructionListSE::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 108)) ;
    extensionMethod_solveEntities (enumerator_4364.current_mCaseInstructionList (HERE), inArgument_inGlobalConstantMap, constinArgument_inRegisterMapSE, constinArgument_inGlobalVariableMapSE, var_caseInstructionList_4410, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)) ;
    enumerator_4364.gotoNextObject () ;
  }
  ioArgument_ioInstructionListSE.addAssign_operation (GALGAS_switchInstructionSE::constructor_new (object->mProperty_mInstructionLocation, var_switchExpression_4292, object->mProperty_mEndOf_5F_test_5F_expression, var_switchCaseList_4331, object->mProperty_mEndOf_5F_switch_5F_instruction  COMMA_SOURCE_FILE ("instruction-switch.galgas", 117))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionAST_solveEntities (void) {
  enterExtensionMethod_solveEntities (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                      extensionMethod_switchInstructionAST_solveEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionAST_solveEntities (defineExtensionMethod_switchInstructionAST_solveEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@switchInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                          const GALGAS_PLMType constinArgument_inSelfType,
                                                          const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                          const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_instructionListIR var_switchExpressionGenerationList_5964 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 145)) ;
  GALGAS_objectIR var_switchValueIRPossibleReference_6439 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-switch.galgas", 150)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_switchExpressionGenerationList_5964, var_switchValueIRPossibleReference_6439, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 146)) ;
  GALGAS_objectIR var_switchValueIR_6607 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_switchValueIRPossibleReference_6439, object->mProperty_mEndOf_5F_test_5F_expression, var_switchValueIR_6607, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)) ;
  }
  GALGAS_constantMap var_enumConstantMap_6669 ;
  const enumGalgasBool test_0 = extensionGetter_type (var_switchValueIR_6607, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 168)).getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 168)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string joker_6785_1 ; // Joker input parameter
    extensionGetter_type (var_switchValueIR_6607, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 169)).method_enumeration (var_enumConstantMap_6669, joker_6785_1, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 169)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_switchValueIR_6607, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 172)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 172)), fixItArray1  COMMA_SOURCE_FILE ("instruction-switch.galgas", 171)) ;
    var_enumConstantMap_6669.drop () ; // Release error dropped variable
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_switchValueIR_6607, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 175)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 176)) ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7107 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7107, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 180)) ;
  }
  GALGAS_stringset var_usedEnumerationValues_7217 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 181)) ;
  GALGAS_switchCaseListIR var_switchCaseListIR_7259 = GALGAS_switchCaseListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 182)) ;
  cEnumerator_switchCaseListAST enumerator_7323 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_7323.hasCurrentObject ()) {
    GALGAS_uintlist var_caseIdentifierIndexList_7364 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 184)) ;
    cEnumerator_lstringlist enumerator_7406 (enumerator_7323.current_mCaseIdentifiers (HERE), kENUMERATION_UP) ;
    while (enumerator_7406.hasCurrentObject ()) {
      GALGAS_bigint var_constantIdx_7476 ;
      GALGAS_lstring joker_7478 ; // Joker input parameter
      var_enumConstantMap_6669.method_searchKey (enumerator_7406.current_mValue (HERE), var_constantIdx_7476, joker_7478, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 186)) ;
      var_caseIdentifierIndexList_7364.addAssign_operation (var_constantIdx_7476.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 187))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 187)) ;
      const enumGalgasBool test_4 = var_usedEnumerationValues_7217.getter_hasKey (enumerator_7406.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 188)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 188)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        fixItArray5.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_7406.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 189)), GALGAS_string ("duplicated enumeration constant"), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 189)) ;
      }
      var_usedEnumerationValues_7217.addAssign_operation (enumerator_7406.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 191))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 191)) ;
      enumerator_7406.gotoNextObject () ;
    }
    GALGAS_instructionListIR var_instructionGenerationList_7762 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 193)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_7323.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_switch_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_7762, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)) ;
    var_switchCaseListIR_7259.addAssign_operation (var_caseIdentifierIndexList_7364, var_instructionGenerationList_7762  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
    enumerator_7323.gotoNextObject () ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_8483 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_8483, object->mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 212)) ;
  }
  cEnumerator_constantMap enumerator_8689 (var_enumConstantMap_6669, kENUMERATION_UP) ;
  while (enumerator_8689.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_usedEnumerationValues_7217.getter_hasKey (enumerator_8689.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 215)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 215)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 215)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("missing '").add_operation (enumerator_8689.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 216)).add_operation (GALGAS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 216)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 216)) ;
    }
    enumerator_8689.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_switchInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 221)), var_switchExpressionGenerationList_5964, var_switchValueIR_6607, var_switchCaseListIR_7259  COMMA_SOURCE_FILE ("instruction-switch.galgas", 220))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)) ;
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
  extensionMethod_instructionListLLVMCode (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 254)) ;
  GALGAS_string var_labelOtherwise_10358 = GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 256)).add_operation (GALGAS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 256)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 257)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 257)).add_operation (extensionGetter_llvmName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 257)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %").add_operation (var_labelOtherwise_10358, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 258)).add_operation (GALGAS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 258)) ;
  cEnumerator_switchCaseListIR enumerator_10608 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_10559 ((uint32_t) 0) ;
  while (enumerator_10608.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_10671 (enumerator_10608.current_mCaseIdentifierIndexes (HERE), kENUMERATION_UP) ;
    while (enumerator_10671.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 261)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 261)).add_operation (enumerator_10671.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 261)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 262)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 262)).add_operation (index_10559.getter_string (SOURCE_FILE ("instruction-switch.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 262)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 262)) ;
      enumerator_10671.gotoNextObject () ;
    }
    enumerator_10608.gotoNextObject () ;
    index_10559.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 259)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ]\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 265)) ;
  cEnumerator_switchCaseListIR enumerator_10954 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_10911 ((uint32_t) 0) ;
  while (enumerator_10954.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)).add_operation (index_10911.getter_string (SOURCE_FILE ("instruction-switch.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)) ;
    extensionMethod_instructionListLLVMCode (enumerator_10954.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelOtherwise_10358, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 270)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 270)) ;
    enumerator_10954.gotoNextObject () ;
    index_10911.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 267)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_10358.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)) ;
  cEnumerator_switchCaseListIR enumerator_11701 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  while (enumerator_11701.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_11701.current_mCaseInstructionList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)) ;
    enumerator_11701.gotoNextObject () ;
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

void routine_handleSubscriptInAssignmentAndExpression (const GALGAS_PLMType constinArgument_inSelfType,
                                                       const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                       const GALGAS_bool constinArgument_inGuard,
                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_mode constinArgument_inCurrentMode,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                       GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                       const GALGAS_location constinArgument_inErrorLocation,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)).getter_isArrayType (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_handleSubscriptArrayInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inErrorLocation, ioArgument_ioInstructionGenerationList, ioArgument_ioObjectPtr, inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 22)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = ioArgument_ioObjectPtr.getter_isRegisterReference (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 39)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_handleSubscriptRegisterArrayInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inErrorLocation, ioArgument_ioInstructionGenerationList, ioArgument_ioObjectPtr, inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 40)) ;
      }
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the receiver is not an array and does not accept subscripting"), fixItArray2  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 58)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Routine 'handleSubscriptArrayInAssignmentAndExpression'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptArrayInAssignmentAndExpression (const GALGAS_PLMType constinArgument_inSelfType,
                                                            const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                            const GALGAS_bool constinArgument_inGuard,
                                                            const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                            const GALGAS_mode constinArgument_inCurrentMode,
                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                            GALGAS_unifiedSymbolMapEx & /* ioArgument_ioVariableMap */,
                                                            GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                                            const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                            const GALGAS_location constinArgument_inErrorLocation,
                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                            GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_type_3286 ;
  GALGAS_bigint var_arraySize_3314 ;
  GALGAS_lstring joker_3263 ; // Joker input parameter
  GALGAS_constantMap joker_3316_3 ; // Joker input parameter
  GALGAS_uint joker_3316_2 ; // Joker input parameter
  GALGAS_string joker_3316_1 ; // Joker input parameter
  extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 82)).method_arrayType (joker_3263, var_type_3286, var_arraySize_3314, joker_3316_3, joker_3316_2, joker_3316_1, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 82)) ;
  GALGAS_objectIR var_indexResultPossibleReference_3816 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 88)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_3816, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 84)) ;
  GALGAS_objectIR var_indexResult_3973 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_3816, constinArgument_inErrorLocation, var_indexResult_3973, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 98)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_3973.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 104)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_4106 ;
    GALGAS_PLMType joker_4074_1 ; // Joker input parameter
    var_indexResult_3973.method_literalInteger (joker_4074_1, var_indexValue_4106, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 105)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_4106.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 106)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_4106.objectCompare (var_arraySize_3314)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_3314.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_result_4289 = GALGAS_objectIR::constructor_temporaryReference (var_type_3286, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 112)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 109)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 115)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_4289, ioArgument_ioObjectPtr, var_indexValue_4106.getter_uint (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 119)).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 116)) ;
      }
      ioArgument_ioObjectPtr = var_result_4289 ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_type (var_indexResult_3973, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 123)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 123)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 124)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_4963 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_3973, constinArgument_inErrorLocation, var_arraySize_3314, var_generatePanicInstruction_4963, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 125)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_4963 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 131)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 131)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 132)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
      GALGAS_objectIR var_result_5166 = GALGAS_objectIR::constructor_temporaryReference (var_type_3286, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 137)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 137)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 138)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 135)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 141)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_5166, ioArgument_ioObjectPtr, extensionGetter_llvmName (var_indexResult_3973, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 142)) ;
      }
      ioArgument_ioObjectPtr = var_result_5166 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 149)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Routine 'handleSubscriptArrayInAssignmentAndExpressionNew'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptArrayInAssignmentAndExpressionNew (const GALGAS_PLMType constinArgument_inSelfType,
                                                               const GALGAS_bool constinArgument_inGuard,
                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                               const GALGAS_mode constinArgument_inCurrentMode,
                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                               const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                               const GALGAS_location constinArgument_inErrorLocation,
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_type_6523 ;
  GALGAS_bigint var_arraySize_6551 ;
  GALGAS_lstring joker_6500 ; // Joker input parameter
  GALGAS_constantMap joker_6553_3 ; // Joker input parameter
  GALGAS_uint joker_6553_2 ; // Joker input parameter
  GALGAS_string joker_6553_1 ; // Joker input parameter
  extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 171)).method_arrayType (joker_6500, var_type_6523, var_arraySize_6551, joker_6553_3, joker_6553_2, joker_6553_1, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 171)) ;
  GALGAS_objectIR var_indexResultPossibleReference_7053 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 177)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_7053, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 173)) ;
  GALGAS_objectIR var_indexResult_7210 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_7053, constinArgument_inErrorLocation, var_indexResult_7210, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 187)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_7210.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 193)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_7343 ;
    GALGAS_PLMType joker_7311_1 ; // Joker input parameter
    var_indexResult_7210.method_literalInteger (joker_7311_1, var_indexValue_7343, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 194)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_7343.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 195)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_7343.objectCompare (var_arraySize_6551)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_6551.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 196)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 196)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_result_7526 = GALGAS_objectIR::constructor_temporaryReference (var_type_6523, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 200)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 200)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 201)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 198)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 204)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_7526, ioArgument_ioObjectPtr, var_indexValue_7343.getter_uint (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 208)).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 205)) ;
      }
      ioArgument_ioObjectPtr = var_result_7526 ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_type (var_indexResult_7210, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 212)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 212)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 213)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_8200 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_7210, constinArgument_inErrorLocation, var_arraySize_6551, var_generatePanicInstruction_8200, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 214)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_8200 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 220)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 220)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 221)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
      GALGAS_objectIR var_result_8403 = GALGAS_objectIR::constructor_temporaryReference (var_type_6523, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 226)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 226)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 227)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 224)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 230)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_8403, ioArgument_ioObjectPtr, extensionGetter_llvmName (var_indexResult_7210, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 231)) ;
      }
      ioArgument_ioObjectPtr = var_result_8403 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 238)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Routine 'handleSubscriptRegisterArrayInAssignmentAndExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptRegisterArrayInAssignmentAndExpression (const GALGAS_PLMType constinArgument_inSelfType,
                                                                    const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                    const GALGAS_bool constinArgument_inGuard,
                                                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_mode constinArgument_inCurrentMode,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_unifiedSymbolMapEx & /* ioArgument_ioVariableMap */,
                                                                    GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                    const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                                    const GALGAS_location constinArgument_inErrorLocation,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_registerType_9886 ;
  GALGAS_lstring var_registerName_9916 ;
  GALGAS_bool var_readable_9943 ;
  GALGAS_bool var_writable_9970 ;
  GALGAS_bigint var_registerAddress_10011 ;
  GALGAS_sliceMap var_registerBitSliceMap_10055 ;
  GALGAS_uint var_arraySize_10090 ;
  GALGAS_uint var_elementArraySize_10154 ;
  ioArgument_ioObjectPtr.method_registerReference (var_registerType_9886, var_registerName_9916, var_readable_9943, var_writable_9970, var_registerAddress_10011, var_registerBitSliceMap_10055, var_arraySize_10090, var_elementArraySize_10154, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 261)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_arraySize_10090.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register is not an array and does not support subscripting"), fixItArray1  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 272)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_readable_9943.operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 273)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register cannot be read in this context"), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 274)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_indexResultPossibleReference_10916 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 280)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_10916, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 276)) ;
      GALGAS_objectIR var_indexResult_11085 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_10916, constinArgument_inErrorLocation, var_indexResult_11085, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 290)) ;
      }
      const enumGalgasBool test_4 = var_indexResult_11085.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 297)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_bigint var_indexValue_11251 ;
        GALGAS_PLMType joker_11219_1 ; // Joker input parameter
        var_indexResult_11085.method_literalInteger (joker_11219_1, var_indexValue_11251, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 298)) ;
        GALGAS_bool test_5 = GALGAS_bool (kIsStrictInf, var_indexValue_11251.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 299)))) ;
        if (kBoolTrue != test_5.boolEnum ()) {
          test_5 = GALGAS_bool (kIsSupOrEqual, var_indexValue_11251.objectCompare (var_arraySize_10090.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 299)))) ;
        }
        const enumGalgasBool test_6 = test_5.boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_10090.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 300)), fixItArray7  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 300)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_6) {
          ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_registerReference (var_registerType_9886, var_registerName_9916, var_readable_9943, var_writable_9970, var_registerAddress_10011.add_operation (var_indexValue_11251.multiply_operation (var_elementArraySize_10154.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 307)), var_registerBitSliceMap_10055, GALGAS_uint ((uint32_t) 0U), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 302)) ;
        }
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_8 = extensionGetter_type (var_indexResult_11085, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 314)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 314)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 315)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_bool var_generatePanicInstruction_12068 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_11085, constinArgument_inErrorLocation, var_arraySize_10090.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 319)), var_generatePanicInstruction_12068, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 316)) ;
            }
            GALGAS_bool test_10 = var_generatePanicInstruction_12068 ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 322)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 322)) ;
            }
            const enumGalgasBool test_11 = test_10.boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generated panic"), fixItArray12  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 323)) ;
            }
          }
          GALGAS_objectIR var_registerAddressObject_12283 = GALGAS_objectIR::constructor_temporaryReference (var_registerType_9886, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 328)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 328)), var_registerBitSliceMap_10055, GALGAS_bool (true)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 326)) ;
          ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 332)) ;
          {
          extensionSetter_appendComputeVolatileRegisterAddressWithSubscript (ioArgument_ioInstructionGenerationList, var_registerAddressObject_12283, var_indexResult_11085, var_registerAddress_10011, var_elementArraySize_10154.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 333)) ;
          }
          ioArgument_ioObjectPtr = var_registerAddressObject_12283 ;
        }else if (kBoolFalse == test_8) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray13  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 341)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Routine 'handleSubscriptRegisterArrayInAssignmentAndExpressionNew'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptRegisterArrayInAssignmentAndExpressionNew (const GALGAS_PLMType constinArgument_inSelfType,
                                                                       const GALGAS_bool constinArgument_inGuard,
                                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                       const GALGAS_mode constinArgument_inCurrentMode,
                                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                       GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                       GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                       const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                                       const GALGAS_location constinArgument_inErrorLocation,
                                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                       GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                                       GALGAS_sliceMap & outArgument_outSliceMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSliceMap.drop () ; // Release 'out' argument
  GALGAS_PLMType var_registerType_13750 ;
  GALGAS_lstring var_registerName_13780 ;
  GALGAS_bool var_readable_13807 ;
  GALGAS_bool var_writable_13834 ;
  GALGAS_bigint var_registerAddress_13875 ;
  GALGAS_uint var_arraySize_13936 ;
  GALGAS_uint var_elementArraySize_14000 ;
  ioArgument_ioObjectPtr.method_registerReference (var_registerType_13750, var_registerName_13780, var_readable_13807, var_writable_13834, var_registerAddress_13875, outArgument_outSliceMap, var_arraySize_13936, var_elementArraySize_14000, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 364)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_arraySize_13936.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register is not an array and does not support subscripting"), fixItArray1  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 375)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_readable_13807.operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 376)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register cannot be read in this context"), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 377)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_indexResultPossibleReference_14762 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 383)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_14762, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 379)) ;
      GALGAS_objectIR var_indexResult_14931 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_14762, constinArgument_inErrorLocation, var_indexResult_14931, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 393)) ;
      }
      const enumGalgasBool test_4 = var_indexResult_14931.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 400)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_bigint var_indexValue_15097 ;
        GALGAS_PLMType joker_15065_1 ; // Joker input parameter
        var_indexResult_14931.method_literalInteger (joker_15065_1, var_indexValue_15097, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 401)) ;
        GALGAS_bool test_5 = GALGAS_bool (kIsStrictInf, var_indexValue_15097.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 402)))) ;
        if (kBoolTrue != test_5.boolEnum ()) {
          test_5 = GALGAS_bool (kIsSupOrEqual, var_indexValue_15097.objectCompare (var_arraySize_13936.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 402)))) ;
        }
        const enumGalgasBool test_6 = test_5.boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_13936.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 403)), fixItArray7  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 403)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_6) {
          ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_registerReference (var_registerType_13750, var_registerName_13780, var_readable_13807, var_writable_13834, var_registerAddress_13875.add_operation (var_indexValue_15097.multiply_operation (var_elementArraySize_14000.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 410)), outArgument_outSliceMap, GALGAS_uint ((uint32_t) 0U), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 405)) ;
        }
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_8 = extensionGetter_type (var_indexResult_14931, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 417)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 417)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 418)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_bool var_generatePanicInstruction_15906 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_14931, constinArgument_inErrorLocation, var_arraySize_13936.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 422)), var_generatePanicInstruction_15906, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 419)) ;
            }
            GALGAS_bool test_10 = var_generatePanicInstruction_15906 ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 425)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 425)) ;
            }
            const enumGalgasBool test_11 = test_10.boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generated panic"), fixItArray12  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 426)) ;
            }
          }
          GALGAS_objectIR var_registerAddressObject_16155 = GALGAS_objectIR::constructor_temporaryReference (var_registerType_13750, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 432)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 432)), outArgument_outSliceMap, GALGAS_bool (true)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 430)) ;
          ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 436)) ;
          {
          extensionSetter_appendComputeVolatileRegisterAddressWithSubscript (ioArgument_ioInstructionGenerationList, var_registerAddressObject_16155, var_indexResult_14931, var_registerAddress_13875, var_elementArraySize_14000.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 437)) ;
          }
          GALGAS_objectIR var_loadedValueIR_16787 ;
          {
          extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_registerAddressObject_16155, constinArgument_inErrorLocation, var_loadedValueIR_16787, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 444)) ;
          }
          ioArgument_ioObjectPtr = var_loadedValueIR_16787 ;
        }else if (kBoolFalse == test_8) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray13  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 452)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@assignmentTargetNoSelfAST analyzeAssignmentTarget'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentTargetNoSelfAST_analyzeAssignmentTarget (const cPtr_assignmentTargetAST * inObject,
                                                                               const GALGAS_PLMType constinArgument_inSelfType,
                                                                               const GALGAS_targetAccessKind constinArgument_inSelfAccessKind,
                                                                               const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                               const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                                               const GALGAS_mode constinArgument_inCurrentMode,
                                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                               GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                               GALGAS_objectIR & outArgument_outCurrentObject,
                                                                               GALGAS_string & outArgument_outGlobalVariableReceiverName,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentTargetNoSelfAST * object = (const cPtr_assignmentTargetNoSelfAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentTargetNoSelfAST) ;
  const enumGalgasBool test_0 = ioArgument_ioVariableMap.getter_hasKey (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("assignment-target.galgas", 153)) COMMA_SOURCE_FILE ("assignment-target.galgas", 153)).boolEnum () ;
  if (kBoolTrue == test_0) {
    switch (constinArgument_inSelfAccessKind.enumValue ()) {
    case GALGAS_targetAccessKind::kNotBuilt:
      break ;
    case GALGAS_targetAccessKind::kEnum_read:
      {
        {
        GALGAS_PLMType joker_6649_2 ; // Joker input parameter
        GALGAS_bool joker_6649_1 ; // Joker input parameter
        GALGAS_bool joker_6680_2 ; // Joker input parameter
        GALGAS_bool joker_6680_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadAccess (object->mProperty_mIdentifier, joker_6649_2, joker_6649_1, outArgument_outCurrentObject, joker_6680_2, joker_6680_1, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 156)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_write:
      {
        {
        GALGAS_PLMType joker_6764_2 ; // Joker input parameter
        GALGAS_bool joker_6764_1 ; // Joker input parameter
        GALGAS_bool joker_6795_2 ; // Joker input parameter
        GALGAS_bool joker_6795_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mProperty_mIdentifier, joker_6764_2, joker_6764_1, outArgument_outCurrentObject, joker_6795_2, joker_6795_1, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 158)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_readWrite:
      {
        {
        GALGAS_PLMType joker_6887_2 ; // Joker input parameter
        GALGAS_bool joker_6887_1 ; // Joker input parameter
        GALGAS_bool joker_6918_2 ; // Joker input parameter
        GALGAS_bool joker_6918_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mIdentifier, joker_6887_2, joker_6887_1, outArgument_outCurrentObject, joker_6918_2, joker_6918_1, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 160)) ;
        }
      }
      break ;
    }
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = outArgument_outCurrentObject.getter_isGlobalVariableReference (SOURCE_FILE ("assignment-target.galgas", 162)).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = object->mProperty_mIdentifier.getter_string (HERE) ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    outArgument_outGlobalVariableReceiverName = temp_1 ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentObject = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_null (SOURCE_FILE ("assignment-target.galgas", 164)), object->mProperty_mIdentifier  COMMA_SOURCE_FILE ("assignment-target.galgas", 164)) ;
    outArgument_outGlobalVariableReceiverName = GALGAS_string::makeEmptyString () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, object->mProperty_mAccessList.getter_length (SOURCE_FILE ("assignment-target.galgas", 168)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    switch (constinArgument_inSelfAccessKind.enumValue ()) {
    case GALGAS_targetAccessKind::kNotBuilt:
      break ;
    case GALGAS_targetAccessKind::kEnum_read:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7359 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7359, object->mProperty_mIdentifier, outArgument_outCurrentObject, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 171)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_write:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7465 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7465, object->mProperty_mIdentifier, outArgument_outCurrentObject, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 173)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_readWrite:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7575 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForReadWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7575, object->mProperty_mIdentifier, outArgument_outCurrentObject, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 175)) ;
        }
      }
      break ;
    }
  }else if (kBoolFalse == test_3) {
    cEnumerator_accessInAssignmentListAST enumerator_7691 (object->mProperty_mAccessList, kENUMERATION_UP) ;
    while (enumerator_7691.hasCurrentObject ()) {
      switch (enumerator_7691.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_7923 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_7691.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_7923->mAssociatedValue0 ;
          {
          routine_handlePropertyAccessInAssignment (outArgument_outCurrentObject, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 181)) ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_8624 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_7691.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_8624->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfExpression = extractPtr_8624->mAssociatedValue1 ;
          {
          routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfExpression, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 188)) ;
          }
        }
        break ;
      }
      enumerator_7691.gotoNextObject () ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentTargetNoSelfAST_analyzeAssignmentTarget (void) {
  enterExtensionMethod_analyzeAssignmentTarget (kTypeDescriptor_GALGAS_assignmentTargetNoSelfAST.mSlotID,
                                                extensionMethod_assignmentTargetNoSelfAST_analyzeAssignmentTarget) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentTargetNoSelfAST_analyzeAssignmentTarget (defineExtensionMethod_assignmentTargetNoSelfAST_analyzeAssignmentTarget, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@assignmentTargetSelfAST analyzeAssignmentTarget'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentTargetSelfAST_analyzeAssignmentTarget (const cPtr_assignmentTargetAST * inObject,
                                                                             const GALGAS_PLMType constinArgument_inSelfType,
                                                                             const GALGAS_targetAccessKind /* constinArgument_inSelfAccessKind */,
                                                                             const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                             const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inCurrentMode,
                                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                             GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                                                             GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                             GALGAS_objectIR & outArgument_outCurrentObject,
                                                                             GALGAS_string & outArgument_outGlobalVariableReceiverName,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentTargetSelfAST * object = (const cPtr_assignmentTargetSelfAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentTargetSelfAST) ;
  outArgument_outGlobalVariableReceiverName = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_0 = constinArgument_inSelfType.getter_isStructure (SOURCE_FILE ("assignment-target.galgas", 231)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_structureObjectMap_9904 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_9942 ;
    GALGAS_lstring joker_9867 ; // Joker input parameter
    GALGAS_propertyList joker_9944_3 ; // Joker input parameter
    GALGAS_uint joker_9944_2 ; // Joker input parameter
    GALGAS_string joker_9944_1 ; // Joker input parameter
    constinArgument_inSelfType.method_structure (joker_9867, var_structureObjectMap_9904, var_universalMap_9942, joker_9944_3, joker_9944_2, joker_9944_1, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 232)) ;
    const enumGalgasBool test_1 = var_structureObjectMap_9904.getter_hasKey (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("assignment-target.galgas", 234)) COMMA_SOURCE_FILE ("assignment-target.galgas", 234)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_object_10154 ;
      GALGAS_bool joker_10133 ; // Joker input parameter
      var_structureObjectMap_9904.method_searchKey (object->mProperty_mIdentifier, joker_10133, var_object_10154, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 235)) ;
      {
      routine_handleSelfAccessInAssignment (constinArgument_inSelfType, var_object_10154, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 240)) ;
      }
    }else if (kBoolFalse == test_1) {
      outArgument_outCurrentObject = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("assignment-target.galgas", 248)), object->mProperty_mIdentifier  COMMA_SOURCE_FILE ("assignment-target.galgas", 248)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("assignment-target.galgas", 251)), GALGAS_string ("'self' should be a structure instance"), fixItArray2  COMMA_SOURCE_FILE ("assignment-target.galgas", 251)) ;
    outArgument_outCurrentObject.drop () ; // Release error dropped variable
    outArgument_outGlobalVariableReceiverName.drop () ; // Release error dropped variable
  }
  cEnumerator_accessInAssignmentListAST enumerator_10671 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_10671.hasCurrentObject ()) {
    switch (enumerator_10671.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_10887 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_10671.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_10887->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInAssignment (outArgument_outCurrentObject, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 257)) ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_11552 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_10671.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_11552->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_11552->mAssociatedValue1 ;
        {
        routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfExpression, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 264)) ;
        }
      }
      break ;
    }
    enumerator_10671.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentTargetSelfAST_analyzeAssignmentTarget (void) {
  enterExtensionMethod_analyzeAssignmentTarget (kTypeDescriptor_GALGAS_assignmentTargetSelfAST.mSlotID,
                                                extensionMethod_assignmentTargetSelfAST_analyzeAssignmentTarget) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentTargetSelfAST_analyzeAssignmentTarget (defineExtensionMethod_assignmentTargetSelfAST_analyzeAssignmentTarget, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleSelfAccessInAssignment'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSelfAccessInAssignment (const GALGAS_PLMType constinArgument_inSelfType,
                                           const GALGAS_objectIR constinArgument_inObject,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                           GALGAS_objectIR & outArgument_outObjectPtr,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectPtr.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inObject.getter_isProperty (SOURCE_FILE ("assignment-target.galgas", 294)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_PLMType var_type_11972 ;
    GALGAS_lstring var_name_11990 ;
    GALGAS_uint var_index_12007 ;
    constinArgument_inObject.method_property (var_type_11972, var_name_11990, var_index_12007, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 295)) ;
    outArgument_outObjectPtr = GALGAS_objectIR::constructor_temporaryReference (var_type_11972, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("assignment-target.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 298)), var_name_11990.getter_location (SOURCE_FILE ("assignment-target.galgas", 298))  COMMA_SOURCE_FILE ("assignment-target.galgas", 298)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("assignment-target.galgas", 299)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("assignment-target.galgas", 296)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 302)) ;
    {
    extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, outArgument_outObjectPtr, constinArgument_inSelfType, var_name_11990.getter_string (SOURCE_FILE ("assignment-target.galgas", 306)), var_index_12007, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 303)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("assignment-target.galgas", 310)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("assignment-target.galgas", 310)) ;
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
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObject, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 322)).getter_isStructure (SOURCE_FILE ("assignment-target.galgas", 322)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_structureObjectMap_12886 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_12930 ;
    GALGAS_lstring joker_12843 ; // Joker input parameter
    GALGAS_propertyList joker_12938_3 ; // Joker input parameter
    GALGAS_uint joker_12938_2 ; // Joker input parameter
    GALGAS_string joker_12938_1 ; // Joker input parameter
    extensionGetter_type (ioArgument_ioObject, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 323)).method_structure (joker_12843, var_structureObjectMap_12886, var_universalMap_12930, joker_12938_3, joker_12938_2, joker_12938_1, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 323)) ;
    const enumGalgasBool test_1 = var_structureObjectMap_12886.getter_hasKey (constinArgument_inPropertyName.getter_string (SOURCE_FILE ("assignment-target.galgas", 329)) COMMA_SOURCE_FILE ("assignment-target.galgas", 329)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_property_13077 ;
      GALGAS_bool joker_13056 ; // Joker input parameter
      var_structureObjectMap_12886.method_searchKey (constinArgument_inPropertyName, joker_13056, var_property_13077, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 330)) ;
      const enumGalgasBool test_2 = var_property_13077.getter_isProperty (SOURCE_FILE ("assignment-target.galgas", 331)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_PLMType var_type_13155 ;
        GALGAS_lstring var_name_13173 ;
        GALGAS_uint var_index_13190 ;
        var_property_13077.method_property (var_type_13155, var_name_13173, var_index_13190, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 332)) ;
        GALGAS_objectIR var_newObject_13213 = GALGAS_objectIR::constructor_temporaryReference (var_type_13155, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("assignment-target.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 335)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("assignment-target.galgas", 335))  COMMA_SOURCE_FILE ("assignment-target.galgas", 335)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("assignment-target.galgas", 336)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("assignment-target.galgas", 333)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 339)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_13213, ioArgument_ioObject, var_name_13173.getter_string (SOURCE_FILE ("assignment-target.galgas", 343)), var_index_13190.getter_string (SOURCE_FILE ("assignment-target.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 340)) ;
        }
        ioArgument_ioObject = var_newObject_13213 ;
      }else if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("assignment-target.galgas", 348)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray3  COMMA_SOURCE_FILE ("assignment-target.galgas", 348)) ;
        ioArgument_ioObject.drop () ; // Release error dropped variable
      }
    }else if (kBoolFalse == test_1) {
      ioArgument_ioObject = GALGAS_objectIR::constructor_possibleFunction (ioArgument_ioObject, constinArgument_inPropertyName  COMMA_SOURCE_FILE ("assignment-target.galgas", 351)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("assignment-target.galgas", 354)), GALGAS_string ("the current object has no property"), fixItArray4  COMMA_SOURCE_FILE ("assignment-target.galgas", 354)) ;
    ioArgument_ioObject.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromAST'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_routineMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                   const GALGAS_lstring & constinArgument_inRoutineName,
                                                   const GALGAS_routineFormalArgumentList & constinArgument_inFormalArgumentList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_lstring temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inRoutineName ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 101)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("context-routines.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 101)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 101)) ;
  }
  result_result = temp_0 ;
  result_result.mProperty_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 103)) ;
  cEnumerator_routineFormalArgumentList enumerator_4394 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_4394.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4394.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 105)).add_operation (enumerator_4394.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 105)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 105)) ;
    enumerator_4394.gotoNextObject () ;
  }
  result_result.mProperty_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 107)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromAST [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentList,
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
  const GALGAS_routineFormalArgumentList operand2 = GALGAS_routineFormalArgumentList::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
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
    temp_0 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 119)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("context-routines.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 119)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 119)) ;
  }
  result_result = temp_0 ;
  result_result.mProperty_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 121)) ;
  cEnumerator_effectiveArgumentListAST enumerator_5106 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_5106.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_5106.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 123)).add_operation (enumerator_5106.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 123)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 123)) ;
    enumerator_5106.gotoNextObject () ;
  }
  result_result.mProperty_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 125)) ;
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
                               const GALGAS_routineFormalArgumentList constinArgument_inFormalArgumentList,
                               GALGAS_routineTypedSignature & outArgument_outResult,
                               C_Compiler * /* inCompiler */
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  outArgument_outResult = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("context-routines.galgas", 134)) ;
  cEnumerator_routineFormalArgumentList enumerator_5630 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_5630.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_5721 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, enumerator_5630.current_mFormalArgumentTypeName (HERE), var_typeProxy_5721 COMMA_SOURCE_FILE ("context-routines.galgas", 136)) ;
    }
    outArgument_outResult.addAssign_operation (enumerator_5630.current_mFormalArgumentPassingMode (HERE), enumerator_5630.current_mSelector (HERE), var_typeProxy_5721  COMMA_SOURCE_FILE ("context-routines.galgas", 137)) ;
    enumerator_5630.gotoNextObject () ;
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
                                 GALGAS_unifiedSymbolMapEx & outArgument_outVariableMap,
                                 GALGAS_universalPropertyAndRoutineMapForContext & outArgument_outUniversalMap,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outVariableMap.drop () ; // Release 'out' argument
  outArgument_outUniversalMap.drop () ; // Release 'out' argument
  outArgument_outUniversalMap = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("unified-symbol-map.galgas", 15)) ;
  outArgument_outVariableMap = GALGAS_unifiedSymbolMapEx::constructor_emptyMap (SOURCE_FILE ("unified-symbol-map.galgas", 16)) ;
  cEnumerator_moduleMap enumerator_1071 (constinArgument_inContext.getter_mModuleMap (HERE), kENUMERATION_UP) ;
  while (enumerator_1071.hasCurrentObject ()) {
    GALGAS_lstring var_moduleTypeName_1097 = function_moduleMangledNameFromModuleName (enumerator_1071.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 19)) ;
    GALGAS_PLMType var_moduleType_1164 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_moduleTypeName_1097, inCompiler  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 20)).getter_type (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 20)) ;
    {
    outArgument_outVariableMap.setter_insertModule (enumerator_1071.current_lkey (HERE), var_moduleType_1164, GALGAS_bool (false), GALGAS_objectIR::constructor_globalVariableReference (var_moduleType_1164, enumerator_1071.current_lkey (HERE)  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 25)), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 21)) ;
    }
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_1561 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertModule ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_1561, enumerator_1071.current_lkey (HERE), var_moduleType_1164, inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 29)) ;
    }
    enumerator_1071.gotoNextObject () ;
  }
  cEnumerator_controlRegisterMap enumerator_1724 (constinArgument_inContext.getter_mControlRegisterMap (HERE), kENUMERATION_UP) ;
  while (enumerator_1724.hasCurrentObject ()) {
    GALGAS_bool var_registerIsReadable_1754 = extensionGetter_controlRegisterAccess (constinArgument_inRequiredMode, enumerator_1724.current (HERE).getter_mIsAccessibleInUserMode (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 33)) ;
    GALGAS_bool test_0 = var_registerIsReadable_1754 ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = enumerator_1724.current (HERE).getter_mIsReadOnly (HERE).operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 34)) ;
    }
    GALGAS_bool test_1 = test_0 ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = inArgument_inGlobalsAreConstant.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 34)) ;
    }
    GALGAS_bool var_registerIsWritable_1856 = test_1 ;
    GALGAS_objectIR var_objectReference_1957 = GALGAS_objectIR::constructor_registerReference (enumerator_1724.current (HERE).getter_mType (HERE), enumerator_1724.current (HERE).getter_lkey (HERE), var_registerIsReadable_1754, var_registerIsWritable_1856, enumerator_1724.current (HERE).getter_mAddress (HERE), enumerator_1724.current (HERE).getter_mRegisterFieldAccessMap (HERE), enumerator_1724.current (HERE).getter_mArraySize (HERE), enumerator_1724.current (HERE).getter_mElementArraySize (HERE)  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 35)) ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_2350 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertRegister ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_2350, enumerator_1724.current (HERE).getter_lkey (HERE), var_registerIsReadable_1754, var_registerIsWritable_1856, var_objectReference_1957, inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 45)) ;
    }
    const enumGalgasBool test_2 = var_registerIsReadable_1754.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 51)).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      outArgument_outVariableMap.setter_insertInaccessibleControlRegister (enumerator_1724.current (HERE).getter_lkey (HERE), enumerator_1724.current (HERE).getter_mType (HERE), GALGAS_bool (false), var_objectReference_1957, GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 52)) ;
      }
    }else if (kBoolFalse == test_2) {
      GALGAS_bool test_3 = enumerator_1724.current (HERE).getter_mIsReadOnly (HERE) ;
      if (kBoolTrue != test_3.boolEnum ()) {
        test_3 = inArgument_inGlobalsAreConstant ;
      }
      const enumGalgasBool test_4 = test_3.boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        outArgument_outVariableMap.setter_insertUsedConstant (enumerator_1724.current (HERE).getter_lkey (HERE), enumerator_1724.current (HERE).getter_mType (HERE), GALGAS_bool (true), var_objectReference_1957, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 61)) ;
        }
      }else if (kBoolFalse == test_4) {
        {
        outArgument_outVariableMap.setter_insertDefinedVariable (enumerator_1724.current (HERE).getter_lkey (HERE), enumerator_1724.current (HERE).getter_mType (HERE), GALGAS_bool (true), var_objectReference_1957, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 70)) ;
        }
      }
    }
    enumerator_1724.gotoNextObject () ;
  }
  cEnumerator_globalConstantMap enumerator_3590 (constinArgument_inContext.getter_mGlobalConstantMap (HERE), kENUMERATION_UP) ;
  while (enumerator_3590.hasCurrentObject ()) {
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_3616 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_3616, enumerator_3590.current_lkey (HERE), enumerator_3590.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 82)) ;
    }
    {
    outArgument_outVariableMap.setter_insertUsedConstant (enumerator_3590.current_lkey (HERE), extensionGetter_type (enumerator_3590.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 85)), GALGAS_bool (true), enumerator_3590.current_mValue (HERE), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 83)) ;
    }
    enumerator_3590.gotoNextObject () ;
  }
  cEnumerator_globalVariableMap enumerator_4059 (constinArgument_inContext.getter_mGlobalVariableMap (HERE), kENUMERATION_UP) ;
  while (enumerator_4059.hasCurrentObject ()) {
    GALGAS_objectIR var_objectIR_4079 = GALGAS_objectIR::constructor_globalVariableReference (enumerator_4059.current (HERE).getter_type (HERE), enumerator_4059.current (HERE).getter_lkey (HERE)  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 94)) ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_4183 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4183, enumerator_4059.current (HERE).getter_lkey (HERE), var_objectIR_4079, inArgument_inGlobalsAreConstant.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 95)) ;
    }
    GALGAS_bool var_writeAccess_4276 = enumerator_4059.current (HERE).getter_allowedAccessToAll (HERE) ;
    GALGAS_bool var_allowedAccess_4328 = var_writeAccess_4276 ;
    GALGAS_bool test_5 = inArgument_inGlobalsAreConstant ;
    if (kBoolTrue != test_5.boolEnum ()) {
      test_5 = enumerator_4059.current (HERE).getter_isConstant (HERE) ;
    }
    GALGAS_bool test_6 = test_5 ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = var_writeAccess_4276.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 98)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      outArgument_outVariableMap.setter_insertUsedConstant (enumerator_4059.current (HERE).getter_lkey (HERE), enumerator_4059.current (HERE).getter_type (HERE), var_allowedAccess_4328, var_objectIR_4079, extensionGetter_copyable (enumerator_4059.current (HERE).getter_type (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 104)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 99)) ;
      }
    }else if (kBoolFalse == test_7) {
      {
      outArgument_outVariableMap.setter_insertDefinedVariable (enumerator_4059.current (HERE).getter_lkey (HERE), enumerator_4059.current (HERE).getter_type (HERE), var_allowedAccess_4328, var_objectIR_4079, extensionGetter_copyable (enumerator_4059.current (HERE).getter_type (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 113)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 108)) ;
      }
    }
    enumerator_4059.gotoNextObject () ;
  }
  cEnumerator_internalRoutineMapForContext enumerator_5123 (constinArgument_inContext.getter_mRoutineMapForContext (HERE).getter_mInternalRoutineMapForContext (HERE), kENUMERATION_UP) ;
  while (enumerator_5123.hasCurrentObject ()) {
    cEnumerator_routineArgumentSignatureMapForContext enumerator_5195 (enumerator_5123.current (HERE).getter_mRoutineArgumentSignatureMapForContext (HERE), kENUMERATION_UP) ;
    while (enumerator_5195.hasCurrentObject ()) {
      {
      outArgument_outUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_5223 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
      callExtensionSetter_insertRoutine ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5223, enumerator_5123.current (HERE).getter_lkey (HERE), enumerator_5195.current (HERE).getter_lkey (HERE), enumerator_5195.current (HERE).getter_mRoutineLLVMName (HERE), enumerator_5195.current (HERE).getter_mDescriptor (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 121)) ;
      }
      enumerator_5195.gotoNextObject () ;
    }
    enumerator_5123.gotoNextObject () ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_lstring var_resultVarName_5516 = GALGAS_lstring::constructor_new (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 131)), constinArgument_inReturnTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 131)) ;
    GALGAS_PLMType var_resultType_5610 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 132)).getter_type (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 132)) ;
    GALGAS_objectIR var_objectIR_5708 = GALGAS_objectIR::constructor_localVariableReference (var_resultType_5610, var_resultVarName_5516  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 133)) ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_5808 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5808, var_resultVarName_5516, var_objectIR_5708, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("unified-symbol-map.galgas", 134)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 134)) ;
    }
    {
    outArgument_outVariableMap.setter_insertOutputFormalArgument (var_resultVarName_5516, var_resultType_5610, GALGAS_bool (true), var_objectIR_5708, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 135)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'variableMapWithConstants'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_variableMapWithConstants (const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_unifiedSymbolMapEx & outArgument_outVariableMap,
                                       GALGAS_universalPropertyAndRoutineMapForContext & outArgument_outUniversalMap,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outVariableMap.drop () ; // Release 'out' argument
  outArgument_outUniversalMap.drop () ; // Release 'out' argument
  outArgument_outVariableMap = GALGAS_unifiedSymbolMapEx::constructor_emptyMap (SOURCE_FILE ("unified-symbol-map.galgas", 153)) ;
  outArgument_outUniversalMap = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("unified-symbol-map.galgas", 154)) ;
  cEnumerator_globalConstantMap enumerator_6543 (constinArgument_inContext.getter_mGlobalConstantMap (HERE), kENUMERATION_UP) ;
  while (enumerator_6543.hasCurrentObject ()) {
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_6569 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6569, enumerator_6543.current_lkey (HERE), enumerator_6543.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 157)) ;
    }
    {
    outArgument_outVariableMap.setter_insertUsedConstant (enumerator_6543.current_lkey (HERE), extensionGetter_type (enumerator_6543.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 160)), GALGAS_bool (true), enumerator_6543.current_mValue (HERE), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 158)) ;
    }
    enumerator_6543.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'getNewTempVariable'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempVariable (const GALGAS_PLMType constinArgument_inType,
                                 GALGAS_location inArgument_inErrorLocation,
                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                 GALGAS_objectIR & outArgument_outTempVariable,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("unified-symbol-map.galgas", 177)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outTempVariable = GALGAS_objectIR::constructor_null (SOURCE_FILE ("unified-symbol-map.galgas", 178)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outTempVariable = GALGAS_objectIR::constructor_llvmTemporaryValue (constinArgument_inType, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("unified-symbol-map.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 182)), inArgument_inErrorLocation  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 182)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("unified-symbol-map.galgas", 183))  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 180)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 185)) ;
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
  GALGAS_semanticTypePrecedenceGraph var_precedenceGraph_1616 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("ordered-declaration-list.galgas", 28)) ;
  cEnumerator_declarationListAST enumerator_1668 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_1668.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclaration *) enumerator_1668.current_mDeclaration (HERE).ptr (), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 30)) ;
    enumerator_1668.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mBootListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 32)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mInitListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 33)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mPanicClauseListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 34)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 35)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mExternProcListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 36)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 37)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mGuardListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mControlRegisterDeclarationListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 39)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 40)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mTaskListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 41)) ;
  cEnumerator_stringlist enumerator_2641 (var_precedenceGraph_1616.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 43)), kENUMERATION_UP) ;
  while (enumerator_2641.hasCurrentObject ()) {
    GALGAS_stringlist var_split_2658 = enumerator_2641.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("int") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 44)) ;
    GALGAS_bool test_0 = GALGAS_bool (kIsEqual, var_split_2658.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 45)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = var_split_2658.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 45)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 45)) ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_split_2658.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 46)).objectCompare (GALGAS_string ("$u"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_n_2853 = var_split_2658.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)) ;
        GALGAS_integerDeclaration var_declaration_2928 = GALGAS_integerDeclaration::constructor_new (GALGAS_bool (false), var_n_2853  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)) ;
        callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclaration *) var_declaration_2928.ptr (), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_split_2658.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 50)).objectCompare (GALGAS_string ("$"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_uint var_n_3092 = var_split_2658.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)) ;
          GALGAS_integerDeclaration var_declaration_3167 = GALGAS_integerDeclaration::constructor_new (GALGAS_bool (true), var_n_3092  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)) ;
          callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclaration *) var_declaration_3167.ptr (), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 53)) ;
        }
      }
    }
    enumerator_2641.gotoNextObject () ;
  }
  GALGAS_bool test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 58)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = GALGAS_bool (gOption_plm_5F_options_writeDeclarationDependencyGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_s_3476 = var_precedenceGraph_1616.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 59)) ;
    GALGAS_string var_filePath_3522 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 60)) ;
    GALGAS_bool joker_3620 ; // Joker input parameter
    var_s_3476.method_writeToFileWhenDifferentContents (var_filePath_3522, joker_3620, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 61)) ;
  }
  outArgument_outDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 64)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_precedenceGraph_1616.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 65)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    cEnumerator_lstringlist enumerator_3842 (var_precedenceGraph_1616.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 66)), kENUMERATION_UP) ;
    while (enumerator_3842.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (enumerator_3842.current_mValue (HERE).getter_location (SOURCE_FILE ("ordered-declaration-list.galgas", 67)), enumerator_3842.current_mValue (HERE).getter_string (HERE).add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 67)), fixItArray7  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 67)) ;
      enumerator_3842.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_6) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_4056 ;
    GALGAS_lstringlist joker_3989 ; // Joker input parameter
    GALGAS_lstringlist joker_4064 ; // Joker input parameter
    var_precedenceGraph_1616.method_topologicalSort (outArgument_outDeclarationListAST, joker_3989, var_unsortedSemanticDeclarationListAST_4056, joker_4064, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 70)) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_4056.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 76)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_s_4143 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_4056.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 78)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 77)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 78)) ;
      cEnumerator_declarationListAST enumerator_4358 (var_unsortedSemanticDeclarationListAST_4056, kENUMERATION_UP) ;
      while (enumerator_4358.hasCurrentObject ()) {
        var_s_4143.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclaration *) enumerator_4358.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)) ;
        enumerator_4358.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_4143, fixItArray9  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)) ;
      cEnumerator_declarationListAST enumerator_4530 (var_unsortedSemanticDeclarationListAST_4056, kENUMERATION_UP) ;
      while (enumerator_4530.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_abstractDeclaration *) enumerator_4530.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)), GALGAS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclaration *) enumerator_4530.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)), fixItArray10  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)) ;
        enumerator_4530.gotoNextObject () ;
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
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 205)) ;
  cEnumerator_initList enumerator_8493 (constinArgument_inAST.getter_mInitListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8493.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_8493.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 208)) ;
    enumerator_8493.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_8638 (constinArgument_inAST.getter_mPanicClauseListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8638.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_8638.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 212)) ;
    enumerator_8638.gotoNextObject () ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 215)) ;
  extensionMethod_enterFunctionInContext (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 216)) ;
  extensionMethod_enterExternProcInContext (constinArgument_inAST.getter_mExternProcListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 217)) ;
  extensionMethod_enterInContext (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 218)) ;
  extensionMethod_enterInContext (constinArgument_inAST.getter_mGuardListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 219)) ;
  cEnumerator_declarationListAST enumerator_9302 (constinArgument_inDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_9302.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((const cPtr_abstractDeclaration *) enumerator_9302.current_mDeclaration (HERE).ptr (), constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), outArgument_outSemanticContext, ioArgument_ioStaticListValueMap, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 222)) ;
    enumerator_9302.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.getter_mGlobalConstantMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 230)) ;
  }
  {
  routine_buildTypeMapHTMLFile (outArgument_outSemanticContext.getter_mTypeMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 235)) ;
  }
  {
  routine_enterControlRegistersInContext (constinArgument_inAST.getter_mControlRegisterDeclarationListAST (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 240)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.getter_mControlRegisterMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 245)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mTaskListAST (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 250)) ;
  cEnumerator_declarationListAST enumerator_10344 (constinArgument_inDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_10344.hasCurrentObject ()) {
    callExtensionMethod_enterRoutinesInContext ((const cPtr_abstractDeclaration *) enumerator_10344.current_mDeclaration (HERE).ptr (), constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 253)) ;
    enumerator_10344.gotoNextObject () ;
  }
  cEnumerator_staticlistValues_5F_listMap enumerator_10651 (ioArgument_ioStaticListValueMap, kENUMERATION_UP) ;
  while (enumerator_10651.hasCurrentObject ()) {
    GALGAS_lstring var_lkey_10667 = GALGAS_lstring::constructor_new (enumerator_10651.current_key (HERE), GALGAS_location::constructor_nowhere (SOURCE_FILE ("context.galgas", 261))  COMMA_SOURCE_FILE ("context.galgas", 261)) ;
    GALGAS_lstring var_elementTypePLMName_10726 = function_plmNameForStaticListElementType (var_lkey_10667, inCompiler COMMA_SOURCE_FILE ("context.galgas", 262)) ;
    GALGAS_PLMType var_elementType_10788 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (outArgument_outSemanticContext.getter_mTypeMap (HERE), var_elementTypePLMName_10726, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 263)).getter_type (inCompiler COMMA_SOURCE_FILE ("context.galgas", 263)) ;
    {
    outArgument_outSemanticContext.mProperty_mTypeMap.setter_insertType (function_plmNameForStaticListType (var_lkey_10667, inCompiler COMMA_SOURCE_FILE ("context.galgas", 265)), GALGAS_PLMType::constructor_arrayType (function_llvmNameForStaticListType (enumerator_10651.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 267)).getter_nowhere (SOURCE_FILE ("context.galgas", 267)), var_elementType_10788, enumerator_10651.current_mList (HERE).getter_length (SOURCE_FILE ("context.galgas", 269)).getter_bigint (SOURCE_FILE ("context.galgas", 269)), GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("context.galgas", 270)), GALGAS_uint ((uint32_t) 0U), function_plmNameForStaticListType (var_lkey_10667, inCompiler COMMA_SOURCE_FILE ("context.galgas", 272)).getter_string (SOURCE_FILE ("context.galgas", 272))  COMMA_SOURCE_FILE ("context.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 264)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_staticListType_11262 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (outArgument_outSemanticContext.getter_mTypeMap (HERE), function_plmNameForStaticListType (var_lkey_10667, inCompiler COMMA_SOURCE_FILE ("context.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 275)) ;
    {
    outArgument_outSemanticContext.mProperty_mGlobalConstantMap.setter_insertKey (var_lkey_10667, GALGAS_objectIR::constructor_globalVariableReference (var_staticListType_11262.getter_type (inCompiler COMMA_SOURCE_FILE ("context.galgas", 278)), var_lkey_10667  COMMA_SOURCE_FILE ("context.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 276)) ;
    }
    enumerator_10651.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("context.galgas", 282)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    cEnumerator_globalVarDeclarationList enumerator_11638 (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), kENUMERATION_UP) ;
    while (enumerator_11638.hasCurrentObject ()) {
      extensionMethod_enterInContext (enumerator_11638.current (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 284)) ;
      enumerator_11638.gotoNextObject () ;
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
  result_outResult = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 295)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("context.galgas", 295)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 295)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 295)).getter_nowhere (SOURCE_FILE ("context.galgas", 295)) ;
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
//                                           Routine 'buildTypeMapHTMLFile'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildTypeMapHTMLFile (GALGAS_unifiedTypeMap inArgument_inTypeMap,
                                   const GALGAS_lstring constinArgument_inSourceFile,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_9201 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 275)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitTypeMap.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_9318 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 277)) ;
    cEnumerator_unifiedTypeMap enumerator_9347 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_9347.hasCurrentObject ()) {
      var_firstLetterSet_9318.addAssign_operation (enumerator_9347.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 279)).getter_string (SOURCE_FILE ("types.galgas", 279))  COMMA_SOURCE_FILE ("types.galgas", 279)) ;
      enumerator_9347.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_9455 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_9489 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_unifiedTypeMap enumerator_9525 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_9525.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_9489.objectCompare (enumerator_9525.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 284)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_9489 = enumerator_9525.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 285)) ;
        var_tableOfTypeString_9455.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_9489.getter_uint (SOURCE_FILE ("types.galgas", 286)).getter_string (SOURCE_FILE ("types.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (var_currentFirstLetter_9489.getter_string (SOURCE_FILE ("types.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 286)) ;
      }
      var_tableOfTypeString_9455.plusAssign_operation(function_linkForHTMLTypeMap (enumerator_9525.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 288)) ;
      enumerator_9525.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_9918 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("types.galgas", 291)), inArgument_inTypeMap, var_firstLetterSet_9318, var_tableOfTypeString_9455 COMMA_SOURCE_FILE ("types.galgas", 290))) ;
    GALGAS_bool joker_10148 ; // Joker input parameter
    var_typeDumpString_9918.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_9201, joker_10148, inCompiler COMMA_SOURCE_FILE ("types.galgas", 296)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_9201, inCompiler COMMA_SOURCE_FILE ("types.galgas", 298)) ;
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
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 317)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 317)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 317)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 317)) ;
//---
  return result_outResult ;
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
//                                               Routine 'solveEntities'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_solveEntities (const GALGAS_ast constinArgument_inAST,
                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                            C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  extensionMethod_solveEntities (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), constinArgument_inSemanticContext.getter_mGlobalConstantMap (HERE), constinArgument_inSemanticContext.getter_mControlRegisterMap (HERE), constinArgument_inSemanticContext.getter_mGlobalVariableMap (HERE), inCompiler COMMA_SOURCE_FILE ("entity-resolution.galgas", 25)) ;
}


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
  GALGAS_objectIR result_outResult ; // Returned variable
  GALGAS_PLMType var_sourceType_886 = extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 14)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetAnnotationType.objectCompare (var_sourceType_886)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = constinArgument_inSourceValue ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = constinArgument_inOptionalTargetAnnotationType.getter_isVoid (SOURCE_FILE ("semantic-analysis.galgas", 17)).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outResult = constinArgument_inSourceValue ;
    }else if (kBoolFalse == test_1) {
      GALGAS_bool test_2 = var_sourceType_886.getter_isStaticInteger (SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = constinArgument_inOptionalTargetAnnotationType.getter_isInteger (SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
      }
      const enumGalgasBool test_3 = test_2.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_bigint var_value_1220 ;
        GALGAS_PLMType joker_1201_1 ; // Joker input parameter
        constinArgument_inSourceValue.method_literalInteger (joker_1201_1, var_value_1220, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)) ;
        GALGAS_bigint var_minTarget_1284 ;
        GALGAS_bigint var_maxTarget_1303 ;
        GALGAS_bool joker_1305_3 ; // Joker input parameter
        GALGAS_uint joker_1305_2 ; // Joker input parameter
        GALGAS_string joker_1305_1 ; // Joker input parameter
        constinArgument_inOptionalTargetAnnotationType.method_integer (var_minTarget_1284, var_maxTarget_1303, joker_1305_3, joker_1305_2, joker_1305_1, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 21)) ;
        GALGAS_bool test_4 = GALGAS_bool (kIsStrictInf, var_value_1220.objectCompare (var_minTarget_1284)) ;
        if (kBoolTrue != test_4.boolEnum ()) {
          test_4 = GALGAS_bool (kIsStrictInf, var_maxTarget_1303.objectCompare (var_value_1220)) ;
        }
        const enumGalgasBool test_5 = test_4.boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("literal integer too large"), fixItArray6  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 23)) ;
          result_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          result_outResult = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 25)) ;
        }
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object of type $").add_operation (extensionGetter_key (constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).add_operation (GALGAS_string (" cannot be assigned from expression of type $"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).add_operation (extensionGetter_key (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 30)), fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_8 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 33)).boolEnum () ;
  if (kBoolTrue == test_8) {
    const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, extensionGetter_key (result_outResult, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the $").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)).add_operation (GALGAS_string (" static type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)), fixItArray10  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)) ;
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
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 69)) ;
  outArgument_outIntermediateCodeStruct.mProperty_mTargetParameters = constinArgument_inSemanticContext.getter_mTargetParameters (HERE) ;
  outArgument_outIntermediateCodeStruct.mProperty_mStaticStringMap = constinArgument_inGlobalLiteralStringMap ;
  outArgument_outIntermediateCodeStruct.mProperty_mGlobalTaskVariableList = constinArgument_inSemanticContext.getter_mGlobalTaskVariableList (HERE) ;
  cEnumerator_requiredProcedureDeclarationListAST enumerator_3548 (constinArgument_inAST.getter_mRequiredProcListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_3548.hasCurrentObject ()) {
    GALGAS_lstring var_requiredProcedureMangledName_3588 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_3548.current (HERE).getter_mName (HERE), enumerator_3548.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 74)) ;
    outArgument_outIntermediateCodeStruct.mProperty_mRequiredProcedureSet.addAssign_operation (var_requiredProcedureMangledName_3588.getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 75)) ;
    enumerator_3548.gotoNextObject () ;
  }
  cEnumerator_globalVarDeclarationList enumerator_3851 (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_3851.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_3851.current (HERE), constinArgument_inSemanticContext, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 79)) ;
    enumerator_3851.gotoNextObject () ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_4029 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 85)) ;
  cEnumerator_declarationListAST enumerator_4089 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_4089.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((const cPtr_abstractDeclaration *) enumerator_4089.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_4029, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 87)) ;
    enumerator_4089.gotoNextObject () ;
  }
  extensionMethod_functionSemanticAnalysis (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 94)), constinArgument_inSemanticContext, var_temporaries_4029, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 93)) ;
  extensionMethod_semanticAnalysis (constinArgument_inAST.getter_mTaskListAST (HERE), constinArgument_inSemanticContext, var_temporaries_4029, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 99)) ;
  extensionMethod_systemRoutineSemanticAnalysis (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 105)), constinArgument_inSemanticContext, var_temporaries_4029, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 104)) ;
  extensionMethod_guardSemanticAnalysis (constinArgument_inAST.getter_mGuardListAST (HERE), GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 111)), constinArgument_inSemanticContext, var_temporaries_4029, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 110)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.getter_mExternProcListAST (HERE), constinArgument_inSemanticContext, var_temporaries_4029, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 116)) ;
  extensionMethod_isrSemanticAnalysis (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), constinArgument_inSemanticContext, var_temporaries_4029, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 121)) ;
  cEnumerator_bootList enumerator_5369 (constinArgument_inAST.getter_mBootListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5369.hasCurrentObject ()) {
    extensionMethod_bootSemanticAnalysis (enumerator_5369.current (HERE), constinArgument_inSemanticContext, var_temporaries_4029, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 127)) ;
    enumerator_5369.gotoNextObject () ;
  }
  cEnumerator_initList enumerator_5562 (constinArgument_inAST.getter_mInitListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5562.hasCurrentObject ()) {
    extensionMethod_initSemanticAnalysis (enumerator_5562.current (HERE), constinArgument_inSemanticContext, var_temporaries_4029, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 134)) ;
    enumerator_5562.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_5791 (constinArgument_inAST.getter_mPanicClauseListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5791.hasCurrentObject ()) {
    extensionMethod_panicSemanticAnalysis (enumerator_5791.current (HERE), constinArgument_inSemanticContext, var_temporaries_4029, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 142)) ;
    enumerator_5791.gotoNextObject () ;
  }
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 149)) ;
  }
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 155)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_writeRoutineInvocationGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_s_6256 = var_temporaries_4029.getter_mSubprogramInvocationGraph (HERE).getter_graphviz (SOURCE_FILE ("semantic-analysis.galgas", 156)) ;
    GALGAS_string var_filePath_6325 = constinArgument_inSourceFile.getter_stringByDeletingPathExtension (SOURCE_FILE ("semantic-analysis.galgas", 157)).add_operation (GALGAS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 157)) ;
    GALGAS_bool joker_6451 ; // Joker input parameter
    var_s_6256.method_writeToFileWhenDifferentContents (var_filePath_6325, joker_6451, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 158)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 161)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = GALGAS_bool (gOption_plm_5F_options_doNotDetectRecursiveCalls.getter_value ()).operator_not (SOURCE_FILE ("semantic-analysis.galgas", 161)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_stringlist var_undefinedNodeKeyList_6620 = var_temporaries_4029.getter_mSubprogramInvocationGraph (HERE).getter_undefinedNodeKeyList (SOURCE_FILE ("semantic-analysis.galgas", 162)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_undefinedNodeKeyList_6620.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 163)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_s_6744 = GALGAS_string ("subprogram invocation graph error, undefined nodes:") ;
      cEnumerator_stringlist enumerator_6842 (var_undefinedNodeKeyList_6620, kENUMERATION_UP) ;
      while (enumerator_6842.hasCurrentObject ()) {
        var_s_6744.plusAssign_operation(GALGAS_string ("\n"
          " - ").add_operation (enumerator_6842.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 166)) ;
        enumerator_6842.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_6744, fixItArray5  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 168)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_lstringlist var_unsortedInformationList_7049 ;
      GALGAS_lstringlist var_unsortedLKeyList_7093 ;
      var_temporaries_4029.getter_mSubprogramInvocationGraph (HERE).method_circularities (var_unsortedInformationList_7049, var_unsortedLKeyList_7093 COMMA_SOURCE_FILE ("semantic-analysis.galgas", 170)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_unsortedLKeyList_7093.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_s_7159 = GALGAS_string ("the following routines are recursive:") ;
        cEnumerator_lstringlist enumerator_7239 (var_unsortedLKeyList_7093, kENUMERATION_UP) ;
        while (enumerator_7239.hasCurrentObject ()) {
          var_s_7159.plusAssign_operation(GALGAS_string ("\n"
            " - ").add_operation (enumerator_7239.current_mValue (HERE).getter_string (SOURCE_FILE ("semantic-analysis.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 177)) ;
          enumerator_7239.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_7159, fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 179)) ;
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
                                   const GALGAS_routineFormalArgumentList constinArgument_inFormalArgumentPassingMode,
                                   GALGAS_unifiedSymbolMapEx & ioArgument_ioVariableMap,
                                   GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                   GALGAS_routineFormalArgumentListForGeneration & ioArgument_ioFormalArguments,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_routineFormalArgumentList enumerator_1295 (constinArgument_inFormalArgumentPassingMode, kENUMERATION_UP) ;
  while (enumerator_1295.hasCurrentObject ()) {
    GALGAS_PLMType var_typeProxy_1316 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), enumerator_1295.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 27)).getter_type (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 27)) ;
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_1295.current_mFormalArgumentPassingMode (HERE), var_typeProxy_1316, enumerator_1295.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 28)) ;
    GALGAS_objectIR var_objectIR_1497 = GALGAS_objectIR::constructor_localVariableReference (var_typeProxy_1316, enumerator_1295.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 29)) ;
    switch (enumerator_1295.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_1643 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_1643, enumerator_1295.current_mFormalArgumentName (HERE), var_objectIR_1497, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 32)) ;
        }
        {
        ioArgument_ioVariableMap.setter_insertConstantInputFormalArgument (enumerator_1295.current_mFormalArgumentName (HERE), var_typeProxy_1316, GALGAS_bool (true), var_objectIR_1497, extensionGetter_copyable (var_typeProxy_1316, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 38)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 33)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_2001 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_2001, enumerator_1295.current_mFormalArgumentName (HERE), var_objectIR_1497, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("semantic-routines.galgas", 42)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 42)) ;
        }
        {
        ioArgument_ioVariableMap.setter_insertInputOutputFormalArgument (enumerator_1295.current_mFormalArgumentName (HERE), var_typeProxy_1316, GALGAS_bool (true), var_objectIR_1497, extensionGetter_copyable (var_typeProxy_1316, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 48)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 43)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_2375 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_2375, enumerator_1295.current_mFormalArgumentName (HERE), var_objectIR_1497, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("semantic-routines.galgas", 52)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 52)) ;
        }
        {
        ioArgument_ioVariableMap.setter_insertOutputFormalArgument (enumerator_1295.current_mFormalArgumentName (HERE), var_typeProxy_1316, GALGAS_bool (true), var_objectIR_1497, extensionGetter_copyable (var_typeProxy_1316, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 58)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 53)) ;
        }
      }
      break ;
    }
    enumerator_1295.gotoNextObject () ;
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
                                      const GALGAS_routineFormalArgumentList constinArgument_inRoutineFormalArgumentList,
                                      const GALGAS_lstring constinArgument_inReturnTypeName,
                                      const GALGAS_instructionListAST constinArgument_inRoutineInstructionList,
                                      const GALGAS_location constinArgument_inEndOfRoutineDeclaration,
                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                      const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                      const GALGAS_bool constinArgument_inWarnIfUnused,
                                      const GALGAS_bool constinArgument_inGlobalFunction,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 86)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("$").add_operation (extensionGetter_key (constinArgument_inSelfType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 86)) ;
  }
  GALGAS_lstring var_routineMangledName_3647 = function_routineMangledNameFromAST (temp_0, constinArgument_inRoutineName, constinArgument_inRoutineFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 85)) ;
  GALGAS_unifiedSymbolMapEx var_variableMap_3993 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_4053 ;
  {
  routine_initialVariableMap (constinArgument_inContext, constinArgument_inRoutineMode, GALGAS_bool (false), constinArgument_inReturnTypeName, var_variableMap_3993, var_universalMap_4053, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 91)) ;
  }
  GALGAS_routineFormalArgumentListForGeneration var_formalArguments_4145 = GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 100)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_3993, var_universalMap_4053, var_formalArguments_4145, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 101)) ;
  }
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineMangledName_3647.getter_string (HERE) COMMA_SOURCE_FILE ("semantic-routines.galgas", 109)).operator_not (SOURCE_FILE ("semantic-routines.galgas", 109)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_3647, var_routineMangledName_3647, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 110)) ;
    }
  }
  GALGAS_allocaList var_allocaList_4606 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 116)) ;
  GALGAS_instructionListIR var_instructionGenerationList_4658 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 117)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_routineMangledName_3647, constinArgument_inContext, constinArgument_inRoutineMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_3993, var_universalMap_4053, var_allocaList_4606, var_instructionGenerationList_4658, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 118)) ;
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_4053.ptr (), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 134)) ;
  var_variableMap_3993.method_checkAutomatonStates (constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 135)) ;
  GALGAS_PLMType temp_3 ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 139)) ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 141)).getter_type (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 141)) ;
  }
  GALGAS_PLMType var_returnType_5430 = temp_3 ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineMapIR.setter_insertKey (var_routineMangledName_3647, constinArgument_inSelfType, var_routineMangledName_3647, var_formalArguments_4145, var_allocaList_4606, var_instructionGenerationList_4658, ioArgument_ioIntermediateCodeStruct.getter_mRequiredProcedureSet (HERE).getter_hasKey (var_routineMangledName_3647.getter_string (HERE) COMMA_SOURCE_FILE ("semantic-routines.galgas", 150)), constinArgument_inWarnIfUnused, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType_5430, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 143)) ;
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
  result_result = GALGAS_string (" nounwind ") ;
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
//                                            Once function 'equatableFlag'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_equatableFlag (C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 0U) COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 17)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_equatableFlag = false ;
static GALGAS_uint gOnceFunctionResult_equatableFlag ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_equatableFlag (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_equatableFlag) {
    gOnceFunctionResult_equatableFlag = onceFunction_equatableFlag (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_equatableFlag = true ;
  }
  return gOnceFunctionResult_equatableFlag ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_equatableFlag (void) {
  gOnceFunctionResult_equatableFlag.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_equatableFlag (NULL,
                                                           releaseOnceFunctionResult_equatableFlag) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_equatableFlag [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_equatableFlag (C_Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_equatableFlag (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_equatableFlag ("equatableFlag",
                                                               functionWithGenericHeader_equatableFlag,
                                                               & kTypeDescriptor_GALGAS_uint,
                                                               0,
                                                               functionArgs_equatableFlag) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'instanciableFlag'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_instanciableFlag (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 18)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_instanciableFlag = false ;
static GALGAS_uint gOnceFunctionResult_instanciableFlag ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_instanciableFlag (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_instanciableFlag) {
    gOnceFunctionResult_instanciableFlag = onceFunction_instanciableFlag (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_instanciableFlag = true ;
  }
  return gOnceFunctionResult_instanciableFlag ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_instanciableFlag (void) {
  gOnceFunctionResult_instanciableFlag.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_instanciableFlag (NULL,
                                                              releaseOnceFunctionResult_instanciableFlag) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_instanciableFlag [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_instanciableFlag (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_instanciableFlag (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_instanciableFlag ("instanciableFlag",
                                                                  functionWithGenericHeader_instanciableFlag,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_instanciableFlag) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'copyableFlag'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_copyableFlag (C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 2U) COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 19)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_copyableFlag = false ;
static GALGAS_uint gOnceFunctionResult_copyableFlag ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_copyableFlag (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_copyableFlag) {
    gOnceFunctionResult_copyableFlag = onceFunction_copyableFlag (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_copyableFlag = true ;
  }
  return gOnceFunctionResult_copyableFlag ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_copyableFlag (void) {
  gOnceFunctionResult_copyableFlag.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_copyableFlag (NULL,
                                                          releaseOnceFunctionResult_copyableFlag) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_copyableFlag [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_copyableFlag (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_copyableFlag (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_copyableFlag ("copyableFlag",
                                                              functionWithGenericHeader_copyableFlag,
                                                              & kTypeDescriptor_GALGAS_uint,
                                                              0,
                                                              functionArgs_copyableFlag) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'llvmRegularTypeMangledNameFromName'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_llvmRegularTypeMangledNameFromName (const GALGAS_lstring & constinArgument_inName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 26)), constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 26)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmRegularTypeMangledNameFromName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmRegularTypeMangledNameFromName (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmRegularTypeMangledNameFromName (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmRegularTypeMangledNameFromName ("llvmRegularTypeMangledNameFromName",
                                                                                    functionWithGenericHeader_llvmRegularTypeMangledNameFromName,
                                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                                    1,
                                                                                    functionArgs_llvmRegularTypeMangledNameFromName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'moduleMangledNameFromModuleName'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_moduleMangledNameFromModuleName (const GALGAS_lstring & constinArgument_inModuleName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (constinArgument_inModuleName.getter_string (HERE).add_operation (GALGAS_string ("$"), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 32)), constinArgument_inModuleName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 32)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_moduleMangledNameFromModuleName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_moduleMangledNameFromModuleName (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_moduleMangledNameFromModuleName (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_moduleMangledNameFromModuleName ("moduleMangledNameFromModuleName",
                                                                                 functionWithGenericHeader_moduleMangledNameFromModuleName,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_moduleMangledNameFromModuleName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'userModeName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_userModeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("user") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_userModeName = false ;
static GALGAS_string gOnceFunctionResult_userModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_userModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_userModeName) {
    gOnceFunctionResult_userModeName = onceFunction_userModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_userModeName = true ;
  }
  return gOnceFunctionResult_userModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_userModeName (void) {
  gOnceFunctionResult_userModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_userModeName (NULL,
                                                          releaseOnceFunctionResult_userModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_userModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_userModeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_userModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_userModeName ("userModeName",
                                                              functionWithGenericHeader_userModeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_userModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'initNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_initNameForInvocationGraph (const GALGAS_PLMType & constinArgument_inReceiverType,
                                                    const GALGAS_lbigint & constinArgument_inPriority,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_2158 = GALGAS_string ("init") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("generated-code-prefixes.galgas", 49)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_2158.plusAssign_operation(GALGAS_string (" $").add_operation (extensionGetter_key (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)) ;
  }
  var_s_2158.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 52)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_2158, constinArgument_inPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 53)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_initNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_PLMType,
  & kTypeDescriptor_GALGAS_lbigint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_initNameForInvocationGraph (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_PLMType operand0 = GALGAS_PLMType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_lbigint operand1 = GALGAS_lbigint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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
//                                       Function 'panicNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_panicNameForInvocationGraph (const GALGAS_string & constinArgument_inName,
                                                     const GALGAS_lbigint & constinArgument_inPriority,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_2542 = GALGAS_string ("panic ").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 59)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 59)).add_operation (constinArgument_inPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 59)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_2542, constinArgument_inPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 60)) ;
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
  result_result = GALGAS_string ("@string.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 68)) ;
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
  result_result = GALGAS_string ("@str.array.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 74)) ;
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
  result_result = GALGAS_string ("func.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 106)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 106)) ;
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
  GALGAS_string var_s_4694 = GALGAS_string ("interrupt ").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 114)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_4694, constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 115)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("isr.service.").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 121)), constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 121)) ;
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
//                                    Function 'llvmNameForSectionOrSafeInterrupt'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSectionOrSafeInterrupt (const GALGAS_string & constinArgument_inName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("isr.section.or.safe.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 127)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionOrSafeInterrupt [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSectionOrSafeInterrupt (C_Compiler * inCompiler,
                                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSectionOrSafeInterrupt (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionOrSafeInterrupt ("llvmNameForSectionOrSafeInterrupt",
                                                                                   functionWithGenericHeader_llvmNameForSectionOrSafeInterrupt,
                                                                                   & kTypeDescriptor_GALGAS_string,
                                                                                   1,
                                                                                   functionArgs_llvmNameForSectionOrSafeInterrupt) ;

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
      result_result = function_llvmNameForPrimitiveCall (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 137)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      result_result = function_llvmNameForServiceCall (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 139)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      result_result = function_llvmNameForSectionCall (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 141)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_safe:
    {
      result_result = function_llvmNameForSafeCall (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 143)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inName.getter_location (SOURCE_FILE ("generated-code-prefixes.galgas", 145)), GALGAS_string ("INTERNAL ERROR"), fixItArray0  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 145)) ;
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
      result_result = function_llvmNameForPrimitiveImplementation (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 154)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      result_result = function_llvmNameForServiceImplementation (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 156)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      result_result = function_llvmNameForSectionImplementation (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 158)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_safe:
    {
      result_result = function_llvmNameForSafeImplementation (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 160)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inName.getter_location (SOURCE_FILE ("generated-code-prefixes.galgas", 162)), GALGAS_string ("INTERNAL ERROR"), fixItArray0  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 162)) ;
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
  result_result = GALGAS_string ("primitive.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 171)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 171)) ;
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
  result_result = GALGAS_string ("primitive.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 177)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 177)) ;
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
  result_result = GALGAS_string ("service.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 185)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 185)) ;
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
  result_result = GALGAS_string ("service.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 191)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 191)) ;
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
  result_result = GALGAS_string ("section.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 199)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 199)) ;
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
  result_result = GALGAS_string ("section.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 205)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 205)) ;
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
//                                           Function 'llvmNameForSafeCall'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSafeCall (const GALGAS_string & constinArgument_inName,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("safe.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 213)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 213)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSafeCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSafeCall (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSafeCall (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSafeCall ("llvmNameForSafeCall",
                                                                     functionWithGenericHeader_llvmNameForSafeCall,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_llvmNameForSafeCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'llvmNameForSafeImplementation'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSafeImplementation (const GALGAS_string & constinArgument_inName,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("safe.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 219)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 219)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSafeImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSafeImplementation (C_Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GALGAS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSafeImplementation (operand0,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSafeImplementation ("llvmNameForSafeImplementation",
                                                                               functionWithGenericHeader_llvmNameForSafeImplementation,
                                                                               & kTypeDescriptor_GALGAS_string,
                                                                               1,
                                                                               functionArgs_llvmNameForSafeImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'acceptVariableName'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_acceptVariableName (C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("accept") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_acceptVariableName = false ;
static GALGAS_string gOnceFunctionResult_acceptVariableName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_acceptVariableName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_acceptVariableName) {
    gOnceFunctionResult_acceptVariableName = onceFunction_acceptVariableName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_acceptVariableName = true ;
  }
  return gOnceFunctionResult_acceptVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_acceptVariableName (void) {
  gOnceFunctionResult_acceptVariableName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_acceptVariableName (NULL,
                                                                releaseOnceFunctionResult_acceptVariableName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_acceptVariableName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_acceptVariableName (C_Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_acceptVariableName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_acceptVariableName ("acceptVariableName",
                                                                    functionWithGenericHeader_acceptVariableName,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    0,
                                                                    functionArgs_acceptVariableName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForGuardCall'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForGuardCall (const GALGAS_string & constinArgument_inName,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("guard.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 233)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 233)) ;
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
  result_result = GALGAS_string ("guard.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 239)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 239)) ;
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
  result_result = GALGAS_string ("waitForGuardChange") ;
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
  result_result = GALGAS_string ("var.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 253)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 253)) ;
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
//                                        Function 'llvmNameForGlobalVariable'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForGlobalVariable (const GALGAS_string & constinArgument_inName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("gvar.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 259)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 259)) ;
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
//                                           Once function 'accessAttribute'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_accessAttribute (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("access") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_accessAttribute = false ;
static GALGAS_string gOnceFunctionResult_accessAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_accessAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_accessAttribute) {
    gOnceFunctionResult_accessAttribute = onceFunction_accessAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_accessAttribute = true ;
  }
  return gOnceFunctionResult_accessAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_accessAttribute (void) {
  gOnceFunctionResult_accessAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_accessAttribute (NULL,
                                                             releaseOnceFunctionResult_accessAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_accessAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_accessAttribute (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_accessAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_accessAttribute ("accessAttribute",
                                                                 functionWithGenericHeader_accessAttribute,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_accessAttribute) ;

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
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.stack.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 299)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 299)) ;
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
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.init.$").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 305)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 305)) ;
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
  result_result = GALGAS_string ("%").add_operation (GALGAS_string ("task.stack.address.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 311)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 311)) ;
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
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.main.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 317)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 317)) ;
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
//                                         Function 'llvmNameForTaskGlobalVar'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForTaskGlobalVar (const GALGAS_string & constinArgument_inTaskName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("task.globalvar.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 323)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 323)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskGlobalVar [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForTaskGlobalVar (C_Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForTaskGlobalVar (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskGlobalVar ("llvmNameForTaskGlobalVar",
                                                                          functionWithGenericHeader_llvmNameForTaskGlobalVar,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          1,
                                                                          functionArgs_llvmNameForTaskGlobalVar) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Once function 'llvmNameForTaskLoopFunction'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmNameForTaskLoopFunction (C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("task$loop") ;
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
//                                 Once function 'llvmNameForTaskSelfTerminateService'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmNameForTaskSelfTerminateService (C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("self.terminate") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_llvmNameForTaskSelfTerminateService = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForTaskSelfTerminateService ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForTaskSelfTerminateService (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskSelfTerminateService) {
    gOnceFunctionResult_llvmNameForTaskSelfTerminateService = onceFunction_llvmNameForTaskSelfTerminateService (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskSelfTerminateService = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskSelfTerminateService ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_llvmNameForTaskSelfTerminateService (void) {
  gOnceFunctionResult_llvmNameForTaskSelfTerminateService.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskSelfTerminateService (NULL,
                                                                                 releaseOnceFunctionResult_llvmNameForTaskSelfTerminateService) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskSelfTerminateService [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForTaskSelfTerminateService (C_Compiler * inCompiler,
                                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskSelfTerminateService (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskSelfTerminateService ("llvmNameForTaskSelfTerminateService",
                                                                                     functionWithGenericHeader_llvmNameForTaskSelfTerminateService,
                                                                                     & kTypeDescriptor_GALGAS_string,
                                                                                     0,
                                                                                     functionArgs_llvmNameForTaskSelfTerminateService) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'plmNameForStaticListType'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_plmNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist.").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 342)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("generated-code-prefixes.galgas", 342))  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 342)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist.element.").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 348)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("generated-code-prefixes.galgas", 348))  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 348)) ;
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
//                                        Function 'llvmNameForStaticListType'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForStaticListType (const GALGAS_string & constinArgument_inStaticListName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("static.list.type.").add_operation (constinArgument_inStaticListName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 354)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForStaticListType (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForStaticListType (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListType ("llvmNameForStaticListType",
                                                                           functionWithGenericHeader_llvmNameForStaticListType,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_llvmNameForStaticListType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'llvmNameForStaticListElementType'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_llvmNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("static.list.element.type.").add_operation (constinArgument_inStaticListName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 360)), constinArgument_inStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 360)) ;
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
  GALGAS_bool var_sourceIsUnsigned_761 ;
  GALGAS_bigint joker_722 ; // Joker input parameter
  GALGAS_bigint joker_729 ; // Joker input parameter
  GALGAS_uint joker_763_2 ; // Joker input parameter
  GALGAS_string joker_763_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)).method_integer (joker_722, joker_729, var_sourceIsUnsigned_761, joker_763_2, joker_763_1, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = var_sourceIsUnsigned_761.boolEnum () ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 23)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 23)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)).add_operation (extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)) ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("shl ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)).add_operation (extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)).add_operation (object->mProperty_mShiftAmount.getter_string (SOURCE_FILE ("intermediate-shift-left.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)) ;
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
  GALGAS_string var_llvmType_4963 = extensionGetter_llvmTypeName (object->mProperty_mOperandType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)) ;
  switch (object->mProperty_mOperation.enumValue ()) {
  case GALGAS_llvmBinaryOperation::kNotBuilt:
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_addNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (" = sub "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (" = mul "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (" = udiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (" = sdiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (" = urem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (" = srem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)) ;
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
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string (" = and "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (" = or "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (" = xor "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (" = ashr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (" = lshr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (" = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ne:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (" = icmp ne "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (" = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (" = icmp ule "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ugt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (" = icmp ugt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_uge:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (" = icmp uge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (" = icmp slt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (" = icmp sle "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sgt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (" = icmp sgt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sge:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (var_llvmType_4963, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)) ;
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
  GALGAS_string var_registerOffsetName_942 = GALGAS_string ("%register.subscript.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 27)) ;
  GALGAS_string var_registerIndexName_1023 = GALGAS_string ("%register.index.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 28)) ;
  GALGAS_string var_scriptedRegisterAddressValueName_1115 = GALGAS_string ("%register.address.value.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 29)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 30)) ;
  GALGAS_uint var_bitCount_1329 ;
  GALGAS_bigint joker_1286 ; // Joker input parameter
  GALGAS_bigint joker_1293 ; // Joker input parameter
  GALGAS_bool joker_1305 ; // Joker input parameter
  GALGAS_string joker_1331_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 32)).method_integer (joker_1286, joker_1293, joker_1305, var_bitCount_1329, joker_1331_1, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 32)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_bitCount_1329.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerIndexName_1023, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 34)).add_operation (GALGAS_string (" = zext "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 34)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 34)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 34)).add_operation (extensionGetter_llvmName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)).add_operation (GALGAS_string (" to i32\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 34)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_bitCount_1329.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_registerIndexName_1023 ;
  }else if (kBoolFalse == test_2) {
    temp_1 = extensionGetter_llvmName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 38)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerOffsetName_942, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 37)).add_operation (GALGAS_string (" = mul i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 37)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 37)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 38)).add_operation (object->mProperty_mElementArraySize.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 39)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 39)).add_operation (object->mProperty_mElementArraySize.getter_hexString (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 39)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 37)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_scriptedRegisterAddressValueName_1115, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)).add_operation (var_registerOffsetName_942, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)).add_operation (object->mProperty_mRegisterAddress.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 41)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 41)).add_operation (object->mProperty_mRegisterAddress.getter_hexString (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 41)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)) ;
  GALGAS_string var_llvmType_1938 = extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)).add_operation (GALGAS_string (" = inttoptr i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)).add_operation (var_scriptedRegisterAddressValueName_1115, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)).add_operation (var_llvmType_1938, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)).add_operation (GALGAS_string (" *\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)) ;
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
  GALGAS_string var_llvmType_797 = extensionGetter_llvmTypeName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)) ;
  const enumGalgasBool test_0 = object->mProperty_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_797.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (var_llvmType_797, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (function_llvmNameForGlobalVariable (object->mProperty_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)) ;
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
  ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mVariableName  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 39)) ;
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
  GALGAS_string var_llvmType_782 = extensionGetter_llvmTypeName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26)) ;
  const enumGalgasBool test_0 = object->mProperty_mVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 28)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_782.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 30)).add_operation (var_llvmType_782, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 30)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 30)).add_operation (function_llvmNameForLocalVariable (object->mProperty_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 30)) ;
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
  GALGAS_string var_llvmType_806 = extensionGetter_llvmTypeName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-temporary-reference.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-temporary-reference.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-temporary-reference.galgas", 26)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-temporary-reference.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-from-temporary-reference.galgas", 26)) ;
  const enumGalgasBool test_0 = object->mProperty_mVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-from-temporary-reference.galgas", 28)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_806.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-temporary-reference.galgas", 30)).add_operation (var_llvmType_806, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-temporary-reference.galgas", 30)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-temporary-reference.galgas", 30)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-temporary-reference.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-temporary-reference.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-from-temporary-reference.galgas", 30)) ;
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
  GALGAS_string var_llvmType_883 = extensionGetter_llvmTypeName (object->mProperty_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 28)) ;
  const enumGalgasBool test_0 = object->mProperty_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 30)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_883.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (var_llvmType_883, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (function_llvmNameForGlobalVariable (object->mProperty_mGlobalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)) ;
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
  ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mGlobalVarName  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 41)) ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_807.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (var_llvmType_807, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (function_llvmNameForLocalVariable (object->mProperty_mLocalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)) ;
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
  GALGAS_string var_llvmType_1011 = extensionGetter_llvmTypeName (object->mProperty_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 28)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 29)) ;
  const enumGalgasBool test_0 = object->mProperty_mVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 31)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_1011.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 33)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 33)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 33)).add_operation (var_llvmType_1011, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 33)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 33)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 33)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 33)) ;
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
//                       Overriding extension method '@staticRoutineCallIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticRoutineCallIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticRoutineCallIR * object = (const cPtr_staticRoutineCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_staticRoutineCallIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 19)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mResult.objectCompare (GALGAS_objectIR::constructor_null (SOURCE_FILE ("intermediate-static-routine-call.galgas", 20)))).boolEnum () ;
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
  case GALGAS_calleeKindIR::kEnum_safeFromProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSafeCall (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 42)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_safeFromProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSafeImplementation (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 44)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 46)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_2007 (object->mProperty_mArgumentList, kENUMERATION_UP) ;
  while (enumerator_2007.hasCurrentObject ()) {
    switch (enumerator_2007.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_2007.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 50)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 50)).add_operation (extensionGetter_llvmName (enumerator_2007.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 50)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_2007.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 52)).add_operation (extensionGetter_llvmName (enumerator_2007.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 52)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_2007.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 54)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 54)).add_operation (extensionGetter_llvmName (enumerator_2007.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 54)) ;
      }
      break ;
    }
    if (enumerator_2007.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 57)) ;
    }
    enumerator_2007.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticRoutineCallIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_staticRoutineCallIR.mSlotID,
                                            extensionMethod_staticRoutineCallIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticRoutineCallIR_llvmInstructionCode (defineExtensionMethod_staticRoutineCallIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@staticRoutineCallIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticRoutineCallIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticRoutineCallIR * object = (const cPtr_staticRoutineCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_staticRoutineCallIR) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mGlobalVariableName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mGlobalVariableName  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 69)) ;
  }
  ioArgument_ioAccessibleEntities.mProperty_mRoutineSet.addAssign_operation (object->mProperty_mFunctionMangledName.getter_string (HERE)  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticRoutineCallIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_staticRoutineCallIR.mSlotID,
                                                extensionMethod_staticRoutineCallIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticRoutineCallIR_enterAccessibleEntities (defineExtensionMethod_staticRoutineCallIR_enterAccessibleEntities, NULL) ;

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mResult.objectCompare (GALGAS_objectIR::constructor_null (SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 25)))).boolEnum () ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 28)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = call ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 29)).add_operation (GALGAS_string ("* @\""), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 29)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 29)).add_operation (GALGAS_string (".access."), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 29)).add_operation (object->mProperty_mPLMname, inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\" (").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 30)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 30)).add_operation (extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 30)).add_operation (GALGAS_string (") ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 30)).add_operation (object->mProperty_mPLMname, inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 30)) ;
  GALGAS_string var_llvmType_1179 = extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 33)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 34)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 34)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_1179.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 35)).add_operation (var_llvmType_1179, inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 35)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 35)).add_operation (extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 35)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 35)).add_operation (object->mProperty_mPropertyIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 35)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (object->mProperty_mPLMname, inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 36)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-property-reference.galgas", 36)) ;
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
  GALGAS_string var_llvmType_1082 = extensionGetter_llvmTypeName (object->mProperty_mSelfType, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 31)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 32)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" = call ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 33)).add_operation (GALGAS_string ("* @\""), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 33)).add_operation (var_llvmType_1082, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 33)).add_operation (GALGAS_string (".access."), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 33)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 33)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\" (").add_operation (var_llvmType_1082, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 34)).add_operation (GALGAS_string (" * %self) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 34)).add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 34)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 34)) ;
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
  GALGAS_string var_llvmType_797 = extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 26)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 26)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_797.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (var_llvmType_797, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (object->mProperty_mElementIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; Element of index ").add_operation (object->mProperty_mElementIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 28)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 28)) ;
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
  GALGAS_uint var_staticStringIndex_1064 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mErrorLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 29)).getter_lastPathComponent (SOURCE_FILE ("intermediate-test-array-index.galgas", 29)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-test-array-index.galgas", 29)), var_staticStringIndex_1064, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 28)) ;
  }
  GALGAS_bigint var_max_1113 ;
  GALGAS_bool var_isUnsigned_1138 ;
  GALGAS_bigint joker_1099 ; // Joker input parameter
  GALGAS_uint joker_1140_2 ; // Joker input parameter
  GALGAS_string joker_1140_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 32)).method_integer (joker_1099, var_max_1113, var_isUnsigned_1138, joker_1140_2, joker_1140_1, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 32)) ;
  const enumGalgasBool test_0 = var_isUnsigned_1138.operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas", 34)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_testToZero_1227 = GALGAS_string ("%test.index.zero.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)) ;
    GALGAS_string var_testToZeroOk_1302 = GALGAS_string ("test.index.zero.ok.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)) ;
    GALGAS_string var_testToZeroFailure_1384 = GALGAS_string ("test.index.zero.fails.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 37)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 38)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testToZero_1227, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (extensionGetter_llvmName (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testToZero_1227, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (var_testToZeroOk_1302, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (var_testToZeroFailure_1384, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToZeroFailure_1384.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 42)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_1064.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 43)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 43)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).add_operation (object->mProperty_mErrorLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).add_operation (function_panicCodeForNegativeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 46)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToZeroOk_1302.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 48)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, var_max_1113.objectCompare (object->mProperty_mSize)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_testToSize_2233 = GALGAS_string ("%test.index.size.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 52)) ;
    GALGAS_string var_testToSizeOk_2308 = GALGAS_string ("test.index.size.ok.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)) ;
    GALGAS_string var_testToSizeFailure_2390 = GALGAS_string ("test.index.size.fails.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testToSize_2233, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 55)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 55)) ;
    GALGAS_string temp_2 ;
    const enumGalgasBool test_3 = var_isUnsigned_1138.boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = GALGAS_string ("ult") ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_string ("slt") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_2, inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 56)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (extensionGetter_llvmName (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testToSize_2233, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (var_testToSizeOk_2308, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (var_testToSizeFailure_2390, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToSizeFailure_2390.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 60)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_1064.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 61)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 61)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).add_operation (object->mProperty_mErrorLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).add_operation (function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 64)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToSizeOk_2308.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 66)) ;
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
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 28)).getter_lastPathComponent (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 28)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 28)), var_staticStringIndex_983, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 27)) ;
  }
  GALGAS_string var_llvmType_1002 = extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 31)) ;
  GALGAS_string var_llvmSourceName_1055 = extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 32)) ;
  GALGAS_string var_llvmLabelName_1096 = extensionGetter_name (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 33)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmSourceName_1055, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string (".isOk = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (var_llvmType_1002, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (var_llvmSourceName_1055, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (object->mProperty_mUpperBoundPlusOne.getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_llvmSourceName_1055, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (GALGAS_string (".isOk, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (var_llvmLabelName_1096, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (GALGAS_string (".ovf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (var_llvmLabelName_1096, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (GALGAS_string (".ok\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmLabelName_1096.add_operation (GALGAS_string (".ovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 36)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_983.getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)).getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)).add_operation (object->mProperty_mPanicCode.getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)) ;
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
          var_s_2450.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mStaticStringMap (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 49)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 49)).add_operation (GALGAS_string (" static strings\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 49)) ;
          var_s_2450.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mGlobalConstantMap (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 50)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 50)).add_operation (GALGAS_string (" global constants\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 50)) ;
          var_s_2450.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mGlobalVariableMap (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 51)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 51)).add_operation (GALGAS_string (" global variables\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 51)) ;
          var_s_2450.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 52)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 52)).add_operation (GALGAS_string (" routine(s)\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 52)) ;
          cEnumerator_routineMapIR enumerator_2908 (ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE), kENUMERATION_UP) ;
          while (enumerator_2908.hasCurrentObject ()) {
            var_s_2450.plusAssign_operation(GALGAS_string ("   - ").add_operation (enumerator_2908.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("code-optimisation.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 54)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 54)) ;
            enumerator_2908.gotoNextObject () ;
          }
          var_s_2450.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 56)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 56)).add_operation (GALGAS_string (" guards\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 56)) ;
          inCompiler->printMessage (var_s_2450  COMMA_SOURCE_FILE ("code-optimisation.galgas", 57)) ;
        }
        GALGAS_accessibleEntities var_accessibleEntities_3272 ;
        {
        routine_suppressInaccessibleSubprograms (ioArgument_ioIntermediateCodeStruct, var_accessibleEntities_3272, var_optimizing_2173, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 60)) ;
        }
        GALGAS_globalConstantMapIR var_globalConstantMap_3372 = GALGAS_globalConstantMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 66)) ;
        cEnumerator_globalConstantMapIR enumerator_3441 (ioArgument_ioIntermediateCodeStruct.getter_mGlobalConstantMap (HERE), kENUMERATION_UP) ;
        while (enumerator_3441.hasCurrentObject ()) {
          const enumGalgasBool test_1 = var_accessibleEntities_3272.getter_mGlobalVariableSet (HERE).getter_hasKey (enumerator_3441.current (HERE).getter_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 68)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            var_globalConstantMap_3372.setter_insertKey (enumerator_3441.current (HERE).getter_lkey (HERE), enumerator_3441.current (HERE).getter_mType (HERE), enumerator_3441.current (HERE).getter_mSourceExpression (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 69)) ;
            }
          }else if (kBoolFalse == test_1) {
            var_optimizing_2173 = GALGAS_bool (true) ;
          }
          enumerator_3441.gotoNextObject () ;
        }
        ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalConstantMap = var_globalConstantMap_3372 ;
        GALGAS_globalVariableMapIR var_globalVariableMap_3832 = GALGAS_globalVariableMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 76)) ;
        cEnumerator_globalVariableMapIR enumerator_3907 (ioArgument_ioIntermediateCodeStruct.getter_mGlobalVariableMap (HERE), kENUMERATION_UP) ;
        while (enumerator_3907.hasCurrentObject ()) {
          const enumGalgasBool test_2 = var_accessibleEntities_3272.getter_mGlobalVariableSet (HERE).getter_hasKey (enumerator_3907.current (HERE).getter_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 78)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            var_globalVariableMap_3832.setter_insertKey (enumerator_3907.current (HERE).getter_lkey (HERE), enumerator_3907.current (HERE).getter_mType (HERE), enumerator_3907.current (HERE).getter_mGenerateVolatile (HERE), enumerator_3907.current (HERE).getter_mInitialValue (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 79)) ;
            }
          }else if (kBoolFalse == test_2) {
            var_optimizing_2173 = GALGAS_bool (true) ;
          }
          enumerator_3907.gotoNextObject () ;
        }
        ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalVariableMap = var_globalVariableMap_3832 ;
      }
    }
  }
  cEnumerator_routineMapIR enumerator_4385 (var_initialProcedureMap_2035, kENUMERATION_UP) ;
  while (enumerator_4385.hasCurrentObject ()) {
    GALGAS_bool test_3 = ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE).getter_hasKey (enumerator_4385.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 93)).operator_not (SOURCE_FILE ("code-optimisation.galgas", 93)) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = enumerator_4385.current_mWarnIfUnused (HERE) ;
    }
    const enumGalgasBool test_4 = test_3.boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticWarning (enumerator_4385.current_lkey (HERE).getter_location (SOURCE_FILE ("code-optimisation.galgas", 94)), GALGAS_string ("unused procedure; use @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 94)).add_operation (GALGAS_string (" attribute for removing this warning"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 94)), fixItArray5  COMMA_SOURCE_FILE ("code-optimisation.galgas", 94)) ;
    }
    enumerator_4385.gotoNextObject () ;
  }
  cEnumerator_guardMapIR enumerator_4669 (var_initialGuardMap_2098, kENUMERATION_UP) ;
  while (enumerator_4669.hasCurrentObject ()) {
    GALGAS_bool test_6 = ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE).getter_hasKey (enumerator_4669.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 99)).operator_not (SOURCE_FILE ("code-optimisation.galgas", 99)) ;
    if (kBoolTrue == test_6.boolEnum ()) {
      test_6 = enumerator_4669.current_mWarnIfUnused (HERE) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticWarning (enumerator_4669.current_lkey (HERE).getter_location (SOURCE_FILE ("code-optimisation.galgas", 100)), GALGAS_string ("unused guard; use @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 100)).add_operation (GALGAS_string (" attribute for removing this warning"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 100)), fixItArray8  COMMA_SOURCE_FILE ("code-optimisation.galgas", 100)) ;
    }
    enumerator_4669.gotoNextObject () ;
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
  outArgument_outAccessibleEntities = GALGAS_accessibleEntities::constructor_default (SOURCE_FILE ("code-optimisation.galgas", 112)) ;
  GALGAS_routineMapIR var_accessibleProcedureMap_5277 = GALGAS_routineMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 113)) ;
  GALGAS_routineMapIR var_nonExploredProcedureMap_5322 = GALGAS_routineMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 114)) ;
  GALGAS_guardMapIR var_accessibleGuardMap_5360 = GALGAS_guardMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 115)) ;
  GALGAS_guardMapIR var_nonExploredGuardMap_5399 = ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE) ;
  cEnumerator_routineMapIR enumerator_5528 (ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE), kENUMERATION_UP) ;
  while (enumerator_5528.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_5528.current (HERE).getter_mIsRequired (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      var_accessibleProcedureMap_5277.setter_insertKey (enumerator_5528.current (HERE).getter_lkey (HERE), enumerator_5528.current (HERE).getter_mReceiverType (HERE), enumerator_5528.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_5528.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_5528.current (HERE).getter_mAllocaList (HERE), enumerator_5528.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_5528.current (HERE).getter_mIsRequired (HERE), enumerator_5528.current (HERE).getter_mWarnIfUnused (HERE), enumerator_5528.current (HERE).getter_mGlobal (HERE), enumerator_5528.current (HERE).getter_mKind (HERE), enumerator_5528.current (HERE).getter_mReturnType (HERE), enumerator_5528.current (HERE).getter_mAppendFileAndLineArgumentForPanicLocation (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 120)) ;
      }
      extensionMethod_enterAccessibleEntities (enumerator_5528.current (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 134)) ;
      outArgument_outAccessibleEntities.mProperty_mRoutineSet.addAssign_operation (enumerator_5528.current (HERE).getter_mRoutineNameForGeneration (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("code-optimisation.galgas", 135)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_nonExploredProcedureMap_5322.setter_insertKey (enumerator_5528.current (HERE).getter_lkey (HERE), enumerator_5528.current (HERE).getter_mReceiverType (HERE), enumerator_5528.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_5528.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_5528.current (HERE).getter_mAllocaList (HERE), enumerator_5528.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_5528.current (HERE).getter_mIsRequired (HERE), enumerator_5528.current (HERE).getter_mWarnIfUnused (HERE), enumerator_5528.current (HERE).getter_mGlobal (HERE), enumerator_5528.current (HERE).getter_mKind (HERE), enumerator_5528.current (HERE).getter_mReturnType (HERE), enumerator_5528.current (HERE).getter_mAppendFileAndLineArgumentForPanicLocation (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 137)) ;
      }
    }
    enumerator_5528.gotoNextObject () ;
  }
  cEnumerator_bootListIR enumerator_6874 (ioArgument_ioIntermediateCodeStruct.getter_mBootList (HERE), kENUMERATION_UP) ;
  while (enumerator_6874.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_6874.current (HERE).getter_mInstructionListIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 155)) ;
    enumerator_6874.gotoNextObject () ;
  }
  cEnumerator_initListIR enumerator_7081 (ioArgument_ioIntermediateCodeStruct.getter_mInitList (HERE), kENUMERATION_UP) ;
  while (enumerator_7081.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_7081.current (HERE).getter_mInstructionListIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 161)) ;
    enumerator_7081.gotoNextObject () ;
  }
  cEnumerator_taskMapIR enumerator_7317 (ioArgument_ioIntermediateCodeStruct.getter_mTaskMapIR (HERE), kENUMERATION_UP) ;
  while (enumerator_7317.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_7317.current (HERE).getter_mInitInstructionListIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 168)) ;
    outArgument_outAccessibleEntities.mProperty_mRoutineSet.addAssign_operation (GALGAS_string ("$").add_operation (enumerator_7317.current (HERE).getter_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 172)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 172)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 172)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 172))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 172)) ;
    enumerator_7317.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-optimisation.galgas", 175)).boolEnum () ;
  if (kBoolTrue == test_1) {
    extensionMethod_enterAccessibleEntities (ioArgument_ioIntermediateCodeStruct.getter_mPanicSetupInstructionListIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 176)) ;
    extensionMethod_enterAccessibleEntities (ioArgument_ioIntermediateCodeStruct.getter_mPanicLoopInstructionListIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 180)) ;
  }
  extensionMethod_enterAccessibleEntities (ioArgument_ioIntermediateCodeStruct.getter_mInterruptMapIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 186)) ;
  GALGAS_bool var_continues_8272 = GALGAS_bool (true) ;
  GALGAS_uint var_bound_8291 = ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 192)).add_operation (ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 192)) ;
  if (var_bound_8291.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 193)).isValid ()) {
    uint32_t variant_8394 = var_bound_8291.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 193)).uintValue () ;
    bool loop_8394 = true ;
    while (loop_8394) {
      loop_8394 = var_continues_8272.isValid () ;
      if (loop_8394) {
        loop_8394 = var_continues_8272.boolValue () ;
      }
      if (loop_8394 && (0 == variant_8394)) {
        loop_8394 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("code-optimisation.galgas", 193)) ;
      }
      if (loop_8394) {
        variant_8394 -- ;
        var_continues_8272 = GALGAS_bool (false) ;
        {
        routine_exploreProcs (var_accessibleProcedureMap_5277, outArgument_outAccessibleEntities, var_nonExploredProcedureMap_5322, var_continues_8272, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 195)) ;
        }
        {
        routine_exploreGuards (var_accessibleGuardMap_5360, outArgument_outAccessibleEntities, var_nonExploredGuardMap_5399, var_continues_8272, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 202)) ;
        }
      }
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE).objectCompare (var_accessibleProcedureMap_5277)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineMapIR = var_accessibleProcedureMap_5277 ;
    ioArgument_ioOptimizing = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE).objectCompare (var_accessibleGuardMap_5360)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mGuardMapIR = var_accessibleGuardMap_5360 ;
    ioArgument_ioOptimizing = GALGAS_bool (true) ;
  }
  GALGAS_staticArrayMap var_currentStaticArrayMap_9232 = GALGAS_staticArrayMap::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 219)) ;
  cEnumerator_staticArrayMap enumerator_9311 (ioArgument_ioIntermediateCodeStruct.getter_mStaticArrayMap (HERE), kENUMERATION_UP) ;
  while (enumerator_9311.hasCurrentObject ()) {
    const enumGalgasBool test_4 = outArgument_outAccessibleEntities.getter_mGlobalVariableSet (HERE).getter_hasKey (enumerator_9311.current_lkey (HERE).getter_string (SOURCE_FILE ("code-optimisation.galgas", 221)) COMMA_SOURCE_FILE ("code-optimisation.galgas", 221)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      var_currentStaticArrayMap_9232.setter_insertKey (enumerator_9311.current_lkey (HERE), enumerator_9311.current_mInvokedFunctionSet (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 222)) ;
      }
    }
    enumerator_9311.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_currentStaticArrayMap_9232.objectCompare (ioArgument_ioIntermediateCodeStruct.getter_mStaticArrayMap (HERE))).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMap = var_currentStaticArrayMap_9232 ;
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
  GALGAS_routineMapIR var_exNonExploredProcedureMap_10052 = ioArgument_ioNonExploredProcedureMap ;
  ioArgument_ioNonExploredProcedureMap = GALGAS_routineMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 241)) ;
  cEnumerator_routineMapIR enumerator_10158 (var_exNonExploredProcedureMap_10052, kENUMERATION_UP) ;
  while (enumerator_10158.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioAccessibleEntities.getter_mRoutineSet (HERE).getter_hasKey (enumerator_10158.current (HERE).getter_mRoutineNameForGeneration (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 243)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioAccessibleProcedureMap.setter_insertKey (enumerator_10158.current (HERE).getter_lkey (HERE), enumerator_10158.current (HERE).getter_mReceiverType (HERE), enumerator_10158.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_10158.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_10158.current (HERE).getter_mAllocaList (HERE), enumerator_10158.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_10158.current (HERE).getter_mIsRequired (HERE), enumerator_10158.current (HERE).getter_mWarnIfUnused (HERE), enumerator_10158.current (HERE).getter_mGlobal (HERE), enumerator_10158.current (HERE).getter_mKind (HERE), enumerator_10158.current (HERE).getter_mReturnType (HERE), enumerator_10158.current (HERE).getter_mAppendFileAndLineArgumentForPanicLocation (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 244)) ;
      }
      extensionMethod_enterAccessibleEntities (enumerator_10158.current (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 258)) ;
      ioArgument_ioContinueExploreRoutines = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioNonExploredProcedureMap.setter_insertKey (enumerator_10158.current (HERE).getter_lkey (HERE), enumerator_10158.current (HERE).getter_mReceiverType (HERE), enumerator_10158.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_10158.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_10158.current (HERE).getter_mAllocaList (HERE), enumerator_10158.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_10158.current (HERE).getter_mIsRequired (HERE), enumerator_10158.current (HERE).getter_mWarnIfUnused (HERE), enumerator_10158.current (HERE).getter_mGlobal (HERE), enumerator_10158.current (HERE).getter_mKind (HERE), enumerator_10158.current (HERE).getter_mReturnType (HERE), enumerator_10158.current (HERE).getter_mAppendFileAndLineArgumentForPanicLocation (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 261)) ;
      }
    }
    enumerator_10158.gotoNextObject () ;
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
  GALGAS_guardMapIR var_exNonExploredGuardMap_11802 = ioArgument_ioNonExploredGuardMap ;
  ioArgument_ioNonExploredGuardMap = GALGAS_guardMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 289)) ;
  cEnumerator_guardMapIR enumerator_11892 (var_exNonExploredGuardMap_11802, kENUMERATION_UP) ;
  while (enumerator_11892.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioAccessibleEntities.getter_mGuardSet (HERE).getter_hasKey (enumerator_11892.current (HERE).getter_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 291)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioAccessibleGuardMap.setter_insertKey (enumerator_11892.current (HERE).getter_lkey (HERE), enumerator_11892.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_11892.current (HERE).getter_mReceiverType (HERE), enumerator_11892.current (HERE).getter_mGuardKindGenerationIR (HERE), enumerator_11892.current (HERE).getter_mAllocaList (HERE), enumerator_11892.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_11892.current (HERE).getter_mWarnIfUnused (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 292)) ;
      }
      extensionMethod_enterAccessibleEntities (enumerator_11892.current (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 301)) ;
      ioArgument_ioContinueExploreRoutines = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioNonExploredGuardMap.setter_insertKey (enumerator_11892.current (HERE).getter_lkey (HERE), enumerator_11892.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_11892.current (HERE).getter_mReceiverType (HERE), enumerator_11892.current (HERE).getter_mGuardKindGenerationIR (HERE), enumerator_11892.current (HERE).getter_mAllocaList (HERE), enumerator_11892.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_11892.current (HERE).getter_mWarnIfUnused (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 304)) ;
      }
    }
    enumerator_11892.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'llvmSeparatorLine'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmSeparatorLine (C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string (";-------------------------------------------------------------------------") ;
  result_outResult.plusAssign_operation(GALGAS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 44)) ;
//---
  return result_outResult ;
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
  result_outTitle = function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 50)) ;
  result_outTitle.plusAssign_operation(GALGAS_string (";    ").add_operation (constinArgument_inTitle.getter_stringByRightPadding (GALGAS_uint ((uint32_t) 114U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("code-generation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 51)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 51)) ;
  result_outTitle.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 52)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 52)) ;
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
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("@-------------------------------------------------------------------------") ;
  result_outResult.plusAssign_operation(GALGAS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 59)) ;
//---
  return result_outResult ;
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
  result_outTitle = function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 65)) ;
  result_outTitle.plusAssign_operation(GALGAS_string ("@    ").add_operation (constinArgument_inTitle.getter_stringByRightPadding (GALGAS_uint ((uint32_t) 114U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("code-generation.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 66)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 66)) ;
  result_outTitle.plusAssign_operation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 67)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 67)) ;
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
                             const GALGAS_staticlistValues_5F_listMap constinArgument_inStaticListValueMap,
                             const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                             const GALGAS_targetParameters constinArgument_inTargetParameters,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_homeDir_4131 = GALGAS_string::constructor_homeDirectory (SOURCE_FILE ("code-generation.galgas", 86)).add_operation (GALGAS_string ("/plm-products/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 86)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("no-panic") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }
  GALGAS_string var_productDirectory_4246 = var_homeDir_4131.add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 88)).add_operation (constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("code-generation.galgas", 90)).getter_stringByReplacingStringByString (GALGAS_string ("/"), GALGAS_string ("+"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 89)) ;
  GALGAS_string var_sourceDirectory_4459 = var_productDirectory_4246.add_operation (GALGAS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 91)) ;
  var_sourceDirectory_4459.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 92)) ;
  {
  routine_generateTarget (constinArgument_inCurrentDirectory, var_productDirectory_4246, constinArgument_inTargetName, constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 94)) ;
  }
  {
  routine_generateCodeFiles (constinArgument_inCurrentDirectory, var_productDirectory_4246, constinArgument_inEndOfSourceFileLocation, constinArgument_inIntermediateCodeStruct, constinArgument_inTypeMap, constinArgument_inTargetName, constinArgument_inPanicCodeType, constinArgument_inPanicLineType, constinArgument_inAvailableInterruptMap, constinArgument_inStaticListValueMap, constinArgument_inSourceFileAbsolutePathSet, constinArgument_inTargetParameters, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 101)) ;
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
                                const GALGAS_staticlistValues_5F_listMap constinArgument_inStaticListValueMap,
                                const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                                const GALGAS_targetParameters constinArgument_inTargetParameters,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationAdds var_generationAdds_6446 = GALGAS_generationAdds::constructor_default (SOURCE_FILE ("code-generation.galgas", 143)) ;
  var_generationAdds_6446.mProperty_mStaticStringMap = constinArgument_inIntermediateCodeStruct.getter_mStaticStringMap (HERE) ;
  GALGAS_generationContext var_generationContext_6578 = GALGAS_generationContext::constructor_new (extensionGetter_llvmTypeName (constinArgument_inPanicCodeType.getter_type (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 146)), extensionGetter_llvmTypeName (constinArgument_inPanicLineType.getter_type (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 147)), constinArgument_inTargetParameters.getter_mNopInstructionStringInLLVM (HERE).getter_string (HERE), constinArgument_inIntermediateCodeStruct.getter_mGlobalTaskVariableList (HERE), constinArgument_inAvailableInterruptMap  COMMA_SOURCE_FILE ("code-generation.galgas", 145)) ;
  GALGAS_string var_sourceDirectory_6841 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 152)) ;
  GALGAS_string var_asCode_6963 = function_asTitleComment (GALGAS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 154)) ;
  GALGAS_string var_asFileContents_7027 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_7095 (constinArgument_inTargetParameters.getter_m_5F_S_5F_definitionFiles (HERE), kENUMERATION_UP) ;
  while (enumerator_7095.hasCurrentObject ()) {
    var_asFileContents_7027.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 159)).add_operation (enumerator_7095.current_mValue (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 157)) ;
    enumerator_7095.gotoNextObject () ;
  }
  GALGAS_string var_x_7250 = var_asFileContents_7027.getter_stringByReplacingStringByString (GALGAS_string ("!FUNC!"), function_llvmNameForFunction (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 162)) ;
  var_asCode_6963.plusAssign_operation(var_x_7250.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForSectionOrSafeInterrupt (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 163)) ;
  var_asCode_6963.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 164)) ;
  GALGAS_string var_llvmCode_7539 = function_llvmTitleComment (GALGAS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 166)) ;
  GALGAS_string var_targetLLVMcode_7605 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_7674 (constinArgument_inTargetParameters.getter_m_5F_LL_5F_definitionFiles (HERE), kENUMERATION_UP) ;
  while (enumerator_7674.hasCurrentObject ()) {
    var_targetLLVMcode_7605.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 171)).add_operation (enumerator_7674.current_mValue (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 169)) ;
    enumerator_7674.gotoNextObject () ;
  }
  var_llvmCode_7539.plusAssign_operation(var_targetLLVMcode_7605.getter_stringByReplacingStringByString (GALGAS_string ("!FUNC!"), function_llvmNameForFunction (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 174)) ;
  var_llvmCode_7539.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 175)) ;
  {
  routine_declareLLVMTypes (constinArgument_inTypeMap, var_llvmCode_7539, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 177)) ;
  }
  extensionMethod_generateLLVM (constinArgument_inStaticListValueMap, constinArgument_inIntermediateCodeStruct.getter_mStaticArrayMap (HERE), var_llvmCode_7539, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 179)) ;
  cEnumerator_globalVariableMapIR enumerator_8347 (constinArgument_inIntermediateCodeStruct.getter_mGlobalVariableMap (HERE), kENUMERATION_UP) ;
  const bool bool_0 = true ;
  if (enumerator_8347.hasCurrentObject () && bool_0) {
    var_llvmCode_7539.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Global variables"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 182)) ;
    while (enumerator_8347.hasCurrentObject () && bool_0) {
      extensionMethod_generateLLVM (enumerator_8347.current (HERE), var_llvmCode_7539, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 183)) ;
      enumerator_8347.gotoNextObject () ;
    }
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 184)) ;
  }
  cEnumerator_moduleListIR enumerator_8594 (constinArgument_inIntermediateCodeStruct.getter_mModuleList (HERE), kENUMERATION_UP) ;
  const bool bool_1 = true ;
  if (enumerator_8594.hasCurrentObject () && bool_1) {
    var_llvmCode_7539.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Modules"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 188)) ;
    while (enumerator_8594.hasCurrentObject () && bool_1) {
      extensionMethod_generateLLVM (enumerator_8594.current (HERE), var_llvmCode_7539, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 189)) ;
      enumerator_8594.gotoNextObject () ;
    }
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 190)) ;
  }
  var_llvmCode_7539.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Boot routines"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 193)) ;
  var_llvmCode_7539.plusAssign_operation(GALGAS_string ("define internal void @boot ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 194)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 194)) ;
  cEnumerator_bootListIR enumerator_8948 (constinArgument_inIntermediateCodeStruct.getter_mBootList (HERE), kENUMERATION_UP) ;
  while (enumerator_8948.hasCurrentObject ()) {
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  call void @boot.").add_operation (enumerator_8948.current (HERE).getter_mBootIndex (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 196)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 196)) ;
    enumerator_8948.gotoNextObject () ;
  }
  var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 198)) ;
  var_llvmCode_7539.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 199)) ;
  cEnumerator_bootListIR enumerator_9122 (constinArgument_inIntermediateCodeStruct.getter_mBootList (HERE), kENUMERATION_UP) ;
  while (enumerator_9122.hasCurrentObject ()) {
    var_llvmCode_7539.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 201)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 201)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("define internal void @boot.").add_operation (enumerator_9122.current (HERE).getter_mBootIndex (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 202)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 202)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 202)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 202)) ;
    cEnumerator_allocaList enumerator_9328 (enumerator_9122.current (HERE).getter_mAllocaList (HERE), kENUMERATION_UP) ;
    while (enumerator_9328.hasCurrentObject ()) {
      var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (enumerator_9328.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 204)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 204)).add_operation (enumerator_9328.current_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 204)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 204)) ;
      enumerator_9328.gotoNextObject () ;
    }
    extensionMethod_instructionListLLVMCode (enumerator_9122.current (HERE).getter_mInstructionListIR (HERE), var_llvmCode_7539, var_generationContext_6578, var_generationAdds_6446, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 206)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 207)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 208)) ;
    enumerator_9122.gotoNextObject () ;
  }
  extensionMethod_generateLLVMinitCode (constinArgument_inIntermediateCodeStruct.getter_mInitList (HERE), var_llvmCode_7539, constinArgument_inIntermediateCodeStruct.getter_mRoutineMapIR (HERE), var_generationContext_6578, var_generationAdds_6446, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 211)) ;
  extensionMethod_llvmCodeGeneration (constinArgument_inIntermediateCodeStruct.getter_mRoutineMapIR (HERE), var_llvmCode_7539, var_asCode_6963, var_generationContext_6578, var_generationAdds_6446, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 218)) ;
  GALGAS_string var_undefinedInterruptString_10070 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 222)).add_operation (constinArgument_inTargetParameters.getter_mUndefinedInterruptHandler (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 220)) ;
  GALGAS_string var_XTRInterruptHandlerString_10247 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 226)).add_operation (constinArgument_inTargetParameters.getter_mXtrInterruptHandler (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 224)) ;
  extensionMethod_interruptCodeGeneration (constinArgument_inIntermediateCodeStruct.getter_mInterruptMapIR (HERE), var_llvmCode_7539, var_asCode_6963, var_undefinedInterruptString_10070, var_XTRInterruptHandlerString_10247, var_generationContext_6578, var_generationAdds_6446, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 228)) ;
  extensionMethod_llvmPrototypeGeneration (constinArgument_inIntermediateCodeStruct.getter_mExternProcedureMapIR (HERE), var_llvmCode_7539, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 237)) ;
  GALGAS__32_stringlist var_primitiveAndServiceList_10777 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("code-generation.galgas", 238)) ;
  const enumGalgasBool test_2 = var_generationAdds_6446.getter_mUsesGuards (HERE).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_string var_waitForGuardChange_10902 = function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 241)) ;
    var_primitiveAndServiceList_10777.addAssign_operation (function_llvmNameForServiceCall (var_waitForGuardChange_10902, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 243)), function_llvmNameForServiceImplementation (var_waitForGuardChange_10902, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 244))  COMMA_SOURCE_FILE ("code-generation.galgas", 242)) ;
    var_generationAdds_6446.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("declare i1 @").add_operation (function_llvmNameForServiceCall (var_waitForGuardChange_10902, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 245)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 245))  COMMA_SOURCE_FILE ("code-generation.galgas", 245)) ;
  }
  GALGAS_sectionIRlist var_sectionIRlist_11292 = GALGAS_sectionIRlist::constructor_emptyList (SOURCE_FILE ("code-generation.galgas", 248)) ;
  extensionMethod_svcCodeGeneration (constinArgument_inIntermediateCodeStruct.getter_mRoutineMapIR (HERE), var_llvmCode_7539, var_primitiveAndServiceList_10777, var_sectionIRlist_11292, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 249)) ;
  extensionMethod_guardCodeGeneration (constinArgument_inIntermediateCodeStruct.getter_mGuardMapIR (HERE), var_llvmCode_7539, var_primitiveAndServiceList_10777, var_generationContext_6578, var_generationAdds_6446, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 255)) ;
  extensionMethod_generateCode (constinArgument_inIntermediateCodeStruct.getter_mTaskMapIR (HERE), var_llvmCode_7539, var_generationContext_6578, var_generationAdds_6446, var_primitiveAndServiceList_10777, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 262)) ;
  {
  routine_generatePrimitiveAndServiceDispatcher (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE), var_asCode_6963, var_primitiveAndServiceList_10777, constinArgument_inTargetParameters, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 269)) ;
  }
  {
  routine_generateSectionAndSafeDispatcher (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE), constinArgument_inTargetParameters, var_asCode_6963, var_llvmCode_7539, var_sectionIRlist_11292, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 277)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-generation.galgas", 286)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_string var_s_12438 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 289)).add_operation (constinArgument_inTargetParameters.getter_mTargetPanic_5F_LL_5F_filePath (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 287)) ;
    GALGAS_string var_s_31__12600 = var_s_12438.getter_stringByReplacingStringByString (GALGAS_string ("!PANICCODE!"), var_generationContext_6578.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 291)) ;
    GALGAS_string var_s_32__12702 = var_s_31__12600.getter_stringByReplacingStringByString (GALGAS_string ("!PANICLINE!"), var_generationContext_6578.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 292)) ;
    var_llvmCode_7539.plusAssign_operation(var_s_32__12702, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 293)) ;
    var_llvmCode_7539.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Raise Panic internal"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 294)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("define internal void @raise.panic.internal ("), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 295)) ;
    var_llvmCode_7539.plusAssign_operation(var_generationContext_6578.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 296)) ;
    var_llvmCode_7539.plusAssign_operation(var_generationContext_6578.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 297)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("i8* %in.FILE)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 298)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 298)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("LINE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 300)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 300)) ;
    var_llvmCode_7539.plusAssign_operation(var_generationContext_6578.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 301)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_generationContext_6578.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 302)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 302)) ;
    var_llvmCode_7539.plusAssign_operation(var_generationContext_6578.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 303)).add_operation (function_llvmNameForLocalVariable (GALGAS_string ("LINE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 303)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 303)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("CODE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 305)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string (" = alloca ").add_operation (var_generationContext_6578.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 306)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 306)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_generationContext_6578.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 307)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 307)) ;
    var_llvmCode_7539.plusAssign_operation(var_generationContext_6578.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 308)).add_operation (function_llvmNameForLocalVariable (GALGAS_string ("CODE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 308)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 308)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  %").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("FILE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 310)).add_operation (GALGAS_string (" = alloca i8*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 310)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  store i8* %in.FILE, i8** %").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("FILE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 311)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 311)) ;
    extensionMethod_instructionListLLVMCode (constinArgument_inIntermediateCodeStruct.getter_mPanicSetupInstructionListIR (HERE), var_llvmCode_7539, var_generationContext_6578, var_generationAdds_6446, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 312)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  br label %panic.loop\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 317)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("panic.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 318)) ;
    extensionMethod_instructionListLLVMCode (constinArgument_inIntermediateCodeStruct.getter_mPanicLoopInstructionListIR (HERE), var_llvmCode_7539, var_generationContext_6578, var_generationAdds_6446, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 319)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  br label %panic.loop\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 324)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 325)) ;
    GALGAS_uint var_emptyStringIndex_14613 ;
    {
    extensionSetter_findOrAddStaticString (var_generationAdds_6446.mProperty_mStaticStringMap, GALGAS_string::makeEmptyString (), var_emptyStringIndex_14613, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 327)) ;
    }
    var_llvmCode_7539.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Panic for ISR"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 328)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("define internal void @panic.isr (").add_operation (var_generationContext_6578.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 329)).add_operation (GALGAS_string (" %in.CODE) "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 329)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 329)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 329)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  %str.FILE = load i8*, i8** @string.").add_operation (var_emptyStringIndex_14613.getter_string (SOURCE_FILE ("code-generation.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 330)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 330)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  call void @raise.panic.internal ("), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 331)) ;
    var_llvmCode_7539.plusAssign_operation(var_generationContext_6578.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" 0, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 332)) ;
    var_llvmCode_7539.plusAssign_operation(var_generationContext_6578.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 333)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("i8* %str.FILE"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 334)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string (" )\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 335)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 336)) ;
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 337)) ;
    cEnumerator_stringset enumerator_15293 (constinArgument_inSourceFileAbsolutePathSet, kENUMERATION_UP) ;
    while (enumerator_15293.hasCurrentObject ()) {
      GALGAS_uint var_staticStringIndex_15460 ;
      {
      extensionSetter_findOrAddStaticString (var_generationAdds_6446.mProperty_mStaticStringMap, enumerator_15293.current_key (HERE).getter_lastPathComponent (SOURCE_FILE ("code-generation.galgas", 341)).getter_stringByDeletingPathExtension (SOURCE_FILE ("code-generation.galgas", 341)), var_staticStringIndex_15460, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 340)) ;
      }
      GALGAS_string var_routineName_15490 = GALGAS_string ("@raise.panic.").add_operation (var_staticStringIndex_15460.getter_string (SOURCE_FILE ("code-generation.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 344)) ;
      var_llvmCode_7539.plusAssign_operation(function_llvmTitleComment (var_routineName_15490.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 345)).add_operation (enumerator_15293.current_key (HERE).getter_lastPathComponent (SOURCE_FILE ("code-generation.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 345)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 345)) ;
      var_llvmCode_7539.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (var_routineName_15490, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 346)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 346)) ;
      var_llvmCode_7539.plusAssign_operation(var_generationContext_6578.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" %inSourceLine, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 347)) ;
      var_llvmCode_7539.plusAssign_operation(var_generationContext_6578.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" %inCode)"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 348)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 348)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 348)) ;
      var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  %str.FILE = load i8*, i8** @string.").add_operation (var_staticStringIndex_15460.getter_string (SOURCE_FILE ("code-generation.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 349)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 349)) ;
      var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  call void @raise.panic ("), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 350)) ;
      var_llvmCode_7539.plusAssign_operation(var_generationContext_6578.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" %inSourceLine, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 351)) ;
      var_llvmCode_7539.plusAssign_operation(var_generationContext_6578.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" %inCode, i8* %str.FILE)\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 352)) ;
      var_llvmCode_7539.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 353)) ;
      var_llvmCode_7539.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 354)) ;
      enumerator_15293.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_generationAdds_6446.getter_mExternFunctionDeclarationSet (HERE).getter_count (SOURCE_FILE ("code-generation.galgas", 358)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    var_llvmCode_7539.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("LLVM extern functions"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 359)) ;
    cEnumerator_stringset enumerator_16485 (var_generationAdds_6446.getter_mExternFunctionDeclarationSet (HERE), kENUMERATION_UP) ;
    while (enumerator_16485.hasCurrentObject ()) {
      var_llvmCode_7539.plusAssign_operation(enumerator_16485.current_key (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 361)) ;
      enumerator_16485.gotoNextObject () ;
    }
    var_llvmCode_7539.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 363)) ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_generationAdds_6446.getter_mStaticStringMap (HERE).getter_count (SOURCE_FILE ("code-generation.galgas", 366)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    var_llvmCode_7539.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Static strings"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 367)) ;
    cEnumerator_staticStringMap enumerator_16761 (var_generationAdds_6446.getter_mStaticStringMap (HERE), kENUMERATION_UP) ;
    while (enumerator_16761.hasCurrentObject ()) {
      GALGAS_string var_lgStr_16780 = enumerator_16761.current_lkey (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("code-generation.galgas", 369)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 369)).getter_string (SOURCE_FILE ("code-generation.galgas", 369)) ;
      var_llvmCode_7539.plusAssign_operation(function_literalCharacterArrayName (enumerator_16761.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 370)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 370)) ;
      var_llvmCode_7539.plusAssign_operation(var_lgStr_16780.add_operation (GALGAS_string (" x i8] c\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 371)) ;
      var_llvmCode_7539.plusAssign_operation(enumerator_16761.current_lkey (HERE).getter_string (HERE).getter_utf_38_RepresentationWithoutDelimiters (SOURCE_FILE ("code-generation.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 372)) ;
      var_llvmCode_7539.plusAssign_operation(GALGAS_string ("\\00\", align 1\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 373)) ;
      var_llvmCode_7539.plusAssign_operation(function_literalStringName (enumerator_16761.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 374)).add_operation (GALGAS_string (" = private constant i8* getelementptr inbounds (["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 374)) ;
      var_llvmCode_7539.plusAssign_operation(var_lgStr_16780.add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 375)).add_operation (var_lgStr_16780, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 375)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 375)) ;
      var_llvmCode_7539.plusAssign_operation(function_literalCharacterArrayName (enumerator_16761.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 376)).add_operation (GALGAS_string (", i32 0, i32 0), align 4\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 376)) ;
      enumerator_16761.gotoNextObject () ;
    }
  }
  extensionMethod_generateCode (constinArgument_inIntermediateCodeStruct.getter_mPropertyAccessRoutineList (HERE), var_llvmCode_7539, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 380)) ;
  var_llvmCode_7539.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 382)) ;
  GALGAS_bool joker_17623 ; // Joker input parameter
  var_llvmCode_7539.method_writeToFileWhenDifferentContents (var_sourceDirectory_6841.add_operation (GALGAS_string ("/src.ll"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 383)), joker_17623, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 383)) ;
  var_asCode_6963.plusAssign_operation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 385)) ;
  GALGAS_bool joker_17794 ; // Joker input parameter
  var_asCode_6963.method_writeToFileWhenDifferentContents (var_sourceDirectory_6841.add_operation (GALGAS_string ("/src.s"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 386)), joker_17794, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 386)) ;
  GALGAS_string var_cCode_17865 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_17933 (constinArgument_inTargetParameters.getter_m_5F_C_5F_definitionFiles (HERE), kENUMERATION_UP) ;
  while (enumerator_17933.hasCurrentObject ()) {
    var_cCode_17865.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 392)).add_operation (enumerator_17933.current_mValue (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 390)) ;
    enumerator_17933.gotoNextObject () ;
  }
  GALGAS_string var_s_31__18080 = var_cCode_17865.getter_stringByReplacingStringByString (GALGAS_string ("!TASKCOUNT!"), constinArgument_inIntermediateCodeStruct.getter_mTaskMapIR (HERE).getter_count (SOURCE_FILE ("code-generation.galgas", 395)).getter_string (SOURCE_FILE ("code-generation.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 395)) ;
  GALGAS_string var_s_32__18200 = var_s_31__18080.getter_stringByReplacingStringByString (GALGAS_string ("!GUARDCOUNT!"), constinArgument_inIntermediateCodeStruct.getter_mMaxBranchOfOnInstructions (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 396)) ;
  GALGAS_string var_s_33__18326 = var_s_32__18200.getter_stringByReplacingStringByString (GALGAS_string ("!FUNC!"), function_llvmNameForFunction (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 397)) ;
  GALGAS_string var_s_34__18411 = var_s_33__18326.getter_stringByReplacingStringByString (GALGAS_string ("!SERVICEIMPLEMENTATION!"), function_llvmNameForServiceImplementation (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 398)) ;
  GALGAS_string var_s_35__18526 = var_s_34__18411.getter_stringByReplacingStringByString (GALGAS_string ("!SERVICECALL!"), function_llvmNameForServiceCall (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 399)) ;
  GALGAS_bool joker_18681 ; // Joker input parameter
  var_s_35__18526.method_writeToFileWhenDifferentContents (var_sourceDirectory_6841.add_operation (GALGAS_string ("/src.c"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 400)), joker_18681, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 400)) ;
  GALGAS_string var_json_18774 = GALGAS_string ("{\n") ;
  var_json_18774.plusAssign_operation(GALGAS_string ("  \"system-stack-size\" : ").add_operation (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mSystemStackSize (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 404)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 404)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 404)) ;
  var_json_18774.plusAssign_operation(GALGAS_string ("  \"stacked-register-size-on-user-stack\" : ").add_operation (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mStackedUserRegisterOnInterruptByteSize (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 405)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 405)) ;
  var_json_18774.plusAssign_operation(GALGAS_string ("  \"service-stack-needs\" : ").add_operation (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mServicePushedRegisterByteSize (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 407)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 407)) ;
  var_json_18774.plusAssign_operation(GALGAS_string ("  \"section-stack-needs\" : ").add_operation (extensionGetter_sectionStackByteSize (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mSectionImplementation (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 408)).getter_string (SOURCE_FILE ("code-generation.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 408)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 408)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 408)) ;
  var_json_18774.plusAssign_operation(GALGAS_string ("  \"tasks\" : {"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 410)) ;
  cEnumerator_taskMapIR enumerator_19446 (constinArgument_inIntermediateCodeStruct.getter_mTaskMapIR (HERE), kENUMERATION_UP) ;
  while (enumerator_19446.hasCurrentObject ()) {
    var_json_18774.plusAssign_operation(GALGAS_string ("\n"
      "    \"").add_operation (enumerator_19446.current (HERE).getter_lkey (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("code-generation.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 412)).add_operation (GALGAS_string ("\" : "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 412)).add_operation (enumerator_19446.current (HERE).getter_mStackSize (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 412)) ;
    if (enumerator_19446.hasNextObject ()) {
      var_json_18774.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 413)) ;
    }
    enumerator_19446.gotoNextObject () ;
  }
  var_json_18774.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 415)) ;
  var_json_18774.plusAssign_operation(GALGAS_string ("  },\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 416)) ;
  var_json_18774.plusAssign_operation(GALGAS_string ("  \"services\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 418)) ;
  cEnumerator__32_stringlist enumerator_19706 (var_primitiveAndServiceList_10777, kENUMERATION_UP) ;
  const bool bool_6 = true ;
  if (enumerator_19706.hasCurrentObject () && bool_6) {
    while (enumerator_19706.hasCurrentObject () && bool_6) {
      var_json_18774.plusAssign_operation(GALGAS_string ("\n"
        "    \"").add_operation (enumerator_19706.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 420)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 420)) ;
      enumerator_19706.gotoNextObject () ;
      if (enumerator_19706.hasCurrentObject () && bool_6) {
        var_json_18774.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 421)) ;
      }
    }
    var_json_18774.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 422)) ;
  }
  var_json_18774.plusAssign_operation(GALGAS_string ("  ],\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 424)) ;
  var_json_18774.plusAssign_operation(GALGAS_string ("  \"sections\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 426)) ;
  cEnumerator_sectionIRlist enumerator_19935 (var_sectionIRlist_11292, kENUMERATION_UP) ;
  const bool bool_7 = true ;
  if (enumerator_19935.hasCurrentObject () && bool_7) {
    while (enumerator_19935.hasCurrentObject () && bool_7) {
      var_json_18774.plusAssign_operation(GALGAS_string ("\n"
        "    \"").add_operation (enumerator_19935.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 428)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 428)) ;
      enumerator_19935.gotoNextObject () ;
      if (enumerator_19935.hasCurrentObject () && bool_7) {
        var_json_18774.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 429)) ;
      }
    }
    var_json_18774.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 430)) ;
  }
  var_json_18774.plusAssign_operation(GALGAS_string ("  ],\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 432)) ;
  var_json_18774.plusAssign_operation(GALGAS_string ("  \"isr\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 434)) ;
  GALGAS_bool var_first_20111 = GALGAS_bool (true) ;
  cEnumerator_interruptMapIR enumerator_20193 (constinArgument_inIntermediateCodeStruct.getter_mInterruptMapIR (HERE), kENUMERATION_UP) ;
  while (enumerator_20193.hasCurrentObject ()) {
    const enumGalgasBool test_8 = var_first_20111.boolEnum () ;
    if (kBoolTrue == test_8) {
      var_first_20111 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_8) {
      var_json_18774.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 440)) ;
    }
    GALGAS_string temp_9 ;
    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_20193.current_mMode (HERE).objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("code-generation.galgas", 442)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = function_llvmNameForServiceInterrupt (enumerator_20193.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 443)).getter_string (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = function_llvmNameForSectionOrSafeInterrupt (enumerator_20193.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 445)) ;
    }
    GALGAS_string var_interruptImplementationName_20305 = temp_9 ;
    var_json_18774.plusAssign_operation(GALGAS_string ("\n"
      "    \"").add_operation (var_interruptImplementationName_20305, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 447)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 447)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 447)) ;
    enumerator_20193.gotoNextObject () ;
  }
  const enumGalgasBool test_11 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-generation.galgas", 449)).boolEnum () ;
  if (kBoolTrue == test_11) {
    cEnumerator_availableInterruptMap enumerator_20653 (constinArgument_inAvailableInterruptMap, kENUMERATION_UP) ;
    while (enumerator_20653.hasCurrentObject ()) {
      const enumGalgasBool test_12 = constinArgument_inIntermediateCodeStruct.getter_mInterruptMapIR (HERE).getter_hasKey (enumerator_20653.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-generation.galgas", 451)).operator_not (SOURCE_FILE ("code-generation.galgas", 451)).boolEnum () ;
      if (kBoolTrue == test_12) {
        switch (enumerator_20653.current_mInterruptionPanicCode (HERE).enumValue ()) {
        case GALGAS_interruptionPanicCode::kNotBuilt:
          break ;
        case GALGAS_interruptionPanicCode::kEnum_noPanicCode:
          {
          }
          break ;
        case GALGAS_interruptionPanicCode::kEnum_panicCode:
          {
            const enumGalgasBool test_13 = var_first_20111.boolEnum () ;
            if (kBoolTrue == test_13) {
              var_first_20111 = GALGAS_bool (false) ;
            }else if (kBoolFalse == test_13) {
              var_json_18774.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 458)) ;
            }
            var_json_18774.plusAssign_operation(GALGAS_string ("\n"
              "    \"").add_operation (function_llvmNameForSectionOrSafeInterrupt (enumerator_20653.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 460)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 460)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 460)) ;
          }
          break ;
        }
      }
      enumerator_20653.gotoNextObject () ;
    }
  }
  var_json_18774.plusAssign_operation(GALGAS_string ("\n"
    "  ]\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 465)) ;
  var_json_18774.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 467)) ;
  GALGAS_bool joker_21182 ; // Joker input parameter
  var_json_18774.method_writeToFileWhenDifferentContents (var_sourceDirectory_6841.add_operation (GALGAS_string ("/provided-stacks.json"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 468)), joker_21182, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 468)) ;
  const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("code-generation.galgas", 470)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_14) {
    GALGAS_string temp_15 ;
    const enumGalgasBool test_16 = GALGAS_bool (gOption_plm_5F_options_performFlashing.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = GALGAS_string ("run") ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string ("build") ;
    }
    GALGAS_string var_script_21300 = temp_15 ;
    GALGAS_string var_fullScript_21395 = GALGAS_string ("python ").add_operation (constinArgument_inProductDirectory, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 472)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 472)).add_operation (var_script_21300, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 472)).add_operation (GALGAS_string (".py"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 472)) ;
    GALGAS_sint var_result_21468 = var_fullScript_21395.getter_system (SOURCE_FILE ("code-generation.galgas", 473)) ;
    const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_result_21468.objectCompare (GALGAS_sint ((int32_t) 0L))).boolEnum () ;
    if (kBoolTrue == test_17) {
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFileLocation, GALGAS_string ("error during LLVM compilation or flashing"), fixItArray18  COMMA_SOURCE_FILE ("code-generation.galgas", 475)) ;
    }
  }
}


