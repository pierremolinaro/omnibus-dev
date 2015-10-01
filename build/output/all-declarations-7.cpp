#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@binaryOperationIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_binaryOperationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                      GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_binaryOperationIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                               categoryMethod_binaryOperationIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_enterAccessibleEntities (defineCategoryMethod_binaryOperationIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@binaryOperationIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_binaryOperationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                  GALGAS_string & ioArgument_ioCode,
                                                                  const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                  GALGAS_stringset & ioArgument_ioIntrinsicsDeclarationSet,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = (const cPtr_binaryOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmTypeName (object->mAttribute_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 103)) ;
  switch (object->mAttribute_mOperation.enumValue ()) {
  case GALGAS_llvmBinaryOperation::kNotBuilt:
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_addNoOVF:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 106)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)).add_operation (GALGAS_string (" = sub "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 108)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).add_operation (GALGAS_string (" = mul "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 110)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)).add_operation (GALGAS_string (" = udiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (GALGAS_string (" = sdiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (" = urem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string (" = srem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uaddOVF:
    {
      const GALGAS_binaryOperationIR temp_0 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_0.ptr (), GALGAS_string ("uadd"), GALGAS_uint ((uint32_t) 10U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_saddOVF:
    {
      const GALGAS_binaryOperationIR temp_1 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_1.ptr (), GALGAS_string ("sadd"), GALGAS_uint ((uint32_t) 10U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 128)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_usubOVF:
    {
      const GALGAS_binaryOperationIR temp_2 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_2.ptr (), GALGAS_string ("usub"), GALGAS_uint ((uint32_t) 11U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ssubOVF:
    {
      const GALGAS_binaryOperationIR temp_3 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_3.ptr (), GALGAS_string ("ssub"), GALGAS_uint ((uint32_t) 11U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_umulOVF:
    {
      const GALGAS_binaryOperationIR temp_4 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_4.ptr (), GALGAS_string ("umul"), GALGAS_uint ((uint32_t) 12U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 152)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_smulOVF:
    {
      const GALGAS_binaryOperationIR temp_5 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_5.ptr (), GALGAS_string ("smul"), GALGAS_uint ((uint32_t) 12U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 160)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivOVF:
    {
      const GALGAS_binaryOperationIR temp_6 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_6.ptr (), GALGAS_string ("udiv"), GALGAS_uint ((uint32_t) 13U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 168)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivOVF:
    {
      const GALGAS_binaryOperationIR temp_7 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_7.ptr (), GALGAS_string ("sdiv"), GALGAS_uint ((uint32_t) 13U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 176)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremOVF:
    {
      const GALGAS_binaryOperationIR temp_8 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_8.ptr (), GALGAS_string ("urem"), GALGAS_uint ((uint32_t) 14U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 184)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremOVF:
    {
      const GALGAS_binaryOperationIR temp_9 = object ;
      callCategoryMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_9.ptr (), GALGAS_string ("srem"), GALGAS_uint ((uint32_t) 14U), ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 192)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_and:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)).add_operation (GALGAS_string (" = and "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)).add_operation (GALGAS_string (" = or "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 202)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)).add_operation (GALGAS_string (" = xor "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 204)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)).add_operation (GALGAS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)).add_operation (GALGAS_string (" = ashr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)).add_operation (GALGAS_string (" = lshr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 210)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)).add_operation (GALGAS_string (" = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 212)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ne:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)).add_operation (GALGAS_string (" = icmp ne "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)).add_operation (GALGAS_string (" = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)).add_operation (GALGAS_string (" = icmp ule "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 218)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ugt:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)).add_operation (GALGAS_string (" = icmp ugt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 220)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_uge:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)).add_operation (GALGAS_string (" = icmp uge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)).add_operation (GALGAS_string (" = icmp slt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)).add_operation (GALGAS_string (" = icmp sle "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 226)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sgt:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)).add_operation (GALGAS_string (" = icmp sgt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 228)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sge:
    {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)) ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_binaryOperationIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                           categoryMethod_binaryOperationIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_llvmInstructionCode (defineCategoryMethod_binaryOperationIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@shortCircuitAndOperationIR enterAccessibleEntities'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_shortCircuitAndOperationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                               GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_shortCircuitAndOperationIR * object = (const cPtr_shortCircuitAndOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_shortCircuitAndOperationIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mLeftInstructionList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 35)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mRightInstructionList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 36)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_shortCircuitAndOperationIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_shortCircuitAndOperationIR.mSlotID,
                                               categoryMethod_shortCircuitAndOperationIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_shortCircuitAndOperationIR_enterAccessibleEntities (defineCategoryMethod_shortCircuitAndOperationIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@shortCircuitAndOperationIR llvmInstructionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_shortCircuitAndOperationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                           GALGAS_string & ioArgument_ioCode,
                                                                           const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                           GALGAS_stringset & ioArgument_ioIntrinsicsDeclarationSet,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_shortCircuitAndOperationIR * object = (const cPtr_shortCircuitAndOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_shortCircuitAndOperationIR) ;
  GALGAS_string var_startLabel = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 46)).reader_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 46)).add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 46)) ;
  GALGAS_string var_trueLabel = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 47)).reader_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 47)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 47)) ;
  GALGAS_string var_falseLabel = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 48)).reader_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 48)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 48)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_startLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (";--- left operand of short circuit and\n")  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)) ;
  ioArgument_ioCode.dotAssign_operation (var_startLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mLeftInstructionList, ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br i1 ").add_operation (categoryReader_string (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)).add_operation (var_trueLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)).add_operation (var_falseLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)) ;
  ioArgument_ioCode.dotAssign_operation (var_trueLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 54))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 54)) ;
  categoryMethod_instructionListLLVMCode (object->mAttribute_mRightInstructionList, ioArgument_ioCode, constinArgument_inGenerationContext, ioArgument_ioIntrinsicsDeclarationSet, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  br label %").add_operation (var_falseLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)) ;
  ioArgument_ioCode.dotAssign_operation (var_falseLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (GALGAS_string (" = phi i1 ["), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (categoryReader_string (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (var_trueLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (GALGAS_string ("], [false, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (var_startLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58))  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_shortCircuitAndOperationIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_shortCircuitAndOperationIR.mSlotID,
                                           categoryMethod_shortCircuitAndOperationIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_shortCircuitAndOperationIR_llvmInstructionCode (defineCategoryMethod_shortCircuitAndOperationIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@loadRegisterIR llvmInstructionCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadRegisterIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                               GALGAS_string & ioArgument_ioCode,
                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                               GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadRegisterIR * object = (const cPtr_loadRegisterIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadRegisterIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmTypeName (object->mAttribute_mRegisterType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)).add_operation (GALGAS_string (" = load volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)).add_operation (GALGAS_string ("* inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)).add_operation (object->mAttribute_mRegisterAddress.reader_string (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29)).add_operation (object->mAttribute_mRegisterAddress.reader_hexString (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 29))  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 28)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadRegisterIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadRegisterIR.mSlotID,
                                           categoryMethod_loadRegisterIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadRegisterIR_llvmInstructionCode (defineCategoryMethod_loadRegisterIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@loadRegisterIR enterAccessibleEntities'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadRegisterIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadRegisterIR * object = (const cPtr_loadRegisterIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadRegisterIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (object->mAttribute_mRegisterName  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 35)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadRegisterIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadRegisterIR.mSlotID,
                                               categoryMethod_loadRegisterIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadRegisterIR_enterAccessibleEntities (defineCategoryMethod_loadRegisterIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@loadGlobalVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadGlobalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioCode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadGlobalVariableIR * object = (const cPtr_loadGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadGlobalVariableIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmTypeName (object->mAttribute_mVariableType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 27)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28))  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioCode.dotAssign_operation (GALGAS_string ("volatile ")  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)) ;
  }
  ioArgument_ioCode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 32)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 32)).add_operation (GALGAS_string ("* @"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 32)).add_operation (function_mangledNameForGlobalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 32)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 32))  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 32)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadGlobalVariableIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadGlobalVariableIR.mSlotID,
                                           categoryMethod_loadGlobalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadGlobalVariableIR_llvmInstructionCode (defineCategoryMethod_loadGlobalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@loadGlobalVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadGlobalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadGlobalVariableIR * object = (const cPtr_loadGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadGlobalVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mVariableName  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 38)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadGlobalVariableIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadGlobalVariableIR.mSlotID,
                                               categoryMethod_loadGlobalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadGlobalVariableIR_enterAccessibleEntities (defineCategoryMethod_loadGlobalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@loadLocalVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadLocalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioCode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadLocalVariableIR * object = (const cPtr_loadLocalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadLocalVariableIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmTypeName (object->mAttribute_mVariableType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  ").add_operation (categoryReader_string (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26))  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26)) ;
  ioArgument_ioCode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 27)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 27)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 27)).add_operation (function_mangledNameForLocalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 27))  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 27)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadLocalVariableIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadLocalVariableIR.mSlotID,
                                           categoryMethod_loadLocalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadLocalVariableIR_llvmInstructionCode (defineCategoryMethod_loadLocalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@loadLocalVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loadLocalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                        GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loadLocalVariableIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadLocalVariableIR.mSlotID,
                                               categoryMethod_loadLocalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadLocalVariableIR_enterAccessibleEntities (defineCategoryMethod_loadLocalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@storeVolatileIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeVolatileIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                GALGAS_string & ioArgument_ioCode,
                                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeVolatileIR * object = (const cPtr_storeVolatileIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeVolatileIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmTypeName (object->mAttribute_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  store volatile ").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (categoryReader_string (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string ("* inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (object->mAttribute_mAddress.reader_string (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (object->mAttribute_mAddress.reader_hexString (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29))  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeVolatileIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeVolatileIR.mSlotID,
                                           categoryMethod_storeVolatileIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeVolatileIR_llvmInstructionCode (defineCategoryMethod_storeVolatileIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@storeVolatileIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeVolatileIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeVolatileIR * object = (const cPtr_storeVolatileIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeVolatileIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (object->mAttribute_mRegisterName  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 35)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeVolatileIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeVolatileIR.mSlotID,
                                               categoryMethod_storeVolatileIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeVolatileIR_enterAccessibleEntities (defineCategoryMethod_storeVolatileIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@storeGlobalVariableIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeGlobalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioCode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeGlobalVariableIR * object = (const cPtr_storeGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeGlobalVariableIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmTypeName (object->mAttribute_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 27)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  store ")  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 28)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioCode.dotAssign_operation (GALGAS_string ("volatile ")  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 30)) ;
  }
  ioArgument_ioCode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (categoryReader_string (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (GALGAS_string ("* @"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (function_mangledNameForGlobalVariable (object->mAttribute_mGlobalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32))  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 32)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeGlobalVariableIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeGlobalVariableIR.mSlotID,
                                           categoryMethod_storeGlobalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeGlobalVariableIR_llvmInstructionCode (defineCategoryMethod_storeGlobalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@storeGlobalVariableIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeGlobalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeGlobalVariableIR * object = (const cPtr_storeGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeGlobalVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mGlobalVarName  COMMA_SOURCE_FILE ("intermediate-store-global-var.galgas", 38)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeGlobalVariableIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeGlobalVariableIR.mSlotID,
                                               categoryMethod_storeGlobalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeGlobalVariableIR_enterAccessibleEntities (defineCategoryMethod_storeGlobalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@storeLocalVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeLocalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioCode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_stringset & /* ioArgument_ioIntrinsicsDeclarationSet */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeLocalVariableIR * object = (const cPtr_storeLocalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeLocalVariableIR) ;
  GALGAS_string var_llvmType = categoryReader_llvmTypeName (object->mAttribute_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 25)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  store ")  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)) ;
  ioArgument_ioCode.dotAssign_operation (var_llvmType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (categoryReader_string (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (function_mangledNameForLocalVariable (object->mAttribute_mLocalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27))  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeLocalVariableIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeLocalVariableIR.mSlotID,
                                           categoryMethod_storeLocalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeLocalVariableIR_llvmInstructionCode (defineCategoryMethod_storeLocalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@storeLocalVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_storeLocalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                         GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_storeLocalVariableIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeLocalVariableIR.mSlotID,
                                               categoryMethod_storeLocalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeLocalVariableIR_enterAccessibleEntities (defineCategoryMethod_storeLocalVariableIR_enterAccessibleEntities, NULL) ;

