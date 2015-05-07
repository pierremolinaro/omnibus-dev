#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category reader '@functionCallIR instructionCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_functionCallIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_functionCallIR * object = (const cPtr_functionCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallIR) ;
  result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 155)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 155)) ;
  result_outCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mTempConstantTarget, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 156)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 156))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 156)) ;
  result_outCode.dotAssign_operation (function_mangledNameForFunction (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 157)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 157))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 157)) ;
  cEnumerator_variableListIR enumerator_6663 (object->mAttribute_mVariableList, kEnumeration_up) ;
  while (enumerator_6663.hasCurrentObject ()) {
    result_outCode.dotAssign_operation (categoryReader_mangledName (enumerator_6663.current_mVar (HERE), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 159))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 159)) ;
    if (enumerator_6663.hasNextObject ()) {
      result_outCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 160)) ;
    }
    enumerator_6663.gotoNextObject () ;
  }
  result_outCode.dotAssign_operation (GALGAS_string (") ;\n")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 162)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_functionCallIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_functionCallIR.mSlotID,
                                       categoryReader_functionCallIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_functionCallIR_instructionCode (defineCategoryReader_functionCallIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@functionCallIR enterAccessibleEntities'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallIR * object = (const cPtr_functionCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mFunctionSet.addAssign_operation (object->mAttribute_mFunctionName  COMMA_SOURCE_FILE ("expression-func-call.galgas", 168)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTempConstantTarget, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 169)) ;
  cEnumerator_variableListIR enumerator_7140 (object->mAttribute_mVariableList, kEnumeration_up) ;
  while (enumerator_7140.hasCurrentObject ()) {
    categoryMethod_enterAccessibleEntities (enumerator_7140.current_mVar (HERE), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 171)) ;
    enumerator_7140.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_functionCallIR.mSlotID,
                                               categoryMethod_functionCallIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallIR_enterAccessibleEntities (defineCategoryMethod_functionCallIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@inLineExpressionGeneration expressionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_inLineExpressionGeneration_expressionCode (const cPtr_abstractExpressionGeneration * inObject,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_inLineExpressionGeneration * object = (const cPtr_inLineExpressionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_inLineExpressionGeneration) ;
  result_outCode = object->mAttribute_mCode ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_inLineExpressionGeneration_expressionCode (void) {
  enterCategoryReader_expressionCode (kTypeDescriptor_GALGAS_inLineExpressionGeneration.mSlotID,
                                      categoryReader_inLineExpressionGeneration_expressionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_inLineExpressionGeneration_expressionCode (defineCategoryReader_inLineExpressionGeneration_expressionCode, NULL) ;

